/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: atest_RBAB_DigitalIO_Safety.c
 *    Author: PUD81HC
 *    Generated on: 07-May-2020 14:07:56
 *    Generated from: RBAB_DigitalIO_Safety.c
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2
/*      Author: HC-UT40277C      */ 
 	#define False 0 
 	#define True (!False) 

/* Include files from software under test */
#include "RBAB_Safety.h"
#include "RBAB_DigitalIO.h"
#include "RBAB_Sampler.h"
#include "RBAB_Diagnosis.h"
#include "CM_BaseTypes_COMMON.h"
#include "RBMICAPB_ApbButton.h"
#include "RBMICAPB_ASICRevision.h"
#include "RBVSO_SpeedOutput.h"
#include "ASWIF_CommonConfig.h"
#include "Dem.h"
#define C_RBABTransitionStateVSO_MinSpeedinKmph_f (3.0)
#define C_TransitionStateFailedThreshold_InititalLampCheck ((uint16)100)
#define C_TransitionStateFailedThreshold_VehicleMoving ((uint16)100)
#define C_TransitionStateFailedThreshold_Stuck ((uint16)3000)
#define C_threetimescounterThreshold ((uint8) 3)
#define C_RBABVSO_ConversionKmph2Mps_f (1/3.6)
#include "RBAB_TestInterface.h"
#include "cc_assert.h"

#define CANTATA_DEFAULT_VALUE 0 /* Default value of variables & stub returns */

#include <cantpp.h>  /* Cantata Directives */
/* pragma qas cantata testscript start */
/*****************************************************************************/
/* Global Data Definitions                                                   */
/*****************************************************************************/

/* Global Functions */
extern boolean ACCESS_FUNCTION_RBAB_DigitalIO_Safety_RBAB_IsbuttonConnectedForFirstTime();
extern boolean ACCESS_FUNCTION_RBAB_DigitalIO_Safety_RBAB_ButtonLineGoodcheckRoutine();
extern uint8 ACCESS_FUNCTION_RBAB_DigitalIO_Safety_rbapbbti_GetFlagToCheck(int is_input, int pin_id, RbapbbTI_FaultType fault);
APBBUT_UnfilteredButtonState_t RBAB_DigitalIO_CalcUnfilteredButtonState();
boolean RBAB_State_IsFailureUnfiltered();
APBBUT_FilteredButtonState_t RBAB_State_CurrentPLFilteredState();
boolean RBMICAPB_IsRevisionIDGreaterEqualThan(RBMICAPB_RevisionID_t l_userID);
uint8 RBMICAPB_GetFirstAPBButtonConnectionStatus(MicTaskType_N l_taskType);
uint32 RBAB_DigitalIO_GetInputLineDebug0();
uint32 RBAB_DigitalIO_GetInputLineDebug1();
Std_ReturnType Dem_GetEventFailed(Dem_EventIdType EventId, boolean * EventFailed);
void RBAB_DebounceLineFault(int isFailed, uint32 debug0, uint32 debug1);
void RBAB_ReportLineFault(int isFailed, uint32 debug0, uint32 debug1);
void RBMICAPB_SetFirstAPBButtonConnectionDetected(uint8 l_Value, MicTaskType_N l_taskType);
void RBAB_DigitalIO_EvalOutputLines(uint8 * p_fault_store, int current_cycle);
void RB_AssertHandleWithCond(_Bool isFailed, const char * expr, const char * file, const char * func, int line);
extern boolean RBAB_Safety_BnStateMonitoring_10ms();
extern void RBAB_Safety_OutputMonitoring(int this_scan_cycle);
extern int RbapbbTI_IsNoFaultSet();
extern int RbapbbTI_IsThisFaultSet(int is_input, int pin_id, RbapbbTI_FaultType fault);
extern int RbapbbTI_IsOnlyThisFaultSet(int is_input, int pin_id, RbapbbTI_FaultType fault);

/* Global data */
typedef struct RBAB_DigitalIO_Safety_av_struct { uint8 * ref_rbab_CurrentOutputEvaluation; boolean * ref_g_NeutralStateFoundGoodAtStart; boolean * ref_g_LockStateFoundGood; boolean * ref_g_ReleaseStateFoundGood; boolean * ref_g_NeutralStateFoundGoodatEnd; uint16_t * ref_APBBUT_transitionstate_initiallampcheckcounter_u16; uint16_t * ref_APBBUT_tranasitionstate_counter_u16; uint16_t * ref_APBBUT_tranasitionstate_vehiclemovingcounter_u16; uint8_t * ref_APBBUT_continuoustransitionstatecounter_u8; boolean * ref_g_GoodcheckRequired; boolean * ref_RBAB_ButtonConnectedForFirstTime; } RBAB_DigitalIO_Safety_av_struct;
extern RBAB_DigitalIO_Safety_av_struct av_RBAB_DigitalIO_Safety;

/* Expected variables for global data */
typedef struct expected_RBAB_DigitalIO_Safety_av_struct { uint8 ref_rbab_CurrentOutputEvaluation; boolean ref_g_NeutralStateFoundGoodAtStart; boolean ref_g_LockStateFoundGood; boolean ref_g_ReleaseStateFoundGood; boolean ref_g_NeutralStateFoundGoodatEnd; uint16_t ref_APBBUT_transitionstate_initiallampcheckcounter_u16; uint16_t ref_APBBUT_tranasitionstate_counter_u16; uint16_t ref_APBBUT_tranasitionstate_vehiclemovingcounter_u16; uint8_t ref_APBBUT_continuoustransitionstatecounter_u8; boolean ref_g_GoodcheckRequired; boolean ref_RBAB_ButtonConnectedForFirstTime; } expected_RBAB_DigitalIO_Safety_av_struct;
expected_RBAB_DigitalIO_Safety_av_struct expected_av_RBAB_DigitalIO_Safety;

/* This function initialises global data to default values. This function       */
/* is called by every test case so must not contain test case specific settings */
static void initialise_global_data(){
    TEST_SCRIPT_WARNING("Verify initialise_global_data()\n");
    INITIALISE(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart));
    INITIALISE(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood));
    INITIALISE(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood));
    INITIALISE(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodatEnd));
    INITIALISE(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, RBAB_ButtonConnectedForFirstTime));
    INITIALISE(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, rbab_CurrentOutputEvaluation));
    INITIALISE(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired));
    INITIALISE(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_continuoustransitionstatecounter_u8));
    INITIALISE(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_vehiclemovingcounter_u16));
    INITIALISE(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_counter_u16));
    INITIALISE(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_transitionstate_initiallampcheckcounter_u16));
}

/* This function copies the global data settings into expected variables for */
/* use in check_global_data(). It is called by every test case so must not   */
/* contain test case specific settings.                                      */
static void initialise_expected_global_data(){
    TEST_SCRIPT_WARNING("Verify initialise_expected_global_data()\n");
    COPY_TO_EXPECTED(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodatEnd), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodatEnd));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, RBAB_ButtonConnectedForFirstTime), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, RBAB_ButtonConnectedForFirstTime));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, rbab_CurrentOutputEvaluation), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, rbab_CurrentOutputEvaluation));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_continuoustransitionstatecounter_u8), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_continuoustransitionstatecounter_u8));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_vehiclemovingcounter_u16), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_vehiclemovingcounter_u16));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_counter_u16), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_counter_u16));
    COPY_TO_EXPECTED(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_transitionstate_initiallampcheckcounter_u16), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_transitionstate_initiallampcheckcounter_u16));
}

/* This function checks global data against the expected values. */
static void check_global_data(){
    TEST_SCRIPT_WARNING("Verify check_global_data()\n");
    CHECK_BOOLEAN(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart));
    CHECK_BOOLEAN(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood));
    CHECK_BOOLEAN(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood));
    CHECK_BOOLEAN(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodatEnd), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodatEnd));
    CHECK_BOOLEAN(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, RBAB_ButtonConnectedForFirstTime), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, RBAB_ButtonConnectedForFirstTime));
    CHECK_U_CHAR(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, rbab_CurrentOutputEvaluation), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, rbab_CurrentOutputEvaluation));
    CHECK_BOOLEAN(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired));
    CHECK_U_CHAR(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_continuoustransitionstatecounter_u8), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_continuoustransitionstatecounter_u8));
    CHECK_U_INT(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_vehiclemovingcounter_u16), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_vehiclemovingcounter_u16));
    CHECK_U_INT(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_counter_u16), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_counter_u16));
    CHECK_U_INT(ACCESS_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_transitionstate_initiallampcheckcounter_u16), ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_transitionstate_initiallampcheckcounter_u16));
}

/* Prototypes for test functions */
void run_tests();
void test_RBAB_ButtonLineGoodcheckRoutine(int);
void test_RBAB_IsbuttonConnectedForFirstTime(int);
void test_RBAB_Safety_BnStateMonitoring_10ms(int);
void test_RBAB_Safety_OutputMonitoring(int);
void test_RbapbbTI_IsNoFaultSet(int);
void test_rbapbbti_GetFlagToCheck(int);
void test_RbapbbTI_IsThisFaultSet(int);
void test_RbapbbTI_IsOnlyThisFaultSet(int);
void test_RBAB_IsbuttonConnectedForFirstTime_1(int);
void test_RBAB_IsbuttonConnectedForFirstTime_2(int);
void test_RBAB_IsbuttonConnectedForFirstTime_3(int);
void test_RBAB_IsbuttonConnectedForFirstTime_4(int);
void test_RBAB_IsbuttonConnectedForFirstTime_5(int);
void test_RBAB_Safety_BnStateMonitoring_10ms_1(int);
void test_RBAB_Safety_BnStateMonitoring_10ms_2(int);
void test_RBAB_Safety_BnStateMonitoring_10ms_3(int);
void test_RBAB_Safety_BnStateMonitoring_10ms_4(int);
void test_RBAB_Safety_BnStateMonitoring_10ms_5(int);
void test_RBAB_ButtonLineGoodcheckRoutine_1(int);
void test_RBAB_ButtonLineGoodcheckRoutine_2(int);
void test_RBAB_ButtonLineGoodcheckRoutine_3(int);
void test_RBAB_ButtonLineGoodcheckRoutine_4(int);
void test_RBAB_ButtonLineGoodcheckRoutine_5(int);
void test_RBAB_ButtonLineGoodcheckRoutine_6(int);
void test_RBAB_ButtonLineGoodcheckRoutine_7(int);
void test_RBAB_ButtonLineGoodcheckRoutine_8(int);
void test_rbapbbti_GetFlagToCheck_1(int);
void test_rbapbbti_GetFlagToCheck_2(int);
void test_rbapbbti_GetFlagToCheck_3(int);
void test_rbapbbti_GetFlagToCheck_4(int);
void test_rbapbbti_GetFlagToCheck_5(int);
void test_rbapbbti_GetFlagToCheck_6(int);
void test_rbapbbti_GetFlagToCheck_7(int);
void test_rbapbbti_GetFlagToCheck_8(int);
void test_rbapbbti_GetFlagToCheck_9(int);
void test_rbapbbti_GetFlagToCheck_10(int);
void test_rbapbbti_GetFlagToCheck_11(int);
void test_rbapbbti_GetFlagToCheck_12(int);
void test_rbapbbti_GetFlagToCheck_13(int);
void test_rbapbbti_GetFlagToCheck_14(int);
void test_rbapbbti_GetFlagToCheck_15(int);

/*****************************************************************************/
/* Coverage Analysis                                                         */
/*****************************************************************************/
/* Coverage Rule Set: Report all coverage metrics */
static void rule_set(char* cppca_sut,
                     char* cppca_context)
{
#ifdef CANTPP_SUBSET_DEFERRED_ANALYSIS
    TEST_SCRIPT_WARNING("Coverage Rule Set ignored in deferred analysis mode\n");
#elif CANTPP_INSTRUMENTATION_DISABLED
    TEST_SCRIPT_WARNING("Instrumentation has been disabled\n");
#else
    REPORT_COVERAGE(cppca_entrypoint_cov|
                    cppca_callreturn_cov|
                    cppca_basicblock_cov|
                    cppca_statement_cov|
                    cppca_decision_cov|
                    cppca_relational_cov|
                    cppca_loop_cov|
                    cppca_condition_cov|
                    cppca_multcond_cov|
                    cppca_booleff_cov,
                    cppca_sut,
                    cppca_all_details|cppca_include_catch,
                    cppca_context);
#endif
}

/*****************************************************************************/
/* Program Entry Point                                                       */
/*****************************************************************************/
int main()
{
    CONFIGURE_COVERAGE("cov:boolcomb:yes");
    OPEN_LOG("atest_RBAB_DigitalIO_Safety.ctr", false, 100);
    START_SCRIPT("RBAB_DigitalIO_Safety", true);

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
    test_RBAB_ButtonLineGoodcheckRoutine(1);
    test_RBAB_IsbuttonConnectedForFirstTime(1);
    test_RBAB_Safety_BnStateMonitoring_10ms(1);
    test_RBAB_Safety_OutputMonitoring(1);
    test_RbapbbTI_IsNoFaultSet(1);
    test_rbapbbti_GetFlagToCheck(1);
    test_RbapbbTI_IsThisFaultSet(1);
    test_RbapbbTI_IsOnlyThisFaultSet(1);
    test_RBAB_IsbuttonConnectedForFirstTime_1(1);
    test_RBAB_IsbuttonConnectedForFirstTime_2(1);
    test_RBAB_IsbuttonConnectedForFirstTime_3(1);
    test_RBAB_IsbuttonConnectedForFirstTime_4(1);
    test_RBAB_IsbuttonConnectedForFirstTime_5(1);
    test_RBAB_Safety_BnStateMonitoring_10ms_1(1);
    test_RBAB_Safety_BnStateMonitoring_10ms_2(1);
    test_RBAB_Safety_BnStateMonitoring_10ms_3(1);
    test_RBAB_Safety_BnStateMonitoring_10ms_4(1);
    test_RBAB_Safety_BnStateMonitoring_10ms_5(1);
    test_RBAB_ButtonLineGoodcheckRoutine_1(1);
    test_RBAB_ButtonLineGoodcheckRoutine_2(1);
    test_RBAB_ButtonLineGoodcheckRoutine_3(1);
    test_RBAB_ButtonLineGoodcheckRoutine_4(1);
    test_RBAB_ButtonLineGoodcheckRoutine_5(1);
    test_RBAB_ButtonLineGoodcheckRoutine_6(1);
    test_RBAB_ButtonLineGoodcheckRoutine_7(1);
    test_RBAB_ButtonLineGoodcheckRoutine_8(1);
    test_rbapbbti_GetFlagToCheck_1(1);
    test_rbapbbti_GetFlagToCheck_2(1);
    test_rbapbbti_GetFlagToCheck_3(1);
    test_rbapbbti_GetFlagToCheck_4(1);
    test_rbapbbti_GetFlagToCheck_5(1);
    test_rbapbbti_GetFlagToCheck_6(1);
    test_rbapbbti_GetFlagToCheck_7(1);
    test_rbapbbti_GetFlagToCheck_8(1);
    test_rbapbbti_GetFlagToCheck_9(1);
    test_rbapbbti_GetFlagToCheck_10(1);
    test_rbapbbti_GetFlagToCheck_11(1);
    test_rbapbbti_GetFlagToCheck_12(1);
    test_rbapbbti_GetFlagToCheck_13(1);
    test_rbapbbti_GetFlagToCheck_14(1);
    test_rbapbbti_GetFlagToCheck_15(1);

    rule_set("*", "*");
    EXPORT_COVERAGE("atest_RBAB_DigitalIO_Safety.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_RBAB_ButtonLineGoodcheckRoutine(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("1: test_RBAB_ButtonLineGoodcheckRoutine",
                " cover Default case ");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_CalcUnfilteredButtonState#default}{RBAB_State_IsFailureUnfiltered#default}{RBAB_State_CurrentPLFilteredState#default}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_ButtonLineGoodcheckRoutine)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_IsbuttonConnectedForFirstTime(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("2: test_RBAB_IsbuttonConnectedForFirstTime",
                " cover Default case ");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBMICAPB_IsRevisionIDGreaterEqualThan#default}{RBMICAPB_GetFirstAPBButtonConnectionStatus#default}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_IsbuttonConnectedForFirstTime)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_Safety_BnStateMonitoring_10ms(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("3: test_RBAB_Safety_BnStateMonitoring_10ms",
                " cover Default case ");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_GetInputLineDebug0#default}{RBAB_DigitalIO_GetInputLineDebug1#default}{Dem_GetEventFailed#default}{RBAB_State_IsFailureUnfiltered#default}{RBAB_DebounceLineFault#default}{RBAB_ReportLineFault#default}{RBAB_IsbuttonConnectedForFirstTime#default}{RBMICAPB_IsRevisionIDGreaterEqualThan#default}{RBMICAPB_SetFirstAPBButtonConnectionDetected#default}{RBAB_ButtonLineGoodcheckRoutine#default}}");

            /* Call SUT */
            returnValue = RBAB_Safety_BnStateMonitoring_10ms();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_Safety_OutputMonitoring(int doIt){
if (doIt) {
    /* Test case data declarations */
    int this_scan_cycle = CANTATA_DEFAULT_VALUE;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

     START_TEST("4: test_RBAB_Safety_OutputMonitoring",
                " cover Default case ");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RBAB_DigitalIO_EvalOutputLines#default}");

            /* Call SUT */
            RBAB_Safety_OutputMonitoring(this_scan_cycle);

            /* Test case checks */
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RbapbbTI_IsNoFaultSet(int doIt){
if (doIt) {
    /* Test case data declarations */
    int expected_returnValue = CANTATA_DEFAULT_VALUE;
    int returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

     START_TEST("5: test_RbapbbTI_IsNoFaultSet",
                " cover Default case ");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = RbapbbTI_IsNoFaultSet();

            /* Test case checks */
            CHECK_S_INT(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = CANTATA_DEFAULT_VALUE;
    RbapbbTI_FaultType fault = CANTATA_DEFAULT_VALUE;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

     START_TEST("6: test_rbapbbti_GetFlagToCheck",
                " cover Default case ");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RbapbbTI_IsThisFaultSet(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = CANTATA_DEFAULT_VALUE;
    RbapbbTI_FaultType fault = CANTATA_DEFAULT_VALUE;
    int expected_returnValue = CANTATA_DEFAULT_VALUE;
    int returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = 1 ; 

     START_TEST("7: test_RbapbbTI_IsThisFaultSet",
                " cover Default case ");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{rbapbbti_GetFlagToCheck#default}");

            /* Call SUT */
            returnValue = RbapbbTI_IsThisFaultSet(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_S_INT(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RbapbbTI_IsOnlyThisFaultSet(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = CANTATA_DEFAULT_VALUE;
    RbapbbTI_FaultType fault = CANTATA_DEFAULT_VALUE;
    int expected_returnValue = CANTATA_DEFAULT_VALUE;
    int returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

     START_TEST("8: test_RbapbbTI_IsOnlyThisFaultSet",
                " cover Default case ");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{rbapbbti_GetFlagToCheck#default}");

            /* Call SUT */
            returnValue = RbapbbTI_IsOnlyThisFaultSet(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_S_INT(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_IsbuttonConnectedForFirstTime_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("9: test_RBAB_IsbuttonConnectedForFirstTime_1",
                "cover True case at line: 310");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBMICAPB_IsRevisionIDGreaterEqualThan#OK}"
                "{RBMICAPB_GetFirstAPBButtonConnectionStatus#0}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_IsbuttonConnectedForFirstTime)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_IsbuttonConnectedForFirstTime_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, RBAB_ButtonConnectedForFirstTime) = False ; 

     START_TEST("10: test_RBAB_IsbuttonConnectedForFirstTime_2",
                "cover True case at line: 314");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBMICAPB_IsRevisionIDGreaterEqualThan#OK}"
                "{RBMICAPB_GetFirstAPBButtonConnectionStatus#3}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_IsbuttonConnectedForFirstTime)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_IsbuttonConnectedForFirstTime_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("11: test_RBAB_IsbuttonConnectedForFirstTime_3",
                "cover True case at line: 318");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBMICAPB_IsRevisionIDGreaterEqualThan#OK}"
                "{RBMICAPB_GetFirstAPBButtonConnectionStatus#2}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_IsbuttonConnectedForFirstTime)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_IsbuttonConnectedForFirstTime_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, RBAB_ButtonConnectedForFirstTime) = False ; 

     START_TEST("12: test_RBAB_IsbuttonConnectedForFirstTime_4",
                "cover True case at line: 323");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBMICAPB_IsRevisionIDGreaterEqualThan#NG}"
                "{RBMICAPB_GetFirstAPBButtonConnectionStatus#0}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_IsbuttonConnectedForFirstTime)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_IsbuttonConnectedForFirstTime_5(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("13: test_RBAB_IsbuttonConnectedForFirstTime_5",
                "cover True case at line: 310");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBMICAPB_IsRevisionIDGreaterEqualThan#OK}"
                "{RBMICAPB_GetFirstAPBButtonConnectionStatus#0}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_IsbuttonConnectedForFirstTime)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_Safety_BnStateMonitoring_10ms_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, rbab_CurrentOutputEvaluation) = 0;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired) = 0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired) = True ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_continuoustransitionstatecounter_u8) = 0x00 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_vehiclemovingcounter_u16) = 0 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_counter_u16) = 0 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_transitionstate_initiallampcheckcounter_u16) = 0 ; 

     START_TEST("14: test_RBAB_Safety_BnStateMonitoring_10ms_1",
                "cover False case at line:  522"
                "cover True case at line:  532");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_GetInputLineDebug0#default}"
                "{RBAB_DigitalIO_GetInputLineDebug1#default}"
                "{Dem_GetEventFailed#default}"
                "{RBAB_State_IsFailureUnfiltered#NG}"
                "{RBAB_DebounceLineFault#default}"
                "{RBAB_ReportLineFault#default}"
                "{RBAB_IsbuttonConnectedForFirstTime#default}"
                "{RBMICAPB_IsRevisionIDGreaterEqualThan#default}"
                "{RBMICAPB_SetFirstAPBButtonConnectionDetected#default}"
                "{RBAB_ButtonLineGoodcheckRoutine#default}}");

            /* Call SUT */
            returnValue = RBAB_Safety_BnStateMonitoring_10ms();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_Safety_BnStateMonitoring_10ms_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, rbab_CurrentOutputEvaluation) = 0;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired) = 1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_continuoustransitionstatecounter_u8) = 0x00 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_vehiclemovingcounter_u16) = 0 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_counter_u16) = 0 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_transitionstate_initiallampcheckcounter_u16) = 0 ; 

     START_TEST("15: test_RBAB_Safety_BnStateMonitoring_10ms_2",
                "cover False case at line:  532, 558"
                "cover True case at line:  574 ");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_GetInputLineDebug0#default}"
                "{RBAB_DigitalIO_GetInputLineDebug1#default}"
                "{Dem_GetEventFailed#default}"
                "{RBAB_State_IsFailureUnfiltered#NG}"
                "{RBAB_DebounceLineFault#default}"
                "{RBAB_ReportLineFault#default}"
                "{RBAB_IsbuttonConnectedForFirstTime#NG}"
                "{RBMICAPB_IsRevisionIDGreaterEqualThan#NG}"
                "{RBMICAPB_SetFirstAPBButtonConnectionDetected#default}"
                "{RBAB_ButtonLineGoodcheckRoutine#OK}}");

            /* Call SUT */
            returnValue = RBAB_Safety_BnStateMonitoring_10ms();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_Safety_BnStateMonitoring_10ms_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, rbab_CurrentOutputEvaluation) = 0;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired) = 1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart) = False ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood) = False ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood) = False ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodatEnd) = False ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired) = False ; 

     START_TEST("16: test_RBAB_Safety_BnStateMonitoring_10ms_3",
                "cover False case at line:  570");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_GetInputLineDebug0#default}"
                "{RBAB_DigitalIO_GetInputLineDebug1#default}"
                "{Dem_GetEventFailed#NG}"
                "{RBAB_State_IsFailureUnfiltered#NG}"
                "{RBAB_DebounceLineFault#default}"
                "{RBAB_ReportLineFault#default}"
                "{RBAB_IsbuttonConnectedForFirstTime#NG}"
                "{RBMICAPB_IsRevisionIDGreaterEqualThan#NG}"
                "{RBMICAPB_SetFirstAPBButtonConnectionDetected#default}"
                "{RBAB_ButtonLineGoodcheckRoutine#OK}}");

            /* Call SUT */
            returnValue = RBAB_Safety_BnStateMonitoring_10ms();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_Safety_BnStateMonitoring_10ms_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, rbab_CurrentOutputEvaluation) = 0;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired) = 1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_continuoustransitionstatecounter_u8) = 0x00 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_vehiclemovingcounter_u16) = 0 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_counter_u16) = 0 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_transitionstate_initiallampcheckcounter_u16) = 0 ; 

     START_TEST("17: test_RBAB_Safety_BnStateMonitoring_10ms_4",
                "cover False case at line:  558");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_GetInputLineDebug0#default}"
                "{RBAB_DigitalIO_GetInputLineDebug1#default}"
                "{Dem_GetEventFailed#default}"
                "{RBAB_State_IsFailureUnfiltered#NG}"
                "{RBAB_DebounceLineFault#default}"
                "{RBAB_ReportLineFault#default}"
                "{RBAB_IsbuttonConnectedForFirstTime#NG}"
                "{RBMICAPB_IsRevisionIDGreaterEqualThan#OK}"
                "{RBMICAPB_SetFirstAPBButtonConnectionDetected#default}"
                "{RBAB_ButtonLineGoodcheckRoutine#OK}}");

            /* Call SUT */
            returnValue = RBAB_Safety_BnStateMonitoring_10ms();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_Safety_BnStateMonitoring_10ms_5(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, rbab_CurrentOutputEvaluation) = 0;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired) = 0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, g_GoodcheckRequired) = True ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_continuoustransitionstatecounter_u8) = 0x00 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_vehiclemovingcounter_u16) = 0 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_tranasitionstate_counter_u16) = 0 ; 
    ACCESS_EXPECTED_VARIABLE(RBAB_DigitalIO_Safety, APBBUT_transitionstate_initiallampcheckcounter_u16) = 0 ; 

     START_TEST("18: test_RBAB_Safety_BnStateMonitoring_10ms_5",
                "cover False case at line:  558");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_GetInputLineDebug0#default}"
                "{RBAB_DigitalIO_GetInputLineDebug1#default}"
                "{Dem_GetEventFailed#default}"
                "{RBAB_State_IsFailureUnfiltered#NG}"
                "{RBAB_DebounceLineFault#default}"
                "{RBAB_ReportLineFault#default}"
                "{RBAB_IsbuttonConnectedForFirstTime#default}"
                "{RBMICAPB_IsRevisionIDGreaterEqualThan#NG}"
                "{RBMICAPB_SetFirstAPBButtonConnectionDetected#default}"
                "{RBAB_ButtonLineGoodcheckRoutine#default}}");

            /* Call SUT */
            returnValue = RBAB_Safety_BnStateMonitoring_10ms();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_ButtonLineGoodcheckRoutine_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood)= 1;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood) = 1;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("19: test_RBAB_ButtonLineGoodcheckRoutine_1",
                "cover True case at line:  238, 242");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_CalcUnfilteredButtonState#NG}"
                "{RBAB_State_IsFailureUnfiltered#NG}"
                "{RBAB_State_CurrentPLFilteredState#NG}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_ButtonLineGoodcheckRoutine)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_ButtonLineGoodcheckRoutine_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood)= 1;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood) = 0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("20: test_RBAB_ButtonLineGoodcheckRoutine_2",
                "cover False case at line: 242");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_CalcUnfilteredButtonState#NG}"
                "{RBAB_State_IsFailureUnfiltered#NG}"
                "{RBAB_State_CurrentPLFilteredState#NG}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_ButtonLineGoodcheckRoutine)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_ButtonLineGoodcheckRoutine_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood)= 1;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood) = 1;

    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart) = 1;//0
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("21: test_RBAB_ButtonLineGoodcheckRoutine_3",
                "cover True case at line:  247, 249");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_CalcUnfilteredButtonState#NG}"
                "{RBAB_State_IsFailureUnfiltered#NG}"
                "RBAB_State_CurrentPLFilteredState#APBButtonState_lock"
                "{RBAB_State_CurrentPLFilteredState#APBButtonState_lock}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_ButtonLineGoodcheckRoutine)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_ButtonLineGoodcheckRoutine_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood)= 1;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood) = 1;

    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart) = 0;//0
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("22: test_RBAB_ButtonLineGoodcheckRoutine_4",
                "cover False case at line:  249");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_CalcUnfilteredButtonState#NG}"
                "{RBAB_State_IsFailureUnfiltered#NG}"
                "RBAB_State_CurrentPLFilteredState#APBButtonState_lock"
                "{RBAB_State_CurrentPLFilteredState#APBButtonState_lock}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_ButtonLineGoodcheckRoutine)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_ButtonLineGoodcheckRoutine_5(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood)= 1;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood) = 1;

    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart) = 0;//0

    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart) = 1; //0
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("23: test_RBAB_ButtonLineGoodcheckRoutine_5",
                "cover True case at line:  254, 256");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_CalcUnfilteredButtonState#NG}"
                "{RBAB_State_IsFailureUnfiltered#NG}"
                "RBAB_State_CurrentPLFilteredState#APBButtonState_release;"
                "RBAB_State_CurrentPLFilteredState#APBButtonState_release;"
                "{RBAB_State_CurrentPLFilteredState#APBButtonState_release}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_ButtonLineGoodcheckRoutine)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_ButtonLineGoodcheckRoutine_6(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood)= 1;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood) = 1;

    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart) = 0;//0

    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart) = 0; //0
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("24: test_RBAB_ButtonLineGoodcheckRoutine_6",
                "cover False case at line:   256");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_CalcUnfilteredButtonState#NG}"
                "{RBAB_State_IsFailureUnfiltered#NG}"
                "RBAB_State_CurrentPLFilteredState#APBButtonState_release;"
                "RBAB_State_CurrentPLFilteredState#APBButtonState_release;"
                "{RBAB_State_CurrentPLFilteredState#APBButtonState_release}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_ButtonLineGoodcheckRoutine)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_ButtonLineGoodcheckRoutine_7(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_LockStateFoundGood)= 1;
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_ReleaseStateFoundGood) = 1;

    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart) = 0;//0

    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodAtStart) = 0; //0
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = True ; 

     START_TEST("25: test_RBAB_ButtonLineGoodcheckRoutine_7",
                "cover True case at line:   261");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("RBAB_DigitalIO_CalcUnfilteredButtonState#NG;"
                "RBAB_State_IsFailureUnfiltered#NG;"
                "RBAB_State_CurrentPLFilteredState#APBButtonState_release;"
                "RBAB_State_CurrentPLFilteredState#APBButtonState_release;"
                "RBAB_State_CurrentPLFilteredState#APBButtonState_lock;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_ButtonLineGoodcheckRoutine)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_RBAB_ButtonLineGoodcheckRoutine_8(int doIt){
if (doIt) {
    /* Test case data declarations */
    boolean expected_returnValue = CANTATA_DEFAULT_VALUE;
    boolean returnValue;
    /* Set global data */
    initialise_global_data();
    ACCESS_VARIABLE(RBAB_DigitalIO_Safety, g_NeutralStateFoundGoodatEnd)  = 0;
    /* Set expected values for global data checks */
    initialise_expected_global_data();

     START_TEST("26: test_RBAB_ButtonLineGoodcheckRoutine_8",
                "cover False case at line:  266");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{{RBAB_DigitalIO_CalcUnfilteredButtonState#default}{RBAB_State_IsFailureUnfiltered#OK}{RBAB_State_CurrentPLFilteredState#default}}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, RBAB_ButtonLineGoodcheckRoutine)();

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_1(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 0;
    RbapbbTI_FaultType fault = RbapbbTI_ShortLowFault;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = 0x02 ; 

     START_TEST("27: test_rbapbbti_GetFlagToCheck_1",
                "cover True case at line:   645");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_2(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 0;
    RbapbbTI_FaultType fault = RbapbbTI_ShortHighFault;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = 0x01 ; 

     START_TEST("28: test_rbapbbti_GetFlagToCheck_2",
                "cover True case at line:   648");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_3(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 0;
    RbapbbTI_FaultType fault = 5;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

     START_TEST("29: test_rbapbbti_GetFlagToCheck_3",
                "cover True case at line:   651");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_4(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 1;
    RbapbbTI_FaultType fault = RbapbbTI_ShortLowFault;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = 0x08 ; 

     START_TEST("30: test_rbapbbti_GetFlagToCheck_4",
                "cover True case at line:   645");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_5(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 1;
    RbapbbTI_FaultType fault = RbapbbTI_ShortHighFault;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = 0x04 ; 

     START_TEST("31: test_rbapbbti_GetFlagToCheck_5",
                "cover True case at line:   648");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_6(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 1;
    RbapbbTI_FaultType fault = 5;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

     START_TEST("32: test_rbapbbti_GetFlagToCheck_6",
                "cover True case at line:   651");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_7(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 1;
    RbapbbTI_FaultType fault = RbapbbTI_ShortLowFault;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = 0x08 ; 

     START_TEST("33: test_rbapbbti_GetFlagToCheck_7",
                "cover True case at line:   645");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_8(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 1;
    RbapbbTI_FaultType fault = RbapbbTI_ShortHighFault;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = 0x04 ; 

     START_TEST("34: test_rbapbbti_GetFlagToCheck_8",
                "cover True case at line:   648");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_9(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 2;
    RbapbbTI_FaultType fault = 5;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

     START_TEST("35: test_rbapbbti_GetFlagToCheck_9",
                "cover True case at line:   651");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_10(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 2;
    RbapbbTI_FaultType fault = RbapbbTI_ShortLowFault;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = 0x20 ; 

     START_TEST("36: test_rbapbbti_GetFlagToCheck_10",
                "cover True case at line:   645");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_11(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 2;
    RbapbbTI_FaultType fault = RbapbbTI_ShortHighFault;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = 0x10 ; 

     START_TEST("37: test_rbapbbti_GetFlagToCheck_11",
                "cover True case at line:   648");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_12(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 3;
    RbapbbTI_FaultType fault = 5;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

     START_TEST("38: test_rbapbbti_GetFlagToCheck_12",
                "cover True case at line:   651");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_13(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 3;
    RbapbbTI_FaultType fault = RbapbbTI_ShortLowFault;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = 0x80 ; 

     START_TEST("39: test_rbapbbti_GetFlagToCheck_13",
                "cover True case at line:   645");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_14(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 3;
    RbapbbTI_FaultType fault = RbapbbTI_ShortHighFault;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();
    /*      Author: HC-UT40277C      */ 
    expected_returnValue = 0x40 ; 

     START_TEST("40: test_rbapbbti_GetFlagToCheck_14",
                "cover True case at line:   648");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
        END_CALLS();
    END_TEST();
}}

void test_rbapbbti_GetFlagToCheck_15(int doIt){
if (doIt) {
    /* Test case data declarations */
    int is_input = CANTATA_DEFAULT_VALUE;
    int pin_id = 4;
    RbapbbTI_FaultType fault = RbapbbTI_ShortHighFault;
    uint8 expected_returnValue = CANTATA_DEFAULT_VALUE;
    uint8 returnValue;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

     START_TEST("41: test_rbapbbti_GetFlagToCheck_15",
                "cover False case at line:   648");
        /* Expected Call Sequence  */
        EXPECTED_CALLS("{RB_AssertHandleWithCond#default}");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(RBAB_DigitalIO_Safety, rbapbbti_GetFlagToCheck)(is_input, pin_id, fault);

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

/* Stub for function RBAB_DigitalIO_CalcUnfilteredButtonState */
APBBUT_UnfilteredButtonState_t RBAB_DigitalIO_CalcUnfilteredButtonState(){
    APBBUT_UnfilteredButtonState_t returnValue;
    REGISTER_CALL("RBAB_DigitalIO_CalcUnfilteredButtonState");
    IF_INSTANCE("default"){
        return returnValue;
    }
    IF_INSTANCE("OK"){
        return 1;
    }
    IF_INSTANCE("NG"){
        return  0;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Stub for function RBAB_State_IsFailureUnfiltered */
boolean RBAB_State_IsFailureUnfiltered(){
    boolean returnValue;
    REGISTER_CALL("RBAB_State_IsFailureUnfiltered");

    IF_INSTANCE("default"){
        return 1;
    }
    IF_INSTANCE("OK"){
        return 1;
    }
    IF_INSTANCE("NG"){
        return  0;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Stub for function RBAB_State_CurrentPLFilteredState */
APBBUT_FilteredButtonState_t RBAB_State_CurrentPLFilteredState(){
    APBBUT_FilteredButtonState_t returnValue;
    REGISTER_CALL("RBAB_State_CurrentPLFilteredState");
    IF_INSTANCE("default"){
        return returnValue;
    }
    IF_INSTANCE("OK"){
        return 1;
    }
    IF_INSTANCE("NG"){
        return  0;
    }
    IF_INSTANCE("APBButtonState_release"){
        return  APBButtonState_release;
    }
    IF_INSTANCE("APBButtonState_neutral"){
        return  APBButtonState_neutral;
    }
    IF_INSTANCE("APBButtonState_lock"){
        return  APBButtonState_lock;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Stub for function RBMICAPB_IsRevisionIDGreaterEqualThan */
boolean RBMICAPB_IsRevisionIDGreaterEqualThan(RBMICAPB_RevisionID_t l_userID){
    boolean returnValue;
    REGISTER_CALL("RBMICAPB_IsRevisionIDGreaterEqualThan");
    IF_INSTANCE("default"){
        return 1;
    }
    IF_INSTANCE("OK"){
        return 1;
    }
    IF_INSTANCE("NG"){
        return  0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Stub for function RBMICAPB_GetFirstAPBButtonConnectionStatus */
uint8 RBMICAPB_GetFirstAPBButtonConnectionStatus(MicTaskType_N l_taskType){
    uint8 returnValue;
    REGISTER_CALL("RBMICAPB_GetFirstAPBButtonConnectionStatus");
    IF_INSTANCE("default"){
        return 1;
    }
    IF_INSTANCE("OK"){
        return 1;
    }
    IF_INSTANCE("NG"){
        return  0;
    }
    IF_INSTANCE("0"){
        return  0;
    }
    IF_INSTANCE("2"){
        return  2;
    }
    IF_INSTANCE("3"){
        return  3;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Stub for function RBAB_DigitalIO_GetInputLineDebug0 */
uint32 RBAB_DigitalIO_GetInputLineDebug0(){
    uint32 returnValue;
    REGISTER_CALL("RBAB_DigitalIO_GetInputLineDebug0");

    IF_INSTANCE("default"){
        return 1;
    }
    IF_INSTANCE("OK"){
        return 1;
    }
    IF_INSTANCE("NG"){
        return  0;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Stub for function RBAB_DigitalIO_GetInputLineDebug1 */
uint32 RBAB_DigitalIO_GetInputLineDebug1(){
    uint32 returnValue;
    REGISTER_CALL("RBAB_DigitalIO_GetInputLineDebug1");
    IF_INSTANCE("default"){
        return 1;
    }
    IF_INSTANCE("OK"){
        return 1;
    }
    IF_INSTANCE("NG"){
        return  0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Stub for function Dem_GetEventFailed */
Std_ReturnType Dem_GetEventFailed(Dem_EventIdType EventId,
                                  boolean * EventFailed){
    Std_ReturnType returnValue;
    REGISTER_CALL("Dem_GetEventFailed");
    IF_INSTANCE("default"){
        * EventFailed = 1;
        return 1;
    }
    IF_INSTANCE("OK"){
        * EventFailed = 1;
        return 1;
    }
    IF_INSTANCE("NG"){
        * EventFailed = 0;
        return  0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Stub for function RBAB_DebounceLineFault */
void RBAB_DebounceLineFault(int isFailed,
                            uint32 debug0,
                            uint32 debug1){
    REGISTER_CALL("RBAB_DebounceLineFault");
    IF_INSTANCE("default"){
        return ;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function RBAB_ReportLineFault */
void RBAB_ReportLineFault(int isFailed,
                          uint32 debug0,
                          uint32 debug1){
    REGISTER_CALL("RBAB_ReportLineFault");

    IF_INSTANCE("default"){
        return ;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function RBMICAPB_SetFirstAPBButtonConnectionDetected */
void RBMICAPB_SetFirstAPBButtonConnectionDetected(uint8 l_Value,
                                                  MicTaskType_N l_taskType){
    REGISTER_CALL("RBMICAPB_SetFirstAPBButtonConnectionDetected");
    IF_INSTANCE("default"){
        return ;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function RBAB_DigitalIO_EvalOutputLines */
void RBAB_DigitalIO_EvalOutputLines(uint8 * p_fault_store,
                                    int current_cycle){
    REGISTER_CALL("RBAB_DigitalIO_EvalOutputLines");
    IF_INSTANCE("default"){
        return ;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function RB_AssertHandleWithCond */
void RB_AssertHandleWithCond(_Bool isFailed,
                             const char * expr,
                             const char * file,
                             const char * func,
                             int line){
    REGISTER_CALL("RB_AssertHandleWithCond");

    IF_INSTANCE("default"){
        return ;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

#pragma qas cantata ignore on

/* Before-Wrapper for function RBAB_IsbuttonConnectedForFirstTime */
int BEFORE_RBAB_IsbuttonConnectedForFirstTime(){
    REGISTER_CALL("RBAB_IsbuttonConnectedForFirstTime");
    IF_INSTANCE("default"){
        return REPLACE_WRAPPER;
    }
    IF_INSTANCE("OK"){
        return REPLACE_WRAPPER;
    }
    IF_INSTANCE("NG"){
        return  REPLACE_WRAPPER;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return AFTER_WRAPPER;
}

/* After-Wrapper for function RBAB_IsbuttonConnectedForFirstTime */
boolean AFTER_RBAB_IsbuttonConnectedForFirstTime(boolean cppsm_return_value){
    boolean returnValue;

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return cppsm_return_value;
}

/* Replace-Wrapper for function RBAB_IsbuttonConnectedForFirstTime */
boolean REPLACE_RBAB_IsbuttonConnectedForFirstTime(){
    boolean returnValue;
    IF_INSTANCE("default"){
        return 1;
    }
    IF_INSTANCE("OK"){
        return 1;
    }
    IF_INSTANCE("NG"){
        return  0;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Before-Wrapper for function RBAB_ButtonLineGoodcheckRoutine */
int BEFORE_RBAB_ButtonLineGoodcheckRoutine(){
    REGISTER_CALL("RBAB_ButtonLineGoodcheckRoutine");

    IF_INSTANCE("default"){
        return REPLACE_WRAPPER;
    }
    IF_INSTANCE("OK"){
        return REPLACE_WRAPPER;
    }
    IF_INSTANCE("NG"){
        return  REPLACE_WRAPPER;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return AFTER_WRAPPER;
}

/* After-Wrapper for function RBAB_ButtonLineGoodcheckRoutine */
boolean AFTER_RBAB_ButtonLineGoodcheckRoutine(boolean cppsm_return_value){
    boolean returnValue;

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return cppsm_return_value;
}

/* Replace-Wrapper for function RBAB_ButtonLineGoodcheckRoutine */
boolean REPLACE_RBAB_ButtonLineGoodcheckRoutine(){
    boolean returnValue;
    IF_INSTANCE("default"){
        return 1;
    }
    IF_INSTANCE("OK"){
        return 1;
    }
    IF_INSTANCE("NG"){
        return  0;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

/* Before-Wrapper for function rbapbbti_GetFlagToCheck */
int BEFORE_rbapbbti_GetFlagToCheck(int is_input,
                                   int pin_id,
                                   RbapbbTI_FaultType fault){
    REGISTER_CALL("rbapbbti_GetFlagToCheck");
    IF_INSTANCE("default"){
        return REPLACE_WRAPPER;
    }
    IF_INSTANCE("OK"){
        return REPLACE_WRAPPER;
    }
    IF_INSTANCE("NG"){
        return  REPLACE_WRAPPER;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return AFTER_WRAPPER;
}

/* After-Wrapper for function rbapbbti_GetFlagToCheck */
uint8 AFTER_rbapbbti_GetFlagToCheck(uint8 cppsm_return_value,
                                    int is_input,
                                    int pin_id,
                                    RbapbbTI_FaultType fault){
    uint8 returnValue;

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return cppsm_return_value;
}

/* Replace-Wrapper for function rbapbbti_GetFlagToCheck */
uint8 REPLACE_rbapbbti_GetFlagToCheck(int is_input,
                                      int pin_id,
                                      RbapbbTI_FaultType fault){
    uint8 returnValue;
    IF_INSTANCE("default"){
        return 1;
    }
    IF_INSTANCE("OK"){
        return 1;
    }
    IF_INSTANCE("NG"){
        return  0;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return returnValue;
}

#pragma qas cantata ignore off
/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
