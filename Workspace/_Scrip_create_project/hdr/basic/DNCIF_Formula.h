/******************************************************************************/
/* [HISTORY_GENERATOR_V1]                                                     */
/******************************************************************************/
/* THIS IS TOOL GENERATED DATA, DO NOT CHANGE !!!                             */
/******************************************************************************/
/* [COPYRIGHT]                                                                */
/* Robert Bosch GmbH reserves all rights even in the event of industrial      */
/* property rights. We reserve all rights of disposal such as copying and     */
/* passing on to third parties.                                               */
/* [COPYRIGHT_END]                                                            */
/******************************************************************************/
/* [HISTORY]                                                                  */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO]                                                          */
/* -------------------------------------------------------------------------- */
/* File name     : DNCIF_Formula.h                                   */
/* -------------------------------------------------------------------------- */
/* Description   : formula definition for DNC09 interface                     */
/* Note          :                                                            */
/* -------------------------------------------------------------------------- */
/* [FILE_BASIC_INFO_END]                                                      */
/******************************************************************************/
/* [FILE_CHANGE_ENTRIES]                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 65.1                                                       */
/* Checked in by : mrz2si                                                     */
/* Check in date : 04.03.2013 09:20:12                                        */
/*                 03/04/2013 09:20:12                                        */
/* Changes       : adapt                                                      */
/*                 NF_ACCEL_0_001953 matches exactly 1/512                    */
/* Reasons       : adaptatioan according discussion with                      */
/*                 Korthals Christian (CC/ESC4)                               */
/*                                                                            */
/* CSCRM00509253 : [DNC]: Correction of resolution                            */
/*               : CSCRM00508971 : [DNC]: Correction of resolution            */
/* -------------------------------------------------------------------------- */
/* Revision      : 65.0                                                       */
/* Checked in by : mrz2si                                                     */
/* Check in date : 03.12.2012 22:55:36                                        */
/*                 12/03/2012 22:55:36                                        */
/* Changes       : max value of engine speed changed from 8000 RPM to         */
/*                 30000 RPM                                                  */
/* Reasons       : Adaptation to DOORS specification of ASW                   */
/*                 doors:ABT-DOORS.de.bosch.com:36677/?version=2&prodID=0&urn */
/*                 urn:telelogic::1-3a1288eb3f4712b8-O-240-00006adc           */
/*                                                                            */
/* CSCRM00460564 : Range of xpass message MotRpm limited to 8000 is not       */
/*                 sufficient                                                 */
/*               : CSCRM00453772 : Range of xpass message MotRpm limited to   */
/*                 8000 is not sufficient                                     */
/* -------------------------------------------------------------------------- */
/* Revision      : 55.1                                                       */
/* Checked in by : mrz2si                                                     */
/* Check in date : 01.03.2012 17:14:59                                        */
/*                 03/01/2012 17:14:59                                        */
/* Changes       : new signals added                                          */
/*                 NMSG_pBoostPiston_SW                                       */
/*                 NMSG_pSensePiston_SW                                       */
/*                 NMSG_pAccumulator_SW                                       */
/*                 NMSG_nPump_UW                                              */
/* Reasons       : Interface fuer diagnostic                                  */
/*                                                                            */
/* CSCRM00390980 : [DNC-IF] ACM-H: Provide interface pBoostPiston,            */
/*                 pSensePiston, pAccumulator, nPump                          */
/*               : CSCRM00388129 : [DCOM] ACM-H: for Valve Toggeling          */
/*                 routines, use ASW signals for pressures not HSW ones       */
/* -------------------------------------------------------------------------- */
/* Revision      : 55.0                                                       */
/* Checked in by : mrz2si                                                     */
/* Check in date : 28.10.2011 17:10:28                                        */
/*                 10/28/2011 17:10:28                                        */
/* Changes       : change of SAS functional chain DNCIF                       */
/*                   - changed resolution to avoid double conversion (NET,    */
/*                 ASW)                                                       */
/*                   - changed signal names to prevent mix up of previous and */
/*                 new resolution                                             */
/* Reasons       : Runtime optimizations of Signal-Chains for SAS             */
/*                                                                            */
/* CSCRM00339478 : [PSW ASW IF] Runtime optimizations of Signal-Chains for    */
/*                 SAS                                                        */
/*               : CSCRM00339465 : [PSW ASW IF] Runtime optimizations of      */
/*                 Signal-Chains for SAS                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.13                                                       */
/* Checked in by : mrz2si                                                     */
/* Check in date : 28.07.2011 11:52:28                                        */
/*                 07/28/2011 11:52:28                                        */
/* Changes       : Update of documentation                                    */
/*                 grad -> degrees   -> avoid misunderstanding                */
/* Reasons       : misunderstanding as grad and degrees is not identical      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.12                                                       */
/* Checked in by : mrz2si                                                     */
/* Check in date : 01.06.2011 14:17:30                                        */
/*                 06/01/2011 14:17:30                                        */
/* Changes       : New interfaces for the ACM-H Project,                      */
/*                 The interface are related to Diag Calibration routines and */
/*                 Piping Connection check routine                            */
/* Reasons       : Diagnostic access for ACMH                                 */
/*                                                                            */
/* CSCRM00323278 : [DNCIF] New Interfaces for the ACM-H Project, the          */
/*                 interface are related to Diag Calibration routines and     */
/*                 Piping Connection check routine                            */
/*               : CSCRM00321474 : [DNCIF] New Interfaces for the ACM-H       */
/*                 Project, the interface are related to Diag Calibr ...      */
/* CSCRM00323285 : [DNCIF] New Interfaces for the ACM-H Project, the          */
/*                 interface are related to Diag Calibration routines and     */
/*                 Piping Connection check routine                            */
/*               : CSCRM00321474 : [DNCIF] New Interfaces for the ACM-H       */
/*                 Project, the interface are related to Diag Calibr ...      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.11                                                       */
/* Checked in by : mrz2si                                                     */
/* Check in date : 15.05.2011 19:28:18                                        */
/*                 05/15/2011 19:28:18                                        */
/* Changes       : Update of VAM_Lifetimemanager                              */
/*                 Timebase 20ms added                                        */
/* Reasons       : Update after review Bruex Thomas (CC/EBS1)                 */
/*                                                                            */
/* CSCRM00313362 : [HSW]: Make VAM Lifetimemanager Data resetable by          */
/*                 diagnosis                                                  */
/*               : CSCRM00302606 : [HSW]: Make VAM Lifetimemanager Data       */
/*                 resetable by diagnosis                                     */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.10                                                       */
/* Checked in by : mrz2si                                                     */
/* Check in date : 22.12.2010 17:10:26                                        */
/*                 12/22/2010 17:10:26                                        */
/* Changes       : Add on of regenerative Brake and AcmH signals              */
/* Reasons       :                                                            */
/*                                                                            */
/* CSCRM00281826 : [DNC 45] provide RBS related powertrain signals            */
/*               : CSCRM00248897 : [DNC 45] provide RBS related powertrain    */
/*                 signals                                                    */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.9                                                        */
/* Checked in by : mrz2si                                                     */
/* Check in date : 26.10.2010 10:11:47                                        */
/*                 10/26/2010 10:11:47                                        */
/* Changes       : new signal NMSG_MonthlyTime_UL                             */
/* Reasons       : provide possibility to identify elapsed time since start   */
/*                 of current month                                           */
/*                                                                            */
/* CSCRM00267016 : SCM: Time of SCM-activation                                */
/*               : CSCRM00264596 : SCM: Time of SCM-activation                */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.8                                                        */
/* Checked in by : mrz2si                                                     */
/* Check in date : 04.08.2010 17:22:05                                        */
/*                 08/04/2010 17:22:05                                        */
/* Changes       : Update comment for NF_WHEELROTSPEED                        */
/*                 resolution of output                                       */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.7                                                        */
/* Checked in by : mrz2si                                                     */
/* Check in date : 30.06.2009 08:53:15                                        */
/*                 06/30/2009 08:53:15                                        */
/* Changes       : additional formula NF_NOUNIT for signal which shall be     */
/*                 handled physical but have got no unit                      */
/*                 e.g. "Gang"                                                */
/* Reasons       : DNCIF simulation and NTM                                   */
/*                                                                            */
/* CSCRM00162018 : [NET] Add reference implementation for signal with port    */
/*                 status information                                         */
/*               : CSCRM00157895 : [NET] Add reference implementation for     */
/*                 signal with port status information                        */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.6                                                        */
/* Checked in by : mrz2si                                                     */
/* Check in date : 02.06.2009 15:35:30                                        */
/*                 06/02/2009 15:35:30                                        */
/* Changes       : removal of fractions in formula comment                    */
/* Reasons       : automatic DNCSIM build uses comment for creation of        */
/*                 physical value access                                      */
/*                                                                            */
/* CSCRM00158796 : [INT-NET] Replace fractions in DNCIF formula file          */
/*               : CSCRM00158652 : [INT-NET] Replace fractions in DNCIF       */
/*                 formula file                                               */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.5                                                        */
/* Checked in by : mrz2si                                                     */
/* Check in date : 20.02.2009 12:20:42                                        */
/*                 02/20/2009 12:20:42                                        */
/* Changes       : formula typo of percent definition like in previous rev.   */
/*                 reactivated                                                */
/* Reasons       : review result DNCIF                                        */
/*                                                                            */
/* CSCRM00141382 : Fix review resuts                                          */
/*               : CSCRM00123054 : [INT-NET] Initialization of project        */
/*                 specific DNCIF variables (PROC-Files)                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.4                                                        */
/* Checked in by : mrz2si                                                     */
/* Check in date : 27.01.2009 18:02:01                                        */
/*                 01/27/2009 18:02:01                                        */
/* Changes       : variant interfaces defined                                 */
/*                 collects previously separated defined information          */
/* Reasons       : new setup of a separate variant component                  */
/*                                                                            */
/* CSCRM00134642 : VAR09_COMMON component shall define interfaces to ASW      */
/*                 directly                                                   */
/*                  ...                                                       */
/*               : CSCRM00128624 : [DNCIF] Rework variant information from    */
/*                 DNCIF                                                      */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.3                                                        */
/* Checked in by : mrz2si                                                     */
/* Check in date : 29.08.2008 09:50:37                                        */
/*                 08/29/2008 09:50:37                                        */
/* Changes       : new resolution NF_STEERANGELDEC                            */
/* Reasons       : adaptation to SuperpositionAngleRequest                    */
/*                 in coordination with Grinenval CC/EVM2                     */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.2                                                        */
/* Checked in by : mrz2si                                                     */
/* Check in date : 03.07.2008 16:28:44                                        */
/*                 07/03/2008 16:28:44                                        */
/* Changes       : PERCENT definition at formula corrected                    */
/* Reasons       :                                                            */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.1                                                        */
/* Checked in by : mrz2si                                                     */
/* Check in date : 27.05.2008 10:26:00                                        */
/*                 05/27/2008 10:26:00                                        */
/* Changes       : additional formula ODO_10                                  */
/* Reasons       : BLW INTEGRATION                                            */
/*                                                                            */
/* CSCRM00085494 : DNC Interface for new function BLW                         */
/*               : CSCRM00083049 : [DNCIF] Brake lining wear monitoring       */
/* -------------------------------------------------------------------------- */
/* Revision      : 1.0                                                        */
/* Checked in by : mrz2si                                                     */
/* Check in date : 20.03.2008 15:40:33                                        */
/*                 03/20/2008 15:40:33                                        */
/* Changes       : extract all formula definition to a separate formaula file */
/* Reasons       : multiple usage of same formula definitions in various      */
/*                 interfaces                                                 */
/*                                                                            */
/* CSCRM00086040 : several interfaces require identical formula calculation   */
/*               : CSCRM00077292 : [DNCIF] Restructuring of header assignment */
/*                 at DNC09 interface                                         */
/* -------------------------------------------------------------------------- */
/* [FILE_CHANGE_ENTRIES_END]                                                  */
/* -------------------------------------------------------------------------- */
/* [HISTORY_END]                                                              */
/******************************************************************************/
/* [HISTORY_GENERATOR_V1_END]                                                 */
/******************************************************************************/
/****************************************************************************/
/* Multiple include protection. Define symbol like following pattern:       */
/* __<Name of header LOGICAL in CAPITALS>_                                  */
#ifndef DNCIF_FORMULA_H
#define DNCIF_FORMULA_H


/****************************************************************************/
/*                                                                          */
/*                    _|    _|    _|_|_|  _|          _|                    */
/*                    _|    _|  _|        _|          _|                    */
/*                    _|    _|    _|_|    _|    _|    _|                    */
/*                    _|    _|        _|    _|  _|  _|                      */
/*                      _|_|    _|_|_|        _|  _|                        */
/*                                                                          */
/*                                                                          */
/* USW - User Related Software                                              */
/* Interface header file (.h)                                               */
/*                                                                          */
/* MODULE_STRUCTURE_TYPE = "h_tpl"                                          */
/* MODULE_STRUCTURE_VERSION = 0.3                                           */
/*                                                                          */
/****************************************************************************/

/****************************************************************************/
/* Only printed attributes can be applied to this module type.              */
/* Delete inappropriate attribute lines below.                              */
/* If more than one leave only one entry per line.                          */
/* SYSTEM_INFO:                                                             */
/*                                                                          */
/* PSW      */
/* TMS470   */
/*                                                                          */
/* SYSTEM_INFO_END:                                                         */
/****************************************************************************/

/****************************************************************************/
/* Optional: If this is header file is variant (i.e. it is using switches),
 * you should get group configuration by including the corresponding header.
 */

/****************************************************************************/
/* Include here interfaces that are necessary for this interface but may
 * not be used in modules.
 */
/* PRIVATE_INTERFACES:                                                      */

/* PRIVATE_INTERFACES_END:                                                  */
/****************************************************************************/

/****************************************************************************/
/* Include here interface headers (.h) that are generalized by this 
 * interface and that are public for usage in this AND other modules.
 */
/* PUBLIC_INTERFACES:                                                       */

/* PUBLIC_INTERFACES_END:                                                   */
/****************************************************************************/

/****************************************************************************/
/* Write here all settings which are supported by this module.              */
/* For other settings GenProdDb aborts.                                     */
/* SUPPORTED_SWITCH_SETTINGS:                                               */

/* SUPPORTED_SWITCH_SETTINGS_END:                                           */
/****************************************************************************/


/****************************************************************************/
/* Write here type definitions, constants, macros, data objects (attributes),
 * functions (operations/methods) provided by this interface. For grouping 
 * the objects logically it is also allowed to add each keyword more than once.
 */

  /* TYPE_DEFINITIONS:          */



  /* TYPE_DEFINITIONS_END:      */

  /* CONSTANT_DEFINITIONS:      */

/************************************************************************/

/* -------------------------------------------------------------------------- */
/* yaw rate sensor based standardizations                                     */
/* -------------------------------------------------------------------------- */

#define NF_V_ANGULAR          (468.9106)
/*NU| rad/s | */                                                /*DU|100102Kh|*/
/*DE| formula for yaw rate                                                   |*/
/*DE| resolution: 1bit = 0.0021326 rad/s                                     |*/
/*DE| NF_V_ANGULAR = 468.9106                                               |@*/

#define  Z_V_ANGULAR_min      (-2.0943 * NF_V_ANGULAR)
#define  Z_V_ANGULAR_max      ( 2.0943 * NF_V_ANGULAR)


  /* CONSTANT_DEFINITIONS_END:  */

  /* MACRO_DEFINITIONS:         */
  /* MACRO_DEFINITIONS_END:     */

  /* EXTERNAL_DATAOBJECTS:      */

/* -------------------------------------------------------------------------- */
/* ACCELERATION                                                               */
/* -------------------------------------------------------------------------- */
#define NF_ACCEL              (36.864)
/*NU| m/s^2 | */                                                /*DU|100102Kh|*/
/*DE| formula for acceleration speed                                         |*/
/*DE| resolution: 1bit=0.027127m/s^2 (5760bit=156.25m/s^2)                   |*/
/*DE| NF_ACCEL=36.864                                                       |@*/

#define  Z_ACCEL_min          (-21.593 * NF_ACCEL)
#define  Z_ACCEL_max          ( 21.593 * NF_ACCEL)


/* -------------------------------------------------------------------------- */
/* PRESSURE                                                                   */
/* -------------------------------------------------------------------------- */
#define NF_PRESSURE           (65.36)
/*NU| bar   | */                                                /*DU|100102Kh|*/
/*DE| formula for pressure                                                   |*/
/*DE| resolution: 1bit=0.0153bar (27778bit=425bar)                           |*/
/*DE| NF_PRESSURE = 65.36                                                   |@*/

#define  Z_PRESSURE_min       (-42.5 * NF_PRESSURE)
#define  Z_PRESSURE_max       (425.0 * NF_PRESSURE)


/* -------------------------------------------------------------------------- */
/* NF_ClutchPW                                                                */
/* -------------------------------------------------------------------------- */
#define NF_ClutchPW           (2.54)
/*NU| %     | */                                                /*DU|100102Kh|*/
/*DE| formula for pedal position                                             |*/
/*DE| resolution: 1bit = 0.39%                                               |*/
/*DE| NF_ClutchPW = 2.54                                                    |@*/

#define  Z_ClutchPW_min       (  0.0 * NF_ClutchPW)
#define  Z_ClutchPW_max       (100.0 * NF_ClutchPW)


/* -------------------------------------------------------------------------- */
/* NF_TORQUE                                                                  */
/* -------------------------------------------------------------------------- */
#define NF_TORQUE             (1.0)
/*NU| Nm   | */                                                 /*DU|241104Kh|*/
/*DE| formula for torque on drive train                                      |*/
/*DE| resolution: 1bit = 1.0 Nm (high resolution)                            |*/
/*DE| NF_TORQUE = 1.0                                                        |@*/

#define  Z_TORQUE_min         (-30000.0 * NF_TORQUE)
#define  Z_TORQUE_max         ( 30000.0 * NF_TORQUE)

 
/* -------------------------------------------------------------------------- */
/* RPM                                                                        */
/* -------------------------------------------------------------------------- */
#define NF_RPM                (1.0)
/*NU| rpm   | */                                                /*DU|100102Kh|*/
/*DE| formula for engine speed                                               |*/
/*DE| resolution: 1bit = 1rpm                                                |*/
/*DE| NF_RPM = 1.0                                                          |@*/

#define  Z_RPM_min           (    0.0 * NF_RPM)
#define  Z_RPM_max           (30000.0 * NF_RPM)


/* -------------------------------------------------------------------------- */
/* PW                                                                         */
/* -------------------------------------------------------------------------- */
#define NF_PW                 (2.54)
/*NU| %     | */                                                /*DU|100102Kh|*/
/*DE| formula for pedal position                                             |*/
/*DE| resolution: 1bit = 0.39%                                               |*/
/*DE| NF_PW = 2.54                                                           |@*/

#define  Z_PW_min             (  0.0 * NF_PW)
#define  Z_PW_max             (100.0 * NF_PW)


/* -------------------------------------------------------------------------- */
/* steering angle (rad resolution)                                            */
/* -------------------------------------------------------------------------- */
#define NF_Steerangle_P1024   (1024)
/*NU| rad   | */                                                /*DU|100102Kh|*/
/*DE| formula for steering wheel angle                                       |*/
/*DE| resolution: 1bit = 0.00097656rad (equal to 1bit=0.056degrees)          |*/
/*DE| NF_STEERANGEL = 1024                                                   |@*/

#define  Z_STEERANGEL_min     (-26.0 * NF_Steerangle_P1024)
#define  Z_STEERANGEL_max     ( 26.0 * NF_Steerangle_P1024)

/* -------------------------------------------------------------------------- */
/* steering angle (decimal (degree) resolution)                               */
/* -------------------------------------------------------------------------- */
#define NF_STEERANGELDEC        (10.0)
/*NU| rad   | */                                                /*DU|100102Kh|*/
/*DE| formula for steering angle                                             |*/
/*DE| resolution: 1bit = 0.1 dregree                                         |*/
/*DE| NF_STEERANGELDEC = 10.0                                                |@*/

#define  Z_STEERANGELDEC_min     (-1500.0 * NF_STEERANGELDEC)
#define  Z_STEERANGELDEC_max     ( 1500.0 * NF_STEERANGELDEC)

/* -------------------------------------------------------------------------- */
/* steering angle gradient / steering angle speed                             */
/* -------------------------------------------------------------------------- */
#define NF_STEERANGELGRAD         (1.0)
/*NU| rad   | */                                                /*DU|100102Kh|*/
/*DE| formula for steering angle                                             |*/
/*DE| resolution: 1bit = 1degree/s   (steering angle speed)                  |*/
/*DE| NF_STEERANGELGRAD = 1.0                                                |@*/

#define  Z_STEERANGELGRAD_min     ( 0.0 * NF_STEERANGELGRAD)
#define  Z_STEERANGELGRAD_max     ( 511.0 * NF_STEERANGELGRAD)

/* -------------------------------------------------------------------------- */
/* ACCEL_0_001953                                                             */
/* -------------------------------------------------------------------------- */
#define NF_ACCEL_0_001953       (512.0)
/*NU| m/s^2 | */                                                /*DU|310102Kh|*/
/*DE| formula for acceleration speed for ACB                                 |*/
/*DE| resolution: 1bit=0.001953 m/s^2 (512.0bit=1m/s^2)                      |*/
/*DE| NF_ACCEL_0_001953 = 512.0                                              |@*/

#define  Z_ACCEL_0_001953_min   (-20.0 * NF_ACCEL_0_001953)
#define  Z_ACCEL_0_001953_max   ( 20.0 * NF_ACCEL_0_001953)


/* -------------------------------------------------------------------------- */
/* NF_TORQUE_1                                                                */
/* -------------------------------------------------------------------------- */
#define NF_TORQUE_1             (1.0)
/*NU| Nm   | */                                                 /*DU|241104Kh|*/
/*DE| formula for torque on LDM functions                                    |*/
/*DE| resolution: 1bit = 1.0 Nm (high resolution)                            |*/
/*DE| NF_TORQUE = 1.0                                                        |@*/

#define  Z_TORQUE_1_min         (-30000.0 * NF_TORQUE_1)
#define  Z_TORQUE_1_max         ( 30000.0 * NF_TORQUE_1)


/* -------------------------------------------------------------------------- */
/* TIME_1MIN                                                                  */
/* -------------------------------------------------------------------------- */
#define NF_TIME_1MIN          (1.0)
/*NU| min   | */                                                /*DU|061107LG|*/
/*DE| formula for time with resolution 1bit=1min                             |*/
/*DE| resolution: 1bit=1min                                                  |*/
/*DE| NF_TIME_1MIN = 1.0                                                     |@*/

#define  Z_TIME_1MIN_min      (    0.0 * NF_TIME_1MIN)
#define  Z_TIME_1MIN_max      (65535.0 * NF_TIME_1MIN)

/* -------------------------------------------------------------------------- */
/* TIME_10ms                                                                  */
/* -------------------------------------------------------------------------- */
#define NF_TIME_10ms          (1.0)
/*NU| min   | */                                                /*DU|061107LG|*/
/*DE| formula for time with resolution 1bit=10ms                             |*/
/*DE| resolution: 1bit=10ms                                                  |*/
/*DE| NF_TIME_10ms = 1.0                                                     |@*/

#define  Z_TIME_10ms_min       (       0.0 * NF_TIME_1ms)
#define  Z_TIME_10ms_max       (4294967295 * NF_TIME_10ms)

/* -------------------------------------------------------------------------- */
/* TAMBIENT                                                                   */
/* -------------------------------------------------------------------------- */
#define NF_TAMBIENT           (2.0)
/*NU| deg_celsius | */                                          /*DU|061107LG|*/
/*DE| formula for ambient temperature                                        |*/
/*DE| resolution: 1bit=0.5 degree celsius                                    |*/
/*DE| NF_TAMBIENT = 2.0                                                      |@*/

#define  Z_TAMBIENT_min      (-63.0 * NF_TAMBIENT)
#define  Z_TAMBIENT_max      ( 63.0 * NF_TAMBIENT)


/* ------------------------------------------------------------------------- */
/* VELOCITY                                                                  */
/* ------------------------------------------------------------------------- */
#define NF_VELOCITY           (64.0)
/*NU| m/s   | */                                                /*DU|100102Kh|*/
/*DE| formula for vehicle speed                                              |*/
/*DE| resolution: 1bit=0.015625m/s (1/64m/s)                                 |*/
/*DE| NF_VELOCITY = 64.0                                                    |@*/

#define  Z_VELOCITY_min       (  0.0 * NF_VELOCITY)
#define  Z_VELOCITY_max       (100.0 * NF_VELOCITY)


/* -------------------------------------------------------------------------- */
/* WHEELROTSPEED                                                              */
/* -------------------------------------------------------------------------- */
#define NF_WHEELROTSPEED      (24.0)
/*NU| rpm   | */                                                /*DU|060504Kh|*/
/*DE| formula for wheel rotation speed                                       |*/
/*DE| resolution: 1bit=0.0416667rpm (1/24rpm)                                     |*/
/*DE| NF_WHEELROTSPEED = 24                                                 |@*/

#define  Z_WHEELROTSPEED_min  (   0.000 * NF_WHEELROTSPEED)
#define  Z_WHEELROTSPEED_max  (2730.625 * NF_WHEELROTSPEED)


/* -------------------------------------------------------------------------- */
/* ODOINFO                                                                    */
/* -------------------------------------------------------------------------- */
#define NF_ODOINFO            (64.0)
/*NU| m  | */                                                   /*DU|060504Kh|*/
/*DE| formula for wheel odo info                                             |*/
/*DE| resolution: 1bit=0.015625m (1/64m)                                     |*/
/*DE| NF_ODOINFO = 64.0                                                      |@*/

#define  Z_ODOINFO_min  (   0.000 * NF_ODOINFO)
#define  Z_ODOINFO_max  (1023.98 * NF_ODOINFO)

/* -------------------------------------------------------------------------- */
/* ODO                                                                        */
/* -------------------------------------------------------------------------- */
#define NF_ODO                (1.0)
/*NU| m  | */                                                   /*DU|060504Kh|*/
/*DE| formula for wheel odo info                                             |*/
/*DE| resolution: 1bit=1km                                                   |*/
/*DE| NF_ODO = 1                                                             |@*/

#define  Z_ODO_min      (   0.000 * NF_ODOINFO)
#define  Z_ODO_max    (4294967296 * NF_ODOINFO)

/* -------------------------------------------------------------------------- */
/* ODO10                                                                      */
/* -------------------------------------------------------------------------- */
#define NF_ODO10              (0.1)
/*NU| m  | */                                                   /*DU|060504Kh|*/
/*DE| formula for odo info                                                   |*/
/*DE| resolution: 1bit=10km                                                  |*/
/*DE| NF_ODO10 = 0.1                                                         |@*/

#define  Z_ODO10_min    (-100000.0 * NF_ODO10)
#define  Z_ODO10_max  (100000.0 * NF_ODO10)


/* -------------------------------------------------------------------------- */
/* ODO1000                                                                    */
/* -------------------------------------------------------------------------- */
#define NF_ODO1000            (0.001)
/*NU| m  | */                                                   /*DU|060504Kh|*/
/*DE| formula for odo info                                                   |*/
/*DE| resolution: 1bit=1000km                                                |*/
/*DE| NF_ODO1000 = 0.001                                                     |@*/

#define  Z_ODO1000_min  (-100000 * NF_ODO1000)
#define  Z_ODO1000_max  (100000.0 * NF_ODO1000)

/* ------------------------------------------------------------------------- */
/* WHEEL CIRCUMFERENCE                                                       */
/* ------------------------------------------------------------------------- */
#define NF_P1024             (1024.0)
/*NU| m | */                                                   /*DU|111108Sn|*/
/*DE| formula for WHEEL CIRCUMFERENCE                                       |*/
/*DE| resolution: 1bit=0.0009766m (1/1024m)                                 |*/
/*DE| NF_P1024  = 1024.0                                                    |@*/

#define  Z_P1024_min         ( 0.0 * NF_P1024)
#define  Z_P1024_max         ( 5.0 * NF_P1024)

/* -------------------------------------------------------------------------- */
/* PERCENT_0_1                                                                */
/* -------------------------------------------------------------------------- */
#define NF_PERCENT_0_1        (10.0)
/*NU| %     | */                                                /*DU|100102Kh|*/
/*DE| formula for byte values in percent                                     |*/
/*DE| resolution: 1bit=0.1%                                                  |*/
/*DE| NF_PERCENT_0_1 = 10                                                    |@*/

#define  Z_PERCENT_0_1_min   (-100.0 * NF_PERCENT_0_1)
#define  Z_PERCENT_0_1_max   ( 100.0 * NF_PERCENT_0_1)


/* -------------------------------------------------------------------------- */
/* PERCENT                                                                    */
/* -------------------------------------------------------------------------- */
#define NF_PERCENT            (1.0)
/*NU| %     | */                                                /*DU|100102Kh|*/
/*DE| formula for byte values in percent                                     |*/
/*DE| resolution: 1bit=1.0%                                                  |*/
/*DE| NF_PERCENT = 1                                                        |@*/

#define  Z_PERCENT_min        (  0.0 * NF_PERCENT)
#define  Z_PERCENT_max        (100.0 * NF_PERCENT)


/* -------------------------------------------------------------------------- */
/* NF_NOUNIT  /  internal use for variables without unit which shall be       */
/*               handled like physical value anyway                           */
/* -------------------------------------------------------------------------- */
#define NF_NOUNIT             (1.0)
/*NU| NOUNIT   | */                                             /*DU|241104Kh|*/
/*DE| formula for torque on drive train                                      |*/
/*DE| resolution: 1bit = 1.0 physical element without unit                   |*/
/*DE| NF_TORQUE = 1.0                                                        |@*/


/* -------------------------------------------------------------------------- */
/*                 HAS hev add on formula definition                          */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* STABILITYMARGIN                                                            */
/* -------------------------------------------------------------------------- */
#define NF_STABILITYMARGIN    (16384.0)
/*NU| 1   | */                                                  /*DU|141108Je|*/
/*DE| formula for stability margin                                           |*/
/*DE| resolution: 1bit=0.000061035 (16384bit=1)                              |*/
/*DE| NF_STABILITYMARGIN=16384                                              |@*/

#define  Z_STABILITYMARGIN_min          (0.0 * NF_STABILITYMARGIN)
#define  Z_STABILITYMARGIN_max          (1.0 * NF_STABILITYMARGIN)

/*---------------------------------------------------------------------------*/
/* TIME_20ms				                                                         */
/*---------------------------------------------------------------------------*/
#define NF_TIME_20MS           (50.0)
/*NU| seconds   | */                                         /*DU|270411Lq|*/
/*DE| formula for run time                                                |*/
/*DE| resolution: 1bit=1/50seconds                                        |*/
/*DE| NF_TIME_20MS = 50                                                       |@*/

#define  Z_VAM_TIME_min       (0.0 * NF_TIME_20MS)
#define  Z_VAM_TIME_max       (85899345.9 * NF_TIME_20MS)

/* -------------------------------------------------------------------------- */
/* PUSHROD VELOCITY                                                           */
/* -------------------------------------------------------------------------- */
#define NF_PUSHROD_VELOCITY   32
/*NU| mm     | */                                                 /*DU|151009OB |*/
/*DE| formula for pushrod stroke velocity                                       |*/
/*DE| resolution: 1bit = 0.03125 mm/s (32bit=1mm/s)                             |*/
/*DE| NF_PUSHROD_VELOCITY = 32                                                  |@*/

/* -------------------------------------------------------------------------- */
/* PUSHROD_STROKE                                                             */
/* -------------------------------------------------------------------------- */


#define Z_PUSHROD_STROKE_m           (512.0)                    /*DU|310708BR|*/
/*NU| bit                                                                    |*/
/*DE|integer normalization value for master cylinder pushrod stroke         |@*/

#define P_PUSHROD_STROKE_m           (1.0)                      /*DU|310708BR|*/
/*NU| mm                                                                     |*/
/*DE|physical normalization value for master cylinder pushrod stroke        |@*/

#define NF_PUSHROD_STROKE     (Z_PUSHROD_STROKE_m / P_PUSHROD_STROKE_m)
/*NU| mm     | */                                               /*DU|310708BR|*/
/*DE| formula for master cylinder pushrod stroke                             |*/
/*DE| resolution: 1bit = 2.0um (512bit=0.001m)                               |*/
/*DE| NF_PUSHROD_STROKE = 512000.0                                           |@*/

/* -------------------------------------------------------------------------- */
/* FORCE                                                                      */
/* -------------------------------------------------------------------------- */
#define NF_FORCE   (0.25)
/*NU| N     | */                                                 /*DU|151009OB |*/
/*DE| formula for the Fx interface between ESP and AcmH                         |*/
/*DE| resolution: 1bit = 4 N                                                    |*/
/*DE| NF_FORCE = 0.25                                                           |@*/

/* -------------------------------------------------------------------------- */
/* PUMP                                                                       */
/* -------------------------------------------------------------------------- */
#define NF_NPUMP   (0.25)
/*NU| RPM     | */                                             /*DU|151009OB |*/
/*DE| formula for the nPump interface                                        |*/
/*DE| resolution: 1bit = 4 rpm                                               |*/
/*DE| NF_PUMP = 0.25                                                         |@*/
  
/* -------------------------------------------------------------------------- */
/* PRESSURE                                                                   */
/* -------------------------------------------------------------------------- */
#define NF_PRESSURE32_EOL           (32.0)
/*NU| bar   | */                                                /*DU|100102Kh|*/
/*DE| formula for pressure                                                   |*/
/*DE| resolution: 1bit=0.03125bar                                            |*/
/*DE| NF_PRESSURE = 32.0                                                     |@*/

  /* EXTERNAL_DATAOBJECTS_END:  */

  /* FUNCTION_PROTOTYPES:       */
  /* FUNCTION_PROTOTYPES_END:   */

#endif /* End of multiple include protection                                */
/****************************************************************************/
