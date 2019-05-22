# define all supported keyboards
KEYBOARDS=zeal60 zeal65 zealM104 zealM2x4
SOURCES=zeal60.cpp keycode.cpp keycode.h config.h 

# define compilers
CC=gcc
CXX=g++

# determine OS specific parameters
OSNAME:=$(shell uname -s)
$(info we are compiling in: [${OSNAME}])

CPPFLAGS=-I/usr/local/lib -Wno-write-strings 
LDFLAGS=
ifeq ($(OSNAME),Darwin)
	CPPFLAGS += -lhidapi
	COBJS     =
# else ifeq ($(OSNAME),CYGWIN_NT-10.0)
else ifeq ($(findstring CYGWIN,$(OSNAME)),CYGWIN)
	CPPFLAGS += -I../hidapi/hidapi -g 
	CFLAGS    = -I../hidapi/hidapi -g -c
	COBJS=hid.o
	LDFLAGS  += $(COBJS) -lsetupapi
	SOURCES  += $(COBJS)
else
	CPPFLAGS += -I/usr/local/include/hidapi
	LDFLAGS  += -lhid.dll
	COBJS     =
endif

# Rules:
# compile hid.o in windows under cygwin
$(COBJS): %.o: ../hidapi/windows/%.c
	$(CC) $(CFLAGS) $< -o $@

# compile for all keyboards, customization is defined in config.h
#   Note: 
#      -D$(shell...) transforms the target (= the keyboard name) into the uppercase, which
#      is used in config.h to define keyboard specific data (e.g. PID,VID,...)
$(KEYBOARDS): $(SOURCES)
	$(CXX) $(CPPFLAGS) -D$(shell tr a-z A-Z <<< ${@}) $(filter %.cpp,$^) -o $@ $(LDFLAGS)

	
# Targets: 
clean:
	$(RM) *.exe *.o
	
all: $(KEYBOARDS)
