# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MACHINE     = General
TARGET      = sfun
CHART_SRCS   = c2_General.c c8_General.c c16_General.c c38_General.c c42_General.c
MACHINE_SRC  = General_sfun.c
MACHINE_REG = 
MAKEFILE    = General_sfun.mak
MATLAB_ROOT  = C:\Program Files\MATLAB\R2015aSP1
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   =  /I "c:\Users\User\documents\bkin dexterit-e 3.7 tasks\VMR_Task\slprj\_sfprj\vmr_rwd_fix_leftarm\General\sfun\src" /I "c:\Users\User\documents\bkin dexterit-e 3.7 tasks\VMR_Task" /I "c:\program files (x86)\bkin technologies\bkin task development kit 3.7\ethercat" /I "c:\program files (x86)\bkin technologies\bkin task development kit 3.7"
AUX_INCLUDES   = 
MLSLSF_INCLUDES = \
    /I "C:\Program Files\MATLAB\R2015aSP1\extern\include" \
    /I "C:\Program Files\MATLAB\R2015aSP1\simulink\include" \
    /I "C:\Program Files\MATLAB\R2015aSP1\stateflow\c\mex\include" \
    /I "C:\Program Files\MATLAB\R2015aSP1\rtw\c\src" \
    /I "C:\Users\User\Documents\BKIN Dexterit-E 3.7 Tasks\VMR_Task\slprj\_sfprj\vmr_rwd_fix_leftarm\General\sfun\src" 

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   = 
INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(MLSLSF_INCLUDES)\
 $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMATLAB_MEX_FILE /nologo /MD 
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction  
#----------------------------- Source Files -----------------------------------

REQ_SRCS  =  $(MACHINE_SRC) $(MACHINE_REG) $(CHART_SRCS)

USER_ABS_OBJS    = \
     "BKINethercatglobal.obj" \
     "crc32.obj" \

AUX_ABS_OBJS =

THIRD_PARTY_OBJS =

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS) $(AUX_ABS_OBJS) $(THIRD_PARTY_OBJS)
OBJLIST_FILE = General_sfun.mol
SFCLIB = 
AUX_LNK_OBJS =     
USER_LIBS = 
LINK_MACHINE_LIBS = 
BLAS_LIBS = "C:\Program Files\MATLAB\R2015aSP1\extern\lib\win64\microsoft\libmwblas.lib" 
THIRD_PARTY_LIBS = 

#--------------------------------- Rules --------------------------------------

$(MACHINE)_$(TARGET).lib : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS) $(THIRD_PARTY_LIBS)
	@echo ### Linking ...
	$(LD) -lib /OUT:$(MACHINE)_$(TARGET).lib @$(OBJLIST_FILE) $(USER_LIBS) $(THIRD_PARTY_LIBS)
	@echo ### Created Stateflow library $@
.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

BKINethercatglobal.obj :  "c:\program files (x86)\bkin technologies\bkin task development kit 3.7\ethercat\BKINethercatglobal.c"
	@echo ### Compiling "c:\program files (x86)\bkin technologies\bkin task development kit 3.7\ethercat\BKINethercatglobal.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\program files (x86)\bkin technologies\bkin task development kit 3.7\ethercat\BKINethercatglobal.c"
crc32.obj :  "c:\program files (x86)\bkin technologies\bkin task development kit 3.7\crc32.c"
	@echo ### Compiling "c:\program files (x86)\bkin technologies\bkin task development kit 3.7\crc32.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "c:\program files (x86)\bkin technologies\bkin task development kit 3.7\crc32.c"

