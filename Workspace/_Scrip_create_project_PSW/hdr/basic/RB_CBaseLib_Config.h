#ifndef RB_CBASELIB_CONFIG_H__
#define RB_CBASELIB_CONFIG_H__

/**
 * @ingroup RB_CBaseLib
 * @{
 *
 * \file
 * \brief Configuration of C Base Library
 *
 * Configuration like used compiler, target processor, ...
 *
 * \copyright
 * Robert Bosch GmbH reserves all rights even in the event of industrial property rights.
 * We reserve all rights of disposal such as copying and passing on to third parties.
 */

 

/* TODO: Replace Gen9 MTC defines/HSWRTRT by macros provided from compiler itself */
#if (    defined(IS_VS6_COMPILER) || defined(IS_VS2008_COMPILER)  || defined(IS_VS2010_COMPILER) \
      || defined(HSWRTRT) \
    )
  #define CC_COMPILER_MSVS 1
#else
  #define CC_COMPILER_MSVS 0
#endif

#if (defined __ghs__)
  #define CC_COMPILER_GHS 1
#else
  #define CC_COMPILER_GHS 0
#endif

#if (defined __GNUC__)
  #define CC_COMPILER_GCC 1
#else
  #define CC_COMPILER_GCC 0
#endif

#if (CC_COMPILER_GCC && \
     ( (__GNUC__ == 4) && (__GNUC_MINOR__ ==4) ))
  #define CC_COMPILER_GCC_VERSION_4_4_x  1
#else
  #define CC_COMPILER_GCC_VERSION_4_4_x  0
#endif



/* Target processor is used: series SW, use resource optimized version */
//#define CC_ASSERT_FAILURE_HANDLING_WITH_PROGRAM_COUNTER 1
#define CC_ASSERT_FAILURE_HANDLING_WITH_PROGRAM_COUNTER 0


/* This setting is target usage dependent:
 *  - does the target usage wants to use the standarad assert or
 *  - does it provide a usage specific implementation of the failed assertion
 */
/* TODO: NTSIMULATION will be not set any longer in Evo17, so a ASW simulation specific define
 * must be provided
 */
#if 0 // Gen9 dependent setting
#if(    defined(DNCSIM) \
     || ( defined(NTSIMULATION)  &&  !defined(DSW_ONLY) ) \
     || defined(__GNUC__) \
     || (defined(AESIM) && !defined(__linux__) ) \
     || defined(__QAC__) \
   )
#  define CC_INCLUDE_STD_ASSERT 1
#else
#  define CC_INCLUDE_STD_ASSERT 0
#endif
#endif // #if 0

#define CC_INCLUDE_STD_ASSERT 0



#if (CC_COMPILER_GHS)
  #define CC_ABLE_TO_INCLUDE_STD_HEADERS 0
#else
  #define CC_ABLE_TO_INCLUDE_STD_HEADERS 1
#endif


#if (CC_ABLE_TO_INCLUDE_STD_HEADERS || defined(__QAC__))
  #define CC_INCLUDE_STD_LIMITS 1
#else
  #define CC_INCLUDE_STD_LIMITS 0
#endif

#if (CC_ABLE_TO_INCLUDE_STD_HEADERS || defined(__QAC__))
  #define CC_INCLUDE_STD_DEF 1
#else
  #define CC_INCLUDE_STD_DEF 0
#endif

#if (CC_ABLE_TO_INCLUDE_STD_HEADERS && !( defined(AESIM) && defined(IS_GCC_X86_64_LINUX_COMPILER) ))
  #define CC_INCLUDE_STD_IO 1
#else
  #define CC_INCLUDE_STD_IO 0
#endif

#if (CC_ABLE_TO_INCLUDE_STD_HEADERS && !( defined(AESIM) && defined(IS_GCC_X86_64_LINUX_COMPILER) ) ) \
      || defined(__QAC__)
  #define CC_INCLUDE_STD_STRING 1
#else
  #define CC_INCLUDE_STD_STRING 0
#endif


/* TMS470 (TODO: Greenhills?) and others (including QAC) without
 *            a)stdbool abilable
 *            b)bool as build in type
 */
/* MS VS has bool type built-in */
#if (CC_ABLE_TO_INCLUDE_STD_HEADERS && (!defined(__QAC__)) && (!CC_COMPILER_MSVS))
  #define CC_INCLUDE_STD_BOOL 1
  #define CC_DEFINE_STD_BOOL 0
#else
  #define CC_INCLUDE_STD_BOOL 0

  #if CC_COMPILER_MSVS
    #define CC_DEFINE_STD_BOOL 0
  #else
    #define CC_DEFINE_STD_BOOL 1
  #endif
#endif


/** @} */
/* End ingroup RB_CBaseLib */

#endif /* End of multiple include protection */
