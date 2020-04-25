#ifndef RB_SERIALIZE_IMPL_H__
#define RB_SERIALIZE_IMPL_H__

/**
 * @ingroup RB_CBaseLib
 * @{
 *
 * \file
 * \brief Serialize RAM data to endianess independent byte stream
 *
 * Provides access functions to serialize and deserialize data to/from endianess independent
 * byte stream (byte stream is always in big endian style).
 *
 * \author Harald Scherer (CC/ECC6)
 * \date   Jul 2013
 *
 * \copyright
 * Robert Bosch GmbH reserves all rights even in the event of industrial property rights.
 * We reserve all rights of disposal such as copying and passing on to third parties.
 */


/* used interfaces */
#include <stdarg.h>
#include "cc_stddef.h"  // size_t


/* *************************************************************************** */
/* These defines act as a compile check:                                       */
/* If too many argumens are given compilation fails with:                      */
/* Example (from GCC):                                                         */
/* error: pasting "RB_DESERIALIZE_IMPL" and "&" does not give a valid          */
/*        preprocessing token                                                  */
/* *************************************************************************** */
#define RB_SERIALIZE_NUM_DATA_01ARGS  1
#define RB_SERIALIZE_NUM_DATA_02ARGS  2
#define RB_SERIALIZE_NUM_DATA_03ARGS  3
#define RB_SERIALIZE_NUM_DATA_04ARGS  4
#define RB_SERIALIZE_NUM_DATA_05ARGS  5
#define RB_SERIALIZE_NUM_DATA_06ARGS  6
#define RB_SERIALIZE_NUM_DATA_07ARGS  7
#define RB_SERIALIZE_NUM_DATA_08ARGS  8
#define RB_SERIALIZE_NUM_DATA_09ARGS  9
#define RB_SERIALIZE_NUM_DATA_10ARGS 10
#define RB_SERIALIZE_NUM_DATA_11ARGS 11
#define RB_SERIALIZE_NUM_DATA_12ARGS 12
#define RB_SERIALIZE_NUM_DATA_13ARGS 13
#define RB_SERIALIZE_NUM_DATA_14ARGS 14
#define RB_SERIALIZE_NUM_DATA_15ARGS 15
#define RB_SERIALIZE_NUM_DATA_16ARGS 16
#define RB_SERIALIZE_NUM_DATA_17ARGS 17
#define RB_SERIALIZE_NUM_DATA_18ARGS 18
#define RB_SERIALIZE_NUM_DATA_19ARGS 19
#define RB_SERIALIZE_NUM_DATA_20ARGS 20
#define RB_SERIALIZE_NUM_DATA_21ARGS 21
#define RB_SERIALIZE_NUM_DATA_22ARGS 22
#define RB_SERIALIZE_NUM_DATA_23ARGS 23
#define RB_SERIALIZE_NUM_DATA_24ARGS 24
#define RB_SERIALIZE_NUM_DATA_25ARGS 25
#define RB_SERIALIZE_NUM_DATA_26ARGS 26
#define RB_SERIALIZE_NUM_DATA_27ARGS 27
#define RB_SERIALIZE_NUM_DATA_28ARGS 28


/** Helper macro to concatenate two macro identifiers */
#define RB_SERIALIZE_CAT_IMPL(a, b)  a##b
/** Helper macro to concatenate two macro identifiers, indirection for macro expansion */
#define RB_SERIALIZE_CAT(a, b)  RB_SERIALIZE_CAT_IMPL(a, b)


/* -------------------------------------------------------------------------- */
/* QAC|DEV xxxx: Macro defined with variable argument list                    */
/* -------------------------------------------------------------------------- */
/* Special use case to serialize and deserialize data to non-volatile memory  */
/* -------------------------------------------------------------------------- */
#ifdef __QAC__
  #pragma PRQA_MESSAGES_OFF 1030
#endif


/**
 * \brief Internal helper macro to count number of varadic parameters (ellipsis)
 *
 * This macro makes only sense in combination with macro RB_SERIALIZE_COUNT_ARGS(...).
 * Don't call this macro directly.
 */
#define RB_SERIALIZE_COUNT_ARGS_INTERNAL( \
          p01, p02, p03, p04, p05, p06, p07, p08, p09, p10, \
          p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, \
          p21, p22, p23, p24, p25, p26, p27, p28,           \
          count_value, ...) \
          RB_SERIALIZE_CAT(count_value,ARGS)

/**
 * \brief Helper macro to count number of varadic parameters (ellipsis)
 *
 * This macro works in combination with the macro RB_SERIALIZE_COUNT_ARGS_INTERNAL().
 * Call this macro to return the count of the ellipsis which is the amount of given parameters
 * concatenated with ARGS e.g. _07ARGS.
 *
 * @param ... the ellipsis must contain at least one parameter and max. 28 parameters
 *
 * @return (int) number of parameters
 */
// count down to _00 that ellipsis is not empty in macro RB_SERIALIZE_COUNT_ARGS_INTERNAL()
// when __VA_ARGS__ contains only one argument
// C90 Standard compliance: arguments in total must not exceed 31:
// 28 data args + destination + num_serialize + num_args
#define RB_SERIALIZE_COUNT_ARGS(...) \
          RB_SERIALIZE_COUNT_ARGS_INTERNAL( \
            __VA_ARGS__, \
                      _28, _27, _26, _25, _24, _23, _22, _21, \
            _20, _19, _18, _17, _16, _15, _14, _13, _12, _11, \
            _10, _09, _08, _07, _06, _05, _04, _03, _02, _01, \
            _00                                               \
          )


/* -------------------------------------------------------------------------------- */
/* QAC|DEV xxxx: Functions shall not be defined with a variable number of arguments */
/* -------------------------------------------------------------------------------- */
/* Special use case to serialize and deserialize data to non-volatile memory        */
/* -------------------------------------------------------------------------------- */
/* PRQA S 5069 20 */ /* Suppress QAC message 5069 for next 20 lines                 */
/* -------------------------------------------------------------------------------- */

/**
 * \brief Serialize RAM data to endianess independent byte stream (internal)
 *
 * ATTENTION: Do never use this interface directly!
 * Internally used to realize the interface RB_Serialize()
 */
extern void RB_Serialize_Impl(void* destination, size_t num_serialize, size_t num_data, ...);

/**
 * \brief Deserialize endianess independent byte stream to RAM variables (internal)
 *
 * ATTENTION: Do never use this interface directly!
 * Internally used to realize the interface RB_Deserialize()
 */
extern void RB_Deserialize_Impl(const void* source, size_t num_deserialize, size_t num_data, ...);



/** Internal (overloaded) macro for serialization of 1 data (parameters) */
#define RB_SERIALIZE_IMPL_01ARGS( \
          destination, num_serialize, num_args, \
          data01) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01)

/** Internal (overloaded) macro for serialization of 2 data (parameters) */
#define RB_SERIALIZE_IMPL_02ARGS( \
          destination, num_serialize, num_args, \
          data01, data02) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02)

/** Internal (overloaded) macro for serialization of 3 data (parameters) */
#define RB_SERIALIZE_IMPL_03ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03)

/** Internal (overloaded) macro for serialization of 4 data (parameters) */
#define RB_SERIALIZE_IMPL_04ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04)

/** Internal (overloaded) macro for serialization of 5 data (parameters) */
#define RB_SERIALIZE_IMPL_05ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05)

/** Internal (overloaded) macro for serialization of 6 data (parameters) */
#define RB_SERIALIZE_IMPL_06ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06)

/** Internal (overloaded) macro for serialization of 7 data (parameters) */
#define RB_SERIALIZE_IMPL_07ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07)

/** Internal (overloaded) macro for serialization of 8 data (parameters) */
#define RB_SERIALIZE_IMPL_08ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08)

/** Internal (overloaded) macro for serialization of 9 data (parameters) */
#define RB_SERIALIZE_IMPL_09ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09)

/** Internal (overloaded) macro for serialization of 10 data (parameters) */
#define RB_SERIALIZE_IMPL_10ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10)

/** Internal (overloaded) macro for serialization of 11 data (parameters) */
#define RB_SERIALIZE_IMPL_11ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11)

/** Internal (overloaded) macro for serialization of 12 data (parameters) */
#define RB_SERIALIZE_IMPL_12ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12)

/** Internal (overloaded) macro for serialization of 13 data (parameters) */
#define RB_SERIALIZE_IMPL_13ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13)

/** Internal (overloaded) macro for serialization of 14 data (parameters) */
#define RB_SERIALIZE_IMPL_14ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14)

/** Internal (overloaded) macro for serialization of 15 data (parameters) */
#define RB_SERIALIZE_IMPL_15ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15)

/** Internal (overloaded) macro for serialization of 16 data (parameters) */
#define RB_SERIALIZE_IMPL_16ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16)

/** Internal (overloaded) macro for serialization of 17 data (parameters) */
#define RB_SERIALIZE_IMPL_17ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17)

/** Internal (overloaded) macro for serialization of 18 data (parameters) */
#define RB_SERIALIZE_IMPL_18ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17, data18) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17, sizeof(data18), data18)

/** Internal (overloaded) macro for serialization of 19 data (parameters) */
#define RB_SERIALIZE_IMPL_19ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17, data18, data19) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17, sizeof(data18), data18, \
              sizeof(data19), data19)

/** Internal (overloaded) macro for serialization of 20 data (parameters) */
#define RB_SERIALIZE_IMPL_20ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17, data18, data19, data20) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17, sizeof(data18), data18, \
              sizeof(data19), data19, sizeof(data20), data20)

/** Internal (overloaded) macro for serialization of 21 data (parameters) */
#define RB_SERIALIZE_IMPL_21ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17, data18, data19, data20, \
          data21) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17, sizeof(data18), data18, \
              sizeof(data19), data19, sizeof(data20), data20, sizeof(data21), data21)

/** Internal (overloaded) macro for serialization of 22 data (parameters) */
#define RB_SERIALIZE_IMPL_22ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17, data18, data19, data20, \
          data21, data22) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17, sizeof(data18), data18, \
              sizeof(data19), data19, sizeof(data20), data20, sizeof(data21), data21, \
              sizeof(data22), data22)

/** Internal (overloaded) macro for serialization of 23 data (parameters) */
#define RB_SERIALIZE_IMPL_23ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17, data18, data19, data20, \
          data21, data22, data23) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17, sizeof(data18), data18, \
              sizeof(data19), data19, sizeof(data20), data20, sizeof(data21), data21, \
              sizeof(data22), data22, sizeof(data23), data23)

/** Internal (overloaded) macro for serialization of 24 data (parameters) */
#define RB_SERIALIZE_IMPL_24ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17, data18, data19, data20, \
          data21, data22, data23, data24) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17, sizeof(data18), data18, \
              sizeof(data19), data19, sizeof(data20), data20, sizeof(data21), data21, \
              sizeof(data22), data22, sizeof(data23), data23, sizeof(data24), data24)

/** Internal (overloaded) macro for serialization of 25 data (parameters) */
#define RB_SERIALIZE_IMPL_25ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17, data18, data19, data20, \
          data21, data22, data23, data24, data25) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17, sizeof(data18), data18, \
              sizeof(data19), data19, sizeof(data20), data20, sizeof(data21), data21, \
              sizeof(data22), data22, sizeof(data23), data23, sizeof(data24), data24, \
              sizeof(data25), data25)

/** Internal (overloaded) macro for serialization of 26 data (parameters) */
#define RB_SERIALIZE_IMPL_26ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17, data18, data19, data20, \
          data21, data22, data23, data24, data25, data26) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17, sizeof(data18), data18, \
              sizeof(data19), data19, sizeof(data20), data20, sizeof(data21), data21, \
              sizeof(data22), data22, sizeof(data23), data23, sizeof(data24), data24, \
              sizeof(data25), data25, sizeof(data26), data26)

/** Internal (overloaded) macro for serialization of 27 data (parameters) */
#define RB_SERIALIZE_IMPL_27ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17, data18, data19, data20, \
          data21, data22, data23, data24, data25, data26, data27) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17, sizeof(data18), data18, \
              sizeof(data19), data19, sizeof(data20), data20, sizeof(data21), data21, \
              sizeof(data22), data22, sizeof(data23), data23, sizeof(data24), data24, \
              sizeof(data25), data25, sizeof(data26), data26, sizeof(data27), data27)

/** Internal (overloaded) macro for serialization of 28 data (parameters) */
#define RB_SERIALIZE_IMPL_28ARGS( \
          destination, num_serialize, num_args, \
          data01, data02, data03, data04, data05, data06, data07, data08, data09, data10, \
          data11, data12, data13, data14, data15, data16, data17, data18, data19, data20, \
          data21, data22, data23, data24, data25, data26, data27, data28) \
            RB_Serialize_Impl(destination, num_serialize, num_args, \
              sizeof(data01), data01, sizeof(data02), data02, sizeof(data03), data03, \
              sizeof(data04), data04, sizeof(data05), data05, sizeof(data06), data06, \
              sizeof(data07), data07, sizeof(data08), data08, sizeof(data09), data09, \
              sizeof(data10), data10, sizeof(data11), data11, sizeof(data12), data12, \
              sizeof(data13), data13, sizeof(data14), data14, sizeof(data15), data15, \
              sizeof(data16), data16, sizeof(data17), data17, sizeof(data18), data18, \
              sizeof(data19), data19, sizeof(data20), data20, sizeof(data21), data21, \
              sizeof(data22), data22, sizeof(data23), data23, sizeof(data24), data24, \
              sizeof(data25), data25, sizeof(data26), data26, sizeof(data27), data27, \
              sizeof(data28), data28)


/* *************************************************************************** */
/* RB_DESERIALIZE_IMPL_xxARGS macros                                           */
/* *************************************************************************** */

/** Internal (overloaded) macro for deserialization of 1 data (parameters) */
#define RB_DESERIALIZE_IMPL_01ARGS( \
          source, num_deserialize, num_args, \
          p_data01) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01)

/** Internal (overloaded) macro for deserialization of 2 data (parameters) */
#define RB_DESERIALIZE_IMPL_02ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02)

/** Internal (overloaded) macro for deserialization of 3 data (parameters) */
#define RB_DESERIALIZE_IMPL_03ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03)

/** Internal (overloaded) macro for deserialization of 4 data (parameters) */
#define RB_DESERIALIZE_IMPL_04ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04)

/** Internal (overloaded) macro for deserialization of 5 data (parameters) */
#define RB_DESERIALIZE_IMPL_05ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05)

/** Internal (overloaded) macro for deserialization of 6 data (parameters) */
#define RB_DESERIALIZE_IMPL_06ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06)

/** Internal (overloaded) macro for deserialization of 7 data (parameters) */
#define RB_DESERIALIZE_IMPL_07ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07)

/** Internal (overloaded) macro for deserialization of 8 data (parameters) */
#define RB_DESERIALIZE_IMPL_08ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08)

/** Internal (overloaded) macro for deserialization of 9 data (parameters) */
#define RB_DESERIALIZE_IMPL_09ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09)

/** Internal (overloaded) macro for deserialization of 10 data (parameters) */
#define RB_DESERIALIZE_IMPL_10ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10)

/** Internal (overloaded) macro for deserialization of 11 data (parameters) */
#define RB_DESERIALIZE_IMPL_11ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11)

/** Internal (overloaded) macro for deserialization of 12 data (parameters) */
#define RB_DESERIALIZE_IMPL_12ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12)

/** Internal (overloaded) macro for deserialization of 13 data (parameters) */
#define RB_DESERIALIZE_IMPL_13ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13)

/** Internal (overloaded) macro for deserialization of 14 data (parameters) */
#define RB_DESERIALIZE_IMPL_14ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14)

/** Internal (overloaded) macro for deserialization of 15 data (parameters) */
#define RB_DESERIALIZE_IMPL_15ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15)

/** Internal (overloaded) macro for deserialization of 16 data (parameters) */
#define RB_DESERIALIZE_IMPL_16ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16)

/** Internal (overloaded) macro for deserialization of 17 data (parameters) */
#define RB_DESERIALIZE_IMPL_17ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17)

/** Internal (overloaded) macro for deserialization of 18 data (parameters) */
#define RB_DESERIALIZE_IMPL_18ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17, p_data18) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17, sizeof(*(p_data18)), p_data18)

/** Internal (overloaded) macro for deserialization of 19 data (parameters) */
#define RB_DESERIALIZE_IMPL_19ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17, p_data18, p_data19) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17, sizeof(*(p_data18)), p_data18, \
              sizeof(*(p_data19)), p_data19)

/** Internal (overloaded) macro for deserialization of 20 data (parameters) */
#define RB_DESERIALIZE_IMPL_20ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17, p_data18, p_data19, p_data20) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17, sizeof(*(p_data18)), p_data18, \
              sizeof(*(p_data19)), p_data19, sizeof(*(p_data20)), p_data20)

/** Internal (overloaded) macro for deserialization of 21 data (parameters) */
#define RB_DESERIALIZE_IMPL_21ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17, p_data18, p_data19, p_data20, \
          p_data21) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17, sizeof(*(p_data18)), p_data18, \
              sizeof(*(p_data19)), p_data19, sizeof(*(p_data20)), p_data20, sizeof(*(p_data21)), p_data21)

/** Internal (overloaded) macro for deserialization of 22 data (parameters) */
#define RB_DESERIALIZE_IMPL_22ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17, p_data18, p_data19, p_data20, \
          p_data21, p_data22) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17, sizeof(*(p_data18)), p_data18, \
              sizeof(*(p_data19)), p_data19, sizeof(*(p_data20)), p_data20, sizeof(*(p_data21)), p_data21, \
              sizeof(*(p_data22)), p_data22)

/** Internal (overloaded) macro for deserialization of 23 data (parameters) */
#define RB_DESERIALIZE_IMPL_23ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17, p_data18, p_data19, p_data20, \
          p_data21, p_data22, p_data23) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17, sizeof(*(p_data18)), p_data18, \
              sizeof(*(p_data19)), p_data19, sizeof(*(p_data20)), p_data20, sizeof(*(p_data21)), p_data21, \
              sizeof(*(p_data22)), p_data22, sizeof(*(p_data23)), p_data23)

/** Internal (overloaded) macro for deserialization of 24 data (parameters) */
#define RB_DESERIALIZE_IMPL_24ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17, p_data18, p_data19, p_data20, \
          p_data21, p_data22, p_data23, p_data24) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17, sizeof(*(p_data18)), p_data18, \
              sizeof(*(p_data19)), p_data19, sizeof(*(p_data20)), p_data20, sizeof(*(p_data21)), p_data21, \
              sizeof(*(p_data22)), p_data22, sizeof(*(p_data23)), p_data23, sizeof(*(p_data24)), p_data24)

/** Internal (overloaded) macro for deserialization of 25 data (parameters) */
#define RB_DESERIALIZE_IMPL_25ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17, p_data18, p_data19, p_data20, \
          p_data21, p_data22, p_data23, p_data24, p_data25) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17, sizeof(*(p_data18)), p_data18, \
              sizeof(*(p_data19)), p_data19, sizeof(*(p_data20)), p_data20, sizeof(*(p_data21)), p_data21, \
              sizeof(*(p_data22)), p_data22, sizeof(*(p_data23)), p_data23, sizeof(*(p_data24)), p_data24, \
              sizeof(*(p_data25)), p_data25)

/** Internal (overloaded) macro for deserialization of 26 data (parameters) */
#define RB_DESERIALIZE_IMPL_26ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17, p_data18, p_data19, p_data20, \
          p_data21, p_data22, p_data23, p_data24, p_data25, p_data26) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17, sizeof(*(p_data18)), p_data18, \
              sizeof(*(p_data19)), p_data19, sizeof(*(p_data20)), p_data20, sizeof(*(p_data21)), p_data21, \
              sizeof(*(p_data22)), p_data22, sizeof(*(p_data23)), p_data23, sizeof(*(p_data24)), p_data24, \
              sizeof(*(p_data25)), p_data25, sizeof(*(p_data26)), p_data26)

/** Internal (overloaded) macro for deserialization of 27 data (parameters) */
#define RB_DESERIALIZE_IMPL_27ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17, p_data18, p_data19, p_data20, \
          p_data21, p_data22, p_data23, p_data24, p_data25, p_data26, p_data27) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17, sizeof(*(p_data18)), p_data18, \
              sizeof(*(p_data19)), p_data19, sizeof(*(p_data20)), p_data20, sizeof(*(p_data21)), p_data21, \
              sizeof(*(p_data22)), p_data22, sizeof(*(p_data23)), p_data23, sizeof(*(p_data24)), p_data24, \
              sizeof(*(p_data25)), p_data25, sizeof(*(p_data26)), p_data26, sizeof(*(p_data27)), p_data27)

/** Internal (overloaded) macro for deserialization of 28 data (parameters) */
#define RB_DESERIALIZE_IMPL_28ARGS( \
          source, num_deserialize, num_args, \
          p_data01, p_data02, p_data03, p_data04, p_data05, p_data06, p_data07, p_data08, p_data09, p_data10, \
          p_data11, p_data12, p_data13, p_data14, p_data15, p_data16, p_data17, p_data18, p_data19, p_data20, \
          p_data21, p_data22, p_data23, p_data24, p_data25, p_data26, p_data27, p_data28) \
            RB_Deserialize_Impl(source, num_deserialize, num_args, \
              sizeof(*(p_data01)), p_data01, sizeof(*(p_data02)), p_data02, sizeof(*(p_data03)), p_data03, \
              sizeof(*(p_data04)), p_data04, sizeof(*(p_data05)), p_data05, sizeof(*(p_data06)), p_data06, \
              sizeof(*(p_data07)), p_data07, sizeof(*(p_data08)), p_data08, sizeof(*(p_data09)), p_data09, \
              sizeof(*(p_data10)), p_data10, sizeof(*(p_data11)), p_data11, sizeof(*(p_data12)), p_data12, \
              sizeof(*(p_data13)), p_data13, sizeof(*(p_data14)), p_data14, sizeof(*(p_data15)), p_data15, \
              sizeof(*(p_data16)), p_data16, sizeof(*(p_data17)), p_data17, sizeof(*(p_data18)), p_data18, \
              sizeof(*(p_data19)), p_data19, sizeof(*(p_data20)), p_data20, sizeof(*(p_data21)), p_data21, \
              sizeof(*(p_data22)), p_data22, sizeof(*(p_data23)), p_data23, sizeof(*(p_data24)), p_data24, \
              sizeof(*(p_data25)), p_data25, sizeof(*(p_data26)), p_data26, sizeof(*(p_data27)), p_data27, \
              sizeof(*(p_data28)), p_data28)



/**
 * \brief Provide overload functionality for RB_SERIALIZE_IMPL_xxARGS() macros
 *
 * This variadic macro (as seen by the ellipsis) is mapped to fixed parameter
 * function macros e.g RB_SERIALIZE_IMPL_04ARGS().
 * This mapping is realized with the macro RB_SERIALIZE_COUNT_ARGS(__VA_ARGS__):
 * the result, an identifier within _01ARGS and _28ARGS, is concatenated with
 * RB_SERIALIZE_IMPL to e.g.
 * RB_SERIALIZE_IMPL_04ARGS(destination, num_serialize, data01, data02, data03, data04).
 * The parameters data01 to data04 are passed with the parameter __VA_ARGS__.
 */
#define RB_SERIALIZE_IMPL_OVERLOAD(destination, num_serialize, ...) \
          RB_SERIALIZE_CAT(RB_SERIALIZE_IMPL, RB_SERIALIZE_COUNT_ARGS(__VA_ARGS__)) \
            (destination, \
             num_serialize, \
             RB_SERIALIZE_CAT(RB_SERIALIZE_NUM_DATA, RB_SERIALIZE_COUNT_ARGS(__VA_ARGS__)), \
             __VA_ARGS__)

            
/**
 * \brief Provide overload functionality for RB_DESERIALIZE_IMPL_xxARGS() macros
 *
 * This variadic macro (as seen by the ellipsis) is mapped to fixed parameter
 * function macros e.g RB_DESERIALIZE_IMPL_04ARGS().
 * This mapping is realized with the macro RB_SERIALIZE_COUNT_ARGS(__VA_ARGS__):
 * the result, an identifier within _01ARGS and _28ARGS, is concatenated with
 * RB_DESERIALIZE_IMPL to e.g.
 * RB_DESERIALIZE_IMPL_04ARGS(source, num_deserialize, p_data01, p_data02, p_data03, p_data04).
 * The parameters p_data01 to p_data04 are passed with the parameter __VA_ARGS__.
 */
#define RB_DESERIALIZE_IMPL_OVERLOAD(source, num_deserialize, ...) \
          RB_SERIALIZE_CAT(RB_DESERIALIZE_IMPL, RB_SERIALIZE_COUNT_ARGS(__VA_ARGS__)) \
            (source, \
             num_deserialize, \
             RB_SERIALIZE_CAT(RB_SERIALIZE_NUM_DATA, RB_SERIALIZE_COUNT_ARGS(__VA_ARGS__)), \
             __VA_ARGS__)


#ifdef __QAC__
  #pragma PRQA_MESSAGES_ON 1030
#endif


/** @} */
/* End ingroup RB_CBaseLib */

#endif /* End of multiple include protection */
