#
# Generated makefile for test "atest_DcmAppl_22_rdbi"
#

#
# Stop the MAKEFLAGS variable being exported.
# This is needed for sub-make processes to use different options.
#
unexport MAKEFLAGS

#
# The name of the test
#
THIS_TEST := atest_DcmAppl_22_rdbi

#
# Test script file
#
atest_DcmAppl_22_rdbi_TESTOBJ := atest_DcmAppl_22_rdbi

#
# Software under test
#
atest_DcmAppl_22_rdbi_SUTOBJ := DcmAppl_22_rdbi

#
# Compile and link as 'C' or 'CXX'
#
atest_DcmAppl_22_rdbi_C_OR_CPP_MODE := C

#
# Additional libraries to link
#
atest_DcmAppl_22_rdbi_EXTLIBS := 

#
# Additional object files to link
#
atest_DcmAppl_22_rdbi_EXTOBJS := 

#
# Additional defines for this test
#
atest_DcmAppl_22_rdbi_DEFINES := 

#
# Additional includes for this test
#
atest_DcmAppl_22_rdbi_INCLUDES := ../../hdr/basic \
                                  ../../hdr/empty \
                                  ../../hdr/project

#
# Include the test definitions makefile
#
include ../configuration/test_defs.mk

#
# Rules for compiling the software under test
#
atest_DcmAppl_22_rdbi/DcmAppl_22_rdbi.o : ../../DcmAppl_22_rdbi.c
	$(MKDIR_CMD) -p atest_DcmAppl_22_rdbi
	@$(RM_CMD) $(DYNAMIC_THIS_TEST)/*.cov $(DYNAMIC_THIS_TEST)/*.ctr $(DYNAMIC_THIS_TEST)/*.ctg
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),1,0,0,0,0 >> $(CANTPP_TOP_LEVEL_LOG)
	-@$(ECHO_CMD_MED) ../../DcmAppl_22_rdbi.c > $(DYNAMIC_THIS_TEST)/filelist.lst
	-@$(QAC_CMD)
	$(subst %DEFINES%, $(foreach define,$(atest_DcmAppl_22_rdbi_ALL_DEFINES),$(DEFINE_OPT)$(define)), $(subst %INCLUDES%, $(foreach include,$(atest_DcmAppl_22_rdbi_ALL_INCLUDES),$(subst %s,$(include),$(INCLUDE_PATH_OPT))), $(subst %n,$(DYNAMIC_THIS_TEST)/$(atest_DcmAppl_22_rdbi_SUTOBJ),$(COMPILE_CC_CMD))))

#
# Rule for compiling the test script
#
atest_DcmAppl_22_rdbi/atest_DcmAppl_22_rdbi.o : atest_DcmAppl_22_rdbi/atest_DcmAppl_22_rdbi.c
	$(MKDIR_CMD) -p atest_DcmAppl_22_rdbi
	@$(RM_CMD) $(DYNAMIC_THIS_TEST)/*.cov $(DYNAMIC_THIS_TEST)/*.ctr $(DYNAMIC_THIS_TEST)/*.ctg
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),1,0,0,0,0 >> $(CANTPP_TOP_LEVEL_LOG)
	-@$(ECHO_CMD_MED) atest_DcmAppl_22_rdbi/atest_DcmAppl_22_rdbi.c > $(DYNAMIC_THIS_TEST)/filelist.lst
	$(subst %DEFINES%, $(foreach define,$(atest_DcmAppl_22_rdbi_ALL_DEFINES),$(DEFINE_OPT)$(define)), $(subst %INCLUDES%, $(foreach include,$(atest_DcmAppl_22_rdbi_ALL_INCLUDES),$(subst %s,$(include),$(INCLUDE_PATH_OPT))), $(subst %n,$(DYNAMIC_THIS_TEST)/$(atest_DcmAppl_22_rdbi_SUTOBJ),$(COMPILE_CC_CMD))))

#
# Rule for linking the test executable
#
$(atest_DcmAppl_22_rdbi_TEST_EXE) : \
	$(atest_DcmAppl_22_rdbi_TESTOBJ_FILENAMES) \
	$(atest_DcmAppl_22_rdbi_SUTOBJ_FILENAMES) \
	$(atest_DcmAppl_22_rdbi_EXTRA_DEPENDS)
	@$(RM_CMD) $(DYNAMIC_THIS_TEST)/*.cov $(DYNAMIC_THIS_TEST)/*.ctr $(DYNAMIC_THIS_TEST)/*.ctg
	@$(ECHO_CMD_MED) ",,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),1,0,0,1,0" >> $(CANTPP_TOP_LEVEL_LOG)
	$(subst %EXTLIBS%, $(foreach extlib,$(atest_DcmAppl_22_rdbi_ALL_EXTLIBS),$(subst %s,$(extlib),$(atest_DcmAppl_22_rdbi_LINK_EXTLIBOPT))), $(subst %n,$(DYNAMIC_THIS_TEST)/atest_DcmAppl_22_rdbi,$(subst %EXTOBJS%,$(atest_DcmAppl_22_rdbi_EXTOBJS),$(CC_LINK_CMD))))
	@$(ECHO_CMD_MED) Built atest_DcmAppl_22_rdbi successfully

#
# Rule for running the test executable
#
$(atest_DcmAppl_22_rdbi_CTR_FILE) : $(atest_DcmAppl_22_rdbi_TEST_EXE)
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),0,1,0,1,0 >> $(CANTPP_TOP_LEVEL_LOG)
	@$(RUN_CMD)
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),0,0,1,0,0 >> $(CANTPP_TOP_LEVEL_LOG)

#
# Rule for ensuring nothing is built/run unless the ctr file is out of date
#
$(atest_DcmAppl_22_rdbi_RUN) : $(atest_DcmAppl_22_rdbi_CTR_FILE)

#
# Rule for controlling the building and running of the test executable
#
ifeq ($(EXECUTE),1)
ifeq ($(PUSH_TO_SERVER),1)
$(atest_DcmAppl_22_rdbi_BUILD_AND_RUN) : 
	-@$(MAKE) $(atest_DcmAppl_22_rdbi_RUN) --warn-undefined-variables -s -f $(DYNAMIC_THIS_TEST)/test.mk 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(ECHO_CMD_MED) Uploading test results to Cantata Server...
	@$(JAVA_CMD) -cp "$(CANTATA_INSTALL_DIR)/bin/client.jar" com.qas.cantata.client.control.CCLC filesToLoad=$(DYNAMIC_THIS_TEST)/.*.ctr,$(DYNAMIC_THIS_TEST)/.*.ctg,$(DYNAMIC_THIS_TEST)/.*.cov,../../DcmAppl_22_rdbi.c,$(DYNAMIC_THIS_TEST)/atest_DcmAppl_22_rdbi.c optionsFiles=../../ipg.cop,$(DYNAMIC_THIS_TEST)/ipg.cop 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(CTR_STATE_CMD)
else
$(atest_DcmAppl_22_rdbi_BUILD_AND_RUN) : 
	-@$(MAKE) $(atest_DcmAppl_22_rdbi_RUN) --warn-undefined-variables -s -f $(DYNAMIC_THIS_TEST)/test.mk 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(CTR_STATE_CMD)
endif
else
$(atest_DcmAppl_22_rdbi_BUILD_AND_RUN) : 
	@$(MAKE) $(atest_DcmAppl_22_rdbi_TEST_EXE) --warn-undefined-variables -s -f $(DYNAMIC_THIS_TEST)/test.mk 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(ECHO_CMD_MED) Finished $(DYNAMIC_THIS_TEST)
endif

#
# Rules for generating the required folder structure
#

#
# Additional dependencies
#
atest_DcmAppl_22_rdbi/DcmAppl_22_rdbi.o : ../../ipg.cop
atest_DcmAppl_22_rdbi/DcmAppl_22_rdbi.o : atest_DcmAppl_22_rdbi/ipg.cop
atest_DcmAppl_22_rdbi/atest_DcmAppl_22_rdbi.o : ../../ipg.cop
atest_DcmAppl_22_rdbi/atest_DcmAppl_22_rdbi.o : atest_DcmAppl_22_rdbi/ipg.cop


