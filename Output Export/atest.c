void test_(){
    struct CPPTH_LOOP_INPUT_STRUCT {
        char* name;                 // The name parameter to START_TEST
        char* description;          // The description parameter to START_TEST
        char* expected_calls;       // The parameter to EXPECTED_CALLS
        int execute;                // Whether the particular test should be run
        /* Test case data declarations */

    };
    /* Import external data declarations */
    #include "Template_test_.h"

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST_LOOP();
        /* Expected Call Sequence  */
        EXPECTED_CALLS(CURRENT_TEST.expected_calls);
            /* Set global data */
            initialise_global_data();

            /* Set expected values for global data checks */
            initialise_expected_global_data();
            /* Call SUT */

            /* Test case checks */
        END_CALLS();
    END_TEST_LOOP();
}

void test_RBAPLPLANT_ResetCSAIInterface(){
    struct CPPTH_LOOP_INPUT_STRUCT {
        char* name;                 // The name parameter to START_TEST
        char* description;          // The description parameter to START_TEST
        char* expected_calls;       // The parameter to EXPECTED_CALLS
        int execute;                // Whether the particular test should be run
        /* Test case data declarations */

        int lexpected_RBAPLPLANT_WdbiErrorCodeResponse;
        int lexpected_RBAPLPLANT_WdbiErrorCodeOpenSession;
    };
    /* Import external data declarations */
    #include "001_test_RBAPLPLANT_ResetCSAIInterface.h"

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST_LOOP();
        /* Expected Call Sequence  */
        EXPECTED_CALLS(CURRENT_TEST.expected_calls);
            /* Set global data */
            initialise_global_data();

            /* Set expected values for global data checks */
            initialise_expected_global_data();
            if(CURRENT_TEST.lexpected_RBAPLPLANT_WdbiErrorCodeResponse != 0x55555555){
                expected_RBAPLPLANT_WdbiErrorCodeResponse = CURRENT_TEST.lexpected_RBAPLPLANT_WdbiErrorCodeResponse;
            }
            if(CURRENT_TEST.lexpected_RBAPLPLANT_WdbiErrorCodeOpenSession != 0x55555555){
                expected_RBAPLPLANT_WdbiErrorCodeOpenSession = CURRENT_TEST.lexpected_RBAPLPLANT_WdbiErrorCodeOpenSession;
            }
            /* Call SUT */

            /* Test case checks */
        END_CALLS();
    END_TEST_LOOP();
}

