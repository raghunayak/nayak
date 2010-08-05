#############################################################################
# Makefile for building: is_prime_number
# Created by Raghavendra Nayak
#############################################################################

####### Compiler, tools and options

CC            = gcc
CCC           = g++
CXX           = g++
DEFINES       = 
CFLAGS        = -pipe -O3 -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -O3 -Wall -W $(DEFINES)
INCPATH       = -I.
LINK          = g++
LFLAGS        = -Wl,-rpath,
LIBS          = 
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
DEL_FILE      = del
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
ECHO          = echo

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = is_prime_number.c 
OBJECTS       = is_prime_number.o
DESTDIR       = 
TARGET        = is_prime_number
PREPROCESSEDFILE = is_prime_number.i

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C .i

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

%.o: %.cc
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

%.o: %.cxx
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

%.o: %.C
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

%.o: %.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"
	
%.i: %.cpp
	$(CCC) -c -E $(CFLAGS) $< >$*.i
	
%.i: %.cc
	$(CCC) -c -E $(CFLAGS) $< >$*.i

%.i: %.C
	$(CCC) -c -E $(CFLAGS) $< >$*.i

%.i: %.c
	$(CXX) -c -E $(CXXFLAGS) $< >$*.i

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

clean:
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) *~ core *.core
	-$(DEL_FILE) $(PREPROCESSEDFILE)

preprocess: $(PREPROCESSEDFILE)


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile

####### Compile 

####### Install
