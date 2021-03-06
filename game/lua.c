#include "g_lua.h"
#include "g_local.h"
//lua_State* state;

void LuaInit(void) {
	state = luaL_newstate();
	luaL_openlibs(state);
	LuaLoadScript("baseq2/scripts/main.lua");

	//Register functions
	lua_pushcfunction(state, Reg_CloseMenu);
	lua_setglobal(state, "CloseMenu");

	__LuaStackDump(state);
}

void LuaDestroy(void) {
	lua_close(state);
}

void LuaCreateDom(char* ElementName) {
	lua_getglobal(state, "Document");
	lua_createtable(state, 0, 1);
	lua_setfield(state, -2, ElementName);
	lua_pop(state, 1);
}

void LuaLoadScript(char* ScriptName) {
	int err = 0;
	err = luaL_dofile(state, ScriptName);
}

void LuaRunInitScript(char* ElementName) {
	lua_getglobal(state, "Document");
	lua_getfield(state, -1, ElementName);
	if(lua_isnil(state, -1)) {
		printf("ElementName not found!\n");
		lua_settop(state, -2);
		return;
	}
	lua_getfield(state, -1, "OnLoad");
	if(lua_isnil(state, -1)) {
		printf("Onload not found!\n");
		lua_settop(state, -3);
		return;
	}

	lua_pcall(state, 0, 0, 0);
	lua_settop(state, -3);
}

void __LuaStackDump (lua_State *L) {
	int i;
	int t;
	i = lua_gettop(L);
    printf(" ----------------  Stack Dump ----------------\n" );
    while(i) {
		t = lua_type(L, i);
        switch (t) {
		case LUA_TSTRING:
			printf("%d:`%s'\n", i, lua_tostring(L, i));
			break;
		case LUA_TBOOLEAN:
			printf("%d: %s\n",i,lua_toboolean(L, i) ? "true" : "false");
			break;
		case LUA_TNUMBER:
			printf("%d: %g\n",  i, lua_tonumber(L, i));
			break;
		default:
			printf("%d: %s\n", i, lua_typename(L, t));
			break;
		}
		i--;
	}
	printf("--------------- Stack Dump Finished ---------------\n" );
}

int LuaInitEnt(char* Name, lua_State *L) {
	lua_getglobal(L, "Types");
	lua_getfield(L, -1, Name);
	if (lua_isnil(L, -1)) {
		printf("ElementName not found!\n");
		lua_settop(L, -2);
		return 0;
	}
	lua_getfield(L, -1, "Init");
	if (lua_isnil(L, -1)) {
		printf("Init not found!\n");
		lua_settop(L, -3);
		return;
	}

	lua_pcall(state, 0, 0, 0);
	lua_settop(state, -3);
}


//Registered Functions
static int Reg_CloseMenu(lua_State *L) {
	CloseTopLevelMenu(&Queue);
}

//Library functions
int sp_LuaSpawn(edict_t* ent) {

}

//Entity List functions

void EntityListAdd(edict_t* ent) {
	if (ent == NULL) {
		printf("ERROR! ent must not be null!\n");
	}
	struct EntityListNode* Node = calloc(1, sizeof(struct EntityListNode));
	Node->Value = ent;
	if (EntityList.Head == NULL) {
		EntityList.Head = Node;
		EntityList.Tail = Node;
		return;
	}
	
	struct EntityListNode* Cursor = EntityList.Head;
	while (Cursor->Next != NULL) {
		Cursor = Cursor->Next;
	}
	Cursor->Next = ent;
	EntityList.Tail = ent;
}

edict_t* EntityListFind(char* Id) {

	if (Id == NULL) {
		printf("ERROR: Id must not be null!\n");
		return NULL;
	}

	struct EntityListNode* Cursor = EntityList.Head;
	while (Cursor != NULL) {
		if (Cursor->Value == NULL) {
			printf("ERROR! Null values in entity list! Check spawn logic\n");
			return NULL;
		}
		if (Cursor->Value->entId == NULL) {
			printf("ERROR! Null ID In entity! Check spawn logic\n");
			return NULL;
		}
		if (strcmp(Cursor->Value->entId, Id) == 0) {
			return Cursor->Value;
		}
	}
	return NULL;
}

void EntityListRemove(edict_t* ent) {
	if (ent == NULL) {
		printf("ERROR: ent must not be null!\n");
		return;
	}
	if (ent->entId == NULL) {
		printf("This is not a removable entity! entID must not be null. You are either using a native entity or your entity was not properly initialized\n");
	}
	struct EntityListNode* Cursor = EntityList.Head;
	if (Cursor == NULL)
		return;
	if (Cursor->Value == NULL) {
		printf("ERROR: Null values in entity list! check spawn logic\n");
		return;
	}
	if (Cursor->Value->entId == NULL) {
		printf("ERROR! Null ID In entity! Check spawn logic\n");
		return;
	}
	if (strcmp(Cursor->Value->entId, ent->entId) == 0) {
		EntityList.Head = Cursor->Next;

		//only item in list
		if (EntityList.Tail == Cursor) {
			EntityList.Tail = NULL;
		}

		//TODO: Remove head logic
	}

	while (Cursor->Next != NULL) {
		if (Cursor->Next->Value == NULL) {
			printf("ERROR! Null values in entity list! Check spawn logic\n");
			return;
		}
		if (Cursor->Next->Value->entId == NULL) {
			printf("ERROR! Null ID In entity! Check spawn logic\n");
			return;
		}
		if (strcmp(Cursor->Next->Value->entId, ent->entId) == 0) {
			break;
		}
	}
	
	if (Cursor->Next == NULL)
		return;

	struct edict_t* ToRemove = Cursor->Next->Value;
	struct EntityListNode* Tmp = Cursor->Next;
	Cursor->Next = Cursor->Next->Next;
	free(Tmp);
	G_FreeEdict(ToRemove);
}