#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME asbCubeSatACS_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#include "mwstringutil.h"
#define rt_logging_h
#include "asbCubeSatACS_types.h"
#include "asbCubeSatACS.h"
#include "asbCubeSatACS_private.h"
struct_9iDbyyjfBL0Y1ELTIVXdBC rtP__gains2f2asbCubeSatModelData_sldd_ ; const
char * rt_GetMatSignalLoggingFileName ( void ) { return NULL ; } const char *
rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void *
rt_GetOSigstreamManager ( void ) { return NULL ; } void * rt_slioCatalogue (
void ) { return NULL ; } void * rtwGetPointerFromUniquePtr ( void * uniquePtr
) { return NULL ; } void * CreateDiagnosticAsVoidPtr ( const char * id , int
nargs , ... ) { void * voidPtrDiagnostic = NULL ; va_list args ; va_start (
args , nargs ) ; slmrCreateDiagnostic ( id , nargs , args , &
voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ; } void
rt_ssSet_slErrMsg ( void * S , void * diag ) { SimStruct * simStrcut = (
SimStruct * ) S ; if ( ! _ssIsErrorStatusAslErrMsg ( simStrcut ) ) {
_ssSet_slLocalErrMsg ( simStrcut , diag ) ; } else { _ssDiscardDiagnostic (
simStrcut , diag ) ; } } void rt_ssReportDiagnosticAsWarning ( void * S ,
void * diag ) { _ssReportDiagnosticAsWarning ( ( SimStruct * ) S , diag ) ; }
void rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) {
_ssReportDiagnosticAsInfo ( ( SimStruct * ) S , diag ) ; } const char *
rt_CreateFullPathToTop ( const char * toppath , const char * subpath ) { char
* fullpath = NULL ; slmrCreateFullPathToTop ( toppath , subpath , & fullpath
) ; return fullpath ; } boolean_T slIsRapidAcceleratorSimulating ( void ) {
return false ; } void rt_RAccelReplaceFromFilename ( const char * blockpath ,
char * fileName ) { ( void ) blockpath ; ( void ) fileName ; } void
rt_RAccelReplaceToFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void * slsa_malloc ( size_t s ) {
return malloc ( s ) ; } void slsa_free ( void * ptr ) { free ( ptr ) ; } void
slsaCacheDWorkPointerForSimTargetOP ( void * ss , void * * ptr ) { ( void )
ss ; ( void ) ptr ; } void slsaCacheDWorkDataForSimTargetOP ( void * ss ,
void * ptr , unsigned int sizeInBytes ) { ( void ) ss ; ( void ) ptr ; ( void
) sizeInBytes ; } void slsaSaveRawMemoryForSimTargetOP ( void * ss , const
char * key , void * * ptr , unsigned int sizeInBytes , void * ( *
customOPSaveFcn ) ( void * dworkPtr , unsigned int * sizeInBytes ) , void ( *
customOPRestoreFcn ) ( void * dworkPtr , const void * data , unsigned int
sizeInBytes ) ) { ( void ) ss ; ( void ) key ; ( void ) ptr ; ( void )
sizeInBytes ; ( void ) customOPSaveFcn ; ( void ) customOPRestoreFcn ; }
#define MDL_PROCESS_PARAMETERS
#if defined(MATLAB_MEX_FILE)
static void mdlProcessParameters ( SimStruct * S ) {
struct_9iDbyyjfBL0Y1ELTIVXdBC * GlobalPrm_0 = ( struct_9iDbyyjfBL0Y1ELTIVXdBC
* ) NULL ; if ( ! ssGetModelRefGlobalParamData ( S , 0 , ( void * * ) ( &
GlobalPrm_0 ) ) ) return ; if ( GlobalPrm_0 != NULL ) { ( void ) memcpy ( & (
rtP__gains2f2asbCubeSatModelData_sldd_ ) , GlobalPrm_0 , sizeof (
struct_9iDbyyjfBL0Y1ELTIVXdBC ) ) ; } }
#endif
static void mdlInitializeConditions ( SimStruct * S ) { obi5idc0yut * dw = (
obi5idc0yut * ) ssGetDWork ( S , 0 ) ; pm1oeto4u5 ( & ( dw -> rtb ) , & ( dw
-> rtdw ) ) ; } static void mdlReset ( SimStruct * S ) { obi5idc0yut * dw = (
obi5idc0yut * ) ssGetDWork ( S , 0 ) ; m1mdmrcg1e ( & ( dw -> rtb ) , & ( dw
-> rtdw ) ) ; } static void mdlPeriodicOutputUpdate ( SimStruct * S , int_T
tid ) { obi5idc0yut * dw = ( obi5idc0yut * ) ssGetDWork ( S , 0 ) ; real_T
const * i_ktbwn20k1q = ( real_T * ) ssGetInputPortSignal ( S , 0 ) ; real_T
const * i_ow0kcdhlba = ( real_T * ) ssGetInputPortSignal ( S , 1 ) ; real_T
const * i_peah0d3j3s = ( real_T * ) ssGetInputPortSignal ( S , 2 ) ; real_T
const * i_jhslswavix = ( real_T * ) ssGetInputPortSignal ( S , 3 ) ; real_T
const * i_appkibp02o = ( real_T * ) ssGetInputPortSignal ( S , 4 ) ; real_T
const * i_nn4c3tq5u1 = ( real_T * ) ssGetInputPortSignal ( S , 5 ) ; real_T
const * i_mgrsfcrkpz = ( real_T * ) ssGetInputPortSignal ( S , 6 ) ; real_T
const * i_nl3tjfw4w4 = ( real_T * ) ssGetInputPortSignal ( S , 7 ) ; real_T
const * i_bzjpsz4f3o = ( real_T * ) ssGetInputPortSignal ( S , 8 ) ; real_T
const * i_calciigouv = ( real_T * ) ssGetInputPortSignal ( S , 9 ) ;
boolean_T const * i_a55jfzst4i = ( boolean_T * ) ssGetInputPortSignal ( S ,
10 ) ; real_T const * i_i5b4hs3x4b = ( real_T * ) ssGetInputPortSignal ( S ,
11 ) ; real_T const * i_pdz0egks3i = ( real_T * ) ssGetInputPortSignal ( S ,
12 ) ; real_T const * i_erhqfldzho = ( real_T * ) ssGetInputPortSignal ( S ,
13 ) ; real_T const * i_lww5lkbioe = ( real_T * ) ssGetInputPortSignal ( S ,
14 ) ; real_T const * i_onpi3z345p = ( real_T * ) ssGetInputPortSignal ( S ,
15 ) ; real_T const * i_ayhiojiy1b = ( real_T * ) ssGetInputPortSignal ( S ,
16 ) ; ACSOutBus * o_B_21_1 = ( ACSOutBus * ) ssGetOutputPortSignal ( S , 0 )
; if ( tid == 0 ) { asbCubeSatACS ( i_ktbwn20k1q , i_ow0kcdhlba ,
i_peah0d3j3s , i_jhslswavix , i_appkibp02o , i_nn4c3tq5u1 , i_mgrsfcrkpz ,
i_nl3tjfw4w4 , i_bzjpsz4f3o , i_calciigouv , i_a55jfzst4i , i_i5b4hs3x4b ,
i_pdz0egks3i , i_erhqfldzho , i_lww5lkbioe , i_onpi3z345p , i_ayhiojiy1b ,
o_B_21_1 , & ( dw -> rtb ) , & ( dw -> rtdw ) ) ; jj0if5albh ( & ( dw -> rtb
) , & ( dw -> rtdw ) ) ; } } static void mdlInitializeSizes ( SimStruct * S )
{ if ( ( S -> mdlInfo -> genericFcn != ( NULL ) ) && ( ! ( S -> mdlInfo ->
genericFcn ) ( S , GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL )
) ) ) { return ; } ssSetNumSFcnParams ( S , 0 ) ;
ssFxpSetU32BitRegionCompliant ( S , 1 ) ; rt_InitInfAndNaN ( sizeof ( real_T
) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S ->
mdlInfo -> genericFcn ; } ssSetRTWGeneratedSFcn ( S , 2 ) ;
ssSetNumContStates ( S , 0 ) ; ssSetNumDiscStates ( S , 0 ) ;
ssSetSymbolicDimsSupport ( S , true ) ; slmrInitializeIOPortDataVectors ( S ,
17 , 1 ) ; if ( ! ssSetNumInputPorts ( S , 17 ) ) return ; if ( !
ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 1.0 ) ; ssSetInputPortOffsetTime
( S , 0 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 1 , 3 ) ) return
; ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , 1.0 ) ; ssSetInputPortOffsetTime
( S , 1 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 2 , 3 ) ) return
; ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 2 ,
false ) ; ssSetInputPortSampleTime ( S , 2 , 1.0 ) ; ssSetInputPortOffsetTime
( S , 2 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 3 , 3 ) ) return
; ssSetInputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 3 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 3 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 3 , 1 ) ; ssSetInputPortOptimOpts ( S
, 3 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 3 ,
false ) ; ssSetInputPortSampleTime ( S , 3 , 1.0 ) ; ssSetInputPortOffsetTime
( S , 3 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 4 , 3 ) ) return
; ssSetInputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 4 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 4 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 4 , 1 ) ; ssSetInputPortOptimOpts ( S
, 4 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 4 ,
false ) ; ssSetInputPortSampleTime ( S , 4 , 1.0 ) ; ssSetInputPortOffsetTime
( S , 4 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 5 , 4 ) ) return
; ssSetInputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 5 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 5 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 5 , 1 ) ; ssSetInputPortOptimOpts ( S
, 5 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 5 ,
false ) ; ssSetInputPortSampleTime ( S , 5 , 1.0 ) ; ssSetInputPortOffsetTime
( S , 5 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 6 , 4 ) ) return
; ssSetInputPortDimensionsMode ( S , 6 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 6 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 6 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 6 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 6 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 6 , 1 ) ; ssSetInputPortOptimOpts ( S
, 6 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 6 ,
false ) ; ssSetInputPortSampleTime ( S , 6 , 1.0 ) ; ssSetInputPortOffsetTime
( S , 6 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 7 , 3 ) ) return
; ssSetInputPortDimensionsMode ( S , 7 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 7 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 7 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 7 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 7 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 7 , 1 ) ; ssSetInputPortOptimOpts ( S
, 7 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 7 ,
false ) ; ssSetInputPortSampleTime ( S , 7 , 1.0 ) ; ssSetInputPortOffsetTime
( S , 7 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 8 , 3 ) ) return
; ssSetInputPortDimensionsMode ( S , 8 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 8 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 8 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 8 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 8 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 8 , 1 ) ; ssSetInputPortOptimOpts ( S
, 8 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 8 ,
false ) ; ssSetInputPortSampleTime ( S , 8 , 1.0 ) ; ssSetInputPortOffsetTime
( S , 8 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 9 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 9 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 9 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 9 , SS_DOUBLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 9 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 9 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 9 , 1 ) ; ssSetInputPortOptimOpts ( S
, 9 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 9 ,
false ) ; ssSetInputPortSampleTime ( S , 9 , 1.0 ) ; ssSetInputPortOffsetTime
( S , 9 , 0.0 ) ; if ( ! ssSetInputPortVectorDimension ( S , 10 , 1 ) )
return ; ssSetInputPortDimensionsMode ( S , 10 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 10 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 10 , SS_BOOLEAN )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 10 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 10 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 10 , 1 ) ; ssSetInputPortOptimOpts ( S
, 10 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 10 ,
false ) ; ssSetInputPortSampleTime ( S , 10 , 1.0 ) ;
ssSetInputPortOffsetTime ( S , 10 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 11 , 1 ) ) return ;
ssSetInputPortDimensionsMode ( S , 11 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 11 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 11 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 11 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 11 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 11 , 1 ) ; ssSetInputPortOptimOpts ( S
, 11 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 11 ,
false ) ; ssSetInputPortSampleTime ( S , 11 , 1.0 ) ;
ssSetInputPortOffsetTime ( S , 11 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 12 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 12 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 12 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 12 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 12 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 12 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 12 , 1 ) ; ssSetInputPortOptimOpts ( S
, 12 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 12 ,
false ) ; ssSetInputPortSampleTime ( S , 12 , 1.0 ) ;
ssSetInputPortOffsetTime ( S , 12 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 13 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 13 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 13 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 13 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 13 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 13 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 13 , 1 ) ; ssSetInputPortOptimOpts ( S
, 13 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 13 ,
false ) ; ssSetInputPortSampleTime ( S , 13 , 1.0 ) ;
ssSetInputPortOffsetTime ( S , 13 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 14 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 14 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 14 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 14 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 14 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 14 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 14 , 1 ) ; ssSetInputPortOptimOpts ( S
, 14 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 14 ,
false ) ; ssSetInputPortSampleTime ( S , 14 , 1.0 ) ;
ssSetInputPortOffsetTime ( S , 14 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 15 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 15 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 15 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 15 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 15 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 15 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 15 , 1 ) ; ssSetInputPortOptimOpts ( S
, 15 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 15 ,
false ) ; ssSetInputPortSampleTime ( S , 15 , 1.0 ) ;
ssSetInputPortOffsetTime ( S , 15 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 16 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 16 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 16 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 16 , SS_DOUBLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 16 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 16 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 16 , 1 ) ; ssSetInputPortOptimOpts ( S
, 16 , SS_NOT_REUSABLE_AND_GLOBAL ) ; ssSetInputPortOverWritable ( S , 16 ,
false ) ; ssSetInputPortSampleTime ( S , 16 , 1.0 ) ;
ssSetInputPortOffsetTime ( S , 16 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S ,
1 ) ) return ; if ( ! ssSetOutputPortVectorDimension ( S , 0 , 1 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
{ DTypeId dataTypeIdReg ; ssRegisterTypeFromNamedObject ( S , "ACSOutBus" , &
dataTypeIdReg ) ; if ( dataTypeIdReg == INVALID_DTYPE_ID ) return ;
ssSetOutputPortDataType ( S , 0 , dataTypeIdReg ) ; }
#endif
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 1.0 ) ; ssSetOutputPortOffsetTime ( S ,
0 , 0.0 ) ; ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ;
ssSetOutputPortOkToMerge ( S , 0 , SS_OK_TO_MERGE_CONDITIONAL ) ;
ssSetOutputPortICAttributes ( S , 0 , false , false , false ) ;
ssSetOutputPortOptimOpts ( S , 0 , SS_NOT_REUSABLE_AND_GLOBAL ) ;
ssSetSimStateCompliance ( S , USE_CUSTOM_SIM_STATE ) ;
mr_asbCubeSatACS_RegisterSimStateChecksum ( S ) ; ssSetNumSampleTimes ( S , 2
) ; ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0 ) ;
ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 ) ;
{ int_T zcsIdx = 0 ; } ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 3 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 4 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 5 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 6 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 7 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 8 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 9 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 10 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 11 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 12 , 1 ) ; ssSetInputPortIsNotDerivPort (
S , 13 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 14 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 15 , 1 ) ; ssSetInputPortIsNotDerivPort (
S , 16 , 1 ) ; ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetRuntimeThreadSafetyCompliance ( S ,
RUNTIME_THREAD_SAFETY_COMPLIANCE_TRUE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
true ) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_ALLOW_CONSTANT_PORT_SAMPLE_TIME |
SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED | SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME | SS_OPTION_EXCEPTION_FREE_CODE |
SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_asbCubeSatACS_MdlInfoRegFcn ( S , "asbCubeSatACS" , & retVal ) ; if ( !
retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( obi5idc0yut ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "10.7" ) ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { ssSetSampleTime ( S , 0 , 1 ) ;
ssSetOffsetTime ( S , 0 , 0 ) ; ssSetSampleTime ( S , 1 , mxGetInf ( ) ) ;
ssSetOffsetTime ( S , 1 , 0 ) ; return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { obi5idc0yut * dw = (
obi5idc0yut * ) ssGetDWork ( S , 0 ) ; void * sysRanPtr = ( NULL ) ; int
sysTid = 0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ; ssGetContextSysTid
( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid = 0 ; } b4vxdooov4
( S , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) ,
slmrGetTopTidFromMdlRefChildTid ( S , 1 , true ) , & ( dw -> rtm ) , & ( dw
-> rtb ) , & ( dw -> rtdw ) , sysRanPtr , sysTid , ( ( NULL ) ) , ( ( NULL )
) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( dw -> rtm . DataMapInfo .
mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL ) ) { _GenericFcn fcn = S
-> mdlInfo -> genericFcn ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { mdlProcessParameters ( S ) ; }
static void mdlOutputs ( SimStruct * S , int_T tid ) { obi5idc0yut * dw = (
obi5idc0yut * ) ssGetDWork ( S , 0 ) ; real_T const * i_ktbwn20k1q = ( real_T
* ) ssGetInputPortSignal ( S , 0 ) ; real_T const * i_ow0kcdhlba = ( real_T *
) ssGetInputPortSignal ( S , 1 ) ; real_T const * i_peah0d3j3s = ( real_T * )
ssGetInputPortSignal ( S , 2 ) ; real_T const * i_jhslswavix = ( real_T * )
ssGetInputPortSignal ( S , 3 ) ; real_T const * i_appkibp02o = ( real_T * )
ssGetInputPortSignal ( S , 4 ) ; real_T const * i_nn4c3tq5u1 = ( real_T * )
ssGetInputPortSignal ( S , 5 ) ; real_T const * i_mgrsfcrkpz = ( real_T * )
ssGetInputPortSignal ( S , 6 ) ; real_T const * i_nl3tjfw4w4 = ( real_T * )
ssGetInputPortSignal ( S , 7 ) ; real_T const * i_bzjpsz4f3o = ( real_T * )
ssGetInputPortSignal ( S , 8 ) ; real_T const * i_calciigouv = ( real_T * )
ssGetInputPortSignal ( S , 9 ) ; boolean_T const * i_a55jfzst4i = ( boolean_T
* ) ssGetInputPortSignal ( S , 10 ) ; real_T const * i_i5b4hs3x4b = ( real_T
* ) ssGetInputPortSignal ( S , 11 ) ; real_T const * i_pdz0egks3i = ( real_T
* ) ssGetInputPortSignal ( S , 12 ) ; real_T const * i_erhqfldzho = ( real_T
* ) ssGetInputPortSignal ( S , 13 ) ; real_T const * i_lww5lkbioe = ( real_T
* ) ssGetInputPortSignal ( S , 14 ) ; real_T const * i_onpi3z345p = ( real_T
* ) ssGetInputPortSignal ( S , 15 ) ; real_T const * i_ayhiojiy1b = ( real_T
* ) ssGetInputPortSignal ( S , 16 ) ; ACSOutBus * o_B_21_1 = ( ACSOutBus * )
ssGetOutputPortSignal ( S , 0 ) ; if ( tid == PARAMETER_TUNING_TID ) { } if (
tid != CONSTANT_TID && tid != PARAMETER_TUNING_TID ) { asbCubeSatACS (
i_ktbwn20k1q , i_ow0kcdhlba , i_peah0d3j3s , i_jhslswavix , i_appkibp02o ,
i_nn4c3tq5u1 , i_mgrsfcrkpz , i_nl3tjfw4w4 , i_bzjpsz4f3o , i_calciigouv ,
i_a55jfzst4i , i_i5b4hs3x4b , i_pdz0egks3i , i_erhqfldzho , i_lww5lkbioe ,
i_onpi3z345p , i_ayhiojiy1b , o_B_21_1 , & ( dw -> rtb ) , & ( dw -> rtdw ) )
; } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { obi5idc0yut * dw = (
obi5idc0yut * ) ssGetDWork ( S , 0 ) ; jj0if5albh ( & ( dw -> rtb ) , & ( dw
-> rtdw ) ) ; return ; } static void mdlTerminate ( SimStruct * S ) {
obi5idc0yut * dw = ( obi5idc0yut * ) ssGetDWork ( S , 0 ) ; h1ucxuq2iv ( & (
dw -> rtm ) ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 6 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , "nonContDerivSigInfoPrevVal" , } ; mxArray * ss =
mxCreateStructMatrix ( 1 , 1 , 6 , simStateFieldNames ) ; { mxArray *
mdlrefDW = mr_asbCubeSatACS_GetDWork ( ssGetDWork ( S , 0 ) ) ;
mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_asbCubeSatACS_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss ,
0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar (
( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) {
mr_asbCubeSatACS_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber ( ss ,
0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber ( ss
, 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar (
mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
