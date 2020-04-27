/*<BASDKey>
 **********************************************************************************************************************
 *
 * COPYRIGHT RESERVED, 2011 Robert Bosch GmbH. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Domain____:BASD$
 * $Namespace_:\Comp\Compiler$
 * $Class_____:H$
 * $Name______:Compiler$
 * $Variant___:AR40_GREENHILLS.1.0.0$
 * $Revision__:0$
 **********************************************************************************************************************
</BASDKey>*/


/* COMPILER047: */
#ifndef COMPILER_H
#define COMPILER_H

/*
 **********************************************************************************************************************
 * Based on AUTOSAR_SWS_CompilerAbstraction.pdf; Document Version 3.1.0; AR4.0; Rev 2
 **********************************************************************************************************************
 */

/* COMPILER052 */
#include "Compiler_Cfg.h"

/*
 **********************************************************************************************************************
 * Types and Defines
 **********************************************************************************************************************
 */

/* COMPILER043: */
#define COMPILER_VENDOR_ID 6
#define COMPILER_SW_MAJOR_VERSION 1
#define COMPILER_SW_MINOR_VERSION 0
#define COMPILER_SW_PATCH_VERSION 0
#define COMPILER_AR_RELEASE_MAJOR_VERSION 4
#define COMPILER_AR_RELEASE_MINOR_VERSION 0
#define COMPILER_AR_RELEASE_REVISION_VERSION 2

/*
 **********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************
 */


/* COMPILER046: Memory class AUTOMATIC is provided as empty definition for local declarations                        */
#define AUTOMATIC

/* COMPILER059: This memory class shall be used within type definitions, where no memory qualifier can be specified  */
#define TYPEDEF

/* COMPILER051: Definition of NULL pointer                                                                           */
#ifndef NULL_PTR
 #define NULL_PTR  ((void *)0)
#endif

/* COMPILER057: Inline keyword                                                                                       */
#define INLINE  __inline__

/* COMPILER060: Local inline keyword                                                                                 */
#define LOCAL_INLINE static __inline__

/*
 **********************************************************************************************************************
 * Macros for Functions
 **********************************************************************************************************************
 */

/**
 **********************************************************************************************************************
 * COMPILER001: Macro for Declaration and definition of function.
 *
 * \param       rettype:  Return type of the function
 * \param       memclass: Classification of the function itself
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define FUNC(rettype, memclass)  memclass rettype

/**
 **********************************************************************************************************************
 * COMPILER006: Macro for Declaration and definition of pointers in RAM, pointing to Variables.
 *
 * \param       ptrtype:  Type of the referenced variable
 * \param       memclass: Classification of the pointers variable itself
 * \param       ptrclass: Defines the classification of the pointers distance
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define P2VAR(ptrtype, memclass, ptrclass)  ptrtype *

/**
 **********************************************************************************************************************
 * COMPILER013: Macro for Declaration and definition of pointers in RAM, pointing to Constants.
 *
 * \param       ptrtype:  Type of the referenced constant
 * \param       memclass: Classification of the pointers variable itself
 * \param       ptrclass: Defines the classification of the pointers distance
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define P2CONST(ptrtype, memclass, ptrclass)  const ptrtype *

/**
 **********************************************************************************************************************
 * COMPILER031: Macro for Declaration and definition of constant pointers accessing variables.
 *
 * \param       ptrtype:  Type of the referenced variable
 * \param       memclass: Classification of the pointers constant itself
 * \param       ptrclass: Defines the classification of the pointers distance
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define CONSTP2VAR(ptrtype, memclass, ptrclass)  ptrtype *const

/**
 **********************************************************************************************************************
 * COMPILER032: Macro for Declaration and definition of constant pointers accessing constants.
 *
 * \param       ptrtype:  Type of the referenced variable
 * \param       memclass: Classification of the pointers constant itself
 * \param       ptrclass: Defines the classification of the pointers distance
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define CONSTP2CONST(ptrtype, memclass, ptrclass)  const ptrtype * const

/**
 **********************************************************************************************************************
 * COMPILER039: Macro for type definition of pointers to function.
 *
 * \param       rettype:  Return type of the function
 * \param       ptrclass: Defines the classification of the pointers distance
 * \param       fctname:  Function name respectively name of the defined type
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define P2FUNC(rettype, ptrclass, fctname)  rettype (*fctname)

/**
 **********************************************************************************************************************
 * COMPILER023: Macro for declaration and definition of constants.
 *
 * \param       consttype: Type of the constant
 * \param       memclass:  Classification of the constant itself
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define CONST(type, memclass) memclass const type

/**
 **********************************************************************************************************************
 * COMPILER026: Macro for declaration and definition of variables.
 *
 * \param       vartype:   Type of the variable
 * \param       memclass:  Classification of the variable itself
 * \return      None
 **********************************************************************************************************************
 */
/* MISRA RULE 19.10 VIOLATION: In some cases the parameter should not be closed with () */
#define VAR(type, memclass) memclass type


/* COMPILER047 */
/* COMPILER_H */
#endif
