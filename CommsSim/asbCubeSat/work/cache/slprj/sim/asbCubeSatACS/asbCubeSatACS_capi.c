#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "asbCubeSatACS_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 22
#endif
#ifndef SS_INT64
#define SS_INT64 23
#endif
#else
#include "builtin_typeid_types.h"
#include "asbCubeSatACS.h"
#include "asbCubeSatACS_capi.h"
#include "asbCubeSatACS_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING (
"asbCubeSatACS/Discrete PID Controller/Filter/Differentiator/UD" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 ,
TARGET_STRING (
"asbCubeSatACS/Discrete PID Controller/Integrator/Discrete/Integrator" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1 , (
NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static
int_T rt_LoggedStateIdxList [ ] = { 1 , 0 } ;
#ifndef HOST_CAPI_BUILD
static void asbCubeSatACS_InitializeDataAddr ( void * dataAddr [ ] ,
due31ddxq5 * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
drbjvug1h2 [ 0 ] ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> csgaj2fyjn [
0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void asbCubeSatACS_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] )
{ vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void asbCubeSatACS_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 3 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 1.0 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 45 ] ;
static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ;
static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 45 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 2 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 2021016931U , 1121623203U , 2233551621U , 1188651424U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * asbCubeSatACS_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void asbCubeSatACS_InitializeSystemRan ( dgtzqiy1yy * const fprqfujhwe
, sysRanDType * systemRan [ ] , due31ddxq5 * localDW , int_T systemTid [ ] ,
void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( fprqfujhwe ) ;
UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType * )
rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW -> btx3klejj4 ;
systemRan [ 2 ] = ( NULL ) ; systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = (
NULL ) ; systemRan [ 5 ] = ( sysRanDType * ) & localDW -> cu0mwyodxbx .
ai304lwbz4 ; systemRan [ 6 ] = ( sysRanDType * ) & localDW -> eul4q2la45 .
ai304lwbz4 ; systemRan [ 7 ] = ( sysRanDType * ) & localDW -> eknrx3nsh2 .
ai304lwbz4 ; systemRan [ 8 ] = ( sysRanDType * ) & localDW -> hmitxmfqrk .
ai304lwbz4 ; systemRan [ 9 ] = ( sysRanDType * ) & localDW -> m0bnsqzq3n .
ai304lwbz4 ; systemRan [ 10 ] = ( sysRanDType * ) & localDW -> i52sqmyllx .
ai304lwbz4 ; systemRan [ 11 ] = ( sysRanDType * ) & localDW -> ggcc21rrux .
ai304lwbz4 ; systemRan [ 12 ] = ( sysRanDType * ) & localDW -> fk0imeoonn .
ai304lwbz4 ; systemRan [ 13 ] = ( sysRanDType * ) & localDW -> ne0qiqncyo .
ai304lwbz4 ; systemRan [ 14 ] = ( NULL ) ; systemRan [ 15 ] = ( sysRanDType *
) & localDW -> dkriegmois . ai304lwbz4 ; systemRan [ 16 ] = ( sysRanDType * )
& localDW -> mundwwrfcc . ai304lwbz4 ; systemRan [ 17 ] = ( sysRanDType * ) &
localDW -> o5uea2bm34 . ai304lwbz4 ; systemRan [ 18 ] = ( NULL ) ; systemRan
[ 19 ] = ( NULL ) ; systemRan [ 20 ] = ( sysRanDType * ) & localDW ->
kw1ggasixl ; systemRan [ 21 ] = ( sysRanDType * ) & localDW -> fvctynab0j ;
systemRan [ 22 ] = ( sysRanDType * ) & localDW -> fyislxta05 ; systemRan [ 23
] = ( sysRanDType * ) & localDW -> hm1z23ie2k ; systemRan [ 24 ] = (
sysRanDType * ) & localDW -> kmn5ikrhii . ai304lwbz4 ; systemRan [ 25 ] = (
sysRanDType * ) & localDW -> k5rtgyuloh . ai304lwbz4 ; systemRan [ 26 ] = (
sysRanDType * ) & localDW -> h4xtjhm5ns . ai304lwbz4 ; systemRan [ 27 ] = (
sysRanDType * ) & localDW -> eshunq0a4x . ai304lwbz4 ; systemRan [ 28 ] = (
sysRanDType * ) & localDW -> kqvn05n2kk . ai304lwbz4 ; systemRan [ 29 ] = (
sysRanDType * ) & localDW -> mufdwlxkzp . ai304lwbz4 ; systemRan [ 30 ] = (
sysRanDType * ) & localDW -> ovuvbo1lgf . ai304lwbz4 ; systemRan [ 31 ] = (
sysRanDType * ) & localDW -> iwf1ikz5vp . ai304lwbz4 ; systemRan [ 32 ] = (
sysRanDType * ) & localDW -> m1c5auh51y . ai304lwbz4 ; systemRan [ 33 ] = (
NULL ) ; systemRan [ 34 ] = ( sysRanDType * ) & localDW -> eh1au0gcdu .
ai304lwbz4 ; systemRan [ 35 ] = ( sysRanDType * ) & localDW -> kufh2i43cj .
ai304lwbz4 ; systemRan [ 36 ] = ( sysRanDType * ) & localDW -> otxy3nsbi1 .
ai304lwbz4 ; systemRan [ 37 ] = ( NULL ) ; systemRan [ 38 ] = ( NULL ) ;
systemRan [ 39 ] = ( sysRanDType * ) & localDW -> g2u3gf3pir ; systemRan [ 40
] = ( sysRanDType * ) & localDW -> duxa0lwnyy ; systemRan [ 41 ] = (
sysRanDType * ) & localDW -> m4ktsb34zu ; systemRan [ 42 ] = ( sysRanDType *
) & localDW -> aspvqi5kaq ; systemRan [ 43 ] = ( NULL ) ; systemRan [ 44 ] =
( NULL ) ; systemTid [ 1 ] = fprqfujhwe -> Timing . mdlref_GlobalTID [ 0 ] ;
systemTid [ 2 ] = fprqfujhwe -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
3 ] = fprqfujhwe -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] =
fprqfujhwe -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = fprqfujhwe
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 11 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 12 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 13 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 15 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 16 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 17 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 24 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 25 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 26 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 27 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 28 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 29 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 30 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 31 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 32 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 34 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 35 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 36 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 14 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 18 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 19 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 20 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 21 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 22 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 23 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 33 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 37 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 38 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 39 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 40 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 41 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 42 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 43 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 44 ] = fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [ 2 ] = 23 ;
rtContextSystems [ 3 ] = 23 ; rtContextSystems [ 4 ] = 23 ; rtContextSystems
[ 5 ] = 5 ; rtContextSystems [ 6 ] = 6 ; rtContextSystems [ 7 ] = 7 ;
rtContextSystems [ 8 ] = 8 ; rtContextSystems [ 9 ] = 9 ; rtContextSystems [
10 ] = 10 ; rtContextSystems [ 11 ] = 11 ; rtContextSystems [ 12 ] = 12 ;
rtContextSystems [ 13 ] = 13 ; rtContextSystems [ 14 ] = 23 ;
rtContextSystems [ 15 ] = 15 ; rtContextSystems [ 16 ] = 16 ;
rtContextSystems [ 17 ] = 17 ; rtContextSystems [ 18 ] = 23 ;
rtContextSystems [ 19 ] = 23 ; rtContextSystems [ 20 ] = 20 ;
rtContextSystems [ 21 ] = 21 ; rtContextSystems [ 22 ] = 22 ;
rtContextSystems [ 23 ] = 23 ; rtContextSystems [ 24 ] = 24 ;
rtContextSystems [ 25 ] = 25 ; rtContextSystems [ 26 ] = 26 ;
rtContextSystems [ 27 ] = 27 ; rtContextSystems [ 28 ] = 28 ;
rtContextSystems [ 29 ] = 29 ; rtContextSystems [ 30 ] = 30 ;
rtContextSystems [ 31 ] = 31 ; rtContextSystems [ 32 ] = 32 ;
rtContextSystems [ 33 ] = 42 ; rtContextSystems [ 34 ] = 34 ;
rtContextSystems [ 35 ] = 35 ; rtContextSystems [ 36 ] = 36 ;
rtContextSystems [ 37 ] = 42 ; rtContextSystems [ 38 ] = 42 ;
rtContextSystems [ 39 ] = 39 ; rtContextSystems [ 40 ] = 40 ;
rtContextSystems [ 41 ] = 41 ; rtContextSystems [ 42 ] = 42 ;
rtContextSystems [ 43 ] = 0 ; rtContextSystems [ 44 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void asbCubeSatACS_InitializeDataMapInfo ( dgtzqiy1yy * const fprqfujhwe ,
due31ddxq5 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( fprqfujhwe -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( fprqfujhwe -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( fprqfujhwe -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; asbCubeSatACS_InitializeDataAddr ( fprqfujhwe ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
fprqfujhwe -> DataMapInfo . mmi , fprqfujhwe -> DataMapInfo . dataAddress ) ;
asbCubeSatACS_InitializeVarDimsAddr ( fprqfujhwe -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( fprqfujhwe -> DataMapInfo .
mmi , fprqfujhwe -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
fprqfujhwe -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
fprqfujhwe -> DataMapInfo . mmi , ( NULL ) ) ;
asbCubeSatACS_InitializeLoggingFunctions ( fprqfujhwe -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( fprqfujhwe -> DataMapInfo . mmi ,
fprqfujhwe -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
fprqfujhwe -> DataMapInfo . mmi , & fprqfujhwe -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( fprqfujhwe -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( fprqfujhwe -> DataMapInfo .
mmi , 0 ) ; asbCubeSatACS_InitializeSystemRan ( fprqfujhwe , fprqfujhwe ->
DataMapInfo . systemRan , localDW , fprqfujhwe -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( fprqfujhwe -> DataMapInfo .
mmi , fprqfujhwe -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
fprqfujhwe -> DataMapInfo . mmi , fprqfujhwe -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( fprqfujhwe -> DataMapInfo . mmi , & fprqfujhwe ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void asbCubeSatACS_host_InitializeDataMapInfo (
asbCubeSatACS_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
