CROSS=-DCROSS_COMPILE
#  GNU Objective C Runtime Makefile
#  Copyright (C) 1993, 1995, 1996, 1997 Free Software Foundation, Inc.
#
#  This file is part of GNU CC.
#
#  GNU CC is free software; you can redistribute it and/or modify it under the
#  terms of the GNU General Public License as published by the Free Software
#  Foundation; either version 2, or (at your option) any later version.
#
#  GNU CC is distributed in the hope that it will be useful, but WITHOUT ANY
#  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
#  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
#  details.
#
#  You should have received a copy of the GNU General Public License along with
#  GNU CC; see the file COPYING.  If not, write to the Free Software
#  Foundation, 59 Temple Place - Suite 330,
#  Boston, MA 02111-1307, USA.

#  This makefile is run by the parent dir's makefile.
#  thisdir1=`pwd`; \
#  srcdir1=`cd $(srcdir); pwd`; \
#  cd objc; \
#  $(MAKE) $(MAKEFLAGS) -f $$srcdir1/objc/Makefile libobjc.a \
#    srcdir=$$srcdir1 tooldir=$(tooldir) AR="$(AR)" AR_FLAGS="$(AR_FLAGS)" \
#    GCC_FOR_TARGET="$$thisdir1/xgcc -B$$thisdir1/" \
#    GCC_CFLAGS="$(GCC_CFLAGS)" incinstalldir=$$thisdir1/include
#    OBJC_THREAD_FILE="$(OBJC_THREAD_FILE)"
#  Two targets are used by ../Makefile: `all' and `mostlyclean'.

SHELL=/bin/sh

.SUFFIXES: .m

OPTIMIZE= -O

srcdir = .
VPATH = $(srcdir)

AR = ar
AR_FLAGS = rc

# Define this as & to perform parallel make on a Sequent.
# Note that this has some bugs, and it seems currently necessary 
# to compile all the gen* files first by hand to avoid erroneous results.
P =

# Definition of `all' is here so that new rules inserted by sed
# do not specify the default target.
all: all.indirect

# sed inserts variable overrides after the following line.
####target overrides
# Don't run fixproto
STMP_FIXPROTO =

# Don't install "assert.h" in gcc. We use the one in glibc.
INSTALL_ASSERT_H =
# The pushl in CTOR initialization interferes with frame pointer elimination.
CRTSTUFF_T_CFLAGS = -fno-omit-frame-pointer
####host overrides
####cross overrides
# Build libgcc1.a for a cross-compiler.
# By default this expects the user to provide libgcc1.a,
# and gives up immediately if the user has not done so.
LIBGCC1 = $(CROSS_LIBGCC1)

# Specify tools and options for manipulating libraries for the target machine.
AR = $(AR_FOR_TARGET)
AR_FLAGS = $(AR_FOR_TARGET_FLAGS)
OLDAR = $(AR_FOR_TARGET)
OLDAR_FLAGS = $(AR_FOR_TARGET_FLAGS)
RANLIB = $(RANLIB_FOR_TARGET)
RANLIB_TEST = $(RANLIB_TEST_FOR_TARGET)

# Dir to search for system headers.  Normally /usr/include.
SYSTEM_HEADER_DIR = $(tooldir)/include

# Don't try to compile the things we can't compile.
ALL = all.cross

# Use cross-compiler version of float.h.
FLOAT_H = $(CROSS_FLOAT_H)

# Don't install assert.h in /usr/local/include.
assertdir = $(tooldir)/include
####build overrides
#

OBJC_H = hash.h objc-list.h sarray.h objc.h objc-api.h \
  NXConstStr.h Object.h Protocol.h encoding.h typedstream.h thr.h

# Now figure out from those variables how to compile and link.
all.indirect: Makefile compiler objc-runtime

compiler:
	cd ..; $(MAKE) cc1obj

objc-runtime:
	cd ..; $(MAKE) libobjc.a

# copy objc headers to installation include directory
copy-headers: 
	-rm -fr $(incinstalldir)/objc
	-mkdir $(incinstalldir)/objc
	for file in $(OBJC_H); do \
	  realfile=$(srcdir)/$${file}; \
	  cp $${realfile} $(incinstalldir)/objc; \
	  chmod a+r $(incinstalldir)/objc/$${file}; \
	done

Makefile: $(srcdir)/Makefile.in $(srcdir)/../configure
	cd ..; $(SHELL) config.status

mostlyclean:
	-rm -f *.o libobjc.a xforward fflags
clean: mostlyclean
distclean: mostlyclean
extraclean: mostlyclean

# For Sun VPATH.

