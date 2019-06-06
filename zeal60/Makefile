# this maekfile accepts external environment variables to change
#  OS, CC and CXX
# Example:
#  export mCC=gcc-7
#  export mCXX=g++-7q
#  export OS=Linux
# Note: simple environment variables do not work here
#
#define all supported keyboards
#KEYBOARDS=zeal60 zeal65 zealM104 zealM2x4
KEYBOARDS=zealM104 zealM2x4
SOURCES=zeal60.cpp keycode.cpp keycode.h config.h 

# determine OS specific parameters 
# either set via environment variable OS
#  or from uname -s
OSNAME:=$(or $(OS), $(shell uname -s))

# define compilers and compile flags
CPPFLAGS=-I/usr/local/lib -Wno-write-strings 
LDFLAGS=
COBJS=
ifeq ($(OSNAME),Darwin)
  myOS := Darwin
	CC :=$(or $(mCC), gcc)
	CXX:=$(or $(mCXX),g++)
	CPPFLAGS += -lhidapi
else ifeq ($(findstring CYGWIN,$(OSNAME)),CYGWIN)
	# use mingw for a standalone windows program (need to use -static)
	# uncomment and use cygwins' gcc and g++ if you want to run only under cygwin
  myOS := Cygwin
	CC   := $(or $(mCC), x86_64-w64-mingw32-gcc.exe)
	CXX  := $(or $(mCXX),x86_64-w64-mingw32-g++.exe)
	
	CPPFLAGS += -I../hidapi/hidapi -g 
	CFLAGS    = -I../hidapi/hidapi -g
	LDFLAGS  += $(COBJS) -static -lsetupapi
	SOURCES  += $(COBJS)
	COBJS     = hid.o
else # standard linux
  myOS := Linux
	CC := $(or $(mCC), gcc)
	CXX:= $(or $(mCXX),g++)
	CPPFLAGS += -I/usr/local/include/hidapi
	LDFLAGS  += -lhidapi-libusb
endif

# Targets: 
check: 
	echo OS:   $(OSNAME)									> /dev/null
	echo myOS: $(myOS)									> /dev/null
	echo mCC:  $(mCC)									> /dev/null
	echo CC:   $(CC)									> /dev/null
	echo mCXX: $(mCXX)									> /dev/null
	echo CXX:  $(CXX)									> /dev/null
	
dist: 
	$(RM) *.o
	
clean:
	$(RM) *.exe *.o $(KEYBOARDS)
	
all: check $(KEYBOARDS)



# Rules:
# compile hid.o, needed in windows
$(COBJS): %.o: ../hidapi/windows/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# compile for all keyboards, customization is defined in config.h
#   Note: 
#      -D$(shell...) transforms the target (= the keyboard name) into the uppercase, which
#      is used in config.h to define keyboard specific data (e.g. PID,VID,...)
$(KEYBOARDS): $(SOURCES)
	$(CXX) $(CPPFLAGS) -D$(shell echo ${@} | tr a-z A-Z ) $(filter %.cpp,$^) -o $@ $(LDFLAGS) 


