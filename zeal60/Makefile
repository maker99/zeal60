# define all supported keyboards
#KEYBOARDS=zeal60 zeal65 zealM104 zealM2x4
KEYBOARDS=zealM104 zealM2x4
SOURCES=zeal60.cpp keycode.cpp keycode.h config.h 

# define compilers
# CC=gcc
# CXX=g++



# determine OS specific parameters, use either pre-defined ${OS}
#   or find out now
OSNAME:=$(or $(OS), $(shell uname -s))

ifeq ("1","1")
$(info: The Build environment:)
$(info: OS:  ${OSNAME})
$(info: CC:  ${OSNAME})
$(info: CXX: ${mCXX})
endif

CPPFLAGS=-I/usr/local/lib -Wno-write-strings 
LDFLAGS=
COBJS=
ifeq ($(OSNAME),Darwin)
	mCC =$(or $(CC), $(gcc))
	mCXX=$(or $(CXX),$(g++))
	CPPFLAGS += -lhidapi
# else ifeq ($(OSNAME),CYGWIN_NT-10.0)
# else ifeq ($(findstring CYGWIN,$(OSNAME)),CYGWIN)
else ifeq ($(findstring CYGWIN,$(OSNAME)),CYGWIN)
	# use mingw for a standalone windows program (need to use -static)
	# uncomment and use cygwins' gcc and g++ if you want to run only under cygwin
	mCC =$(or $(CC), $(x86_64-w64-mingw32-gcc.exe))
	mCXX=$(or $(CXX),$(x86_64-w64-mingw32-g++.exe))
	
	CPPFLAGS += -I../hidapi/hidapi -g 
	CFLAGS    = -I../hidapi/hidapi -g
	COBJS=hid.o
	LDFLAGS  += $(COBJS) -static -lsetupapi
	SOURCES  += $(COBJS)
else # standard linux
	mCC =$(or $(CC), $(gcc))
	mCXX=$(or $(CXX),$(g++))
	CPPFLAGS += -I/usr/local/include/hidapi
	LDFLAGS += -lhidapi-libusb
endif


# Rules:
# compile hid.o, needed in windows
$(COBJS): %.o: ../hidapi/windows/%.c
	$(mCC) $(CFLAGS) -c $< -o $@

# compile for all keyboards, customization is defined in config.h
#   Note: 
#      -D$(shell...) transforms the target (= the keyboard name) into the uppercase, which
#      is used in config.h to define keyboard specific data (e.g. PID,VID,...)
$(KEYBOARDS): $(SOURCES)
	$(mCXX) $(CPPFLAGS) -D$(shell echo ${@} | tr a-z A-Z ) $(filter %.cpp,$^) -o $@ $(LDFLAGS) 

	
# Targets: 
dist: 
	$(RM) *.o
	
clean:
	$(RM) *.exe *.o $(KEYBOARDS)
	
all: $(KEYBOARDS)
