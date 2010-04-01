#############################################################################
# Makefile for building: hello
# Copyright (C) 2009 Raghavendra Nayak
# Released under GNU GPL v3 or above (at your option)
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = 
CFLAGS        = -pipe -O3 -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -O3 -Wall -W $(DEFINES)
INCPATH       = -I. -I$(MOTIFHOME)/include -I$(OPENWINHOME)/include
LINK          = g++
LFLAGS        = -Wl,-rpath,
LIBS          = -R$(MOTIFHOME)/lib -R$(OPENWINHOME)/lib -L$(MOTIFHOME)/lib -L$(OPENWINHOME)/lib -lXm -lXt -lX11
AR            = ar cqs
RANLIB        = 
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

MOTIFHOME     = /usr/dt

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = hello.c 
OBJECTS       = hello.o
DESTDIR       = 
TARGET        = hello

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

clean:
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
#	-$(DEL_FILE) Makefile

####### Compile

####### Install

