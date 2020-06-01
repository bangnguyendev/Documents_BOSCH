/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: atest_RBPduHandler_Callouts.c
 *    Author: nbg7hc
 *    Generated on: 01-Jun-2020 15:08:46
 *    Generated from: RBPduHandler_Callouts.c
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2
/*      Author: HC-UT40277C      */ 
 	#define False 0 
 	#define True (!False) 

/* Include files from software under test */
#include "RB_Config.h"
#include "CM_Basetypes_COMMON.h"
#include "ComM_Cfg.h"
#include "ComM_Priv.h"
#include "Com.h"
#include "RBPduHandler.h"
#include "RBPduHandler_Callouts.h"
#include "CanNm_Cfg_Internal.h"
#include "Nm.h"
#include "RBSMM.h"

#define CANTATA_DEFAULT_VALUE 0 /* Default value of variables & stub returns */

#include <cantpp.h>  /* Cantata Directives */
/* pragma qas cantata testscript start */
/*****************************************************************************/
/* Global Data Definitions                                                   */
/*****************************************************************************/

/* Global Functions */
extern void Prj_EnableApplPDUsNetworkChannel_1();
extern void Prj_EnableApplPDUsNetworkChannel_2();
extern void Prj_DisableApplPDUsNetworkChannel_1();
extern void Prj_DisableApplPDUsNetworkChannel_2();
extern Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control);
extern Std_ReturnType RBPduHandler_RequestNmCommControl(RBPduHandler_ControlType Control);
//extern void RBPduHandler_EnableIpduGroup(Com_IpduGroupIdType l_IpduGroup);
//extern void RBPduHandler_DisableIpduGroup(Com_IpduGroupIdType l_IpduGroup);
//extern boolean RBSMM_WasSystemInNormalMode();

/* Global data */
/* None */

/* Expected variables for global data */
/* None */

/* This function initialises global data to default values. This function       */
/* is called by every test case so must not contain test case specific settings */
static void initialise_global_data(){
    /* No global data */
}

/* This function copies the global data settings into expected variables for */
/* use in check_global_data(). It is called by every test case so must not   */
/* contain test case specific settings.                                      */
static void initialise_expected_global_data(){
    /* No global data */
}

/* This function checks global data against the expected values. */
static void check_global_data(){
    /* No global data */
}

/* Prototypes for test functions */
void run_tests();
void test_Prj_EnableApplPDUsNetworkChannel_1(int);
void test_Prj_EnableApplPDUsNetworkChannel_2(int);
void test_Prj_EnableApplPDUsNetworkChannel_3(int);
void test_Prj_DisableApplPDUsNetworkChannel_1(int);
void test_Prj_DisableApplPDUsNetworkChannel_2(int);
void test_RBPduHandler_RequestNormalCommControl(int);
void test_RBPduHandler_RequestNormalCommControl_1(int);
void test_RBPduHandler_RequestNormalCommControl_2(int);
void test_RBPduHandler_RequestNormalCommControl_3(int);
void test_RBPduHandler_RequestNormalCommControl_4(int);
void test_RBPduHandler_RequestNmCommControl(int);
void test_RBPduHandler_RequestNmCommControl_1(int);
void test_RBPduHandler_RequestNmCommControl_2(int);
void test_RBPduHandler_RequestNmCommControl_3(int);
void test_RBPduHandler_RequestNmCommControl_4(int);

/*****************************************************************************/
/* Coverage Analysis                                                         */
/*****************************************************************************/
/* Coverage Rule Set: Report all Metrics */
static void rule_set(char* cppca_sut,
                     char* cppca_context)
{
    START_TEST("COVERAGE RULE SET",
               "Report all Metrics");
#ifdef CANTPP_SUBSET_DEFERRED_ANALYSIS
    TEST_SCRIPT_WARNING("Coverage Rule Set ignored in deferred analysis mode\n");
#elif CANTPP_COVERAGE_INSTRUMENTATION_DISABLED
    TEST_SCRIPT_WARNING("Coverage Instrumentation has been disabled\n");
#elif CANTPP_INSTRUMENTATION_DISABLED
    TEST_SCRIPT_WARNING("Instrumentation has been disabled\n");
#else
    REPORT_COVERAGE(cppca_entrypoint_cov|
                    cppca_statement_cov|
                    cppca_basicblock_cov|
                    cppca_callreturn_cov|
                    cppca_decision_cov|
                    cppca_relational_cov|
                    cppca_loop_cov|
                    cppca_booloper_cov|
                    cppca_booleff_cov,
                    cppca_sut,
                    cppca_all_details|cppca_include_catch,
                    cppca_context);
#endif
    END_TEST();
}

/*****************************************************************************/
/* Program Entry Point                                                       */
/*****************************************************************************/
int main()
{
    CONFIGURE_COVERAGE("cov:boolcomb:yes");
    OPEN_LOG("atest_RBPduHandler_Callouts.ctr", false, 100);
    START_SCRIPT("RBPduHandler_Callouts", true);

    run_tests();

    return !END_SCRIPT(true);
}

/*****************************************************************************/
/* Test Control                                                              */
/*****************************************************************************/
/* run_tests() contains calls to the individual test cases, you can turn test*/
/* cases off by adding comments*/
void run_tests()
{
    test_Prj_EnableApplPDUsNetworkChannel_1(1);
    test_Prj_EnableApplPDUsNetworkChannel_2(1);
    test_Prj_EnableApplPDUsNetworkChannel_3(1);
    test_Prj_DisableApplPDUsNetworkChannel_1(1);
    test_Prj_DisableApplPDUsNetworkChannel_2(1);
    test_RBPduHandler_RequestNormalCommControl(1);
    test_RBPduHandler_RequestNormalCommControl_1(1);
    test_RBPduHandler_RequestNormalCommControl_2(1);
    test_RBPduHandler_RequestNormalCommControl_3(1);
    test_RBPduHandler_RequestNormalCommControl_4(1);
    test_RBPduHandler_RequestNmCommControl(1);
    test_RBPduHandler_RequestNmCommControl_1(1);
    test_RBPduHandler_RequestNmCommControl_2(1);
    test_RBPduHandler_RequestNmCommControl_3(1);
    test_RBPduHandler_RequestNmCommControl_4(1);

    rule_set("*", "*");
    EXPORT_COVERAGE("atest_RBPduHandler_Callouts.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_Prj_EnableApplPDUsNetworkChannel_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("1: Prj_EnableApplPDUsNetworkChannel_1",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBPduHandler_EnableIpduGroup#default}{RBSMM_WasSystemInNormalMode#default}}");

            /* Call SUT */
            Prj_EnableApplPDUsNetworkChannel_1();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_Prj_EnableApplPDUsNetworkChannel_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("2: Prj_EnableApplPDUsNetworkChannel_2",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBPduHandler_EnableIpduGroup#default}"
                "{RBSMM_WasSystemInNormalMode#false}}");

            /* Call SUT */
            Prj_EnableApplPDUsNetworkChannel_1();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_Prj_EnableApplPDUsNetworkChannel_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("3: Prj_EnableApplPDUsNetworkChannel_3",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            Prj_EnableApplPDUsNetworkChannel_2();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_Prj_DisableApplPDUsNetworkChannel_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("4: Prj_DisableApplPDUsNetworkChannel_1",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RBPduHandler_DisableIpduGroup#default}");

            /* Call SUT */
            Prj_DisableApplPDUsNetworkChannel_1();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_Prj_DisableApplPDUsNetworkChannel_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("5: Prj_DisableApplPDUsNetworkChannel_2",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            Prj_DisableApplPDUsNetworkChannel_2();

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBPduHandler_RequestNormalCommControl(int doIt){
if (doIt) {
    /* Test case data declarations */
    RBPduHandler_ControlType Control = CANTATA_DEFAULT_VALUE;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("6: RBPduHandler_RequestNormalCommControl",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBPduHandler_EnableIpduGroup#default}{RBPduHandler_DisableIpduGroup#default}}");

            /* Call SUT */
            returnValue = RBPduHandler_RequestNormalCommControl(Control);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBPduHandler_RequestNormalCommControl_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    RBPduHandler_ControlType Control = RBPDUHANDLER_ENABLE_RX_DISABLE_TX;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("7: RBPduHandler_RequestNormalCommControl_1",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBPduHandler_EnableIpduGroup#default}"
                "{RBPduHandler_DisableIpduGroup#default}}");

            /* Call SUT */
            returnValue = RBPduHandler_RequestNormalCommControl(Control);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBPduHandler_RequestNormalCommControl_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    RBPduHandler_ControlType Control = RBPDUHANDLER_DISABLE_RX_ENABLE_TX;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("8: RBPduHandler_RequestNormalCommControl_2",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBPduHandler_EnableIpduGroup#default}"
                "{RBPduHandler_DisableIpduGroup#default}}");

            /* Call SUT */
            returnValue = RBPduHandler_RequestNormalCommControl(Control);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBPduHandler_RequestNormalCommControl_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    RBPduHandler_ControlType Control = RBPDUHANDLER_DISABLE_RX_DISABLE_TX;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("9: RBPduHandler_RequestNormalCommControl_3",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBPduHandler_EnableIpduGroup#default}"
                "{RBPduHandler_DisableIpduGroup#default}}");

            /* Call SUT */
            returnValue = RBPduHandler_RequestNormalCommControl(Control);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBPduHandler_RequestNormalCommControl_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    RBPduHandler_ControlType Control = 999;
    Std_ReturnType expected_returnValue = E_NOT_OK;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("10: RBPduHandler_RequestNormalCommControl_4",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBPduHandler_EnableIpduGroup#default}"
                "{RBPduHandler_DisableIpduGroup#default}}");

            /* Call SUT */
            returnValue = RBPduHandler_RequestNormalCommControl(Control);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBPduHandler_RequestNmCommControl(int doIt){
if (doIt) {
    /* Test case data declarations */
    RBPduHandler_ControlType Control = RBPDUHANDLER_ENABLE_RX_ENABLE_TX;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("11: RBPduHandler_RequestNmCommControl",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = RBPduHandler_RequestNmCommControl(Control);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBPduHandler_RequestNmCommControl_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    RBPduHandler_ControlType Control = RBPDUHANDLER_DISABLE_RX_ENABLE_TX;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("12: RBPduHandler_RequestNmCommControl_1",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = RBPduHandler_RequestNmCommControl(Control);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBPduHandler_RequestNmCommControl_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    RBPduHandler_ControlType Control = RBPDUHANDLER_ENABLE_RX_DISABLE_TX;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("13: RBPduHandler_RequestNmCommControl_2",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = RBPduHandler_RequestNmCommControl(Control);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBPduHandler_RequestNmCommControl_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    RBPduHandler_ControlType Control = RBPDUHANDLER_DISABLE_RX_DISABLE_TX;
    Std_ReturnType expected_returnValue = CANTATA_DEFAULT_VALUE;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("14: RBPduHandler_RequestNmCommControl_3",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = RBPduHandler_RequestNmCommControl(Control);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBPduHandler_RequestNmCommControl_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    RBPduHandler_ControlType Control = 999;
    Std_ReturnType expected_returnValue = E_NOT_OK;
    Std_ReturnType returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("15: RBPduHandler_RequestNmCommControl_4",
               "cover at line 125 Std_ReturnType RBPduHandler_RequestNormalCommControl(RBPduHandler_ControlType Control)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = RBPduHandler_RequestNmCommControl(Control);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Call Interface Control                                                    */
/*****************************************************************************/
#pragma qas cantata ignore on
void RBPduHandler_EnableIpduGroup(Com_IpduGroupIdType l_IpduGroup){
    REGISTER_CALL("RBPduHandler_EnableIpduGroup");
    IF_INSTANCE("default")
    {
        return 1;
    }
    IF_INSTANCE("false")
    {
        return 0;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

void RBPduHandler_DisableIpduGroup(Com_IpduGroupIdType l_IpduGroup){
    REGISTER_CALL("RBPduHandler_DisableIpduGroup");


    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

boolean RBSMM_WasSystemInNormalMode( ){
    REGISTER_CALL("RBSMM_WasSystemInNormalMode");
    IF_INSTANCE("default")
    {
        return 1;
    }
    IF_INSTANCE("false")
    {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}
/* Before-Wrapper for function RBPduHandler_EnableIpduGroup */
int BEFORE_RBPduHandler_EnableIpduGroup(Com_IpduGroupIdType l_IpduGroup){
    REGISTER_CALL("RBPduHandler_EnableIpduGroup");
    IF_INSTANCE("default")
    {
        return REPLACE_WRAPPER;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return AFTER_WRAPPER;
}

/* After-Wrapper for function RBPduHandler_EnableIpduGroup */
void AFTER_RBPduHandler_EnableIpduGroup(struct cppsm_void_return cppsm_dummy,
                                        Com_IpduGroupIdType l_IpduGroup){

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Replace-Wrapper for function RBPduHandler_EnableIpduGroup */
void REPLACE_RBPduHandler_EnableIpduGroup(Com_IpduGroupIdType l_IpduGroup){
    IF_INSTANCE("default")
    {
        return 1;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Before-Wrapper for function RBPduHandler_DisableIpduGroup */
int BEFORE_RBPduHandler_DisableIpduGroup(Com_IpduGroupIdType l_IpduGroup){
    REGISTER_CALL("RBPduHandler_DisableIpduGroup");
    IF_INSTANCE("default")
    {
        return REPLACE_WRAPPER;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return AFTER_WRAPPER;
}

/* After-Wrapper for function RBPduHandler_DisableIpduGroup */
void AFTER_RBPduHandler_DisableIpduGroup(struct cppsm_void_return cppsm_dummy,
                                         Com_IpduGroupIdType l_IpduGroup){

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Replace-Wrapper for function RBPduHandler_DisableIpduGroup */
void REPLACE_RBPduHandler_DisableIpduGroup(Com_IpduGroupIdType l_IpduGroup){
    IF_INSTANCE("default")
    {
        return 1;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Before-Wrapper for function RBSMM_WasSystemInNormalMode */
int BEFORE_RBSMM_WasSystemInNormalMode(){
    REGISTER_CALL("RBSMM_WasSystemInNormalMode");
    IF_INSTANCE("default")
    {
        return REPLACE_WRAPPER;
    }
    IF_INSTANCE("default")
    {
        return REPLACE_WRAPPER;
    }
    IF_INSTANCE("false")
    {
        return REPLACE_WRAPPER;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return AFTER_WRAPPER;
}

/* After-Wrapper for function RBSMM_WasSystemInNormalMode */
boolean AFTER_RBSMM_WasSystemInNormalMode(boolean cppsm_return_value){
    boolean returnValue;

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return cppsm_return_value;
}

/* Replace-Wrapper for function RBSMM_WasSystemInNormalMode */
boolean REPLACE_RBSMM_WasSystemInNormalMode(){
    boolean returnValue;
    IF_INSTANCE("default")
    {
        return 1;
    }
    IF_INSTANCE("default")
    {
        return 1;
    }
    IF_INSTANCE("false")
    {
        return 0;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

#pragma qas cantata ignore off
/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
