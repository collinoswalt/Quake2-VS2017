# Generated automatically from Makefile.in by configure.
# Makefile.in generated automatically by automake 1.4-p5 from Makefile.am

# Copyright (C) 1994, 1995-8, 1999, 2001 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.


SHELL = /bin/sh

srcdir = .
top_srcdir = .
prefix = c:/progra~1/LibXml1
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DESTDIR =

pkgdatadir = $(datadir)/libxml
pkglibdir = $(libdir)/libxml
pkgincludedir = $(includedir)/libxml

top_builddir = .

ACLOCAL = aclocal
AUTOCONF = autoconf
AUTOMAKE = automake
AUTOHEADER = autoheader

INSTALL = /bin/install.exe -cpD
INSTALL_PROGRAM = /bin/install.exe -cpD $(AM_INSTALL_PROGRAM_FLAGS)
INSTALL_DATA = /bin/install.exe -cp
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
host_alias = i386-pc-mingw32
host_triplet = i386-pc-mingw32
AS = @AS@
CC = gcc
CFLAGS = -O2 -fnative-struct -fno-rtti -fno-exceptions -mcpu=pentium -march=i386 -Wall
CORBA_CFLAGS = 
CPP = gcc -E
DLLTOOL = @DLLTOOL@
ECHO = echo
EXEEXT = .exe
HAVE_ISINF = 
HAVE_ISNAN = 
HTML_DIR = ${datadir}/gtk-doc/html
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBXML_MAJOR_VERSION = 1
LIBXML_MICRO_VERSION = 17
LIBXML_MINOR_VERSION = 8
LIBXML_VERSION = 1.8.17
LIBXML_VERSION_INFO = 9:17:8
LN_S = cp -fp
MAINT = #
MAKEINFO = makeinfo
MV = /usr/bin/mv
M_LIBS = 
OBJDUMP = @OBJDUMP@
OBJEXT = o
PACKAGE = libxml
RANLIB = ranlib
RDL_LIBS = 
RM = /usr/bin/rm
STRIP = strip
TAR = /usr/bin/tar
VERSION = 1.8.17
XML_CFLAGS = 
XML_INCLUDEDIR = -I${includedir}/gnome-xml
XML_LIBDIR = -L${libdir}
XML_LIBS = -lxml -lz  -Wl,-s -lwsock32 -liberty -lc
Z_CFLAGS = 
Z_LIBS = -lz

SUBDIRS = doc

INCLUDES = -I.   $(VERSION_FLAGS)

VERSION_FLAGS = -DLIBXML_VERSION=\"1.8.17\"

noinst_PROGRAMS = tester testSAX testHTML testXPath

bin_SCRIPTS = xml-config

lib_LTLIBRARIES = libxml.la
libxml_la_LIBADD = -lz

libxml_la_LDFLAGS = -version-info 9:17:8 -lz

libxml_la_SOURCES = \
		SAX.c \
		entities.c \
		encoding.c \
		error.c \
		parser.c \
		parserold.c \
		HTMLparser.c \
		HTMLtree.c \
		debugXML.c \
		tree.c \
		xpath.c \
		xmlIO.c \
		xmlmemory.c \
		nanohttp.c \
		nanoftp.c \
		valid.c \
		xlink.c \
		uri.c


xmlincdir = $(includedir)/gnome-xml
xmlinc_HEADERS = \
		SAX.h \
		entities.h \
		encoding.h \
		parser.h \
		parserInternals.h \
		xml-error.h \
		HTMLparser.h \
		HTMLtree.h \
		debugXML.h \
		tree.h \
		xpath.h \
		xmlIO.h \
		xmlmemory.h \
		nanohttp.h \
		nanoftp.h \
		valid.h \
		xlink.h \
		uri.h


DEPS = $(top_builddir)/libxml.la
LDADDS = $(top_builddir)/libxml.la 

tester_SOURCES = tester.c
tester_LDFLAGS = 
tester_DEPENDENCIES = $(DEPS)
tester_LDADD =  $(LDADDS)

testSAX_SOURCES = testSAX.c
testSAX_LDFLAGS = 
testSAX_DEPENDENCIES = $(DEPS)
testSAX_LDADD = $(LDADDS)

testHTML_SOURCES = testHTML.c
testHTML_LDFLAGS = 
testHTML_DEPENDENCIES = $(DEPS)
testHTML_LDADD = $(LDADDS)

testXPath_SOURCES = testXPath.c
testXPath_LDFLAGS = 
testXPath_DEPENDENCIES = $(DEPS)
testXPath_LDADD = $(LDADDS)

confexecdir = $(libdir)
confexec_DATA = xmlConf.sh

CLEANFILES = xmlConf.sh
EXTRA_DIST = xmlConf.sh.in libxml.spec.in libxml.spec \
             example/Makefile.am example/gjobread.c example/gjobs.xml \
	     libxml.pc.in


pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = libxml.pc
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = config.h
CONFIG_CLEAN_FILES =  libxml.spec xml-config win32config.h libxml.pc
LTLIBRARIES =  $(lib_LTLIBRARIES)


DEFS = -DHAVE_CONFIG_H -I. -I$(srcdir) -I.
CPPFLAGS = -D_MSC_VER
LDFLAGS = -Wl,-s 
LIBS = -Wl,-s -lwsock32 -liberty -lc
libxml_la_DEPENDENCIES = 
libxml_la_OBJECTS =  SAX.lo entities.lo encoding.lo error.lo parser.lo \
parserold.lo HTMLparser.lo HTMLtree.lo debugXML.lo tree.lo xpath.lo \
xmlIO.lo xmlmemory.lo nanohttp.lo nanoftp.lo valid.lo xlink.lo uri.lo
noinst_PROGRAMS =  tester$(EXEEXT) testSAX$(EXEEXT) testHTML$(EXEEXT) \
testXPath$(EXEEXT)
PROGRAMS =  $(noinst_PROGRAMS)

tester_OBJECTS = tester-rc.o  tester.$(OBJEXT)
testSAX_OBJECTS = testSAX-rc.o  testSAX.$(OBJEXT)
testHTML_OBJECTS = testHTML-rc.o  testHTML.$(OBJEXT)
testXPath_OBJECTS = testXPath-rc.o  testXPath.$(OBJEXT)
SCRIPTS =  $(bin_SCRIPTS)

COMPILE = $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) --mode=compile $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(LIBTOOL) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(LDFLAGS) -o $@
DATA =  $(confexec_DATA) $(pkgconfig_DATA)

HEADERS =  $(xmlinc_HEADERS)

DIST_COMMON =  README ./stamp-h.in AUTHORS COPYING COPYING.LIB ChangeLog \
INSTALL Makefile.am Makefile.in NEWS TODO acconfig.h aclocal.m4 \
config.guess config.h.in config.sub configure configure.in install-sh \
libxml.pc.in libxml.spec.in ltmain.sh missing mkinstalldirs \
win32config.h.in xml-config.in


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

GZIP_ENV = --best
SOURCES = $(libxml_la_SOURCES) $(tester_SOURCES) $(testSAX_SOURCES) $(testHTML_SOURCES) $(testXPath_SOURCES)
OBJECTS = $(libxml_la_OBJECTS) $(tester_OBJECTS) $(testSAX_OBJECTS) $(testHTML_OBJECTS) $(testXPath_OBJECTS)

all: all-redirect
.SUFFIXES:
.SUFFIXES: .S .c .lo .o .obj .s
$(srcdir)/Makefile.in: # Makefile.am $(top_srcdir)/configure.in $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --gnu --include-deps Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$@ CONFIG_HEADERS= $(SHELL) ./config.status

$(ACLOCAL_M4): # configure.in 
	cd $(srcdir) && $(ACLOCAL)

config.status: $(srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	$(SHELL) ./config.status --recheck
$(srcdir)/configure: #$(srcdir)/configure.in $(ACLOCAL_M4) $(CONFIGURE_DEPENDENCIES)
	cd $(srcdir) && $(AUTOCONF)

config.h: stamp-h
	@if test ! -f $@; then \
		rm -f stamp-h; \
		$(MAKE) stamp-h; \
	else :; fi
stamp-h: $(srcdir)/config.h.in $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES= CONFIG_HEADERS=config.h \
	     $(SHELL) ./config.status
	@echo timestamp > stamp-h 2> /dev/null
$(srcdir)/config.h.in: #$(srcdir)/stamp-h.in
	@if test ! -f $@; then \
		rm -f $(srcdir)/stamp-h.in; \
		$(MAKE) $(srcdir)/stamp-h.in; \
	else :; fi
$(srcdir)/stamp-h.in: $(top_srcdir)/configure.in $(ACLOCAL_M4) acconfig.h
	cd $(top_srcdir) && $(AUTOHEADER)
	@echo timestamp > $(srcdir)/stamp-h.in 2> /dev/null

mostlyclean-hdr:

clean-hdr:

distclean-hdr:
	-rm -f config.h

maintainer-clean-hdr:
libxml.spec: $(top_builddir)/config.status libxml.spec.in
	cd $(top_builddir) && CONFIG_FILES=$@ CONFIG_HEADERS= $(SHELL) ./config.status
xml-config: $(top_builddir)/config.status xml-config.in
	cd $(top_builddir) && CONFIG_FILES=$@ CONFIG_HEADERS= $(SHELL) ./config.status
win32config.h: $(top_builddir)/config.status win32config.h.in
	cd $(top_builddir) && CONFIG_FILES=$@ CONFIG_HEADERS= $(SHELL) ./config.status
libxml.pc: $(top_builddir)/config.status libxml.pc.in
	cd $(top_builddir) && CONFIG_FILES=$@ CONFIG_HEADERS= $(SHELL) ./config.status

mostlyclean-libLTLIBRARIES:

clean-libLTLIBRARIES:
	-test -z "$(lib_LTLIBRARIES)" || rm -f $(lib_LTLIBRARIES)

distclean-libLTLIBRARIES:

maintainer-clean-libLTLIBRARIES:

install-libLTLIBRARIES: $(lib_LTLIBRARIES)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(libdir)
	@list='$(lib_LTLIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo "$(LIBTOOL)  --mode=install $(INSTALL) $$p $(DESTDIR)$(libdir)/$$p"; \
	    $(LIBTOOL)  --mode=install $(INSTALL) $$p $(DESTDIR)$(libdir)/$$p; \
	  else :; fi; \
	done

uninstall-libLTLIBRARIES:
	@$(NORMAL_UNINSTALL)
	list='$(lib_LTLIBRARIES)'; for p in $$list; do \
	  $(LIBTOOL)  --mode=uninstall rm -f $(DESTDIR)$(libdir)/$$p; \
	done

# Rule to make compiled resource (Windows)
%-rc.o: %.rc
	windres -i $< -o $@
.c.o:
	$(COMPILE) -c $<

# FIXME: We should only use cygpath when building on Windows,
# and only if it is available.
.c.obj:
	$(COMPILE) -c `cygpath -w $<`

.s.o:
	$(COMPILE) -c $<

.S.o:
	$(COMPILE) -c $<

mostlyclean-compile:
	-rm -f *.o core *.core
	-rm -f *.$(OBJEXT)

clean-compile:

distclean-compile:
	-rm -f *.tab.c

maintainer-clean-compile:

.c.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

.s.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

.S.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

distclean-libtool:

maintainer-clean-libtool:

libxml.la: $(libxml_la_OBJECTS) $(libxml_la_DEPENDENCIES)
	$(LINK) -rpath $(libdir) $(libxml_la_LDFLAGS) $(libxml_la_OBJECTS) $(libxml_la_LIBADD) $(LIBS)

mostlyclean-noinstPROGRAMS:

clean-noinstPROGRAMS:
	-test -z "$(noinst_PROGRAMS)" || rm -f $(noinst_PROGRAMS)

distclean-noinstPROGRAMS:

maintainer-clean-noinstPROGRAMS:

tester$(EXEEXT): $(tester_OBJECTS) $(tester_DEPENDENCIES)
	@rm -f tester$(EXEEXT)
	$(LINK) $(tester_LDFLAGS) $(tester_OBJECTS) $(tester_LDADD) $(LIBS)

testSAX$(EXEEXT): $(testSAX_OBJECTS) $(testSAX_DEPENDENCIES)
	@rm -f testSAX$(EXEEXT)
	$(LINK) $(testSAX_LDFLAGS) $(testSAX_OBJECTS) $(testSAX_LDADD) $(LIBS)

testHTML$(EXEEXT): $(testHTML_OBJECTS) $(testHTML_DEPENDENCIES)
	@rm -f testHTML$(EXEEXT)
	$(LINK) $(testHTML_LDFLAGS) $(testHTML_OBJECTS) $(testHTML_LDADD) $(LIBS)

testXPath$(EXEEXT): $(testXPath_OBJECTS) $(testXPath_DEPENDENCIES)
	@rm -f testXPath$(EXEEXT)
	$(LINK) $(testXPath_LDFLAGS) $(testXPath_OBJECTS) $(testXPath_LDADD) $(LIBS)

install-binSCRIPTS: $(bin_SCRIPTS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(bindir)
	@list='$(bin_SCRIPTS)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo " $(INSTALL_SCRIPT) $$p $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`"; \
	    $(INSTALL_SCRIPT) $$p $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`; \
	  else if test -f $(srcdir)/$$p; then \
	    echo " $(INSTALL_SCRIPT) $(srcdir)/$$p $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`"; \
	    $(INSTALL_SCRIPT) $(srcdir)/$$p $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`; \
	  else :; fi; fi; \
	done

uninstall-binSCRIPTS:
	@$(NORMAL_UNINSTALL)
	list='$(bin_SCRIPTS)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(bindir)/`echo $$p|sed '$(transform)'`; \
	done

install-confexecDATA: $(confexec_DATA)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(confexecdir)
	@list='$(confexec_DATA)'; for p in $$list; do \
	  if test -f $(srcdir)/$$p; then \
	    echo " $(INSTALL_DATA) $(srcdir)/$$p $(DESTDIR)$(confexecdir)/$$p"; \
	    $(INSTALL_DATA) $(srcdir)/$$p $(DESTDIR)$(confexecdir)/$$p; \
	  else if test -f $$p; then \
	    echo " $(INSTALL_DATA) $$p $(DESTDIR)$(confexecdir)/$$p"; \
	    $(INSTALL_DATA) $$p $(DESTDIR)$(confexecdir)/$$p; \
	  fi; fi; \
	done

uninstall-confexecDATA:
	@$(NORMAL_UNINSTALL)
	list='$(confexec_DATA)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(confexecdir)/$$p; \
	done

install-pkgconfigDATA: $(pkgconfig_DATA)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(pkgconfigdir)
	@list='$(pkgconfig_DATA)'; for p in $$list; do \
	  if test -f $(srcdir)/$$p; then \
	    echo " $(INSTALL_DATA) $(srcdir)/$$p $(DESTDIR)$(pkgconfigdir)/$$p"; \
	    $(INSTALL_DATA) $(srcdir)/$$p $(DESTDIR)$(pkgconfigdir)/$$p; \
	  else if test -f $$p; then \
	    echo " $(INSTALL_DATA) $$p $(DESTDIR)$(pkgconfigdir)/$$p"; \
	    $(INSTALL_DATA) $$p $(DESTDIR)$(pkgconfigdir)/$$p; \
	  fi; fi; \
	done

uninstall-pkgconfigDATA:
	@$(NORMAL_UNINSTALL)
	list='$(pkgconfig_DATA)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(pkgconfigdir)/$$p; \
	done

install-xmlincHEADERS: $(xmlinc_HEADERS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(xmlincdir)
	@list='$(xmlinc_HEADERS)'; for p in $$list; do \
	  if test -f "$$p"; then d= ; else d="$(srcdir)/"; fi; \
	  echo " $(INSTALL_DATA) $$d$$p $(DESTDIR)$(xmlincdir)/$$p"; \
	  $(INSTALL_DATA) $$d$$p $(DESTDIR)$(xmlincdir)/$$p; \
	done

uninstall-xmlincHEADERS:
	@$(NORMAL_UNINSTALL)
	list='$(xmlinc_HEADERS)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(xmlincdir)/$$p; \
	done

# This directory's subdirectories are mostly independent; you can cd
# into them and run `make' without going through this Makefile.
# To change the values of `make' variables: instead of editing Makefiles,
# (1) if the variable is set in `config.status', edit `config.status'
#     (which will cause the Makefiles to be regenerated when you run `make');
# (2) otherwise, pass the desired values on the `make' command line.



all-recursive install-data-recursive install-exec-recursive \
installdirs-recursive install-recursive uninstall-recursive  \
check-recursive installcheck-recursive info-recursive dvi-recursive:
	@set fnord $(MAKEFLAGS); amf=$$2; \
	dot_seen=no; \
	target=`echo $@ | sed s/-recursive//`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    dot_seen=yes; \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done; \
	if test "$$dot_seen" = "no"; then \
	  $(MAKE) $(AM_MAKEFLAGS) "$$target-am" || exit 1; \
	fi; test -z "$$fail"

mostlyclean-recursive clean-recursive distclean-recursive \
maintainer-clean-recursive:
	@set fnord $(MAKEFLAGS); amf=$$2; \
	dot_seen=no; \
	rev=''; list='$(SUBDIRS)'; for subdir in $$list; do \
	  rev="$$subdir $$rev"; \
	  test "$$subdir" != "." || dot_seen=yes; \
	done; \
	test "$$dot_seen" = "no" && rev=". $$rev"; \
	target=`echo $@ | sed s/-recursive//`; \
	for subdir in $$rev; do \
	  echo "Making $$target in $$subdir"; \
	  if test "$$subdir" = "."; then \
	    local_target="$$target-am"; \
	  else \
	    local_target="$$target"; \
	  fi; \
	  (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \
	   || case "$$amf" in *=*) exit 1;; *k*) fail=yes;; *) exit 1;; esac; \
	done && test -z "$$fail"
tags-recursive:
	list='$(SUBDIRS)'; for subdir in $$list; do \
	  test "$$subdir" = . || (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) tags); \
	done

tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $$unique $(LISP)

TAGS: tags-recursive $(HEADERS) $(SOURCES) config.h.in $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SUBDIRS)'; for subdir in $$list; do \
   if test "$$subdir" = .; then :; else \
	    test -f $$subdir/TAGS && tags="$$tags -i $$here/$$subdir/TAGS"; \
   fi; \
	done; \
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)config.h.in$$unique$(LISP)$$tags" \
	  || (cd $(srcdir) && etags $(ETAGS_ARGS) $$tags config.h.in $$unique $(LISP) -o $$here/TAGS)

mostlyclean-tags:

clean-tags:

distclean-tags:
	-rm -f TAGS ID

maintainer-clean-tags:

distdir = $(PACKAGE)-$(VERSION)
top_distdir = $(distdir)

# This target untars the dist file and tries a VPATH configuration.  Then
# it guarantees that the distribution is self-contained by making another
# tarfile.
distcheck: dist
	-rm -rf $(distdir)
	GZIP=$(GZIP_ENV) $(TAR) zxf $(distdir).tar.gz
	mkdir $(distdir)/=build
	mkdir $(distdir)/=inst
	dc_install_base=`cd $(distdir)/=inst && pwd`; \
	cd $(distdir)/=build \
	  && ../configure --srcdir=.. --prefix=$$dc_install_base \
	  && $(MAKE) $(AM_MAKEFLAGS) \
	  && $(MAKE) $(AM_MAKEFLAGS) dvi \
	  && $(MAKE) $(AM_MAKEFLAGS) check \
	  && $(MAKE) $(AM_MAKEFLAGS) install \
	  && $(MAKE) $(AM_MAKEFLAGS) installcheck \
	  && $(MAKE) $(AM_MAKEFLAGS) dist
	-rm -rf $(distdir)
	@banner="$(distdir).tar.gz is ready for distribution"; \
	dashes=`echo "$$banner" | sed s/./=/g`; \
	echo "$$dashes"; \
	echo "$$banner"; \
	echo "$$dashes"
dist: distdir
	-chmod -R a+r $(distdir)
	GZIP=$(GZIP_ENV) $(TAR) chozf $(distdir).tar.gz $(distdir)
	-rm -rf $(distdir)
dist-all: distdir
	-chmod -R a+r $(distdir)
	GZIP=$(GZIP_ENV) $(TAR) chozf $(distdir).tar.gz $(distdir)
	-rm -rf $(distdir)
distdir: $(DISTFILES)
	-rm -rf $(distdir)
	mkdir $(distdir)
	-chmod 777 $(distdir)
	$(mkinstalldirs) $(distdir)/example
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  if test -d $$d/$$file; then \
	    cp -pr $$d/$$file $(distdir)/$$file; \
	  else \
	    test -f $(distdir)/$$file \
	    || cp $$d/$$file $(distdir)/$$file 2> /dev/null \
	    || cp -p $$d/$$file $(distdir)/$$file || :; \
	  fi; \
	done
	for subdir in $(SUBDIRS); do \
	  if test "$$subdir" = .; then :; else \
	    test -d $(distdir)/$$subdir \
	    || mkdir $(distdir)/$$subdir \
	    || exit 1; \
	    chmod 777 $(distdir)/$$subdir; \
	    (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) top_distdir=../$(distdir) distdir=../$(distdir)/$$subdir distdir) \
	      || exit 1; \
	  fi; \
	done
	$(MAKE) $(AM_MAKEFLAGS) top_distdir="$(top_distdir)" distdir="$(distdir)" dist-hook
HTMLparser.lo HTMLparser.o : HTMLparser.c config.h xmlmemory.h tree.h \
	HTMLparser.h parser.h valid.h xmlIO.h encoding.h entities.h \
	parserInternals.h xml-error.h
HTMLtree.lo HTMLtree.o : HTMLtree.c config.h xmlmemory.h HTMLparser.h \
	parser.h tree.h valid.h xmlIO.h encoding.h entities.h \
	HTMLtree.h
SAX.lo SAX.o : SAX.c config.h xmlmemory.h tree.h parser.h valid.h \
	xmlIO.h encoding.h entities.h parserInternals.h xml-error.h \
	debugXML.h xpath.h SAX.h xlink.h uri.h libxml/tree.h
debugXML.lo debugXML.o : debugXML.c config.h xmlmemory.h tree.h parser.h \
	valid.h xmlIO.h encoding.h entities.h debugXML.h xpath.h \
	HTMLtree.h HTMLparser.h
encoding.lo encoding.o : encoding.c config.h encoding.h xmlmemory.h
entities.lo entities.o : entities.c config.h xmlmemory.h entities.h \
	tree.h parser.h valid.h xmlIO.h encoding.h
error.lo error.o : error.c config.h parser.h tree.h valid.h xmlIO.h \
	encoding.h entities.h
nanoftp.lo nanoftp.o : nanoftp.c config.h xmlmemory.h nanoftp.h
nanohttp.lo nanohttp.o : nanohttp.c config.h xmlmemory.h nanohttp.h
parser.lo parser.o : parser.c config.h xmlmemory.h tree.h parser.h \
	valid.h xmlIO.h encoding.h entities.h parserInternals.h \
	xml-error.h uri.h libxml/tree.h
parserold.lo parserold.o : parserold.c config.h xmlmemory.h tree.h \
	parser.h valid.h xmlIO.h encoding.h entities.h \
	parserInternals.h xml-error.h
testHTML.o: testHTML.c config.h xmlmemory.h HTMLparser.h parser.h tree.h \
	valid.h xmlIO.h encoding.h entities.h HTMLtree.h debugXML.h \
	xpath.h
testSAX.o: testSAX.c config.h parser.h tree.h valid.h xmlIO.h encoding.h \
	entities.h parserInternals.h debugXML.h xpath.h xmlmemory.h
testXPath.o: testXPath.c config.h xpath.h tree.h parser.h valid.h \
	xmlIO.h encoding.h entities.h debugXML.h xmlmemory.h
tester.o: tester.c config.h xmlmemory.h parser.h tree.h valid.h xmlIO.h \
	encoding.h entities.h HTMLparser.h HTMLtree.h xpath.h \
	debugXML.h
tree.lo tree.o : tree.c config.h xmlmemory.h tree.h parser.h valid.h \
	xmlIO.h encoding.h entities.h
uri.lo uri.o : uri.c config.h xmlmemory.h uri.h libxml/tree.h \
	xml-error.h parser.h tree.h valid.h xmlIO.h encoding.h \
	entities.h
valid.lo valid.o : valid.c config.h xmlmemory.h valid.h tree.h parser.h \
	xmlIO.h encoding.h entities.h parserInternals.h
xlink.lo xlink.o : xlink.c config.h xmlmemory.h tree.h parser.h valid.h \
	xmlIO.h encoding.h entities.h xlink.h
xmlIO.lo xmlIO.o : xmlIO.c config.h xmlmemory.h parser.h tree.h valid.h \
	xmlIO.h encoding.h entities.h parserInternals.h nanohttp.h \
	nanoftp.h
xmlmemory.lo xmlmemory.o : xmlmemory.c config.h xmlmemory.h
xpath.lo xpath.o : xpath.c config.h xmlmemory.h tree.h valid.h xpath.h \
	parserInternals.h parser.h xmlIO.h encoding.h entities.h

info-am:
info: info-recursive
dvi-am:
dvi: dvi-recursive
check-am: all-am
	$(MAKE) $(AM_MAKEFLAGS) check-local
check: check-recursive
installcheck-am:
installcheck: installcheck-recursive
all-recursive-am: config.h
	$(MAKE) $(AM_MAKEFLAGS) all-recursive

install-exec-am: install-libLTLIBRARIES install-binSCRIPTS \
		install-confexecDATA
install-exec: install-exec-recursive

install-data-am: install-pkgconfigDATA install-xmlincHEADERS \
		install-data-local
install-data: install-data-recursive

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-recursive
uninstall-am: uninstall-libLTLIBRARIES uninstall-binSCRIPTS \
		uninstall-confexecDATA uninstall-pkgconfigDATA \
		uninstall-xmlincHEADERS
uninstall: uninstall-recursive
all-am: Makefile $(LTLIBRARIES) $(PROGRAMS) $(SCRIPTS) $(DATA) \
		$(HEADERS) config.h
all-redirect: all-recursive-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs: installdirs-recursive
installdirs-am:
	$(mkinstalldirs)  $(DESTDIR)$(libdir) $(DESTDIR)$(bindir) \
		$(DESTDIR)$(confexecdir) $(DESTDIR)$(pkgconfigdir) \
		$(DESTDIR)$(xmlincdir)


mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
mostlyclean-am:  mostlyclean-hdr mostlyclean-libLTLIBRARIES \
		mostlyclean-compile mostlyclean-libtool \
		mostlyclean-noinstPROGRAMS mostlyclean-tags \
		mostlyclean-generic

mostlyclean: mostlyclean-recursive

clean-am:  clean-hdr clean-libLTLIBRARIES clean-compile clean-libtool \
		clean-noinstPROGRAMS clean-tags clean-generic \
		mostlyclean-am

clean: clean-recursive

distclean-am:  distclean-hdr distclean-libLTLIBRARIES distclean-compile \
		distclean-libtool distclean-noinstPROGRAMS \
		distclean-tags distclean-generic clean-am
	-rm -f libtool

distclean: distclean-recursive
	-rm -f config.status

maintainer-clean-am:  maintainer-clean-hdr \
		maintainer-clean-libLTLIBRARIES \
		maintainer-clean-compile maintainer-clean-libtool \
		maintainer-clean-noinstPROGRAMS maintainer-clean-tags \
		maintainer-clean-generic distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-recursive
	-rm -f config.status

.PHONY: mostlyclean-hdr distclean-hdr clean-hdr maintainer-clean-hdr \
mostlyclean-libLTLIBRARIES distclean-libLTLIBRARIES \
clean-libLTLIBRARIES maintainer-clean-libLTLIBRARIES \
uninstall-libLTLIBRARIES install-libLTLIBRARIES mostlyclean-compile \
distclean-compile clean-compile maintainer-clean-compile \
mostlyclean-libtool distclean-libtool clean-libtool \
maintainer-clean-libtool mostlyclean-noinstPROGRAMS \
distclean-noinstPROGRAMS clean-noinstPROGRAMS \
maintainer-clean-noinstPROGRAMS uninstall-binSCRIPTS install-binSCRIPTS \
uninstall-confexecDATA install-confexecDATA uninstall-pkgconfigDATA \
install-pkgconfigDATA uninstall-xmlincHEADERS install-xmlincHEADERS \
install-data-recursive uninstall-data-recursive install-exec-recursive \
uninstall-exec-recursive installdirs-recursive uninstalldirs-recursive \
all-recursive check-recursive installcheck-recursive info-recursive \
dvi-recursive mostlyclean-recursive distclean-recursive clean-recursive \
maintainer-clean-recursive tags tags-recursive mostlyclean-tags \
distclean-tags clean-tags maintainer-clean-tags distdir info-am info \
dvi-am dvi check-local check check-am installcheck-am installcheck \
all-recursive-am install-exec-am install-exec install-data-local \
install-data-am install-data install-am install uninstall-am uninstall \
all-redirect all-am all installdirs-am installdirs mostlyclean-generic \
distclean-generic clean-generic maintainer-clean-generic clean \
mostlyclean distclean maintainer-clean


check-local: tests

testall : tests SVGtests SAXtests XPathtests XMLenttests

tests: XMLtests HTMLtests Validtests

HTMLtests : testHTML
	@echo "##"
	@echo "## HTML regression tests"
	@echo "##"
	@(for i in $(srcdir)/test/HTML/* ; do \
	  name=`basename $$i`; \
	  if [ ! -d $$i ] ; then \
	  if [ ! -f $(srcdir)/result/HTML/$$name ] ; then \
	      echo New test file $$name ; \
	      $(top_builddir)/testHTML $$i > $(srcdir)/result/HTML/$$name 2>$(srcdir)/result/HTML/$$name.err ; \
	  else \
	      echo Testing $$name ; \
	      $(top_builddir)/testHTML $$i > result.$$name 2> error.$$name ; \
	      diff $(srcdir)/result/HTML/$$name result.$$name ; \
	      diff $(srcdir)/result/HTML/$$name.err error.$$name ; \
	      $(top_builddir)/testHTML result.$$name > result2.$$name 2>error.$$name ; \
	      diff result.$$name result2.$$name ; \
	      rm result.$$name result2.$$name error.$$name ; \
	  fi ; fi ; done)

XMLtests : tester
	@(rm -f .memdump ; touch .memdump)
	@echo "##"
	@echo "## XML regression tests"
	@echo "##"
	@(for i in $(srcdir)/test/* ; do \
	  name=`basename $$i`; \
	  if [ ! -d $$i ] ; then \
	  if [ ! -f $(srcdir)/result/$$name ] ; then \
	      echo New test file $$name ; \
	      $(top_builddir)/tester $$i > $(srcdir)/result/$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	  else \
	      echo Testing $$name ; \
	      $(top_builddir)/tester $$i > result.$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	      diff $(srcdir)/result/$$name result.$$name ; \
	      $(top_builddir)/tester result.$$name > result2.$$name ; \
	      diff result.$$name result2.$$name ; \
	      rm result.$$name result2.$$name ; \
	  fi ; fi ; done)

XMLenttests : tester
	@(rm -f .memdump ; touch .memdump)
	@echo "##"
	@echo "## XML entity subst regression tests"
	@echo "##"
	@(for i in $(srcdir)/test/* ; do \
	  name=`basename $$i`; \
	  if [ ! -d $$i ] ; then \
	  if [ ! -f $(srcdir)/result/noent/$$name ] ; then \
	      echo New test file $$name ; \
	      $(top_builddir)/tester --noent $$i > $(srcdir)/result/noent/$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	  else \
	      echo Testing $$name ; \
	      $(top_builddir)/tester --noent $$i > result.$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	      diff $(srcdir)/result/noent/$$name result.$$name ; \
	      $(top_builddir)/tester --noent result.$$name > result2.$$name ; \
	      diff result.$$name result2.$$name ; \
	      rm result.$$name result2.$$name ; \
	  fi ; fi ; done)

XPathtests : testXPath
	@(rm -f .memdump ; touch .memdump)
	@echo "##"
	@echo "## XPath regression tests"
	@echo "##"
	@(for i in $(srcdir)/test/XPath/expr/* ; do \
	  name=`basename $$i`; \
	  if [ ! -d $$i ] ; then \
	  if [ ! -f $(srcdir)/result/XPath/expr/$$name ] ; then \
	      echo New test file $$name ; \
	      $(top_builddir)/testXPath -f --expr $$i > $(srcdir)/result/XPath/expr/$$name ; \
	  else \
	      echo Testing $$name ; \
	      $(top_builddir)/testXPath -f --expr $$i > result.$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	      diff $(srcdir)/result/XPath/expr/$$name result.$$name ; \
	      rm result.$$name ; \
	  fi ; fi ; done)
	@(for i in $(srcdir)/test/XPath/docs/* ; do \
	  if [ ! -d $$i ] ; then \
	  doc=`basename $$i`; \
	  for j in $(srcdir)/test/XPath/tests/$$doc* ; do \
	  name=`basename $$j`; \
	  if [ ! -d $$j ] ; then \
	  if [ ! -f $(srcdir)/result/XPath/tests/$$name ] ; then \
	      echo New test file $$name ; \
	      $(top_builddir)/testXPath -f -i $$i $$j > $(srcdir)/result/XPath/tests/$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	  else \
	      echo Testing $$name ; \
	      $(top_builddir)/testXPath -f -i $$i $$j > result.$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	      diff $(srcdir)/result/XPath/tests/$$name result.$$name ; \
	      rm result.$$name ; \
	  fi ; fi ; done ; fi ; done)

SVGtests : tester
	@(rm -f .memdump ; touch .memdump)
	@echo "##"
	@echo "## SVG parsing regression tests"
	@echo "##"
	@(for i in $(srcdir)/test/SVG/* ; do \
	  name=`basename $$i`; \
	  if [ ! -d $$i ] ; then \
	  if [ ! -f $(srcdir)/result/SVG/$$name ] ; then \
	      echo New test file $$name ; \
	      $(top_builddir)/tester $$i > $(srcdir)/result/SVG/$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	  else \
	      echo Testing $$name ; \
	      $(top_builddir)/tester $$i > result.$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	      diff $(srcdir)/result/SVG/$$name result.$$name ; \
	      $(top_builddir)/tester result.$$name > result2.$$name ; \
	      diff result.$$name result2.$$name ; \
	      rm result.$$name result2.$$name ; \
	  fi ; fi ; done)

SAXtests : testSAX
	@(rm -f .memdump ; touch .memdump)
	@echo "##"
	@echo "## SAX callbacks regression tests"
	@echo "##"
	@(for i in $(srcdir)/test/* ; do \
	  name=`basename $$i`; \
	  if [ ! -d $$i ] ; then \
	  if [ ! -f $(srcdir)/SAXresult/$$name ] ; then \
	      echo New test file $$name ; \
	      $(top_builddir)/testSAX $$i > $(srcdir)/SAXresult/$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	  else \
	      echo Testing $$name ; \
	      $(top_builddir)/testSAX $$i > result.$$name ; \
	      diff $(srcdir)/SAXresult/$$name result.$$name ; \
	      rm result.$$name ; \
	  fi ; fi ; done)

Validtests : tester
	@(rm -f .memdump ; touch .memdump)
	@echo "##"
	@echo "## Validity checking regression tests"
	@echo "##"
	@(for i in $(srcdir)/test/VC/* ; do \
	  name=`basename $$i`; \
	  if [ ! -d $$i ] ; then \
	  if [ ! -f $(srcdir)/result/VC/$$name ] ; then \
	      echo New test file $$name ; \
	      $(top_builddir)/tester --noout --valid $$i 2> $(srcdir)/result/VC/$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	  else \
	      echo Testing $$name ; \
	      $(top_builddir)/tester --noout --valid $$i 2> result.$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	      diff $(srcdir)/result/VC/$$name result.$$name ; \
	      rm result.$$name ; \
	  fi ; fi ; done)
	@echo "##"
	@echo "## Valid documents regression tests"
	@echo "##"
	@(for i in $(srcdir)/test/valid/* ; do \
	  name=`basename $$i`; \
	  if [ ! -d $$i ] ; then \
	  if [ ! -f $(srcdir)/result/valid/$$name ] ; then \
	      echo New test file $$name ; \
	      $(top_builddir)/tester --valid $$i > $(srcdir)/result/valid/$$name 2>$(srcdir)/result/valid/$$name.err ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	  else \
	      echo Testing $$name ; \
	      $(top_builddir)/tester --valid $$i > result.$$name 2>error.$$name ; \
	      grep "MORY ALLO" .memdump  | grep -v "MEMORY ALLOCATED : 0";\
	      diff $(srcdir)/result/valid/$$name result.$$name ; \
	      diff $(srcdir)/result/valid/$$name.err error.$$name ; \
	      rm result.$$name error.$$name ; \
	  fi ; fi ; done)

dist-hook: libxml.spec
	-cp libxml.spec $(distdir)
	(cd $(srcdir) ; tar -cf - --exclude CVS test result SAXresult ) | (cd $(distdir); tar xf -)

xmlConf.sh: xmlConf.sh.in Makefile
	sed -e 's?\@XML_LIBDIR\@?$(XML_LIBDIR)?g' \
	    -e 's?\@XML_INCLUDEDIR\@?$(XML_INCLUDEDIR)?g' \
	    -e 's?\@XML_LIBS\@?$(XML_LIBS)?g' \
	    -e 's?\@VERSION\@?$(VERSION)?g' \
	      < $(srcdir)/xmlConf.sh.in > xmlConf.tmp \
	  && mv xmlConf.tmp xmlConf.sh

$(srcdir)/libxml:
	-$(RM) -f $(srcdir)/libxml
#	ln -s $(srcdir)/. $(srcdir)/libxml

install-data-local:
	-mkdir -p $(DESTDIR)$(xmlincdir)
	-(cd $(DESTDIR)$(xmlincdir) && cp -fp . libxml)

$(libxml_la_SOURCES): $(srcdir)/libxml

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
