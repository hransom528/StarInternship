#include "asbCubeSatACS.h"
#include "rtwtypes.h"
#include "asbCubeSatACS_types.h"
#include "asbCubeSatACS_private.h"
#include "mwmathutil.h"
#include "asbCubeSatACS_capi.h"
#include <string.h>
#include "rt_nonfinite.h"
#define bo2u2aqs02 ((uint8_T)1U)
#define j21ewuch2t ((uint8_T)3U)
#define kadj05owb1 ((uint8_T)2U)
#define kighwkyzkd ((uint8_T)0U)
#define ndyhwzbfw5 ((uint8_T)1U)
#define opeya5azww ((uint8_T)2U)
const StatesOutBus asbCubeSatACS_rtZStatesOutBus = { 0.0 , { 0.0 , 0.0 , 0.0
} , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 } , 0.0 , false , { 0U , 0U , 0U , 0U , 0U , 0U , 0U } } ; const
EnvBus asbCubeSatACS_rtZEnvBus = { { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 }
, { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } } ; const
AttitudeErrorBus asbCubeSatACS_rtZAttitudeErrorBus = { 0.0 , 0.0 , 0.0 } ;
static RegMdlInfo rtMdlInfo_asbCubeSatACS [ 70 ] = { { "f2qco40pqy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"phhbihbdoi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "ccgkqygnku" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "isyhitduks" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"k3t42as4vo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "o1zflzm1od" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "dbxcnyzzei" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"b3z4ejwsl3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "nulg14sjpw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "px1vf2uvrj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"coxtve2dsr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "n4hajf3eg4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "dyu23gc3xr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"obi5idc0yut" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "jx0nvoaj5s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "iu4azrivv1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"m5irwxgsw5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "kfw13hcd5g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "als1g01zc0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"ezvi2zbjy2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "jdo0zysb04" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "h12irucwjp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"jgeuwsgdmq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "n0xjxj2ehs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "jcboi25osc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"due31ddxq5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "ophodr0x0g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "b1dkmxrvxd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"h1ucxuq2iv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "nkfjiqfgvd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "jj0if5albh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"m1mdmrcg1e" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "pm1oeto4u5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "b4vxdooov4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"ie553oink0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "ihscoxzpvr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "nwobnuj412" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"czy5tv2dvf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "novh4kwhjf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "mfzz1h1ya0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"pflojh10tu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "njqqbgezks" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "cu0mwyodxb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "If Action Subsystem" }
, { "asbCubeSatACS" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } ,
{ "j5rpw4mhdf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"asbCubeSatACS" } , { "isesex4x31" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "asbCubeSatACS" } , { "dgtzqiy1yy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"ACSOutBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"AttitudeErrorBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"EnvBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "StatesOutBus" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_9iDbyyjfBL0Y1ELTIVXdBC" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "uint64"
} , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "cint64" ,
MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * ) "int64" } , { "int64" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_asbCubeSatACS_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"mr_asbCubeSatACS_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"mr_asbCubeSatACS_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"mr_asbCubeSatACS_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"mr_asbCubeSatACS_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"mr_asbCubeSatACS_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"mr_asbCubeSatACS_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "asbCubeSatACS" } , {
"mr_asbCubeSatACS_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "asbCubeSatACS" } , { "mr_asbCubeSatACS_cacheDataAsMxArray"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"mr_asbCubeSatACS_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "asbCubeSatACS" } , { "mr_asbCubeSatACS_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "asbCubeSatACS" } , {
"mr_asbCubeSatACS_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "asbCubeSatACS" } , { "asbCubeSatACS.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1
, ( NULL ) } , { "asbCubeSatACS.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
void * ) "asbCubeSatACS" } } ; abopqckbgqo abopqckbgq = { 0.0 , 0.0 , - 1.0 ,
- 1.0 , - 1.0 , - 1.0 , 3.986004418E+14 , { 0.0 , 0.0 , 1.0 } , { 0.0 , 0.0 ,
- 1.0 } , { 1.0 , 0.0 , 0.0 } , { 1.0 , 0.0 , 0.0 } , { 0.0 , 1.0 , 0.0 } , {
0.0 , 0.0 , 1.0 } , { 0.0 , 0.0 , 0.0 } , { 1.0 , 0.0 , 0.0 , 0.0 } , 1.0 ,
1.0 , 0.0 , 0.0 , - 1.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0
, 0.0 , 0.0 , 0.0 , 0.5 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0
, - 1.0 , 1.0 , - 1.0 , 1.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 ,
2.0 , - 1.0 , 1.0 , 0.5 , 0.5 , 0.5 , { 0.0 , 0.0 , 1.0 } ,
6.2831853071795862 , 6.2831853071795862 , 6.2831853071795862 , 1.0 , - 1.0 ,
1.0 , - 1.0 , 1.0 , - 1.0 , 1.0 , - 1.0 , - 1.0 , 1.0 , 0.5 , 0.5 , 0.5 , -
1.0 , 0.0 , 0.0 , - 1.0 , - 1.0 , 0.0 , 0.0 , - 1.0 , 0.5 , 0.5 , 0.5 , 1.0 ,
1.0 , 0.0 , 0.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 ,
2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , - 1.0 , 1.0 , - 1.0 , 1.0 ,
2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , - 1.0 , 1.0 , 0.5 , 0.5
, 0.5 , - 1.0 , 1.0 , 0.5 , 0.5 , 0.5 , - 1.0 , 0.0 , 0.0 , - 1.0 , - 1.0 ,
0.0 , 0.0 , - 1.0 , 0.5 , 0.5 , 0.5 , 1.0 , { 0.0 } , { - 1.0 } , { 1.0 } , {
0.0 } , { - 1.0 } , { 1.0 } , { 0.0 } , { - 1.0 } , { 1.0 } , { 0.0 } , { -
1.0 } , { 1.0 } , { 0.0 } , { - 1.0 } , { 1.0 } , { 0.0 } , { - 1.0 } , { 1.0
} , { 0.0 } , { - 1.0 } , { 1.0 } , { 0.0 } , { - 1.0 } , { 1.0 } } ; void
cu0mwyodxb ( real_T * naqwfx4c3o , coxtve2dsr * localP ) { * naqwfx4c3o =
localP -> P_0 ; } void pm1oeto4u5 ( ophodr0x0g * localB , due31ddxq5 *
localDW ) { localDW -> nxghgofox1 = kighwkyzkd ; localDW -> hliomhtf3d = 0U ;
localDW -> chsuhepoo1 = kighwkyzkd ; localDW -> csgaj2fyjn [ 0 ] = abopqckbgq
. P_2 ; localDW -> drbjvug1h2 [ 0 ] = abopqckbgq . P_1 ; localB -> eajnvfro2c
[ 0 ] = 0.0 ; localDW -> csgaj2fyjn [ 1 ] = abopqckbgq . P_2 ; localDW ->
drbjvug1h2 [ 1 ] = abopqckbgq . P_1 ; localB -> eajnvfro2c [ 1 ] = 0.0 ;
localDW -> csgaj2fyjn [ 2 ] = abopqckbgq . P_2 ; localDW -> drbjvug1h2 [ 2 ]
= abopqckbgq . P_1 ; localB -> eajnvfro2c [ 2 ] = 0.0 ; localB -> eva0gxek30
[ 0 ] = 0.0 ; localB -> eva0gxek30 [ 1 ] = 0.0 ; localB -> eva0gxek30 [ 2 ] =
0.0 ; localB -> eva0gxek30 [ 3 ] = 0.0 ; localB -> hfrm0ub4jk = 0.0 ; localB
-> be5djkeied . Roll = 0.0 ; localB -> be5djkeied . Pitch = 0.0 ; localB ->
be5djkeied . Yaw = 0.0 ; } void m1mdmrcg1e ( ophodr0x0g * localB , due31ddxq5
* localDW ) { localDW -> nxghgofox1 = kighwkyzkd ; localDW -> hliomhtf3d = 0U
; localDW -> chsuhepoo1 = kighwkyzkd ; localDW -> csgaj2fyjn [ 0 ] =
abopqckbgq . P_2 ; localDW -> drbjvug1h2 [ 0 ] = abopqckbgq . P_1 ; localB ->
eajnvfro2c [ 0 ] = 0.0 ; localDW -> csgaj2fyjn [ 1 ] = abopqckbgq . P_2 ;
localDW -> drbjvug1h2 [ 1 ] = abopqckbgq . P_1 ; localB -> eajnvfro2c [ 1 ] =
0.0 ; localDW -> csgaj2fyjn [ 2 ] = abopqckbgq . P_2 ; localDW -> drbjvug1h2
[ 2 ] = abopqckbgq . P_1 ; localB -> eajnvfro2c [ 2 ] = 0.0 ; localB ->
eva0gxek30 [ 0 ] = 0.0 ; localB -> eva0gxek30 [ 1 ] = 0.0 ; localB ->
eva0gxek30 [ 2 ] = 0.0 ; localB -> eva0gxek30 [ 3 ] = 0.0 ; localB ->
hfrm0ub4jk = 0.0 ; } void asbCubeSatACS ( const real_T * mnu3jlqpbs , const
real_T bhnv15a4pa [ 3 ] , const real_T on5s4vkdwd [ 3 ] , const real_T
froakzkqx3 [ 3 ] , const real_T aljmg0kmrn [ 3 ] , const real_T nkai3vec1v [
4 ] , const real_T djan2bvbcd [ 4 ] , const real_T koajiu2gr1 [ 3 ] , const
real_T dx5kyu2f55 [ 3 ] , const real_T * onrm3fofbn , const boolean_T *
n4eo4gsbzw , const real_T * odamlphqyv , const real_T pwhhp2vwwh [ 3 ] ,
const real_T oiuxhg3qxj [ 3 ] , const real_T mrazsa0t5u [ 3 ] , const real_T
ndmnln3vs5 [ 3 ] , const real_T obr3uvsaxl [ 3 ] , ACSOutBus * a5dz0igc5a ,
ophodr0x0g * localB , due31ddxq5 * localDW ) { real_T P_9 ; real_T
aulmnbewtw_p ; real_T cfc45nbsjb_p ; real_T dg1abadomh_p ; real_T
eezfy0115l_p ; real_T g11yqvtiub_p ; real_T i55bdf31c4_p ; real_T tmp ;
real_T tmp_p ; real_T u0 ; localB -> ool0nntzvr . utc_JD = * mnu3jlqpbs ;
localB -> ool0nntzvr . X_ecef [ 0 ] = bhnv15a4pa [ 0 ] ; localB -> ool0nntzvr
. V_ecef [ 0 ] = on5s4vkdwd [ 0 ] ; localB -> ool0nntzvr . X_eci [ 0 ] =
froakzkqx3 [ 0 ] ; localB -> ool0nntzvr . V_eci [ 0 ] = aljmg0kmrn [ 0 ] ;
localB -> ool0nntzvr . X_ecef [ 1 ] = bhnv15a4pa [ 1 ] ; localB -> ool0nntzvr
. V_ecef [ 1 ] = on5s4vkdwd [ 1 ] ; localB -> ool0nntzvr . X_eci [ 1 ] =
froakzkqx3 [ 1 ] ; localB -> ool0nntzvr . V_eci [ 1 ] = aljmg0kmrn [ 1 ] ;
localB -> ool0nntzvr . X_ecef [ 2 ] = bhnv15a4pa [ 2 ] ; localB -> ool0nntzvr
. V_ecef [ 2 ] = on5s4vkdwd [ 2 ] ; localB -> ool0nntzvr . X_eci [ 2 ] =
froakzkqx3 [ 2 ] ; localB -> ool0nntzvr . V_eci [ 2 ] = aljmg0kmrn [ 2 ] ;
localB -> ool0nntzvr . q_ecef2b [ 0 ] = nkai3vec1v [ 0 ] ; localB ->
ool0nntzvr . q_eci2b [ 0 ] = djan2bvbcd [ 0 ] ; localB -> ool0nntzvr .
q_ecef2b [ 1 ] = nkai3vec1v [ 1 ] ; localB -> ool0nntzvr . q_eci2b [ 1 ] =
djan2bvbcd [ 1 ] ; localB -> ool0nntzvr . q_ecef2b [ 2 ] = nkai3vec1v [ 2 ] ;
localB -> ool0nntzvr . q_eci2b [ 2 ] = djan2bvbcd [ 2 ] ; localB ->
ool0nntzvr . q_ecef2b [ 3 ] = nkai3vec1v [ 3 ] ; localB -> ool0nntzvr .
q_eci2b [ 3 ] = djan2bvbcd [ 3 ] ; localB -> ool0nntzvr . SunAngle = *
onrm3fofbn ; localB -> ool0nntzvr . SunInView = * n4eo4gsbzw ; localB ->
ool0nntzvr . Euler [ 0 ] = koajiu2gr1 [ 0 ] ; localB -> ool0nntzvr .
LatLonAlt [ 0 ] = dx5kyu2f55 [ 0 ] ; localB -> p5xc1va2sp . envAccel_ecef [ 0
] = pwhhp2vwwh [ 0 ] ; localB -> p5xc1va2sp . envForces_body [ 0 ] =
oiuxhg3qxj [ 0 ] ; localB -> p5xc1va2sp . envTorques_body [ 0 ] = mrazsa0t5u
[ 0 ] ; localB -> p5xc1va2sp . x_sun_eci [ 0 ] = ndmnln3vs5 [ 0 ] ; localB ->
p5xc1va2sp . earthAngRate [ 0 ] = obr3uvsaxl [ 0 ] ; localB -> ool0nntzvr .
Euler [ 1 ] = koajiu2gr1 [ 1 ] ; localB -> ool0nntzvr . LatLonAlt [ 1 ] =
dx5kyu2f55 [ 1 ] ; localB -> p5xc1va2sp . envAccel_ecef [ 1 ] = pwhhp2vwwh [
1 ] ; localB -> p5xc1va2sp . envForces_body [ 1 ] = oiuxhg3qxj [ 1 ] ; localB
-> p5xc1va2sp . envTorques_body [ 1 ] = mrazsa0t5u [ 1 ] ; localB ->
p5xc1va2sp . x_sun_eci [ 1 ] = ndmnln3vs5 [ 1 ] ; localB -> p5xc1va2sp .
earthAngRate [ 1 ] = obr3uvsaxl [ 1 ] ; localB -> ool0nntzvr . Euler [ 2 ] =
koajiu2gr1 [ 2 ] ; localB -> ool0nntzvr . LatLonAlt [ 2 ] = dx5kyu2f55 [ 2 ]
; localB -> p5xc1va2sp . envAccel_ecef [ 2 ] = pwhhp2vwwh [ 2 ] ; localB ->
p5xc1va2sp . envForces_body [ 2 ] = oiuxhg3qxj [ 2 ] ; localB -> p5xc1va2sp .
envTorques_body [ 2 ] = mrazsa0t5u [ 2 ] ; localB -> p5xc1va2sp . x_sun_eci [
2 ] = ndmnln3vs5 [ 2 ] ; localB -> p5xc1va2sp . earthAngRate [ 2 ] =
obr3uvsaxl [ 2 ] ; if ( localDW -> hliomhtf3d == 0U ) { localDW -> hliomhtf3d
= 1U ; localDW -> chsuhepoo1 = ndyhwzbfw5 ; localB -> eajnvfro2c [ 0 ] =
abopqckbgq . P_14 [ 0 ] ; localB -> eajnvfro2c [ 1 ] = abopqckbgq . P_14 [ 1
] ; localB -> eajnvfro2c [ 2 ] = abopqckbgq . P_14 [ 2 ] ; localB ->
eva0gxek30 [ 0 ] = abopqckbgq . P_15 [ 0 ] ; localB -> eva0gxek30 [ 1 ] =
abopqckbgq . P_15 [ 1 ] ; localB -> eva0gxek30 [ 2 ] = abopqckbgq . P_15 [ 2
] ; localB -> eva0gxek30 [ 3 ] = abopqckbgq . P_15 [ 3 ] ; } else if (
localDW -> chsuhepoo1 == ndyhwzbfw5 ) { if ( * odamlphqyv != 0.0 ) { localB
-> hfrm0ub4jk = 1.0 ; localDW -> chsuhepoo1 = kadj05owb1 ; localDW ->
nxghgofox1 = j21ewuch2t ; } else { localB -> eajnvfro2c [ 0 ] = abopqckbgq .
P_14 [ 0 ] ; localB -> eajnvfro2c [ 1 ] = abopqckbgq . P_14 [ 1 ] ; localB ->
eajnvfro2c [ 2 ] = abopqckbgq . P_14 [ 2 ] ; localB -> eva0gxek30 [ 0 ] =
abopqckbgq . P_15 [ 0 ] ; localB -> eva0gxek30 [ 1 ] = abopqckbgq . P_15 [ 1
] ; localB -> eva0gxek30 [ 2 ] = abopqckbgq . P_15 [ 2 ] ; localB ->
eva0gxek30 [ 3 ] = abopqckbgq . P_15 [ 3 ] ; } } else if ( * odamlphqyv ==
0.0 ) { localB -> hfrm0ub4jk = 0.0 ; localDW -> nxghgofox1 = kighwkyzkd ;
localDW -> chsuhepoo1 = ndyhwzbfw5 ; localB -> eajnvfro2c [ 0 ] = abopqckbgq
. P_14 [ 0 ] ; localB -> eajnvfro2c [ 1 ] = abopqckbgq . P_14 [ 1 ] ; localB
-> eajnvfro2c [ 2 ] = abopqckbgq . P_14 [ 2 ] ; localB -> eva0gxek30 [ 0 ] =
abopqckbgq . P_15 [ 0 ] ; localB -> eva0gxek30 [ 1 ] = abopqckbgq . P_15 [ 1
] ; localB -> eva0gxek30 [ 2 ] = abopqckbgq . P_15 [ 2 ] ; localB ->
eva0gxek30 [ 3 ] = abopqckbgq . P_15 [ 3 ] ; } else { switch ( localDW ->
nxghgofox1 ) { case bo2u2aqs02 : if ( * odamlphqyv == 2.0 ) { localB ->
hfrm0ub4jk = 1.0 ; localDW -> nxghgofox1 = j21ewuch2t ; } else { localB ->
oy4fgz3okb = localB -> ool0nntzvr . q_eci2b [ 0 ] * localB -> ool0nntzvr .
q_eci2b [ 0 ] ; localB -> ofl0shskgn = - localB -> ool0nntzvr . q_eci2b [ 1 ]
; localB -> g0d2oofefn = localB -> ofl0shskgn * localB -> ofl0shskgn ; localB
-> cxjpeok45y = - localB -> ool0nntzvr . q_eci2b [ 2 ] ; localB -> oilxbs5p0c
= localB -> cxjpeok45y * localB -> cxjpeok45y ; localB -> d4yitlrmpe = -
localB -> ool0nntzvr . q_eci2b [ 3 ] ; localB -> nl40dhi54m = localB ->
d4yitlrmpe * localB -> d4yitlrmpe ; localB -> b2mfztbda1 = ( ( localB ->
oy4fgz3okb + localB -> g0d2oofefn ) + localB -> oilxbs5p0c ) + localB ->
nl40dhi54m ; localB -> dzo5rpb5em = muDoubleScalarSqrt ( localB -> b2mfztbda1
) ; localB -> mn3cjqchah = localB -> ool0nntzvr . q_eci2b [ 0 ] / localB ->
dzo5rpb5em ; localB -> kb1j2xuv2x = localB -> mn3cjqchah * localB ->
mn3cjqchah ; localB -> okogcmjrp1 = localB -> ofl0shskgn / localB ->
dzo5rpb5em ; localB -> am1yajpkp5 = - localB -> okogcmjrp1 ; localB ->
o2ygwce3mu = localB -> am1yajpkp5 * localB -> am1yajpkp5 ; localB ->
krqzbeb01l = localB -> cxjpeok45y / localB -> dzo5rpb5em ; localB ->
moxzrom4e2 = - localB -> krqzbeb01l ; localB -> owvd0qhkab = localB ->
moxzrom4e2 * localB -> moxzrom4e2 ; localB -> cbdkowkpf3 = localB ->
d4yitlrmpe / localB -> dzo5rpb5em ; localB -> h3jeczv0h3 = - localB ->
cbdkowkpf3 ; localB -> jrlpuigzhc = localB -> h3jeczv0h3 * localB ->
h3jeczv0h3 ; localB -> caxzxod1me = ( ( localB -> kb1j2xuv2x + localB ->
o2ygwce3mu ) + localB -> owvd0qhkab ) + localB -> jrlpuigzhc ; localB ->
dxhva2syhh = muDoubleScalarSqrt ( localB -> caxzxod1me ) ; localB ->
ljhg4ah1hn = localB -> mn3cjqchah / localB -> dxhva2syhh ; localB ->
o44hoe01oz = localB -> am1yajpkp5 / localB -> dxhva2syhh ; localB ->
o4dw42eqdy = localB -> moxzrom4e2 / localB -> dxhva2syhh ; localB ->
ddi5il0z53 = localB -> h3jeczv0h3 / localB -> dxhva2syhh ; localB ->
gqcj1nfmop = localB -> o44hoe01oz * localB -> o4dw42eqdy ; localB ->
lc1r4vfhet = localB -> ljhg4ah1hn * localB -> ddi5il0z53 ; localB ->
mx012h1x4e = localB -> gqcj1nfmop + localB -> lc1r4vfhet ; localB ->
fccc45xdiq = abopqckbgq . P_21 * localB -> mx012h1x4e ; localB -> npmajomj43
= localB -> ljhg4ah1hn * localB -> o4dw42eqdy ; localB -> icfur12eqa = localB
-> o44hoe01oz * localB -> ddi5il0z53 ; localB -> jy3su1yaqh = localB ->
icfur12eqa - localB -> npmajomj43 ; localB -> pll4iy2ltw = abopqckbgq . P_22
* localB -> jy3su1yaqh ; localB -> fzdkoxuw3r = localB -> o4dw42eqdy * localB
-> o4dw42eqdy ; localB -> fd3it4cm3p = localB -> ddi5il0z53 * localB ->
ddi5il0z53 ; localB -> ok00ebomfe = ( abopqckbgq . P_58 - localB ->
fzdkoxuw3r ) - localB -> fd3it4cm3p ; localB -> bxscoc0iwo = abopqckbgq .
P_23 * localB -> ok00ebomfe ; localB -> k4b5tiznc1 = localB -> o44hoe01oz *
localB -> o4dw42eqdy ; localB -> kw0t1qhdx3 = localB -> ljhg4ah1hn * localB
-> ddi5il0z53 ; localB -> nxifsgxc2x = localB -> k4b5tiznc1 - localB ->
kw0t1qhdx3 ; localB -> g2jc0no1mq = abopqckbgq . P_24 * localB -> nxifsgxc2x
; localB -> hv2xsvyytk = localB -> ljhg4ah1hn * localB -> o44hoe01oz ; localB
-> bcdlg34pt3 = localB -> o4dw42eqdy * localB -> ddi5il0z53 ; localB ->
lg2isztegk = localB -> hv2xsvyytk + localB -> bcdlg34pt3 ; localB ->
cw4hetqa4a = abopqckbgq . P_25 * localB -> lg2isztegk ; localB -> d1sbs2pkf3
= localB -> o44hoe01oz * localB -> o44hoe01oz ; localB -> nfdsdifffn = localB
-> ddi5il0z53 * localB -> ddi5il0z53 ; localB -> ioivmki1h5 = ( abopqckbgq .
P_59 - localB -> d1sbs2pkf3 ) - localB -> nfdsdifffn ; localB -> ljleij1km3 =
abopqckbgq . P_26 * localB -> ioivmki1h5 ; localB -> ccu3jt5v2w = localB ->
o44hoe01oz * localB -> ddi5il0z53 ; localB -> pkpl3cgh2d = localB ->
ljhg4ah1hn * localB -> o4dw42eqdy ; localB -> nhdyrg1ri3 = localB ->
ccu3jt5v2w + localB -> pkpl3cgh2d ; localB -> g0drkrngsr = abopqckbgq . P_27
* localB -> nhdyrg1ri3 ; localB -> g4yahc00wc = localB -> ljhg4ah1hn * localB
-> o44hoe01oz ; localB -> mgy2tx4uj0 = localB -> o4dw42eqdy * localB ->
ddi5il0z53 ; localB -> j55rmyfoop = localB -> mgy2tx4uj0 - localB ->
g4yahc00wc ; localB -> i30rvmobjs = abopqckbgq . P_28 * localB -> j55rmyfoop
; localB -> hbxw1z240h = localB -> o44hoe01oz * localB -> o44hoe01oz ; localB
-> ayebppg4gx = localB -> o4dw42eqdy * localB -> o4dw42eqdy ; localB ->
mlbbs4fqao = ( abopqckbgq . P_60 - localB -> hbxw1z240h ) - localB ->
ayebppg4gx ; localB -> nsqipfztjp = abopqckbgq . P_29 * localB -> mlbbs4fqao
; localB -> p35guikpkx = localB -> ool0nntzvr . X_eci [ 1 ] * localB ->
ool0nntzvr . V_eci [ 2 ] ; localB -> ec0syteeth = localB -> ool0nntzvr .
V_eci [ 0 ] * localB -> ool0nntzvr . X_eci [ 2 ] ; localB -> ep2mm5jz5g =
localB -> ool0nntzvr . X_eci [ 0 ] * localB -> ool0nntzvr . V_eci [ 1 ] ;
localB -> byxaey0x2e = localB -> ool0nntzvr . V_eci [ 1 ] * localB ->
ool0nntzvr . X_eci [ 2 ] ; localB -> evsphivwme = localB -> ool0nntzvr .
X_eci [ 0 ] * localB -> ool0nntzvr . V_eci [ 2 ] ; localB -> mn4qnpiisu =
localB -> ool0nntzvr . V_eci [ 0 ] * localB -> ool0nntzvr . X_eci [ 1 ] ;
localB -> dg1abadomh [ 0 ] = localB -> p35guikpkx - localB -> byxaey0x2e ;
localB -> dg1abadomh [ 1 ] = localB -> ec0syteeth - localB -> evsphivwme ;
localB -> dg1abadomh [ 2 ] = localB -> ep2mm5jz5g - localB -> mn4qnpiisu ;
localB -> etb30mxmsv = abopqckbgq . P_61 [ 1 ] * localB -> dg1abadomh [ 2 ] ;
localB -> glxglw03ek = localB -> dg1abadomh [ 0 ] * abopqckbgq . P_61 [ 2 ] ;
localB -> n541cz4kc4 = abopqckbgq . P_61 [ 0 ] * localB -> dg1abadomh [ 1 ] ;
localB -> bmrs115gg5 = localB -> dg1abadomh [ 1 ] * abopqckbgq . P_61 [ 2 ] ;
localB -> fzuuudcvoz = abopqckbgq . P_61 [ 0 ] * localB -> dg1abadomh [ 2 ] ;
localB -> jgrywmthgg = localB -> dg1abadomh [ 0 ] * abopqckbgq . P_61 [ 1 ] ;
localB -> l4qn0wlr0t [ 0 ] = localB -> etb30mxmsv - localB -> bmrs115gg5 ;
localB -> l4qn0wlr0t [ 1 ] = localB -> glxglw03ek - localB -> fzuuudcvoz ;
localB -> l4qn0wlr0t [ 2 ] = localB -> n541cz4kc4 - localB -> jgrywmthgg ;
localB -> agwhucmw4a = localB -> ool0nntzvr . V_eci [ 1 ] * localB ->
dg1abadomh [ 2 ] ; localB -> db55uyfujk = localB -> dg1abadomh [ 0 ] * localB
-> ool0nntzvr . V_eci [ 2 ] ; localB -> hicmxn41fn = localB -> ool0nntzvr .
V_eci [ 0 ] * localB -> dg1abadomh [ 1 ] ; localB -> bt12pjuurh = localB ->
dg1abadomh [ 1 ] * localB -> ool0nntzvr . V_eci [ 2 ] ; localB -> m1z4jkd45v
= localB -> ool0nntzvr . V_eci [ 0 ] * localB -> dg1abadomh [ 2 ] ; localB ->
lrisupmyps = localB -> dg1abadomh [ 0 ] * localB -> ool0nntzvr . V_eci [ 1 ]
; localB -> ljvwgfcthm [ 0 ] = localB -> agwhucmw4a - localB -> bt12pjuurh ;
localB -> ljvwgfcthm [ 1 ] = localB -> db55uyfujk - localB -> m1z4jkd45v ;
localB -> ljvwgfcthm [ 2 ] = localB -> hicmxn41fn - localB -> lrisupmyps ;
aulmnbewtw_p = localB -> ool0nntzvr . X_eci [ 0 ] ; localB -> bjczw412ug [ 0
] = abopqckbgq . P_20 * aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p *
aulmnbewtw_p ; localB -> ahpliz1e1p [ 0 ] = localB -> ljvwgfcthm [ 0 ] /
abopqckbgq . P_7 ; aulmnbewtw_p = localB -> ool0nntzvr . X_eci [ 1 ] ; localB
-> bjczw412ug [ 1 ] = abopqckbgq . P_20 * aulmnbewtw_p ; eezfy0115l_p +=
aulmnbewtw_p * aulmnbewtw_p ; localB -> ahpliz1e1p [ 1 ] = localB ->
ljvwgfcthm [ 1 ] / abopqckbgq . P_7 ; aulmnbewtw_p = localB -> ool0nntzvr .
X_eci [ 2 ] ; localB -> bjczw412ug [ 2 ] = abopqckbgq . P_20 * aulmnbewtw_p ;
eezfy0115l_p += aulmnbewtw_p * aulmnbewtw_p ; localB -> ahpliz1e1p [ 2 ] =
localB -> ljvwgfcthm [ 2 ] / abopqckbgq . P_7 ; localB -> bbygxkv5lv = localB
-> fccc45xdiq * localB -> bjczw412ug [ 1 ] ; localB -> pjp0mnhgft = localB ->
pll4iy2ltw * localB -> bjczw412ug [ 2 ] ; localB -> aut5hni3kn = localB ->
bjczw412ug [ 0 ] * localB -> bxscoc0iwo ; localB -> d5qrgk5srt = ( localB ->
aut5hni3kn + localB -> bbygxkv5lv ) + localB -> pjp0mnhgft ; localB ->
nnyklgzqdv = localB -> bjczw412ug [ 0 ] * localB -> g2jc0no1mq ; localB ->
le1y3tomzf = localB -> cw4hetqa4a * localB -> bjczw412ug [ 2 ] ; localB ->
phopglwagr = localB -> ljleij1km3 * localB -> bjczw412ug [ 1 ] ; localB ->
pkaclggswi = ( localB -> nnyklgzqdv + localB -> phopglwagr ) + localB ->
le1y3tomzf ; localB -> ied0h2kyh4 = localB -> bjczw412ug [ 0 ] * localB ->
g0drkrngsr ; localB -> mlq3m1iq03 = localB -> i30rvmobjs * localB ->
bjczw412ug [ 1 ] ; localB -> m32g5gho0y = localB -> nsqipfztjp * localB ->
bjczw412ug [ 2 ] ; localB -> npxvfyksso = ( localB -> ied0h2kyh4 + localB ->
mlq3m1iq03 ) + localB -> m32g5gho0y ; localB -> e2eydg5nti = eezfy0115l_p ;
localB -> afdifrnx0o = muDoubleScalarSqrt ( localB -> e2eydg5nti ) ;
aulmnbewtw_p = localB -> ool0nntzvr . X_eci [ 0 ] ; eezfy0115l_p =
aulmnbewtw_p / localB -> afdifrnx0o ; localB -> eezfy0115l [ 0 ] =
eezfy0115l_p ; g11yqvtiub_p = localB -> ahpliz1e1p [ 0 ] - eezfy0115l_p ;
localB -> lnuwwpg5ug [ 0 ] = g11yqvtiub_p ; dg1abadomh_p = localB ->
l4qn0wlr0t [ 0 ] ; eezfy0115l_p = g11yqvtiub_p ; u0 = dg1abadomh_p *
eezfy0115l_p ; eezfy0115l_p = dg1abadomh_p ; P_9 = dg1abadomh_p *
eezfy0115l_p ; dg1abadomh_p = localB -> dg1abadomh [ 0 ] ; eezfy0115l_p =
dg1abadomh_p ; i55bdf31c4_p = dg1abadomh_p * eezfy0115l_p ; dg1abadomh_p =
g11yqvtiub_p ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p = dg1abadomh_p *
eezfy0115l_p ; eezfy0115l_p = aulmnbewtw_p ; tmp = dg1abadomh_p *
eezfy0115l_p ; dg1abadomh_p = aulmnbewtw_p ; eezfy0115l_p = localB ->
ool0nntzvr . V_eci [ 0 ] ; tmp_p = dg1abadomh_p * eezfy0115l_p ; aulmnbewtw_p
= localB -> ool0nntzvr . X_eci [ 1 ] ; eezfy0115l_p = aulmnbewtw_p / localB
-> afdifrnx0o ; localB -> eezfy0115l [ 1 ] = eezfy0115l_p ; g11yqvtiub_p =
localB -> ahpliz1e1p [ 1 ] - eezfy0115l_p ; localB -> lnuwwpg5ug [ 1 ] =
g11yqvtiub_p ; dg1abadomh_p = localB -> l4qn0wlr0t [ 1 ] ; eezfy0115l_p =
g11yqvtiub_p ; u0 += dg1abadomh_p * eezfy0115l_p ; eezfy0115l_p =
dg1abadomh_p ; P_9 += dg1abadomh_p * eezfy0115l_p ; dg1abadomh_p = localB ->
dg1abadomh [ 1 ] ; eezfy0115l_p = dg1abadomh_p ; i55bdf31c4_p += dg1abadomh_p
* eezfy0115l_p ; dg1abadomh_p = g11yqvtiub_p ; eezfy0115l_p = g11yqvtiub_p ;
cfc45nbsjb_p += dg1abadomh_p * eezfy0115l_p ; eezfy0115l_p = aulmnbewtw_p ;
tmp += dg1abadomh_p * eezfy0115l_p ; dg1abadomh_p = aulmnbewtw_p ;
eezfy0115l_p = localB -> ool0nntzvr . V_eci [ 1 ] ; tmp_p += dg1abadomh_p *
eezfy0115l_p ; aulmnbewtw_p = localB -> ool0nntzvr . X_eci [ 2 ] ;
eezfy0115l_p = aulmnbewtw_p / localB -> afdifrnx0o ; localB -> eezfy0115l [ 2
] = eezfy0115l_p ; g11yqvtiub_p = localB -> ahpliz1e1p [ 2 ] - eezfy0115l_p ;
localB -> lnuwwpg5ug [ 2 ] = g11yqvtiub_p ; dg1abadomh_p = localB ->
l4qn0wlr0t [ 2 ] ; eezfy0115l_p = g11yqvtiub_p ; u0 += dg1abadomh_p *
eezfy0115l_p ; eezfy0115l_p = dg1abadomh_p ; P_9 += dg1abadomh_p *
eezfy0115l_p ; dg1abadomh_p = localB -> dg1abadomh [ 2 ] ; eezfy0115l_p =
dg1abadomh_p ; i55bdf31c4_p += dg1abadomh_p * eezfy0115l_p ; dg1abadomh_p =
g11yqvtiub_p ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p += dg1abadomh_p *
eezfy0115l_p ; eezfy0115l_p = aulmnbewtw_p ; tmp += dg1abadomh_p *
eezfy0115l_p ; dg1abadomh_p = aulmnbewtw_p ; eezfy0115l_p = localB ->
ool0nntzvr . V_eci [ 2 ] ; tmp_p += dg1abadomh_p * eezfy0115l_p ; localB ->
j3ga1oyuck = u0 ; localB -> mrblli0fpi = P_9 ; localB -> fkdijksvcv =
i55bdf31c4_p ; localB -> pt3iorklut = cfc45nbsjb_p ; localB -> jjdn5hhzge =
tmp ; localB -> aqnp4cfgwe = tmp_p ; localB -> ebc3bll03g =
muDoubleScalarSqrt ( localB -> mrblli0fpi ) ; localB -> ndfwtndhb2 =
muDoubleScalarSqrt ( localB -> pt3iorklut ) ; localB -> f0mhs3a4rd = localB
-> ebc3bll03g * localB -> ndfwtndhb2 ; localB -> lori3upyy2 = localB ->
ndfwtndhb2 * localB -> afdifrnx0o ; localB -> ekdzdlnhil = localB ->
l4qn0wlr0t [ 0 ] / localB -> ebc3bll03g ; u0 = muDoubleScalarMin ( localB ->
ekdzdlnhil , abopqckbgq . P_69 ) ; localB -> iwkcx0lavi = u0 ; u0 =
muDoubleScalarMax ( abopqckbgq . P_70 , localB -> iwkcx0lavi ) ; localB ->
o4yd4b4gzf = u0 ; u0 = localB -> o4yd4b4gzf ; if ( u0 > 1.0 ) { u0 = 1.0 ; }
else if ( u0 < - 1.0 ) { u0 = - 1.0 ; } localB -> cpusfl2sar =
muDoubleScalarAcos ( u0 ) ; if ( localB -> l4qn0wlr0t [ 1 ] >= abopqckbgq .
P_30 ) { localB -> p0e0vtyjru = localB -> cpusfl2sar ; } else { localB ->
cmyyjtuluk = abopqckbgq . P_62 - localB -> cpusfl2sar ; localB -> p0e0vtyjru
= localB -> cmyyjtuluk ; } localB -> dlsbwzhxr4 = muDoubleScalarSqrt ( localB
-> fkdijksvcv ) ; localB -> aasjpcgrqs = localB -> dg1abadomh [ 2 ] / localB
-> dlsbwzhxr4 ; u0 = muDoubleScalarMin ( localB -> aasjpcgrqs , abopqckbgq .
P_71 ) ; localB -> pmbdp4ddbl = u0 ; u0 = muDoubleScalarMax ( abopqckbgq .
P_72 , localB -> pmbdp4ddbl ) ; localB -> iv1ukfp1hd = u0 ; u0 = localB ->
iv1ukfp1hd ; if ( u0 > 1.0 ) { u0 = 1.0 ; } else if ( u0 < - 1.0 ) { u0 = -
1.0 ; } localB -> geq0gvkcrx = muDoubleScalarAcos ( u0 ) ; localB ->
oxu45avetf = localB -> j3ga1oyuck / localB -> f0mhs3a4rd ; u0 =
muDoubleScalarMin ( localB -> oxu45avetf , abopqckbgq . P_67 ) ; localB ->
lbgwnudhf3 = u0 ; u0 = muDoubleScalarMax ( abopqckbgq . P_68 , localB ->
lbgwnudhf3 ) ; localB -> etfy3m1bru = u0 ; u0 = localB -> etfy3m1bru ; if (
u0 > 1.0 ) { u0 = 1.0 ; } else if ( u0 < - 1.0 ) { u0 = - 1.0 ; } localB ->
pdyuavc2jy = muDoubleScalarAcos ( u0 ) ; if ( localB -> lnuwwpg5ug [ 2 ] >=
abopqckbgq . P_31 ) { localB -> n1fcoqkpg3 = localB -> pdyuavc2jy ; } else {
localB -> nrjnkhol5s = abopqckbgq . P_63 - localB -> pdyuavc2jy ; localB ->
n1fcoqkpg3 = localB -> nrjnkhol5s ; } localB -> hm1zxbrphi = localB ->
jjdn5hhzge / localB -> lori3upyy2 ; u0 = muDoubleScalarMin ( localB ->
hm1zxbrphi , abopqckbgq . P_65 ) ; localB -> agjasow33a = u0 ; u0 =
muDoubleScalarMax ( abopqckbgq . P_66 , localB -> agjasow33a ) ; localB ->
hee2xb0e3y = u0 ; u0 = localB -> hee2xb0e3y ; if ( u0 > 1.0 ) { u0 = 1.0 ; }
else if ( u0 < - 1.0 ) { u0 = - 1.0 ; } localB -> giwnupiv41 =
muDoubleScalarAcos ( u0 ) ; if ( localB -> aqnp4cfgwe >= abopqckbgq . P_32 )
{ localB -> hc1vhewxx2 = localB -> giwnupiv41 ; } else { localB -> cs1r1b1pky
= abopqckbgq . P_64 - localB -> giwnupiv41 ; localB -> hc1vhewxx2 = localB ->
cs1r1b1pky ; } localB -> o2czp4pxpi = localB -> n1fcoqkpg3 + localB ->
hc1vhewxx2 ; localB -> byqmxcdqdo [ 0 ] = abopqckbgq . P_33 * localB ->
p0e0vtyjru ; localB -> byqmxcdqdo [ 1 ] = abopqckbgq . P_33 * localB ->
geq0gvkcrx ; localB -> byqmxcdqdo [ 2 ] = abopqckbgq . P_33 * localB ->
o2czp4pxpi ; muDoubleScalarSinCos ( localB -> byqmxcdqdo [ 0 ] , & localB ->
bpyazwfbkd [ 0 ] , & localB -> kawuvckvyr [ 0 ] ) ; muDoubleScalarSinCos (
localB -> byqmxcdqdo [ 1 ] , & localB -> bpyazwfbkd [ 1 ] , & localB ->
kawuvckvyr [ 1 ] ) ; muDoubleScalarSinCos ( localB -> byqmxcdqdo [ 2 ] , &
localB -> bpyazwfbkd [ 2 ] , & localB -> kawuvckvyr [ 2 ] ) ; localB ->
jbsnkvz0di = localB -> kawuvckvyr [ 0 ] * localB -> kawuvckvyr [ 1 ] * localB
-> kawuvckvyr [ 2 ] - localB -> bpyazwfbkd [ 0 ] * localB -> kawuvckvyr [ 1 ]
* localB -> bpyazwfbkd [ 2 ] ; localB -> lqbpxct3qp = localB -> jbsnkvz0di *
localB -> jbsnkvz0di ; localB -> fn2z54iays = localB -> kawuvckvyr [ 0 ] *
localB -> bpyazwfbkd [ 1 ] * localB -> kawuvckvyr [ 2 ] + localB ->
bpyazwfbkd [ 0 ] * localB -> bpyazwfbkd [ 1 ] * localB -> bpyazwfbkd [ 2 ] ;
localB -> eohy2rd4a4 = localB -> fn2z54iays * localB -> fn2z54iays ; localB
-> hxb4vrni02 = localB -> bpyazwfbkd [ 0 ] * localB -> bpyazwfbkd [ 1 ] *
localB -> kawuvckvyr [ 2 ] - localB -> kawuvckvyr [ 0 ] * localB ->
bpyazwfbkd [ 1 ] * localB -> bpyazwfbkd [ 2 ] ; localB -> fqynvuyycv = localB
-> hxb4vrni02 * localB -> hxb4vrni02 ; localB -> dnekb3ylbz = localB ->
bpyazwfbkd [ 0 ] * localB -> kawuvckvyr [ 1 ] * localB -> kawuvckvyr [ 2 ] +
localB -> kawuvckvyr [ 0 ] * localB -> kawuvckvyr [ 1 ] * localB ->
bpyazwfbkd [ 2 ] ; localB -> egd2x3b42d = localB -> dnekb3ylbz * localB ->
dnekb3ylbz ; localB -> causmkh21x = ( ( localB -> lqbpxct3qp + localB ->
eohy2rd4a4 ) + localB -> fqynvuyycv ) + localB -> egd2x3b42d ; localB ->
hvhu304r2r = muDoubleScalarSqrt ( localB -> causmkh21x ) ; localB ->
ozooxpy2ht = localB -> jbsnkvz0di / localB -> hvhu304r2r ; localB ->
mndxssdo01 = localB -> fn2z54iays / localB -> hvhu304r2r ; localB ->
hnzm5biay5 = localB -> hxb4vrni02 / localB -> hvhu304r2r ; localB ->
j5yi5zwe0m = localB -> dnekb3ylbz / localB -> hvhu304r2r ; localB ->
ck0xndebxb = localB -> ool0nntzvr . q_eci2b [ 0 ] * localB -> ool0nntzvr .
q_eci2b [ 0 ] ; localB -> gx42flf332 = localB -> ofl0shskgn * localB ->
ofl0shskgn ; localB -> iimemfbj1j = localB -> cxjpeok45y * localB ->
cxjpeok45y ; localB -> gzm43st2xf = localB -> d4yitlrmpe * localB ->
d4yitlrmpe ; localB -> p3cu53gvm4 = ( ( localB -> ck0xndebxb + localB ->
gx42flf332 ) + localB -> iimemfbj1j ) + localB -> gzm43st2xf ; localB ->
fqkrnszdxr = muDoubleScalarSqrt ( localB -> p3cu53gvm4 ) ; localB ->
ejangytgog = localB -> ool0nntzvr . q_eci2b [ 0 ] / localB -> fqkrnszdxr ;
localB -> mm1olqviq0 = localB -> ejangytgog * localB -> mndxssdo01 ; localB
-> k44r2lq5zi = localB -> ofl0shskgn / localB -> fqkrnszdxr ; localB ->
p3llpzcon2 = localB -> k44r2lq5zi * localB -> ozooxpy2ht ; localB ->
pkb3fbobtq = localB -> cxjpeok45y / localB -> fqkrnszdxr ; localB ->
ndev3kmaqo = localB -> pkb3fbobtq * localB -> j5yi5zwe0m ; localB ->
iitpu0db13 = localB -> d4yitlrmpe / localB -> fqkrnszdxr ; localB ->
biy4ycq4xn = localB -> iitpu0db13 * localB -> hnzm5biay5 ; localB ->
jmha5x3bse = ( ( localB -> mm1olqviq0 + localB -> p3llpzcon2 ) + localB ->
ndev3kmaqo ) - localB -> biy4ycq4xn ; localB -> osbykivhho = - localB ->
jmha5x3bse ; localB -> hq21ywahrw = localB -> ejangytgog * localB ->
hnzm5biay5 ; localB -> pb231gezyc = localB -> k44r2lq5zi * localB ->
j5yi5zwe0m ; localB -> knqusqhaxz = localB -> pkb3fbobtq * localB ->
ozooxpy2ht ; localB -> bot4qcnl3h = localB -> iitpu0db13 * localB ->
mndxssdo01 ; localB -> ju2rgaiwab = ( ( localB -> hq21ywahrw - localB ->
pb231gezyc ) + localB -> knqusqhaxz ) + localB -> bot4qcnl3h ; localB ->
cuyvgrwyjq = - localB -> ju2rgaiwab ; localB -> ihr23c3nfm = localB ->
ejangytgog * localB -> j5yi5zwe0m ; localB -> gqehaoywi5 = localB ->
k44r2lq5zi * localB -> hnzm5biay5 ; localB -> jmebeghu43 = localB ->
pkb3fbobtq * localB -> mndxssdo01 ; localB -> lgjhe3i5tp = localB ->
iitpu0db13 * localB -> ozooxpy2ht ; localB -> kknswnzgar = ( ( localB ->
ihr23c3nfm + localB -> gqehaoywi5 ) - localB -> jmebeghu43 ) + localB ->
lgjhe3i5tp ; localB -> npiw0h41ov = - localB -> kknswnzgar ; localB ->
o4elbvptle = localB -> ejangytgog * localB -> ozooxpy2ht ; localB ->
axdpxmsalb = localB -> k44r2lq5zi * localB -> mndxssdo01 ; localB ->
pdynksfixu = localB -> pkb3fbobtq * localB -> hnzm5biay5 ; localB ->
eldkjarxwa = localB -> iitpu0db13 * localB -> j5yi5zwe0m ; localB ->
orywbc4cl5 = ( ( localB -> o4elbvptle - localB -> axdpxmsalb ) - localB ->
pdynksfixu ) - localB -> eldkjarxwa ; if ( localB -> o4dw42eqdy_ax3wx1gs5w <
1.0E-6 ) { cu0mwyodxb ( & localB -> lt2hx2wr0q , & abopqckbgq . cu0mwyodxbx )
; } else if ( localB -> gqcj1nfmop_ifotjnizh4 < 1.0E-6 ) { cu0mwyodxb ( &
localB -> lt2hx2wr0q , & abopqckbgq . eul4q2la45 ) ; } else { cu0mwyodxb ( &
localB -> lt2hx2wr0q , & abopqckbgq . eknrx3nsh2 ) ; } localB -> dcverjtere [
0 ] = localB -> d5qrgk5srt ; localB -> dcverjtere [ 1 ] = localB ->
pkaclggswi ; localB -> dcverjtere [ 2 ] = localB -> npxvfyksso ; localB ->
pnykh1l0uu = localB -> orywbc4cl5 * localB -> orywbc4cl5 ; localB ->
famiddnr2p = localB -> osbykivhho * localB -> osbykivhho ; localB ->
erolfntca5 = localB -> cuyvgrwyjq * localB -> cuyvgrwyjq ; localB ->
nhxpebouz0 = localB -> npiw0h41ov * localB -> npiw0h41ov ; localB ->
dv4s1bllvm = ( ( localB -> pnykh1l0uu + localB -> famiddnr2p ) + localB ->
erolfntca5 ) + localB -> nhxpebouz0 ; localB -> njzoclsfrw =
muDoubleScalarSqrt ( localB -> dv4s1bllvm ) ; localB -> gkj32djha1 = localB
-> cuyvgrwyjq / localB -> njzoclsfrw ; localB -> jpsem5kzpa = localB ->
gkj32djha1 * localB -> gkj32djha1 ; localB -> opgoqfynbk = localB ->
npiw0h41ov / localB -> njzoclsfrw ; localB -> fzdu1bw0eq = localB ->
opgoqfynbk * localB -> opgoqfynbk ; localB -> bvgybwoesr = ( abopqckbgq .
P_86 - localB -> jpsem5kzpa ) - localB -> fzdu1bw0eq ; localB -> gjyddckmfw =
abopqckbgq . P_34 * localB -> bvgybwoesr ; localB -> mxolqqyrsh = abopqckbgq
. P_12 [ 0 ] * localB -> gjyddckmfw ; localB -> d0gpkwcwsz = localB ->
osbykivhho / localB -> njzoclsfrw ; localB -> ecqe5qsszq = localB ->
d0gpkwcwsz * localB -> gkj32djha1 ; localB -> o34sdvhd0t = localB ->
orywbc4cl5 / localB -> njzoclsfrw ; localB -> nejfa4cive = localB ->
o34sdvhd0t * localB -> opgoqfynbk ; localB -> mogbelzrvm = localB ->
ecqe5qsszq + localB -> nejfa4cive ; localB -> b4tceedauc = abopqckbgq . P_35
* localB -> mogbelzrvm ; localB -> mloup0leue = localB -> b4tceedauc *
abopqckbgq . P_12 [ 1 ] ; localB -> hwf5oytlj3 = localB -> o34sdvhd0t *
localB -> gkj32djha1 ; localB -> ewnxwss35j = localB -> d0gpkwcwsz * localB
-> opgoqfynbk ; localB -> lqypjp3o31 = localB -> ewnxwss35j - localB ->
hwf5oytlj3 ; localB -> ckeankaivt = abopqckbgq . P_36 * localB -> lqypjp3o31
; localB -> dxnwzic3ry = localB -> ckeankaivt * abopqckbgq . P_12 [ 2 ] ;
localB -> gm5d1w405k = ( localB -> mxolqqyrsh + localB -> mloup0leue ) +
localB -> dxnwzic3ry ; localB -> epo5mzwugv = localB -> d0gpkwcwsz * localB
-> gkj32djha1 ; localB -> eu0zkvqcss = localB -> o34sdvhd0t * localB ->
opgoqfynbk ; localB -> ngddbpyr12 = localB -> epo5mzwugv - localB ->
eu0zkvqcss ; localB -> i1h1avmx4p = abopqckbgq . P_37 * localB -> ngddbpyr12
; localB -> l2ocykfp5v = abopqckbgq . P_12 [ 0 ] * localB -> i1h1avmx4p ;
localB -> n13b5y24ff = localB -> d0gpkwcwsz * localB -> d0gpkwcwsz ; localB
-> lskp2xkenu = localB -> opgoqfynbk * localB -> opgoqfynbk ; localB ->
ougw0bes4c = ( abopqckbgq . P_87 - localB -> n13b5y24ff ) - localB ->
lskp2xkenu ; localB -> cla0xgqqil = abopqckbgq . P_38 * localB -> ougw0bes4c
; localB -> nhegb3bljs = localB -> cla0xgqqil * abopqckbgq . P_12 [ 1 ] ;
localB -> kbjn45aotw = localB -> o34sdvhd0t * localB -> d0gpkwcwsz ; localB
-> nggjvy3hkt = localB -> gkj32djha1 * localB -> opgoqfynbk ; localB ->
htnbixkhek = localB -> kbjn45aotw + localB -> nggjvy3hkt ; localB ->
k0k0usb52x = abopqckbgq . P_39 * localB -> htnbixkhek ; localB -> g52gdp4kin
= localB -> k0k0usb52x * abopqckbgq . P_12 [ 2 ] ; localB -> kb0ryg5dhg = (
localB -> l2ocykfp5v + localB -> nhegb3bljs ) + localB -> g52gdp4kin ; localB
-> nvgi1erz12 = localB -> d0gpkwcwsz * localB -> opgoqfynbk ; localB ->
pkws233urp = localB -> o34sdvhd0t * localB -> gkj32djha1 ; localB ->
gqpgn5ktxa = localB -> nvgi1erz12 + localB -> pkws233urp ; localB ->
mb24zlt2cy = abopqckbgq . P_40 * localB -> gqpgn5ktxa ; localB -> ntihw5sbjd
= abopqckbgq . P_12 [ 0 ] * localB -> mb24zlt2cy ; localB -> gof5340kkx =
localB -> o34sdvhd0t * localB -> d0gpkwcwsz ; localB -> d2rc3ibhk0 = localB
-> gkj32djha1 * localB -> opgoqfynbk ; localB -> epkeyt301b = localB ->
d2rc3ibhk0 - localB -> gof5340kkx ; localB -> luywqi2ior = abopqckbgq . P_41
* localB -> epkeyt301b ; localB -> cpif1eq3mm = localB -> luywqi2ior *
abopqckbgq . P_12 [ 1 ] ; localB -> mr4kqey1h1 = localB -> d0gpkwcwsz *
localB -> d0gpkwcwsz ; localB -> mqvdudwbs0 = localB -> gkj32djha1 * localB
-> gkj32djha1 ; localB -> n2hred2weo = ( abopqckbgq . P_88 - localB ->
mr4kqey1h1 ) - localB -> mqvdudwbs0 ; localB -> fu1bxhersx = abopqckbgq .
P_42 * localB -> n2hred2weo ; localB -> jgb2wihvax = localB -> fu1bxhersx *
abopqckbgq . P_12 [ 2 ] ; localB -> iycqa0hlfu = ( localB -> ntihw5sbjd +
localB -> cpif1eq3mm ) + localB -> jgb2wihvax ; localB -> gwhdsxmtaq [ 0 ] =
localB -> gm5d1w405k ; localB -> gwhdsxmtaq [ 1 ] = localB -> kb0ryg5dhg ;
localB -> gwhdsxmtaq [ 2 ] = localB -> iycqa0hlfu ; cfc45nbsjb_p = localB ->
dcverjtere [ 0 ] ; aulmnbewtw_p = localB -> gwhdsxmtaq [ 0 ] ; eezfy0115l_p =
aulmnbewtw_p ; u0 = cfc45nbsjb_p * eezfy0115l_p ; eezfy0115l_p = cfc45nbsjb_p
; P_9 = cfc45nbsjb_p * eezfy0115l_p ; cfc45nbsjb_p = aulmnbewtw_p ;
eezfy0115l_p = aulmnbewtw_p ; i55bdf31c4_p = cfc45nbsjb_p * eezfy0115l_p ;
cfc45nbsjb_p = localB -> dcverjtere [ 1 ] ; aulmnbewtw_p = localB ->
gwhdsxmtaq [ 1 ] ; eezfy0115l_p = aulmnbewtw_p ; u0 += cfc45nbsjb_p *
eezfy0115l_p ; eezfy0115l_p = cfc45nbsjb_p ; P_9 += cfc45nbsjb_p *
eezfy0115l_p ; cfc45nbsjb_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ;
i55bdf31c4_p += cfc45nbsjb_p * eezfy0115l_p ; cfc45nbsjb_p = localB ->
dcverjtere [ 2 ] ; aulmnbewtw_p = localB -> gwhdsxmtaq [ 2 ] ; eezfy0115l_p =
aulmnbewtw_p ; u0 += cfc45nbsjb_p * eezfy0115l_p ; eezfy0115l_p =
cfc45nbsjb_p ; P_9 += cfc45nbsjb_p * eezfy0115l_p ; cfc45nbsjb_p =
aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; i55bdf31c4_p += cfc45nbsjb_p *
eezfy0115l_p ; localB -> fbe3yalwvk = u0 ; localB -> daz5i3fp3z = P_9 ;
localB -> kdv2vetsd4 = i55bdf31c4_p ; localB -> gcnwjt5vnt = localB ->
daz5i3fp3z * localB -> kdv2vetsd4 ; localB -> ab50kblc1h = muDoubleScalarSqrt
( localB -> gcnwjt5vnt ) ; localB -> ou1fgxptgz = localB -> fbe3yalwvk /
localB -> ab50kblc1h ; localB -> hebyha2jan = localB -> ou1fgxptgz +
abopqckbgq . P_43 ; localB -> cxbamchcdn = muDoubleScalarAbs ( localB ->
hebyha2jan ) ; localB -> egtmju4m0t = localB -> ou1fgxptgz + abopqckbgq .
P_44 ; localB -> ggliyr2azb = muDoubleScalarAbs ( localB -> egtmju4m0t ) ; if
( localB -> cxbamchcdn < 1.0E-6 ) { cu0mwyodxb ( & localB -> ea5nunjvdj , &
abopqckbgq . hmitxmfqrk ) ; } else if ( localB -> ggliyr2azb < 1.0E-6 ) {
cu0mwyodxb ( & localB -> ea5nunjvdj , & abopqckbgq . m0bnsqzq3n ) ; } else {
cu0mwyodxb ( & localB -> ea5nunjvdj , & abopqckbgq . i52sqmyllx ) ; } localB
-> pcwqemv0zd = ( localB -> lt2hx2wr0q != abopqckbgq . P_18 ) ; localB ->
ff50carbrd = ( localB -> ea5nunjvdj != abopqckbgq . P_19 ) ; localB ->
f5hy4s11sg = ( localB -> pcwqemv0zd || localB -> ff50carbrd ) ; P_9 =
abopqckbgq . P_8 [ 0 ] ; cfc45nbsjb_p = localB -> dcverjtere [ 0 ] ;
eezfy0115l_p = P_9 * cfc45nbsjb_p ; P_9 = cfc45nbsjb_p ; u0 = P_9 *
cfc45nbsjb_p ; P_9 = abopqckbgq . P_8 [ 1 ] ; cfc45nbsjb_p = localB ->
dcverjtere [ 1 ] ; eezfy0115l_p += P_9 * cfc45nbsjb_p ; P_9 = cfc45nbsjb_p ;
u0 += P_9 * cfc45nbsjb_p ; P_9 = abopqckbgq . P_8 [ 2 ] ; cfc45nbsjb_p =
localB -> dcverjtere [ 2 ] ; eezfy0115l_p += P_9 * cfc45nbsjb_p ; P_9 =
cfc45nbsjb_p ; u0 += P_9 * cfc45nbsjb_p ; localB -> osp1o22rda = eezfy0115l_p
; localB -> bxxxu5bwho = u0 ; localB -> jhbzhadq4q = localB ->
d5qrgk5srt_ojunzewo4f * localB -> bxxxu5bwho ; localB -> coh0mstb42 =
muDoubleScalarSqrt ( localB -> jhbzhadq4q ) ; localB -> jnyglzy4dk = localB
-> osp1o22rda + localB -> coh0mstb42 ; localB -> hvxwz1vz3c = localB ->
jnyglzy4dk * localB -> jnyglzy4dk ; localB -> bxg5g3zdkx = eezfy0115l_p ;
localB -> lvl001jgra = u0 ; localB -> bkef4tcfj5 = localB ->
ok00ebomfe_ltu3syw14q * localB -> lvl001jgra ; localB -> d00vlavgmu =
muDoubleScalarSqrt ( localB -> bkef4tcfj5 ) ; localB -> kstypcc31r = localB
-> bxg5g3zdkx / localB -> d00vlavgmu ; localB -> oe4dpjejx1 = localB ->
kstypcc31r + abopqckbgq . P_45 ; localB -> jdvrkdcl5m = muDoubleScalarAbs (
localB -> oe4dpjejx1 ) ; localB -> ehtmgsase3 = localB -> kstypcc31r +
abopqckbgq . P_46 ; localB -> on50o5cfd4 = muDoubleScalarAbs ( localB ->
ehtmgsase3 ) ; if ( localB -> jdvrkdcl5m < 1.0E-6 ) { cu0mwyodxb ( & localB
-> e2qflkqxme , & abopqckbgq . ggcc21rrux ) ; } else if ( localB ->
on50o5cfd4 < 1.0E-6 ) { cu0mwyodxb ( & localB -> e2qflkqxme , & abopqckbgq .
fk0imeoonn ) ; } else { cu0mwyodxb ( & localB -> e2qflkqxme , & abopqckbgq .
ne0qiqncyo ) ; } localB -> n4q5yyr3k5 = ( localB -> e2qflkqxme != abopqckbgq
. P_3 ) ; if ( localB -> n4q5yyr3k5 ) { localB -> bj11js3edn = abopqckbgq .
P_8 [ 1 ] * localB -> d5qrgk5srt ; localB -> l4w0k5vh3j = abopqckbgq . P_8 [
0 ] * localB -> npxvfyksso ; localB -> f0xbzdpffo = abopqckbgq . P_8 [ 2 ] *
localB -> pkaclggswi ; localB -> g4ufmnozok = abopqckbgq . P_8 [ 0 ] * localB
-> pkaclggswi ; localB -> ddfggx0jho = abopqckbgq . P_8 [ 2 ] * localB ->
d5qrgk5srt ; localB -> j1jh51tjjo = abopqckbgq . P_8 [ 1 ] * localB ->
npxvfyksso ; localB -> oyyyr2w4eh [ 0 ] = localB -> j1jh51tjjo - localB ->
f0xbzdpffo ; localB -> oyyyr2w4eh [ 1 ] = localB -> ddfggx0jho - localB ->
l4w0k5vh3j ; localB -> oyyyr2w4eh [ 2 ] = localB -> g4ufmnozok - localB ->
bj11js3edn ; localB -> bwgvonrywj [ 0 ] = localB -> oyyyr2w4eh [ 0 ] ; localB
-> bwgvonrywj [ 1 ] = localB -> oyyyr2w4eh [ 1 ] ; localB -> bwgvonrywj [ 2 ]
= localB -> oyyyr2w4eh [ 2 ] ; } else { localB -> bwgvonrywj [ 0 ] = localB
-> nnyklgzqdv_mvr1suhnoo [ 0 ] ; localB -> bwgvonrywj [ 1 ] = localB ->
nnyklgzqdv_mvr1suhnoo [ 1 ] ; localB -> bwgvonrywj [ 2 ] = localB ->
nnyklgzqdv_mvr1suhnoo [ 2 ] ; } localB -> izw54oqg3g = localB -> bwgvonrywj [
0 ] * localB -> bwgvonrywj [ 0 ] ; localB -> krdiev1g22 = localB ->
bwgvonrywj [ 1 ] * localB -> bwgvonrywj [ 1 ] ; localB -> ih0ttwlfcj = localB
-> bwgvonrywj [ 2 ] * localB -> bwgvonrywj [ 2 ] ; localB -> ktcdg14d2l = ( (
localB -> hvxwz1vz3c + localB -> izw54oqg3g ) + localB -> krdiev1g22 ) +
localB -> ih0ttwlfcj ; localB -> gqhfn3hukz = muDoubleScalarSqrt ( localB ->
ktcdg14d2l ) ; localB -> gfuclxattu = localB -> jnyglzy4dk / localB ->
gqhfn3hukz ; localB -> pg5opvcrvh = localB -> pkaclggswi * localB ->
iycqa0hlfu ; localB -> ohiz2bpqhh = localB -> npxvfyksso * localB ->
gm5d1w405k ; localB -> b0fmiw0h2k = localB -> d5qrgk5srt * localB ->
kb0ryg5dhg ; localB -> hmzlvsezex = localB -> npxvfyksso * localB ->
kb0ryg5dhg ; localB -> pcbplvsuqj = localB -> d5qrgk5srt * localB ->
iycqa0hlfu ; localB -> bcih1onunj = localB -> pkaclggswi * localB ->
gm5d1w405k ; localB -> pz44ami1qa [ 0 ] = localB -> pg5opvcrvh - localB ->
hmzlvsezex ; localB -> pz44ami1qa [ 1 ] = localB -> ohiz2bpqhh - localB ->
pcbplvsuqj ; localB -> pz44ami1qa [ 2 ] = localB -> b0fmiw0h2k - localB ->
bcih1onunj ; localB -> hdncwc5fdq = localB -> pz44ami1qa [ 1 ] * localB ->
npxvfyksso ; localB -> kwpnv2rcpo = localB -> pz44ami1qa [ 2 ] * localB ->
d5qrgk5srt ; localB -> d5rgzq2tvx = localB -> pz44ami1qa [ 0 ] * localB ->
pkaclggswi ; localB -> j5yf3xat2v = localB -> pz44ami1qa [ 2 ] * localB ->
pkaclggswi ; localB -> hrkro30xus = localB -> pz44ami1qa [ 0 ] * localB ->
npxvfyksso ; localB -> iefvnwwjyt = localB -> pz44ami1qa [ 1 ] * localB ->
d5qrgk5srt ; localB -> g4ewvtnxzf [ 0 ] = localB -> hdncwc5fdq - localB ->
j5yf3xat2v ; localB -> g4ewvtnxzf [ 1 ] = localB -> kwpnv2rcpo - localB ->
hrkro30xus ; localB -> g4ewvtnxzf [ 2 ] = localB -> d5rgzq2tvx - localB ->
iefvnwwjyt ; localB -> jm3m25bbb2 = localB -> bwgvonrywj [ 1 ] / localB ->
gqhfn3hukz ; localB -> gd1cqa4zrx = localB -> gfuclxattu * localB ->
gfuclxattu ; localB -> g5t4vavgkm = localB -> bwgvonrywj [ 0 ] / localB ->
gqhfn3hukz ; localB -> icyllkenls = localB -> g5t4vavgkm * localB ->
g5t4vavgkm ; localB -> aq42vatfbe = localB -> jm3m25bbb2 * localB ->
jm3m25bbb2 ; localB -> f4ejwfkds5 = localB -> bwgvonrywj [ 2 ] / localB ->
gqhfn3hukz ; localB -> fio5ggjtz4 = localB -> f4ejwfkds5 * localB ->
f4ejwfkds5 ; localB -> nm35qh3zu3 = ( ( localB -> gd1cqa4zrx + localB ->
icyllkenls ) + localB -> aq42vatfbe ) + localB -> fio5ggjtz4 ; localB ->
bpjgo1njll = muDoubleScalarSqrt ( localB -> nm35qh3zu3 ) ; localB ->
pntfmsjbtn = localB -> jm3m25bbb2 / localB -> bpjgo1njll ; localB ->
lk4t5si4ze = localB -> pntfmsjbtn * localB -> pntfmsjbtn ; localB ->
mggrlncne4 = localB -> f4ejwfkds5 / localB -> bpjgo1njll ; localB ->
el50wvophu = localB -> mggrlncne4 * localB -> mggrlncne4 ; localB ->
a4zudisqko = ( abopqckbgq . P_75 - localB -> lk4t5si4ze ) - localB ->
el50wvophu ; localB -> kzycw52ejt = abopqckbgq . P_47 * localB -> a4zudisqko
; localB -> hp4ufb2oze = localB -> g4ewvtnxzf [ 0 ] * localB -> kzycw52ejt ;
localB -> pxo5ezwv0g = localB -> g5t4vavgkm / localB -> bpjgo1njll ; localB
-> nyfow5mrge = localB -> pxo5ezwv0g * localB -> pntfmsjbtn ; localB ->
bksedwpvip = localB -> gfuclxattu / localB -> bpjgo1njll ; localB ->
nxqqmeatul = localB -> bksedwpvip * localB -> mggrlncne4 ; localB ->
pgphduumir = localB -> nyfow5mrge + localB -> nxqqmeatul ; localB ->
m1sc5t5ela = abopqckbgq . P_48 * localB -> pgphduumir ; localB -> hmykqehskp
= localB -> m1sc5t5ela * localB -> g4ewvtnxzf [ 1 ] ; localB -> iysjb31p2t =
localB -> bksedwpvip * localB -> pntfmsjbtn ; localB -> c21izmax0z = localB
-> pxo5ezwv0g * localB -> mggrlncne4 ; localB -> dmx1oysjlt = localB ->
c21izmax0z - localB -> iysjb31p2t ; localB -> ppzpnv2e3i = abopqckbgq . P_49
* localB -> dmx1oysjlt ; localB -> ea43ud3w4p = localB -> ppzpnv2e3i * localB
-> g4ewvtnxzf [ 2 ] ; localB -> eajaumkk43 = ( localB -> hp4ufb2oze + localB
-> hmykqehskp ) + localB -> ea43ud3w4p ; localB -> f22olq3k3u = localB ->
pxo5ezwv0g * localB -> pntfmsjbtn ; localB -> omu3glusyp = localB ->
bksedwpvip * localB -> mggrlncne4 ; localB -> b4e3y4mqrh = localB ->
f22olq3k3u - localB -> omu3glusyp ; localB -> bmtjf3bm54 = abopqckbgq . P_50
* localB -> b4e3y4mqrh ; localB -> bt0fpawuup = localB -> g4ewvtnxzf [ 0 ] *
localB -> bmtjf3bm54 ; localB -> lpjuypkr20 = localB -> pxo5ezwv0g * localB
-> pxo5ezwv0g ; localB -> byubrgg54v = localB -> mggrlncne4 * localB ->
mggrlncne4 ; localB -> bm3sl4vywz = ( abopqckbgq . P_76 - localB ->
lpjuypkr20 ) - localB -> byubrgg54v ; localB -> nuf03svhyi = abopqckbgq .
P_51 * localB -> bm3sl4vywz ; localB -> ap0gzzkhfq = localB -> nuf03svhyi *
localB -> g4ewvtnxzf [ 1 ] ; localB -> cstrhea5p5 = localB -> bksedwpvip *
localB -> pxo5ezwv0g ; localB -> fxeoc2bvwc = localB -> pntfmsjbtn * localB
-> mggrlncne4 ; localB -> mshngjj1xo = localB -> cstrhea5p5 + localB ->
fxeoc2bvwc ; localB -> ig1krgspx2 = abopqckbgq . P_52 * localB -> mshngjj1xo
; localB -> poswq35ses = localB -> ig1krgspx2 * localB -> g4ewvtnxzf [ 2 ] ;
localB -> knwf3igq3m = ( localB -> bt0fpawuup + localB -> ap0gzzkhfq ) +
localB -> poswq35ses ; localB -> m5mxsaorav = localB -> pxo5ezwv0g * localB
-> mggrlncne4 ; localB -> e4yms3rzr1 = localB -> bksedwpvip * localB ->
pntfmsjbtn ; localB -> b4rpx3r1t1 = localB -> m5mxsaorav + localB ->
e4yms3rzr1 ; localB -> miqiol3cw1 = abopqckbgq . P_53 * localB -> b4rpx3r1t1
; localB -> aoyku4xzoc = localB -> g4ewvtnxzf [ 0 ] * localB -> miqiol3cw1 ;
localB -> mntsxbtdsv = localB -> bksedwpvip * localB -> pxo5ezwv0g ; localB
-> kkdaxsazqy = localB -> pntfmsjbtn * localB -> mggrlncne4 ; localB ->
e3hxopmdit = localB -> kkdaxsazqy - localB -> mntsxbtdsv ; localB ->
j1anqoqr5z = abopqckbgq . P_54 * localB -> e3hxopmdit ; localB -> it2b121c5v
= localB -> j1anqoqr5z * localB -> g4ewvtnxzf [ 1 ] ; localB -> hgblyiczhq =
localB -> pxo5ezwv0g * localB -> pxo5ezwv0g ; localB -> ckmdjiurfo = localB
-> pntfmsjbtn * localB -> pntfmsjbtn ; localB -> okzmpwrkaf = ( abopqckbgq .
P_77 - localB -> hgblyiczhq ) - localB -> ckmdjiurfo ; localB -> m2yqc5dpa2 =
abopqckbgq . P_55 * localB -> okzmpwrkaf ; localB -> dmkwu2mgu1 = localB ->
m2yqc5dpa2 * localB -> g4ewvtnxzf [ 2 ] ; localB -> mlnawjq3c4 = ( localB ->
aoyku4xzoc + localB -> it2b121c5v ) + localB -> dmkwu2mgu1 ; localB ->
bd0rx40fsv [ 0 ] = localB -> eajaumkk43 ; localB -> bd0rx40fsv [ 1 ] = localB
-> knwf3igq3m ; localB -> bd0rx40fsv [ 2 ] = localB -> mlnawjq3c4 ;
eezfy0115l_p = localB -> mlbbs4fqao_klmngopk1n [ 0 ] ; i55bdf31c4_p = localB
-> bd0rx40fsv [ 0 ] ; u0 = eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p =
i55bdf31c4_p ; P_9 = eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
mlbbs4fqao_klmngopk1n [ 1 ] ; i55bdf31c4_p = localB -> bd0rx40fsv [ 1 ] ; u0
+= eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = i55bdf31c4_p ; P_9 +=
eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB -> mlbbs4fqao_klmngopk1n
[ 2 ] ; i55bdf31c4_p = localB -> bd0rx40fsv [ 2 ] ; u0 += eezfy0115l_p *
i55bdf31c4_p ; eezfy0115l_p = i55bdf31c4_p ; P_9 += eezfy0115l_p *
i55bdf31c4_p ; localB -> nif21oiusf = u0 ; localB -> et2yyla4gc = P_9 ;
localB -> gjkvmbojd1 = localB -> nsqipfztjp_pcqitb31bm * localB -> et2yyla4gc
; localB -> o0lvy3fyxu = muDoubleScalarSqrt ( localB -> gjkvmbojd1 ) ; localB
-> cfepvck034 = localB -> nif21oiusf / localB -> o0lvy3fyxu ; localB ->
ifeq1sbzol = localB -> cfepvck034 + abopqckbgq . P_56 ; localB -> oviasilnmi
= muDoubleScalarAbs ( localB -> ifeq1sbzol ) ; localB -> mqw4bi2sim = localB
-> cfepvck034 + abopqckbgq . P_57 ; localB -> inufxuou0o = muDoubleScalarAbs
( localB -> mqw4bi2sim ) ; if ( localB -> oviasilnmi < 1.0E-6 ) { cu0mwyodxb
( & localB -> mwiosqwbdf , & abopqckbgq . dkriegmois ) ; } else if ( localB
-> inufxuou0o < 1.0E-6 ) { cu0mwyodxb ( & localB -> mwiosqwbdf , & abopqckbgq
. mundwwrfcc ) ; } else { cu0mwyodxb ( & localB -> mwiosqwbdf , & abopqckbgq
. o5uea2bm34 ) ; } if ( localB -> f5hy4s11sg ) { localB -> dsml5wy5qc [ 0 ] =
localB -> gfuclxattu ; localB -> dsml5wy5qc [ 1 ] = localB -> g5t4vavgkm ;
localB -> dsml5wy5qc [ 2 ] = localB -> jm3m25bbb2 ; localB -> dsml5wy5qc [ 3
] = localB -> f4ejwfkds5 ; } else { localB -> owt2sondvh = ( localB ->
mwiosqwbdf != abopqckbgq . P_4 ) ; if ( localB -> owt2sondvh ) { localB ->
njzf5pexup = localB -> mlbbs4fqao_klmngopk1n [ 1 ] * localB -> eajaumkk43 ;
localB -> f4lujt1fq0 = localB -> mlbbs4fqao_klmngopk1n [ 0 ] * localB ->
mlnawjq3c4 ; localB -> psmqbkozvc = localB -> mlbbs4fqao_klmngopk1n [ 2 ] *
localB -> knwf3igq3m ; localB -> nekbr5le3q = localB -> mlbbs4fqao_klmngopk1n
[ 0 ] * localB -> knwf3igq3m ; localB -> pvyqfsuvyf = localB ->
mlbbs4fqao_klmngopk1n [ 2 ] * localB -> eajaumkk43 ; localB -> b1zxvcgz2w =
localB -> mlbbs4fqao_klmngopk1n [ 1 ] * localB -> mlnawjq3c4 ; localB ->
om5oj4r3tv [ 0 ] = localB -> b1zxvcgz2w - localB -> psmqbkozvc ; localB ->
om5oj4r3tv [ 1 ] = localB -> pvyqfsuvyf - localB -> f4lujt1fq0 ; localB ->
om5oj4r3tv [ 2 ] = localB -> nekbr5le3q - localB -> njzf5pexup ; localB ->
mi35iqh4zh [ 0 ] = localB -> om5oj4r3tv [ 0 ] ; localB -> mi35iqh4zh [ 1 ] =
localB -> om5oj4r3tv [ 1 ] ; localB -> mi35iqh4zh [ 2 ] = localB ->
om5oj4r3tv [ 2 ] ; } else { localB -> mi35iqh4zh [ 0 ] = localB ->
jgrywmthgg_fi0130k5dq [ 0 ] ; localB -> mi35iqh4zh [ 1 ] = localB ->
jgrywmthgg_fi0130k5dq [ 1 ] ; localB -> mi35iqh4zh [ 2 ] = localB ->
jgrywmthgg_fi0130k5dq [ 2 ] ; } localB -> mz5phavgkw = localB -> mi35iqh4zh [
2 ] * localB -> mi35iqh4zh [ 2 ] ; localB -> mtgl00davg = localB ->
mi35iqh4zh [ 1 ] * localB -> mi35iqh4zh [ 1 ] ; localB -> bjqsryhiyj = localB
-> mi35iqh4zh [ 0 ] * localB -> mi35iqh4zh [ 0 ] ; i55bdf31c4_p = localB ->
bd0rx40fsv [ 0 ] ; eezfy0115l_p = i55bdf31c4_p ; u0 = eezfy0115l_p *
i55bdf31c4_p ; eezfy0115l_p = localB -> mlbbs4fqao_klmngopk1n [ 0 ] ; P_9 =
eezfy0115l_p * i55bdf31c4_p ; i55bdf31c4_p = localB -> bd0rx40fsv [ 1 ] ;
eezfy0115l_p = i55bdf31c4_p ; u0 += eezfy0115l_p * i55bdf31c4_p ;
eezfy0115l_p = localB -> mlbbs4fqao_klmngopk1n [ 1 ] ; P_9 += eezfy0115l_p *
i55bdf31c4_p ; i55bdf31c4_p = localB -> bd0rx40fsv [ 2 ] ; eezfy0115l_p =
i55bdf31c4_p ; u0 += eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
mlbbs4fqao_klmngopk1n [ 2 ] ; P_9 += eezfy0115l_p * i55bdf31c4_p ; localB ->
phrqrm5pmv = u0 ; localB -> ii3vy4mmpg = localB -> e2eydg5nti_pxv1dlndn0 *
localB -> phrqrm5pmv ; localB -> fctoiiws0s = muDoubleScalarSqrt ( localB ->
ii3vy4mmpg ) ; localB -> a51egkwgwo = P_9 ; localB -> ckgmoczxve = localB ->
a51egkwgwo + localB -> fctoiiws0s ; localB -> bt2rqkb51j = localB ->
ckgmoczxve * localB -> ckgmoczxve ; localB -> cam0ve4zqh = ( ( localB ->
bt2rqkb51j + localB -> bjqsryhiyj ) + localB -> mtgl00davg ) + localB ->
mz5phavgkw ; localB -> ij4lx1s34m = muDoubleScalarSqrt ( localB -> cam0ve4zqh
) ; localB -> hz3ewtedst = localB -> mi35iqh4zh [ 2 ] / localB -> ij4lx1s34m
; localB -> nezmtpenwv = localB -> f4ejwfkds5 * localB -> hz3ewtedst ; localB
-> nwwi3spcvi = localB -> mi35iqh4zh [ 1 ] / localB -> ij4lx1s34m ; localB ->
g30fwms10z = localB -> jm3m25bbb2 * localB -> nwwi3spcvi ; localB ->
ihzny3c3s4 = localB -> mi35iqh4zh [ 0 ] / localB -> ij4lx1s34m ; localB ->
j43hegl5rg = localB -> g5t4vavgkm * localB -> ihzny3c3s4 ; localB ->
lcpdbhb1y5 = localB -> ckgmoczxve / localB -> ij4lx1s34m ; localB ->
kfpoxyrwdt = localB -> gfuclxattu * localB -> lcpdbhb1y5 ; localB ->
bc2fd3yjnq = ( ( localB -> kfpoxyrwdt - localB -> j43hegl5rg ) - localB ->
g30fwms10z ) - localB -> nezmtpenwv ; localB -> ohb5mctuy0 = localB ->
f4ejwfkds5 * localB -> nwwi3spcvi ; localB -> cvo4lad0zq = localB ->
jm3m25bbb2 * localB -> hz3ewtedst ; localB -> gmwwryuamq = localB ->
g5t4vavgkm * localB -> lcpdbhb1y5 ; localB -> hu3fv1h2mh = localB ->
gfuclxattu * localB -> ihzny3c3s4 ; localB -> ljz0n02bon = ( ( localB ->
hu3fv1h2mh + localB -> gmwwryuamq ) + localB -> cvo4lad0zq ) - localB ->
ohb5mctuy0 ; localB -> lkquleht4a = localB -> f4ejwfkds5 * localB ->
ihzny3c3s4 ; localB -> afgx52hcfw = localB -> jm3m25bbb2 * localB ->
lcpdbhb1y5 ; localB -> p0hzmjntzb = localB -> g5t4vavgkm * localB ->
hz3ewtedst ; localB -> dktvhijtxu = localB -> gfuclxattu * localB ->
nwwi3spcvi ; localB -> ddzmwdqzmx = ( ( localB -> dktvhijtxu - localB ->
p0hzmjntzb ) + localB -> afgx52hcfw ) + localB -> lkquleht4a ; localB ->
n3tbogbenx = localB -> f4ejwfkds5 * localB -> lcpdbhb1y5 ; localB ->
dfullnmqq3 = localB -> jm3m25bbb2 * localB -> ihzny3c3s4 ; localB ->
dmco5n5boy = localB -> g5t4vavgkm * localB -> nwwi3spcvi ; localB ->
ci3p3hoamk = localB -> gfuclxattu * localB -> hz3ewtedst ; localB ->
iwcfsxie40 = ( ( localB -> ci3p3hoamk + localB -> dmco5n5boy ) - localB ->
dfullnmqq3 ) + localB -> n3tbogbenx ; localB -> dsml5wy5qc [ 0 ] = localB ->
bc2fd3yjnq ; localB -> dsml5wy5qc [ 1 ] = localB -> ljz0n02bon ; localB ->
dsml5wy5qc [ 2 ] = localB -> ddzmwdqzmx ; localB -> dsml5wy5qc [ 3 ] = localB
-> iwcfsxie40 ; } localB -> eva0gxek30 [ 0 ] = localB -> dsml5wy5qc [ 0 ] ;
localB -> eva0gxek30 [ 1 ] = localB -> dsml5wy5qc [ 1 ] ; localB ->
eva0gxek30 [ 2 ] = localB -> dsml5wy5qc [ 2 ] ; localB -> eva0gxek30 [ 3 ] =
localB -> dsml5wy5qc [ 3 ] ; localB -> owqjvnpw0p = localB -> dsml5wy5qc [ 0
] * localB -> dsml5wy5qc [ 0 ] ; localB -> c25ls5pdce = localB -> dsml5wy5qc
[ 1 ] * localB -> dsml5wy5qc [ 1 ] ; localB -> po2am01g3q = localB ->
dsml5wy5qc [ 2 ] * localB -> dsml5wy5qc [ 2 ] ; localB -> fx5k5czumc = localB
-> dsml5wy5qc [ 3 ] * localB -> dsml5wy5qc [ 3 ] ; localB -> pegjrnaxqm = ( (
localB -> owqjvnpw0p + localB -> c25ls5pdce ) + localB -> po2am01g3q ) +
localB -> fx5k5czumc ; localB -> jqtlywacmr = muDoubleScalarSqrt ( localB ->
pegjrnaxqm ) ; localB -> bw3pflfgbf = localB -> dsml5wy5qc [ 0 ] / localB ->
jqtlywacmr ; localB -> awnqlou4an = localB -> dsml5wy5qc [ 1 ] / localB ->
jqtlywacmr ; localB -> ekhrfsceyv = localB -> dsml5wy5qc [ 2 ] / localB ->
jqtlywacmr ; localB -> ibuevqycit = localB -> dsml5wy5qc [ 3 ] / localB ->
jqtlywacmr ; localB -> p34dq44x5s = ( localB -> awnqlou4an * localB ->
ibuevqycit + localB -> bw3pflfgbf * localB -> ekhrfsceyv ) * 2.0 ; if (
localB -> p34dq44x5s > 1.0 ) { localB -> axt4bl01jm = abopqckbgq . P_16 ;
srUpdateBC ( localDW -> kw1ggasixl ) ; } else if ( localB -> p34dq44x5s < -
1.0 ) { localB -> axt4bl01jm = abopqckbgq . P_17 ; srUpdateBC ( localDW ->
fvctynab0j ) ; } else { localB -> axt4bl01jm = localB -> p34dq44x5s ;
srUpdateBC ( localDW -> fyislxta05 ) ; } localB -> bgnqrybgws = ( localB ->
ekhrfsceyv * localB -> ibuevqycit - localB -> bw3pflfgbf * localB ->
awnqlou4an ) * - 2.0 ; localB -> mybab5em2j = ( ( localB -> bw3pflfgbf *
localB -> bw3pflfgbf - localB -> awnqlou4an * localB -> awnqlou4an ) - localB
-> ekhrfsceyv * localB -> ekhrfsceyv ) + localB -> ibuevqycit * localB ->
ibuevqycit ; localB -> eajnvfro2c [ 0 ] = muDoubleScalarAtan2 ( localB ->
bgnqrybgws , localB -> mybab5em2j ) ; localB -> fgfr5h5b4m = ( localB ->
awnqlou4an * localB -> ekhrfsceyv - localB -> bw3pflfgbf * localB ->
ibuevqycit ) * - 2.0 ; localB -> js1mes1qs3 = ( ( localB -> bw3pflfgbf *
localB -> bw3pflfgbf + localB -> awnqlou4an * localB -> awnqlou4an ) - localB
-> ekhrfsceyv * localB -> ekhrfsceyv ) - localB -> ibuevqycit * localB ->
ibuevqycit ; localB -> eajnvfro2c [ 2 ] = muDoubleScalarAtan2 ( localB ->
fgfr5h5b4m , localB -> js1mes1qs3 ) ; u0 = localB -> axt4bl01jm ; if ( u0 >
1.0 ) { u0 = 1.0 ; } else if ( u0 < - 1.0 ) { u0 = - 1.0 ; } localB ->
eajnvfro2c [ 1 ] = muDoubleScalarAsin ( u0 ) ; localB ->
k4b5tiznc1_o2tow3gxzm = abopqckbgq . P_78 * abopqckbgq . P_8 [ 1 ] ; localB
-> nxifsgxc2x_chiskqqvhf = ( abopqckbgq . P_8 [ 0 ] > abopqckbgq . P_8 [ 2 ]
) ; localB -> hv2xsvyytk_ipgns4eet5 = abopqckbgq . P_81 * abopqckbgq . P_8 [
2 ] ; if ( localB -> nxifsgxc2x_chiskqqvhf ) { localB ->
bcdlg34pt3_fkr0r45bcn [ 0 ] = localB -> k4b5tiznc1_o2tow3gxzm ; localB ->
bcdlg34pt3_fkr0r45bcn [ 1 ] = abopqckbgq . P_8 [ 0 ] ; localB ->
bcdlg34pt3_fkr0r45bcn [ 2 ] = abopqckbgq . P_79 ; } else { localB ->
bcdlg34pt3_fkr0r45bcn [ 0 ] = abopqckbgq . P_80 ; localB ->
bcdlg34pt3_fkr0r45bcn [ 1 ] = localB -> hv2xsvyytk_ipgns4eet5 ; localB ->
bcdlg34pt3_fkr0r45bcn [ 2 ] = abopqckbgq . P_8 [ 1 ] ; } localB ->
lg2isztegk_izlwqhinl5 = abopqckbgq . P_8 [ 0 ] * localB ->
bcdlg34pt3_fkr0r45bcn [ 1 ] ; localB -> cw4hetqa4a_fft32lqtda = abopqckbgq .
P_8 [ 1 ] * localB -> bcdlg34pt3_fkr0r45bcn [ 2 ] ; localB ->
d1sbs2pkf3_gxhmnjv5xa = localB -> bcdlg34pt3_fkr0r45bcn [ 0 ] * abopqckbgq .
P_8 [ 2 ] ; localB -> nfdsdifffn_covwwkkf2n = abopqckbgq . P_8 [ 0 ] * localB
-> bcdlg34pt3_fkr0r45bcn [ 2 ] ; localB -> ioivmki1h5_o32uf0f2k4 = localB ->
bcdlg34pt3_fkr0r45bcn [ 0 ] * abopqckbgq . P_8 [ 1 ] ; localB ->
ljleij1km3_lmeaga4sr3 = localB -> bcdlg34pt3_fkr0r45bcn [ 1 ] * abopqckbgq .
P_8 [ 2 ] ; localB -> nnyklgzqdv_mvr1suhnoo [ 0 ] = localB ->
cw4hetqa4a_fft32lqtda - localB -> ljleij1km3_lmeaga4sr3 ; localB ->
nnyklgzqdv_mvr1suhnoo [ 1 ] = localB -> d1sbs2pkf3_gxhmnjv5xa - localB ->
nfdsdifffn_covwwkkf2n ; localB -> nnyklgzqdv_mvr1suhnoo [ 2 ] = localB ->
lg2isztegk_izlwqhinl5 - localB -> ioivmki1h5_o32uf0f2k4 ; localB ->
le1y3tomzf_mjmkwwa5je = abopqckbgq . P_8 [ 1 ] * abopqckbgq . P_10 [ 2 ] ;
localB -> phopglwagr_cnk35bhqvj = abopqckbgq . P_10 [ 0 ] * abopqckbgq . P_8
[ 2 ] ; localB -> pkaclggswi_fme3ifz5tm = abopqckbgq . P_8 [ 0 ] * abopqckbgq
. P_10 [ 1 ] ; localB -> ccu3jt5v2w_p43y5eooqm = abopqckbgq . P_10 [ 1 ] *
abopqckbgq . P_8 [ 2 ] ; localB -> pkpl3cgh2d_e13kp1af4b = abopqckbgq . P_8 [
0 ] * abopqckbgq . P_10 [ 2 ] ; localB -> nhdyrg1ri3_o4akcuk44c = abopqckbgq
. P_10 [ 0 ] * abopqckbgq . P_8 [ 1 ] ; localB -> g0drkrngsr_hh0jorglq2 [ 0 ]
= localB -> le1y3tomzf_mjmkwwa5je - localB -> ccu3jt5v2w_p43y5eooqm ; localB
-> g0drkrngsr_hh0jorglq2 [ 1 ] = localB -> phopglwagr_cnk35bhqvj - localB ->
pkpl3cgh2d_e13kp1af4b ; localB -> g0drkrngsr_hh0jorglq2 [ 2 ] = localB ->
pkaclggswi_fme3ifz5tm - localB -> nhdyrg1ri3_o4akcuk44c ; localB ->
g4yahc00wc_l5yj2lrthv = localB -> g0drkrngsr_hh0jorglq2 [ 1 ] * abopqckbgq .
P_8 [ 2 ] ; localB -> mgy2tx4uj0_h255b31ynd = abopqckbgq . P_8 [ 0 ] * localB
-> g0drkrngsr_hh0jorglq2 [ 2 ] ; localB -> j55rmyfoop_mert0vuy2i = localB ->
g0drkrngsr_hh0jorglq2 [ 0 ] * abopqckbgq . P_8 [ 1 ] ; localB ->
i30rvmobjs_mcke2mvmgq = abopqckbgq . P_8 [ 1 ] * localB ->
g0drkrngsr_hh0jorglq2 [ 2 ] ; localB -> hbxw1z240h_h34q0rd5y0 = localB ->
g0drkrngsr_hh0jorglq2 [ 0 ] * abopqckbgq . P_8 [ 2 ] ; localB ->
ayebppg4gx_csvudntq5v = abopqckbgq . P_8 [ 0 ] * localB ->
g0drkrngsr_hh0jorglq2 [ 1 ] ; localB -> mlbbs4fqao_klmngopk1n [ 0 ] = localB
-> g4yahc00wc_l5yj2lrthv - localB -> i30rvmobjs_mcke2mvmgq ; localB ->
mlbbs4fqao_klmngopk1n [ 1 ] = localB -> mgy2tx4uj0_h255b31ynd - localB ->
hbxw1z240h_h34q0rd5y0 ; localB -> mlbbs4fqao_klmngopk1n [ 2 ] = localB ->
j55rmyfoop_mert0vuy2i - localB -> ayebppg4gx_csvudntq5v ; g11yqvtiub_p =
abopqckbgq . P_8 [ 0 ] ; aulmnbewtw_p = abopqckbgq . P_10 [ 0 ] ;
eezfy0115l_p = aulmnbewtw_p ; u0 = g11yqvtiub_p * eezfy0115l_p ; eezfy0115l_p
= g11yqvtiub_p ; i55bdf31c4_p = g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p =
aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; P_9 = g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = localB -> mlbbs4fqao_klmngopk1n [ 0 ] ;
eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p = g11yqvtiub_p * eezfy0115l_p ;
g11yqvtiub_p = abopqckbgq . P_8 [ 1 ] ; aulmnbewtw_p = abopqckbgq . P_10 [ 1
] ; eezfy0115l_p = aulmnbewtw_p ; u0 += g11yqvtiub_p * eezfy0115l_p ;
eezfy0115l_p = g11yqvtiub_p ; i55bdf31c4_p += g11yqvtiub_p * eezfy0115l_p ;
g11yqvtiub_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; P_9 +=
g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p = localB -> mlbbs4fqao_klmngopk1n
[ 1 ] ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p += g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = abopqckbgq . P_8 [ 2 ] ; aulmnbewtw_p =
abopqckbgq . P_10 [ 2 ] ; eezfy0115l_p = aulmnbewtw_p ; u0 += g11yqvtiub_p *
eezfy0115l_p ; eezfy0115l_p = g11yqvtiub_p ; i55bdf31c4_p += g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ;
P_9 += g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p = localB ->
mlbbs4fqao_klmngopk1n [ 2 ] ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p +=
g11yqvtiub_p * eezfy0115l_p ; localB -> cbdkowkpf3_h522xzlxvt = u0 ; localB
-> h3jeczv0h3_c0dok3111h = i55bdf31c4_p ; localB -> jrlpuigzhc_ctvw0tpkon =
P_9 ; localB -> caxzxod1me_pxqvlbal2i = localB -> h3jeczv0h3_c0dok3111h *
localB -> jrlpuigzhc_ctvw0tpkon ; localB -> dxhva2syhh_p5h3gwuwqg =
muDoubleScalarSqrt ( localB -> caxzxod1me_pxqvlbal2i ) ; localB ->
ljhg4ah1hn_afnsueciae = localB -> cbdkowkpf3_h522xzlxvt / localB ->
dxhva2syhh_p5h3gwuwqg ; localB -> o44hoe01oz_evg4t2fsev = localB ->
ljhg4ah1hn_afnsueciae + abopqckbgq . P_73 ; localB -> o4dw42eqdy_ax3wx1gs5w =
muDoubleScalarAbs ( localB -> o44hoe01oz_evg4t2fsev ) ; localB ->
ddi5il0z53_as0qznsxlv = localB -> ljhg4ah1hn_afnsueciae + abopqckbgq . P_74 ;
localB -> gqcj1nfmop_ifotjnizh4 = muDoubleScalarAbs ( localB ->
ddi5il0z53_as0qznsxlv ) ; localB -> ok00ebomfe_ltu3syw14q = i55bdf31c4_p ;
localB -> d5qrgk5srt_ojunzewo4f = i55bdf31c4_p ; localB ->
nsqipfztjp_pcqitb31bm = cfc45nbsjb_p ; localB -> e2eydg5nti_pxv1dlndn0 =
cfc45nbsjb_p ; localB -> p35guikpkx_p4u43j1tg5 = abopqckbgq . P_82 * localB
-> mlbbs4fqao_klmngopk1n [ 1 ] ; localB -> ep2mm5jz5g_axzrpos33g = ( localB
-> mlbbs4fqao_klmngopk1n [ 0 ] > localB -> mlbbs4fqao_klmngopk1n [ 2 ] ) ;
localB -> evsphivwme_appanwio2d = abopqckbgq . P_85 * localB ->
mlbbs4fqao_klmngopk1n [ 2 ] ; if ( localB -> ep2mm5jz5g_axzrpos33g ) { localB
-> mn4qnpiisu_jdc3mylhw0 [ 0 ] = localB -> p35guikpkx_p4u43j1tg5 ; localB ->
mn4qnpiisu_jdc3mylhw0 [ 1 ] = localB -> mlbbs4fqao_klmngopk1n [ 0 ] ; localB
-> mn4qnpiisu_jdc3mylhw0 [ 2 ] = abopqckbgq . P_83 ; } else { localB ->
mn4qnpiisu_jdc3mylhw0 [ 0 ] = abopqckbgq . P_84 ; localB ->
mn4qnpiisu_jdc3mylhw0 [ 1 ] = localB -> evsphivwme_appanwio2d ; localB ->
mn4qnpiisu_jdc3mylhw0 [ 2 ] = localB -> mlbbs4fqao_klmngopk1n [ 1 ] ; }
localB -> dg1abadomh_ekaxkojgre = localB -> mlbbs4fqao_klmngopk1n [ 0 ] *
localB -> mn4qnpiisu_jdc3mylhw0 [ 1 ] ; localB -> etb30mxmsv_olzclp30in =
localB -> mlbbs4fqao_klmngopk1n [ 1 ] * localB -> mn4qnpiisu_jdc3mylhw0 [ 2 ]
; localB -> glxglw03ek_bbahwrwppi = localB -> mn4qnpiisu_jdc3mylhw0 [ 0 ] *
localB -> mlbbs4fqao_klmngopk1n [ 2 ] ; localB -> n541cz4kc4_ao3bw4rxqa =
localB -> mlbbs4fqao_klmngopk1n [ 0 ] * localB -> mn4qnpiisu_jdc3mylhw0 [ 2 ]
; localB -> bmrs115gg5_g2zhzn021n = localB -> mn4qnpiisu_jdc3mylhw0 [ 0 ] *
localB -> mlbbs4fqao_klmngopk1n [ 1 ] ; localB -> fzuuudcvoz_ex1giwvd5a =
localB -> mn4qnpiisu_jdc3mylhw0 [ 1 ] * localB -> mlbbs4fqao_klmngopk1n [ 2 ]
; localB -> jgrywmthgg_fi0130k5dq [ 0 ] = localB -> etb30mxmsv_olzclp30in -
localB -> fzuuudcvoz_ex1giwvd5a ; localB -> jgrywmthgg_fi0130k5dq [ 1 ] =
localB -> glxglw03ek_bbahwrwppi - localB -> n541cz4kc4_ao3bw4rxqa ; localB ->
jgrywmthgg_fi0130k5dq [ 2 ] = localB -> dg1abadomh_ekaxkojgre - localB ->
bmrs115gg5_g2zhzn021n ; } break ; case opeya5azww : if ( * odamlphqyv == 1.0
) { localB -> hfrm0ub4jk = 1.0 ; localDW -> nxghgofox1 = j21ewuch2t ; } else
{ localB -> d3odadnzgn = localB -> ool0nntzvr . q_eci2b [ 0 ] * localB ->
ool0nntzvr . q_eci2b [ 0 ] ; localB -> fodgyubpjs = - localB -> ool0nntzvr .
q_eci2b [ 1 ] ; localB -> lzo1k4mul2 = localB -> fodgyubpjs * localB ->
fodgyubpjs ; localB -> glx2os2mzw = - localB -> ool0nntzvr . q_eci2b [ 2 ] ;
localB -> h4g3klusdd = localB -> glx2os2mzw * localB -> glx2os2mzw ; localB
-> jpaaj212yy = - localB -> ool0nntzvr . q_eci2b [ 3 ] ; localB -> czcssosf1z
= localB -> jpaaj212yy * localB -> jpaaj212yy ; localB -> aen0aszu3e = ( (
localB -> d3odadnzgn + localB -> lzo1k4mul2 ) + localB -> h4g3klusdd ) +
localB -> czcssosf1z ; localB -> gunaobe300 = muDoubleScalarSqrt ( localB ->
aen0aszu3e ) ; localB -> ov4vhkp3o2 = localB -> ool0nntzvr . q_eci2b [ 0 ] /
localB -> gunaobe300 ; localB -> bvzybml4ix = localB -> ov4vhkp3o2 * localB
-> ov4vhkp3o2 ; localB -> lhvbn1u0tx = localB -> fodgyubpjs / localB ->
gunaobe300 ; localB -> kdginuldqs = - localB -> lhvbn1u0tx ; localB ->
dfo0fydpsk = localB -> kdginuldqs * localB -> kdginuldqs ; localB ->
bcyepzkahx = localB -> glx2os2mzw / localB -> gunaobe300 ; localB ->
h2zekqoxp5 = - localB -> bcyepzkahx ; localB -> myzqzjbcu3 = localB ->
h2zekqoxp5 * localB -> h2zekqoxp5 ; localB -> lnt5ykhylk = localB ->
jpaaj212yy / localB -> gunaobe300 ; localB -> kwbfaqxddn = - localB ->
lnt5ykhylk ; localB -> aehfytsgae = localB -> kwbfaqxddn * localB ->
kwbfaqxddn ; localB -> acwieewca2 = ( ( localB -> bvzybml4ix + localB ->
dfo0fydpsk ) + localB -> myzqzjbcu3 ) + localB -> aehfytsgae ; localB ->
ebv251iwdf = muDoubleScalarSqrt ( localB -> acwieewca2 ) ; localB ->
ko3pwhar3t = localB -> ov4vhkp3o2 / localB -> ebv251iwdf ; localB ->
nyxw0kxrtl = localB -> kdginuldqs / localB -> ebv251iwdf ; localB ->
ho0jylt0hh = localB -> h2zekqoxp5 / localB -> ebv251iwdf ; localB ->
k4yv1l0ysr = localB -> kwbfaqxddn / localB -> ebv251iwdf ; localB ->
giuiigfwct = localB -> nyxw0kxrtl * localB -> ho0jylt0hh ; localB ->
bbvmxed4yj = localB -> ko3pwhar3t * localB -> k4yv1l0ysr ; localB ->
emuu1mduk5 = localB -> giuiigfwct + localB -> bbvmxed4yj ; localB ->
jxalf3d0tm = abopqckbgq . P_93 * localB -> emuu1mduk5 ; localB -> pf1xmdshjh
= localB -> ko3pwhar3t * localB -> ho0jylt0hh ; localB -> jwzocllfss = localB
-> nyxw0kxrtl * localB -> k4yv1l0ysr ; localB -> etyhz1d54p = localB ->
jwzocllfss - localB -> pf1xmdshjh ; localB -> ghfpen2xfm = abopqckbgq . P_94
* localB -> etyhz1d54p ; localB -> pybu30gra0 = localB -> ho0jylt0hh * localB
-> ho0jylt0hh ; localB -> p5ythyyc1w = localB -> k4yv1l0ysr * localB ->
k4yv1l0ysr ; localB -> jrb3n1e1op = ( abopqckbgq . P_126 - localB ->
pybu30gra0 ) - localB -> p5ythyyc1w ; localB -> glokcynnu0 = abopqckbgq .
P_95 * localB -> jrb3n1e1op ; localB -> ahhv2odar5 = localB -> jxalf3d0tm *
localB -> p5xc1va2sp . x_sun_eci [ 1 ] ; localB -> bdkn43iyoi = localB ->
ghfpen2xfm * localB -> p5xc1va2sp . x_sun_eci [ 2 ] ; localB -> gupwco05zf =
localB -> p5xc1va2sp . x_sun_eci [ 0 ] * localB -> glokcynnu0 ; localB ->
cfpwmg2iv5 = ( localB -> gupwco05zf + localB -> ahhv2odar5 ) + localB ->
bdkn43iyoi ; localB -> dactqdrvkq = localB -> nyxw0kxrtl * localB ->
ho0jylt0hh ; localB -> e0ceu2okzq = localB -> ko3pwhar3t * localB ->
k4yv1l0ysr ; localB -> hehwf2oytc = localB -> dactqdrvkq - localB ->
e0ceu2okzq ; localB -> i44guk2vvg = abopqckbgq . P_96 * localB -> hehwf2oytc
; localB -> gum5tzox3x = localB -> ko3pwhar3t * localB -> nyxw0kxrtl ; localB
-> cncgq4bsmk = localB -> ho0jylt0hh * localB -> k4yv1l0ysr ; localB ->
nwy4h031y3 = localB -> gum5tzox3x + localB -> cncgq4bsmk ; localB ->
dfqjpjarik = abopqckbgq . P_97 * localB -> nwy4h031y3 ; localB -> l3jo4kejut
= localB -> nyxw0kxrtl * localB -> nyxw0kxrtl ; localB -> kwenwqfzm2 = localB
-> k4yv1l0ysr * localB -> k4yv1l0ysr ; localB -> ale4aanaik = ( abopqckbgq .
P_127 - localB -> l3jo4kejut ) - localB -> kwenwqfzm2 ; localB -> irir3q2hou
= abopqckbgq . P_98 * localB -> ale4aanaik ; localB -> k0acye40sn = localB ->
p5xc1va2sp . x_sun_eci [ 0 ] * localB -> i44guk2vvg ; localB -> emhhu5s0gl =
localB -> dfqjpjarik * localB -> p5xc1va2sp . x_sun_eci [ 2 ] ; localB ->
g11yqvtiub = localB -> irir3q2hou * localB -> p5xc1va2sp . x_sun_eci [ 1 ] ;
localB -> de4u044ohl = ( localB -> k0acye40sn + localB -> g11yqvtiub ) +
localB -> emhhu5s0gl ; localB -> huvd5fayr4 = localB -> nyxw0kxrtl * localB
-> k4yv1l0ysr ; localB -> h3gpqzdq01 = localB -> ko3pwhar3t * localB ->
ho0jylt0hh ; localB -> munt1w11is = localB -> huvd5fayr4 + localB ->
h3gpqzdq01 ; localB -> cceagtsjdw = abopqckbgq . P_99 * localB -> munt1w11is
; localB -> a4cosmw5lm = localB -> ko3pwhar3t * localB -> nyxw0kxrtl ; localB
-> mi4apm2zjc = localB -> ho0jylt0hh * localB -> k4yv1l0ysr ; localB ->
mf0tqbtc3s = localB -> mi4apm2zjc - localB -> a4cosmw5lm ; localB ->
licbno2boh = abopqckbgq . P_100 * localB -> mf0tqbtc3s ; localB -> ngbbrxa51f
= localB -> nyxw0kxrtl * localB -> nyxw0kxrtl ; localB -> hcubmd0liv = localB
-> ho0jylt0hh * localB -> ho0jylt0hh ; localB -> kt0xe204ka = ( abopqckbgq .
P_128 - localB -> ngbbrxa51f ) - localB -> hcubmd0liv ; localB -> p5lfsonodp
= abopqckbgq . P_101 * localB -> kt0xe204ka ; localB -> me3p1k22xz = localB
-> p5xc1va2sp . x_sun_eci [ 0 ] * localB -> cceagtsjdw ; localB -> ltbrmuqara
= localB -> licbno2boh * localB -> p5xc1va2sp . x_sun_eci [ 1 ] ; localB ->
msdu4nx1aq = localB -> p5lfsonodp * localB -> p5xc1va2sp . x_sun_eci [ 2 ] ;
localB -> ihwaoscgmh = ( localB -> me3p1k22xz + localB -> ltbrmuqara ) +
localB -> msdu4nx1aq ; if ( localB -> kdginuldqs_fqdqrf4qbc < 1.0E-6 ) {
cu0mwyodxb ( & localB -> n32d2jxjgp , & abopqckbgq . kmn5ikrhii ) ; } else if
( localB -> bcyepzkahx_g1smspu5ke < 1.0E-6 ) { cu0mwyodxb ( & localB ->
n32d2jxjgp , & abopqckbgq . k5rtgyuloh ) ; } else { cu0mwyodxb ( & localB ->
n32d2jxjgp , & abopqckbgq . h4xtjhm5ns ) ; } localB -> cfc45nbsjb [ 0 ] =
localB -> cfpwmg2iv5 ; localB -> cfc45nbsjb [ 1 ] = localB -> de4u044ohl ;
localB -> cfc45nbsjb [ 2 ] = localB -> ihwaoscgmh ; localB -> cmr51l152v =
localB -> ov4vhkp3o2 * localB -> ov4vhkp3o2 ; localB -> bflzdi334h = localB
-> kdginuldqs * localB -> kdginuldqs ; localB -> bv1zkqgzil = localB ->
h2zekqoxp5 * localB -> h2zekqoxp5 ; localB -> brmpcz2qbx = localB ->
kwbfaqxddn * localB -> kwbfaqxddn ; localB -> o1q4vuuom3 = ( ( localB ->
cmr51l152v + localB -> bflzdi334h ) + localB -> bv1zkqgzil ) + localB ->
brmpcz2qbx ; localB -> f5qd1ffihn = muDoubleScalarSqrt ( localB -> o1q4vuuom3
) ; localB -> ojtewlm1bq = localB -> h2zekqoxp5 / localB -> f5qd1ffihn ;
localB -> j4w2ibwt10 = localB -> ojtewlm1bq * localB -> ojtewlm1bq ; localB
-> joeg0albfh = localB -> kwbfaqxddn / localB -> f5qd1ffihn ; localB ->
iejtxnetig = localB -> joeg0albfh * localB -> joeg0albfh ; localB ->
ei351ozc14 = ( abopqckbgq . P_142 - localB -> j4w2ibwt10 ) - localB ->
iejtxnetig ; localB -> kr1xvrqq4i = abopqckbgq . P_102 * localB -> ei351ozc14
; localB -> ecnsuqfcc1 = abopqckbgq . P_13 [ 0 ] * localB -> kr1xvrqq4i ;
localB -> jj1lmvybzd = localB -> kdginuldqs / localB -> f5qd1ffihn ; localB
-> idvdvyq30r = localB -> jj1lmvybzd * localB -> ojtewlm1bq ; localB ->
ebis0zh5a2 = localB -> ov4vhkp3o2 / localB -> f5qd1ffihn ; localB ->
ap1kecuizw = localB -> ebis0zh5a2 * localB -> joeg0albfh ; localB ->
e1klj20zb1 = localB -> idvdvyq30r + localB -> ap1kecuizw ; localB ->
kj4t50kyyc = abopqckbgq . P_103 * localB -> e1klj20zb1 ; localB -> ot5yr0zw1p
= localB -> kj4t50kyyc * abopqckbgq . P_13 [ 1 ] ; localB -> mhbkw1ubaj =
localB -> ebis0zh5a2 * localB -> ojtewlm1bq ; localB -> k30n1mbngj = localB
-> jj1lmvybzd * localB -> joeg0albfh ; localB -> pjm4at2lgs = localB ->
k30n1mbngj - localB -> mhbkw1ubaj ; localB -> a3e3ursurh = abopqckbgq . P_104
* localB -> pjm4at2lgs ; localB -> penc24o4z4 = localB -> a3e3ursurh *
abopqckbgq . P_13 [ 2 ] ; localB -> npijt2t3rq = ( localB -> ecnsuqfcc1 +
localB -> ot5yr0zw1p ) + localB -> penc24o4z4 ; localB -> nz01pnira3 = localB
-> jj1lmvybzd * localB -> ojtewlm1bq ; localB -> j1qmfgimhc = localB ->
ebis0zh5a2 * localB -> joeg0albfh ; localB -> eyz2vqrxl1 = localB ->
nz01pnira3 - localB -> j1qmfgimhc ; localB -> kqcndwlrpi = abopqckbgq . P_105
* localB -> eyz2vqrxl1 ; localB -> egewsknas0 = abopqckbgq . P_13 [ 0 ] *
localB -> kqcndwlrpi ; localB -> dfcpdkz3qy = localB -> jj1lmvybzd * localB
-> jj1lmvybzd ; localB -> kuxn0ecyfg = localB -> joeg0albfh * localB ->
joeg0albfh ; localB -> cxpwy13ncd = ( abopqckbgq . P_143 - localB ->
dfcpdkz3qy ) - localB -> kuxn0ecyfg ; localB -> b3iukvqnrj = abopqckbgq .
P_106 * localB -> cxpwy13ncd ; localB -> j54kyrrulw = localB -> b3iukvqnrj *
abopqckbgq . P_13 [ 1 ] ; localB -> ecbttofb24 = localB -> ebis0zh5a2 *
localB -> jj1lmvybzd ; localB -> maih1xmael = localB -> ojtewlm1bq * localB
-> joeg0albfh ; localB -> jsfmn0pkbx = localB -> ecbttofb24 + localB ->
maih1xmael ; localB -> izpvjcfn1f = abopqckbgq . P_107 * localB -> jsfmn0pkbx
; localB -> flxyk5kscq = localB -> izpvjcfn1f * abopqckbgq . P_13 [ 2 ] ;
localB -> bhp4p2woax = ( localB -> egewsknas0 + localB -> j54kyrrulw ) +
localB -> flxyk5kscq ; localB -> cerm0adi5z = localB -> jj1lmvybzd * localB
-> joeg0albfh ; localB -> nosoehtibn = localB -> ebis0zh5a2 * localB ->
ojtewlm1bq ; localB -> jyh1hoyxxh = localB -> cerm0adi5z + localB ->
nosoehtibn ; localB -> gcavehrbsl = abopqckbgq . P_108 * localB -> jyh1hoyxxh
; localB -> d4ts3qmblt = abopqckbgq . P_13 [ 0 ] * localB -> gcavehrbsl ;
localB -> kyfj55nzny = localB -> ebis0zh5a2 * localB -> jj1lmvybzd ; localB
-> hqfj2l2jsu = localB -> ojtewlm1bq * localB -> joeg0albfh ; localB ->
ipaiailov1 = localB -> hqfj2l2jsu - localB -> kyfj55nzny ; localB ->
g4dcwn3ypt = abopqckbgq . P_109 * localB -> ipaiailov1 ; localB -> gzqtcwduap
= localB -> g4dcwn3ypt * abopqckbgq . P_13 [ 1 ] ; localB -> ddqumwzxax =
localB -> jj1lmvybzd * localB -> jj1lmvybzd ; localB -> h1sv2bid0m = localB
-> ojtewlm1bq * localB -> ojtewlm1bq ; localB -> noicpyoaxf = ( abopqckbgq .
P_144 - localB -> ddqumwzxax ) - localB -> h1sv2bid0m ; localB -> iohdyojdtg
= abopqckbgq . P_110 * localB -> noicpyoaxf ; localB -> hwxjns5opb = localB
-> iohdyojdtg * abopqckbgq . P_13 [ 2 ] ; localB -> esbrwlthoz = ( localB ->
d4ts3qmblt + localB -> gzqtcwduap ) + localB -> hwxjns5opb ; localB ->
aulmnbewtw [ 0 ] = localB -> npijt2t3rq ; localB -> aulmnbewtw [ 1 ] = localB
-> bhp4p2woax ; localB -> aulmnbewtw [ 2 ] = localB -> esbrwlthoz ;
cfc45nbsjb_p = localB -> cfc45nbsjb [ 0 ] ; aulmnbewtw_p = localB ->
aulmnbewtw [ 0 ] ; eezfy0115l_p = aulmnbewtw_p ; u0 = cfc45nbsjb_p *
eezfy0115l_p ; eezfy0115l_p = cfc45nbsjb_p ; P_9 = cfc45nbsjb_p *
eezfy0115l_p ; cfc45nbsjb_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ;
i55bdf31c4_p = cfc45nbsjb_p * eezfy0115l_p ; cfc45nbsjb_p = localB ->
cfc45nbsjb [ 1 ] ; aulmnbewtw_p = localB -> aulmnbewtw [ 1 ] ; eezfy0115l_p =
aulmnbewtw_p ; u0 += cfc45nbsjb_p * eezfy0115l_p ; eezfy0115l_p =
cfc45nbsjb_p ; P_9 += cfc45nbsjb_p * eezfy0115l_p ; cfc45nbsjb_p =
aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; i55bdf31c4_p += cfc45nbsjb_p *
eezfy0115l_p ; cfc45nbsjb_p = localB -> cfc45nbsjb [ 2 ] ; aulmnbewtw_p =
localB -> aulmnbewtw [ 2 ] ; eezfy0115l_p = aulmnbewtw_p ; u0 += cfc45nbsjb_p
* eezfy0115l_p ; eezfy0115l_p = cfc45nbsjb_p ; P_9 += cfc45nbsjb_p *
eezfy0115l_p ; cfc45nbsjb_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ;
i55bdf31c4_p += cfc45nbsjb_p * eezfy0115l_p ; localB -> b0vinsiowc = u0 ;
localB -> bwhm53hj2z = P_9 ; localB -> ghsw34cu0i = i55bdf31c4_p ; localB ->
khoowgsa0c = localB -> bwhm53hj2z * localB -> ghsw34cu0i ; localB ->
a0bo2ucid3 = muDoubleScalarSqrt ( localB -> khoowgsa0c ) ; localB ->
fgbv1nguyc = localB -> b0vinsiowc / localB -> a0bo2ucid3 ; localB ->
f44vixbdmy = localB -> fgbv1nguyc + abopqckbgq . P_111 ; localB -> hkcvwwbfgd
= muDoubleScalarAbs ( localB -> f44vixbdmy ) ; localB -> al2xwqyeer = localB
-> fgbv1nguyc + abopqckbgq . P_112 ; localB -> ajwao05aic = muDoubleScalarAbs
( localB -> al2xwqyeer ) ; if ( localB -> hkcvwwbfgd < 1.0E-6 ) { cu0mwyodxb
( & localB -> mtxmv02bob , & abopqckbgq . eshunq0a4x ) ; } else if ( localB
-> ajwao05aic < 1.0E-6 ) { cu0mwyodxb ( & localB -> mtxmv02bob , & abopqckbgq
. kqvn05n2kk ) ; } else { cu0mwyodxb ( & localB -> mtxmv02bob , & abopqckbgq
. mufdwlxkzp ) ; } localB -> om42glthuj = ( localB -> n32d2jxjgp !=
abopqckbgq . P_91 ) ; localB -> crivvl3nas = ( localB -> mtxmv02bob !=
abopqckbgq . P_92 ) ; localB -> emugtdcgnx = ( localB -> om42glthuj || localB
-> crivvl3nas ) ; P_9 = abopqckbgq . P_9 [ 0 ] ; cfc45nbsjb_p = localB ->
cfc45nbsjb [ 0 ] ; eezfy0115l_p = P_9 * cfc45nbsjb_p ; P_9 = cfc45nbsjb_p ;
u0 = P_9 * cfc45nbsjb_p ; P_9 = abopqckbgq . P_9 [ 1 ] ; cfc45nbsjb_p =
localB -> cfc45nbsjb [ 1 ] ; eezfy0115l_p += P_9 * cfc45nbsjb_p ; P_9 =
cfc45nbsjb_p ; u0 += P_9 * cfc45nbsjb_p ; P_9 = abopqckbgq . P_9 [ 2 ] ;
cfc45nbsjb_p = localB -> cfc45nbsjb [ 2 ] ; eezfy0115l_p += P_9 *
cfc45nbsjb_p ; P_9 = cfc45nbsjb_p ; u0 += P_9 * cfc45nbsjb_p ; localB ->
gnteax5h3n = eezfy0115l_p ; localB -> is11124flk = u0 ; localB -> a4mc4bqcds
= localB -> jxalf3d0tm_nz4o0shxby * localB -> is11124flk ; localB ->
mkrrjil1it = muDoubleScalarSqrt ( localB -> a4mc4bqcds ) ; localB ->
kgb3cpprtp = localB -> gnteax5h3n + localB -> mkrrjil1it ; localB ->
llafrnfn4e = localB -> kgb3cpprtp * localB -> kgb3cpprtp ; localB ->
dblbijbcto = eezfy0115l_p ; localB -> jlgqmscjl4 = u0 ; localB -> dkmxqfklmw
= localB -> ho0jylt0hh_merlcviukg * localB -> jlgqmscjl4 ; localB ->
pvxlfzudav = muDoubleScalarSqrt ( localB -> dkmxqfklmw ) ; localB ->
b0bs3n34iv = localB -> dblbijbcto / localB -> pvxlfzudav ; localB ->
b0ib3ldpv5 = localB -> b0bs3n34iv + abopqckbgq . P_113 ; localB -> hzgyhv32h1
= muDoubleScalarAbs ( localB -> b0ib3ldpv5 ) ; localB -> klvszsn1bv = localB
-> b0bs3n34iv + abopqckbgq . P_114 ; localB -> j3gen42ucf = muDoubleScalarAbs
( localB -> klvszsn1bv ) ; if ( localB -> hzgyhv32h1 < 1.0E-6 ) { cu0mwyodxb
( & localB -> l4ypgofdmw , & abopqckbgq . ovuvbo1lgf ) ; } else if ( localB
-> j3gen42ucf < 1.0E-6 ) { cu0mwyodxb ( & localB -> l4ypgofdmw , & abopqckbgq
. iwf1ikz5vp ) ; } else { cu0mwyodxb ( & localB -> l4ypgofdmw , & abopqckbgq
. m1c5auh51y ) ; } localB -> potqldc5ec = ( localB -> l4ypgofdmw !=
abopqckbgq . P_5 ) ; if ( localB -> potqldc5ec ) { localB -> bz1gjtuoqb =
abopqckbgq . P_9 [ 1 ] * localB -> cfpwmg2iv5 ; localB -> d0uguxmxbq =
abopqckbgq . P_9 [ 0 ] * localB -> ihwaoscgmh ; localB -> ln5urmh5mw =
abopqckbgq . P_9 [ 2 ] * localB -> de4u044ohl ; localB -> frgsgtn1mp =
abopqckbgq . P_9 [ 0 ] * localB -> de4u044ohl ; localB -> edxv3qgybn =
abopqckbgq . P_9 [ 2 ] * localB -> cfpwmg2iv5 ; localB -> b1r1wuoueq =
abopqckbgq . P_9 [ 1 ] * localB -> ihwaoscgmh ; localB -> dvprdrli5v [ 0 ] =
localB -> b1r1wuoueq - localB -> ln5urmh5mw ; localB -> dvprdrli5v [ 1 ] =
localB -> edxv3qgybn - localB -> d0uguxmxbq ; localB -> dvprdrli5v [ 2 ] =
localB -> frgsgtn1mp - localB -> bz1gjtuoqb ; localB -> es3lwacrnk [ 0 ] =
localB -> dvprdrli5v [ 0 ] ; localB -> es3lwacrnk [ 1 ] = localB ->
dvprdrli5v [ 1 ] ; localB -> es3lwacrnk [ 2 ] = localB -> dvprdrli5v [ 2 ] ;
} else { localB -> es3lwacrnk [ 0 ] = localB -> dactqdrvkq_owjr1h1vqy [ 0 ] ;
localB -> es3lwacrnk [ 1 ] = localB -> dactqdrvkq_owjr1h1vqy [ 1 ] ; localB
-> es3lwacrnk [ 2 ] = localB -> dactqdrvkq_owjr1h1vqy [ 2 ] ; } localB ->
demriltcok = localB -> es3lwacrnk [ 0 ] * localB -> es3lwacrnk [ 0 ] ; localB
-> hfjpjmuufk = localB -> es3lwacrnk [ 1 ] * localB -> es3lwacrnk [ 1 ] ;
localB -> ksvb1lzrjs = localB -> es3lwacrnk [ 2 ] * localB -> es3lwacrnk [ 2
] ; localB -> kafws4sucv = ( ( localB -> llafrnfn4e + localB -> demriltcok )
+ localB -> hfjpjmuufk ) + localB -> ksvb1lzrjs ; localB -> eku4uywj5n =
muDoubleScalarSqrt ( localB -> kafws4sucv ) ; localB -> dxdd53dn5c = localB
-> kgb3cpprtp / localB -> eku4uywj5n ; localB -> alvyyylc1d = localB ->
de4u044ohl * localB -> esbrwlthoz ; localB -> a33uo1on3v = localB ->
ihwaoscgmh * localB -> npijt2t3rq ; localB -> kf2cj34q4i = localB ->
cfpwmg2iv5 * localB -> bhp4p2woax ; localB -> oinzqb0del = localB ->
ihwaoscgmh * localB -> bhp4p2woax ; localB -> lfrqyw5or4 = localB ->
cfpwmg2iv5 * localB -> esbrwlthoz ; localB -> fy5rojjgaq = localB ->
de4u044ohl * localB -> npijt2t3rq ; localB -> pwvm1cvys3 [ 0 ] = localB ->
alvyyylc1d - localB -> oinzqb0del ; localB -> pwvm1cvys3 [ 1 ] = localB ->
a33uo1on3v - localB -> lfrqyw5or4 ; localB -> pwvm1cvys3 [ 2 ] = localB ->
kf2cj34q4i - localB -> fy5rojjgaq ; localB -> hlmymlwl3i = localB ->
pwvm1cvys3 [ 1 ] * localB -> ihwaoscgmh ; localB -> osrebcplyq = localB ->
pwvm1cvys3 [ 2 ] * localB -> cfpwmg2iv5 ; localB -> pexenij4e3 = localB ->
pwvm1cvys3 [ 0 ] * localB -> de4u044ohl ; localB -> c44lcdg0mx = localB ->
pwvm1cvys3 [ 2 ] * localB -> de4u044ohl ; localB -> ofpgkysusa = localB ->
pwvm1cvys3 [ 0 ] * localB -> ihwaoscgmh ; localB -> kgwkjraldr = localB ->
pwvm1cvys3 [ 1 ] * localB -> cfpwmg2iv5 ; localB -> izvajsfkfm [ 0 ] = localB
-> hlmymlwl3i - localB -> c44lcdg0mx ; localB -> izvajsfkfm [ 1 ] = localB ->
osrebcplyq - localB -> ofpgkysusa ; localB -> izvajsfkfm [ 2 ] = localB ->
pexenij4e3 - localB -> kgwkjraldr ; localB -> gpsncmqs1n = localB ->
es3lwacrnk [ 1 ] / localB -> eku4uywj5n ; localB -> d4yfowfxod = localB ->
dxdd53dn5c * localB -> dxdd53dn5c ; localB -> lluanupaow = localB ->
es3lwacrnk [ 0 ] / localB -> eku4uywj5n ; localB -> gsdon20h0k = localB ->
lluanupaow * localB -> lluanupaow ; localB -> mp44bdcztc = localB ->
gpsncmqs1n * localB -> gpsncmqs1n ; localB -> mv33t0pc5q = localB ->
es3lwacrnk [ 2 ] / localB -> eku4uywj5n ; localB -> bynwhnhoxd = localB ->
mv33t0pc5q * localB -> mv33t0pc5q ; localB -> nojgqbps2j = ( ( localB ->
d4yfowfxod + localB -> gsdon20h0k ) + localB -> mp44bdcztc ) + localB ->
bynwhnhoxd ; localB -> glt3qhswla = muDoubleScalarSqrt ( localB -> nojgqbps2j
) ; localB -> oio3wjtl4j = localB -> gpsncmqs1n / localB -> glt3qhswla ;
localB -> mrcs11biur = localB -> oio3wjtl4j * localB -> oio3wjtl4j ; localB
-> ast1d0ii1d = localB -> mv33t0pc5q / localB -> glt3qhswla ; localB ->
pjp32jmmut = localB -> ast1d0ii1d * localB -> ast1d0ii1d ; localB ->
mva44vpfc2 = ( abopqckbgq . P_131 - localB -> mrcs11biur ) - localB ->
pjp32jmmut ; localB -> dpwnlpjyzf = abopqckbgq . P_115 * localB -> mva44vpfc2
; localB -> nqf3ahpofp = localB -> izvajsfkfm [ 0 ] * localB -> dpwnlpjyzf ;
localB -> la2zofuijo = localB -> lluanupaow / localB -> glt3qhswla ; localB
-> bgjmzqoecp = localB -> la2zofuijo * localB -> oio3wjtl4j ; localB ->
fca11zzkrd = localB -> dxdd53dn5c / localB -> glt3qhswla ; localB ->
aiud22aj0d = localB -> fca11zzkrd * localB -> ast1d0ii1d ; localB ->
luq2usfqsa = localB -> bgjmzqoecp + localB -> aiud22aj0d ; localB ->
axkbhn0cny = abopqckbgq . P_116 * localB -> luq2usfqsa ; localB -> d504p5qexg
= localB -> axkbhn0cny * localB -> izvajsfkfm [ 1 ] ; localB -> mhtbukw4ea =
localB -> fca11zzkrd * localB -> oio3wjtl4j ; localB -> ai4mkbbaan = localB
-> la2zofuijo * localB -> ast1d0ii1d ; localB -> gerr4jmvnh = localB ->
ai4mkbbaan - localB -> mhtbukw4ea ; localB -> hy3i4x5wqj = abopqckbgq . P_117
* localB -> gerr4jmvnh ; localB -> gat44e2fg1 = localB -> hy3i4x5wqj * localB
-> izvajsfkfm [ 2 ] ; localB -> ouopwnt0l5 = ( localB -> nqf3ahpofp + localB
-> d504p5qexg ) + localB -> gat44e2fg1 ; localB -> lcpbokipqe = localB ->
la2zofuijo * localB -> oio3wjtl4j ; localB -> ghenvnxzza = localB ->
fca11zzkrd * localB -> ast1d0ii1d ; localB -> hahbm33aeu = localB ->
lcpbokipqe - localB -> ghenvnxzza ; localB -> m3fkutigpq = abopqckbgq . P_118
* localB -> hahbm33aeu ; localB -> baht50f5r1 = localB -> izvajsfkfm [ 0 ] *
localB -> m3fkutigpq ; localB -> iud0hfcnyz = localB -> la2zofuijo * localB
-> la2zofuijo ; localB -> mmmimr3ju3 = localB -> ast1d0ii1d * localB ->
ast1d0ii1d ; localB -> oux4ikkkb2 = ( abopqckbgq . P_132 - localB ->
iud0hfcnyz ) - localB -> mmmimr3ju3 ; localB -> liuehcys3m = abopqckbgq .
P_119 * localB -> oux4ikkkb2 ; localB -> cefxrogje3 = localB -> liuehcys3m *
localB -> izvajsfkfm [ 1 ] ; localB -> fp2gqy5zek = localB -> fca11zzkrd *
localB -> la2zofuijo ; localB -> fc0sapae1u = localB -> oio3wjtl4j * localB
-> ast1d0ii1d ; localB -> drctt4evwf = localB -> fp2gqy5zek + localB ->
fc0sapae1u ; localB -> fsykih5kdc = abopqckbgq . P_120 * localB -> drctt4evwf
; localB -> edx4w0yjew = localB -> fsykih5kdc * localB -> izvajsfkfm [ 2 ] ;
localB -> cuoiibllhs = ( localB -> baht50f5r1 + localB -> cefxrogje3 ) +
localB -> edx4w0yjew ; localB -> bpbo53npsh = localB -> la2zofuijo * localB
-> ast1d0ii1d ; localB -> mjs1kyckeb = localB -> fca11zzkrd * localB ->
oio3wjtl4j ; localB -> n12zyyzkzp = localB -> bpbo53npsh + localB ->
mjs1kyckeb ; localB -> dnmterkpd5 = abopqckbgq . P_121 * localB -> n12zyyzkzp
; localB -> jajfh4crdy = localB -> izvajsfkfm [ 0 ] * localB -> dnmterkpd5 ;
localB -> pr3drqow4z = localB -> fca11zzkrd * localB -> la2zofuijo ; localB
-> pxsgcjzsik = localB -> oio3wjtl4j * localB -> ast1d0ii1d ; localB ->
kjqrgsc3wa = localB -> pxsgcjzsik - localB -> pr3drqow4z ; localB ->
clky40vnkm = abopqckbgq . P_122 * localB -> kjqrgsc3wa ; localB -> o05achetzf
= localB -> clky40vnkm * localB -> izvajsfkfm [ 1 ] ; localB -> dvadcxuzy5 =
localB -> la2zofuijo * localB -> la2zofuijo ; localB -> gbc4ehbrdc = localB
-> oio3wjtl4j * localB -> oio3wjtl4j ; localB -> hkgmxfy014 = ( abopqckbgq .
P_133 - localB -> dvadcxuzy5 ) - localB -> gbc4ehbrdc ; localB -> izs2h4teyx
= abopqckbgq . P_123 * localB -> hkgmxfy014 ; localB -> fbut1j1j3z = localB
-> izs2h4teyx * localB -> izvajsfkfm [ 2 ] ; localB -> ih4ljwvyz3 = ( localB
-> jajfh4crdy + localB -> o05achetzf ) + localB -> fbut1j1j3z ; localB ->
i55bdf31c4 [ 0 ] = localB -> ouopwnt0l5 ; localB -> i55bdf31c4 [ 1 ] = localB
-> cuoiibllhs ; localB -> i55bdf31c4 [ 2 ] = localB -> ih4ljwvyz3 ;
eezfy0115l_p = localB -> g11yqvtiub_jz50ptvnrg [ 0 ] ; i55bdf31c4_p = localB
-> i55bdf31c4 [ 0 ] ; u0 = eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p =
i55bdf31c4_p ; P_9 = eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
g11yqvtiub_jz50ptvnrg [ 1 ] ; i55bdf31c4_p = localB -> i55bdf31c4 [ 1 ] ; u0
+= eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = i55bdf31c4_p ; P_9 +=
eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB -> g11yqvtiub_jz50ptvnrg
[ 2 ] ; i55bdf31c4_p = localB -> i55bdf31c4 [ 2 ] ; u0 += eezfy0115l_p *
i55bdf31c4_p ; eezfy0115l_p = i55bdf31c4_p ; P_9 += eezfy0115l_p *
i55bdf31c4_p ; localB -> p4tltvujqb = u0 ; localB -> d5duesvdsg = P_9 ;
localB -> dqw3vltwcr = localB -> de4u044ohl_o4f35lbcvx * localB -> d5duesvdsg
; localB -> cief2n5si4 = muDoubleScalarSqrt ( localB -> dqw3vltwcr ) ; localB
-> c2iis34dgy = localB -> p4tltvujqb / localB -> cief2n5si4 ; localB ->
b4vhy4fid0 = localB -> c2iis34dgy + abopqckbgq . P_124 ; localB -> k3bxfmssr3
= muDoubleScalarAbs ( localB -> b4vhy4fid0 ) ; localB -> eiqg1ejffy = localB
-> c2iis34dgy + abopqckbgq . P_125 ; localB -> p2cyoh4zu2 = muDoubleScalarAbs
( localB -> eiqg1ejffy ) ; if ( localB -> k3bxfmssr3 < 1.0E-6 ) { cu0mwyodxb
( & localB -> lk0jb1dsya , & abopqckbgq . eh1au0gcdu ) ; } else if ( localB
-> p2cyoh4zu2 < 1.0E-6 ) { cu0mwyodxb ( & localB -> lk0jb1dsya , & abopqckbgq
. kufh2i43cj ) ; } else { cu0mwyodxb ( & localB -> lk0jb1dsya , & abopqckbgq
. otxy3nsbi1 ) ; } if ( localB -> emugtdcgnx ) { localB -> mncbjjwvwc [ 0 ] =
localB -> dxdd53dn5c ; localB -> mncbjjwvwc [ 1 ] = localB -> lluanupaow ;
localB -> mncbjjwvwc [ 2 ] = localB -> gpsncmqs1n ; localB -> mncbjjwvwc [ 3
] = localB -> mv33t0pc5q ; } else { localB -> mt5jnqvty1 = ( localB ->
lk0jb1dsya != abopqckbgq . P_6 ) ; if ( localB -> mt5jnqvty1 ) { localB ->
bcwus35002 = localB -> g11yqvtiub_jz50ptvnrg [ 1 ] * localB -> ouopwnt0l5 ;
localB -> hu52fy2qew = localB -> g11yqvtiub_jz50ptvnrg [ 0 ] * localB ->
ih4ljwvyz3 ; localB -> kt2vyh0zq2 = localB -> g11yqvtiub_jz50ptvnrg [ 2 ] *
localB -> cuoiibllhs ; localB -> avedtkdeir = localB -> g11yqvtiub_jz50ptvnrg
[ 0 ] * localB -> cuoiibllhs ; localB -> ef5fduy0he = localB ->
g11yqvtiub_jz50ptvnrg [ 2 ] * localB -> ouopwnt0l5 ; localB -> gcop45soft =
localB -> g11yqvtiub_jz50ptvnrg [ 1 ] * localB -> ih4ljwvyz3 ; localB ->
f3cfsgrk2z [ 0 ] = localB -> gcop45soft - localB -> kt2vyh0zq2 ; localB ->
f3cfsgrk2z [ 1 ] = localB -> ef5fduy0he - localB -> hu52fy2qew ; localB ->
f3cfsgrk2z [ 2 ] = localB -> avedtkdeir - localB -> bcwus35002 ; localB ->
fze1eqloth [ 0 ] = localB -> f3cfsgrk2z [ 0 ] ; localB -> fze1eqloth [ 1 ] =
localB -> f3cfsgrk2z [ 1 ] ; localB -> fze1eqloth [ 2 ] = localB ->
f3cfsgrk2z [ 2 ] ; } else { localB -> fze1eqloth [ 0 ] = localB -> fep3wcprh2
[ 0 ] ; localB -> fze1eqloth [ 1 ] = localB -> fep3wcprh2 [ 1 ] ; localB ->
fze1eqloth [ 2 ] = localB -> fep3wcprh2 [ 2 ] ; } localB -> ltpyaywcqp =
localB -> fze1eqloth [ 2 ] * localB -> fze1eqloth [ 2 ] ; localB ->
f4siibtobg = localB -> fze1eqloth [ 1 ] * localB -> fze1eqloth [ 1 ] ; localB
-> gq0plhui2z = localB -> fze1eqloth [ 0 ] * localB -> fze1eqloth [ 0 ] ;
i55bdf31c4_p = localB -> i55bdf31c4 [ 0 ] ; eezfy0115l_p = i55bdf31c4_p ; u0
= eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
g11yqvtiub_jz50ptvnrg [ 0 ] ; P_9 = eezfy0115l_p * i55bdf31c4_p ;
i55bdf31c4_p = localB -> i55bdf31c4 [ 1 ] ; eezfy0115l_p = i55bdf31c4_p ; u0
+= eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
g11yqvtiub_jz50ptvnrg [ 1 ] ; P_9 += eezfy0115l_p * i55bdf31c4_p ;
i55bdf31c4_p = localB -> i55bdf31c4 [ 2 ] ; eezfy0115l_p = i55bdf31c4_p ; u0
+= eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
g11yqvtiub_jz50ptvnrg [ 2 ] ; P_9 += eezfy0115l_p * i55bdf31c4_p ; localB ->
et3awjyjyj = u0 ; localB -> csev1iasnl = localB -> a4cosmw5lm_nyxm0bsxsn *
localB -> et3awjyjyj ; localB -> jk0majnude = muDoubleScalarSqrt ( localB ->
csev1iasnl ) ; localB -> n2kvyyoxdb = P_9 ; localB -> fkkw5e5koi = localB ->
n2kvyyoxdb + localB -> jk0majnude ; localB -> as1ygynqht = localB ->
fkkw5e5koi * localB -> fkkw5e5koi ; localB -> a1ts5ugptw = ( ( localB ->
as1ygynqht + localB -> gq0plhui2z ) + localB -> f4siibtobg ) + localB ->
ltpyaywcqp ; localB -> lio1rwy5k5 = muDoubleScalarSqrt ( localB -> a1ts5ugptw
) ; localB -> hr2lnj20rj = localB -> fze1eqloth [ 2 ] / localB -> lio1rwy5k5
; localB -> kzesecjrxj = localB -> mv33t0pc5q * localB -> hr2lnj20rj ; localB
-> cgh5gny5hv = localB -> fze1eqloth [ 1 ] / localB -> lio1rwy5k5 ; localB ->
cmriilrpgm = localB -> gpsncmqs1n * localB -> cgh5gny5hv ; localB ->
nqv0wyt4c4 = localB -> fze1eqloth [ 0 ] / localB -> lio1rwy5k5 ; localB ->
pnkkogr5lv = localB -> lluanupaow * localB -> nqv0wyt4c4 ; localB ->
hxddz4vki0 = localB -> fkkw5e5koi / localB -> lio1rwy5k5 ; localB ->
fe2mfyjhwp = localB -> dxdd53dn5c * localB -> hxddz4vki0 ; localB ->
iz2roo0su3 = ( ( localB -> fe2mfyjhwp - localB -> pnkkogr5lv ) - localB ->
cmriilrpgm ) - localB -> kzesecjrxj ; localB -> birstjnuik = localB ->
mv33t0pc5q * localB -> cgh5gny5hv ; localB -> eb225iytu1 = localB ->
gpsncmqs1n * localB -> hr2lnj20rj ; localB -> et1ffwosiv = localB ->
lluanupaow * localB -> hxddz4vki0 ; localB -> jx05z25abg = localB ->
dxdd53dn5c * localB -> nqv0wyt4c4 ; localB -> cenkdmml5c = ( ( localB ->
jx05z25abg + localB -> et1ffwosiv ) + localB -> eb225iytu1 ) - localB ->
birstjnuik ; localB -> iz2w1kto3z = localB -> mv33t0pc5q * localB ->
nqv0wyt4c4 ; localB -> ed5pilfg2c = localB -> gpsncmqs1n * localB ->
hxddz4vki0 ; localB -> aet11y5rkg = localB -> lluanupaow * localB ->
hr2lnj20rj ; localB -> b4m5skyndx = localB -> dxdd53dn5c * localB ->
cgh5gny5hv ; localB -> cpogodbvj5 = ( ( localB -> b4m5skyndx - localB ->
aet11y5rkg ) + localB -> ed5pilfg2c ) + localB -> iz2w1kto3z ; localB ->
i1cd0gihrf = localB -> mv33t0pc5q * localB -> hxddz4vki0 ; localB ->
dengk2ddaw = localB -> gpsncmqs1n * localB -> nqv0wyt4c4 ; localB ->
ou2j2y0tmf = localB -> lluanupaow * localB -> cgh5gny5hv ; localB ->
jjblk12nf5 = localB -> dxdd53dn5c * localB -> hr2lnj20rj ; localB ->
drji2s4yzw = ( ( localB -> jjblk12nf5 + localB -> ou2j2y0tmf ) - localB ->
dengk2ddaw ) + localB -> i1cd0gihrf ; localB -> mncbjjwvwc [ 0 ] = localB ->
iz2roo0su3 ; localB -> mncbjjwvwc [ 1 ] = localB -> cenkdmml5c ; localB ->
mncbjjwvwc [ 2 ] = localB -> cpogodbvj5 ; localB -> mncbjjwvwc [ 3 ] = localB
-> drji2s4yzw ; } localB -> eva0gxek30 [ 0 ] = localB -> mncbjjwvwc [ 0 ] ;
localB -> eva0gxek30 [ 1 ] = localB -> mncbjjwvwc [ 1 ] ; localB ->
eva0gxek30 [ 2 ] = localB -> mncbjjwvwc [ 2 ] ; localB -> eva0gxek30 [ 3 ] =
localB -> mncbjjwvwc [ 3 ] ; localB -> fsfsyc1psv = localB -> mncbjjwvwc [ 0
] * localB -> mncbjjwvwc [ 0 ] ; localB -> ouypzaxkni = localB -> mncbjjwvwc
[ 1 ] * localB -> mncbjjwvwc [ 1 ] ; localB -> ldzjvrkfor = localB ->
mncbjjwvwc [ 2 ] * localB -> mncbjjwvwc [ 2 ] ; localB -> kevyisdutv = localB
-> mncbjjwvwc [ 3 ] * localB -> mncbjjwvwc [ 3 ] ; localB -> h0maffmfmc = ( (
localB -> fsfsyc1psv + localB -> ouypzaxkni ) + localB -> ldzjvrkfor ) +
localB -> kevyisdutv ; localB -> pybbcxhwgw = muDoubleScalarSqrt ( localB ->
h0maffmfmc ) ; localB -> auz3ups4wx = localB -> mncbjjwvwc [ 0 ] / localB ->
pybbcxhwgw ; localB -> bba3ad1h1n = localB -> mncbjjwvwc [ 1 ] / localB ->
pybbcxhwgw ; localB -> iohyxr4csy = localB -> mncbjjwvwc [ 2 ] / localB ->
pybbcxhwgw ; localB -> oj5mjmwmtk = localB -> mncbjjwvwc [ 3 ] / localB ->
pybbcxhwgw ; localB -> ceogqkolte = ( localB -> bba3ad1h1n * localB ->
oj5mjmwmtk + localB -> auz3ups4wx * localB -> iohyxr4csy ) * 2.0 ; if (
localB -> ceogqkolte > 1.0 ) { localB -> ba0zm3uzwr = abopqckbgq . P_89 ;
srUpdateBC ( localDW -> g2u3gf3pir ) ; } else if ( localB -> ceogqkolte < -
1.0 ) { localB -> ba0zm3uzwr = abopqckbgq . P_90 ; srUpdateBC ( localDW ->
duxa0lwnyy ) ; } else { localB -> ba0zm3uzwr = localB -> ceogqkolte ;
srUpdateBC ( localDW -> m4ktsb34zu ) ; } localB -> a32eudeoqb = ( localB ->
iohyxr4csy * localB -> oj5mjmwmtk - localB -> auz3ups4wx * localB ->
bba3ad1h1n ) * - 2.0 ; localB -> ahmrerjgdn = ( ( localB -> auz3ups4wx *
localB -> auz3ups4wx - localB -> bba3ad1h1n * localB -> bba3ad1h1n ) - localB
-> iohyxr4csy * localB -> iohyxr4csy ) + localB -> oj5mjmwmtk * localB ->
oj5mjmwmtk ; localB -> eajnvfro2c [ 0 ] = muDoubleScalarAtan2 ( localB ->
a32eudeoqb , localB -> ahmrerjgdn ) ; localB -> jiiedsgtma = ( localB ->
bba3ad1h1n * localB -> iohyxr4csy - localB -> auz3ups4wx * localB ->
oj5mjmwmtk ) * - 2.0 ; localB -> ifuv2i1q30 = ( ( localB -> auz3ups4wx *
localB -> auz3ups4wx + localB -> bba3ad1h1n * localB -> bba3ad1h1n ) - localB
-> iohyxr4csy * localB -> iohyxr4csy ) - localB -> oj5mjmwmtk * localB ->
oj5mjmwmtk ; localB -> eajnvfro2c [ 2 ] = muDoubleScalarAtan2 ( localB ->
jiiedsgtma , localB -> ifuv2i1q30 ) ; u0 = localB -> ba0zm3uzwr ; if ( u0 >
1.0 ) { u0 = 1.0 ; } else if ( u0 < - 1.0 ) { u0 = - 1.0 ; } localB ->
eajnvfro2c [ 1 ] = muDoubleScalarAsin ( u0 ) ; localB ->
pf1xmdshjh_ppxrqq0gsf = abopqckbgq . P_134 * abopqckbgq . P_9 [ 1 ] ; localB
-> etyhz1d54p_h22x25zmds = ( abopqckbgq . P_9 [ 0 ] > abopqckbgq . P_9 [ 2 ]
) ; localB -> pybu30gra0_llw0u2ae0v = abopqckbgq . P_137 * abopqckbgq . P_9 [
2 ] ; if ( localB -> etyhz1d54p_h22x25zmds ) { localB ->
p5ythyyc1w_jwzvbuczlb [ 0 ] = localB -> pf1xmdshjh_ppxrqq0gsf ; localB ->
p5ythyyc1w_jwzvbuczlb [ 1 ] = abopqckbgq . P_9 [ 0 ] ; localB ->
p5ythyyc1w_jwzvbuczlb [ 2 ] = abopqckbgq . P_135 ; } else { localB ->
p5ythyyc1w_jwzvbuczlb [ 0 ] = abopqckbgq . P_136 ; localB ->
p5ythyyc1w_jwzvbuczlb [ 1 ] = localB -> pybu30gra0_llw0u2ae0v ; localB ->
p5ythyyc1w_jwzvbuczlb [ 2 ] = abopqckbgq . P_9 [ 1 ] ; } localB ->
jrb3n1e1op_dhmrxtyqop = abopqckbgq . P_9 [ 0 ] * localB ->
p5ythyyc1w_jwzvbuczlb [ 1 ] ; localB -> glokcynnu0_guugdwf2m3 = abopqckbgq .
P_9 [ 1 ] * localB -> p5ythyyc1w_jwzvbuczlb [ 2 ] ; localB ->
ahhv2odar5_ldqodwenvz = localB -> p5ythyyc1w_jwzvbuczlb [ 0 ] * abopqckbgq .
P_9 [ 2 ] ; localB -> bdkn43iyoi_dhamdvybc1 = abopqckbgq . P_9 [ 0 ] * localB
-> p5ythyyc1w_jwzvbuczlb [ 2 ] ; localB -> gupwco05zf_dypejvacrn = localB ->
p5ythyyc1w_jwzvbuczlb [ 0 ] * abopqckbgq . P_9 [ 1 ] ; localB ->
cfpwmg2iv5_lxo5edjg3c = localB -> p5ythyyc1w_jwzvbuczlb [ 1 ] * abopqckbgq .
P_9 [ 2 ] ; localB -> dactqdrvkq_owjr1h1vqy [ 0 ] = localB ->
glokcynnu0_guugdwf2m3 - localB -> cfpwmg2iv5_lxo5edjg3c ; localB ->
dactqdrvkq_owjr1h1vqy [ 1 ] = localB -> ahhv2odar5_ldqodwenvz - localB ->
bdkn43iyoi_dhamdvybc1 ; localB -> dactqdrvkq_owjr1h1vqy [ 2 ] = localB ->
jrb3n1e1op_dhmrxtyqop - localB -> gupwco05zf_dypejvacrn ; localB ->
e0ceu2okzq_bjbgfqrolh = abopqckbgq . P_9 [ 1 ] * abopqckbgq . P_11 [ 2 ] ;
localB -> hehwf2oytc_nuebgmauvi = abopqckbgq . P_11 [ 0 ] * abopqckbgq . P_9
[ 2 ] ; localB -> i44guk2vvg_bsqwvugooi = abopqckbgq . P_9 [ 0 ] * abopqckbgq
. P_11 [ 1 ] ; localB -> gum5tzox3x_lnjdk5wtww = abopqckbgq . P_11 [ 1 ] *
abopqckbgq . P_9 [ 2 ] ; localB -> cncgq4bsmk_hv2ho1zopz = abopqckbgq . P_9 [
0 ] * abopqckbgq . P_11 [ 2 ] ; localB -> nwy4h031y3_bnlywzniup = abopqckbgq
. P_11 [ 0 ] * abopqckbgq . P_9 [ 1 ] ; localB -> dfqjpjarik_dapv3jlyq5 [ 0 ]
= localB -> e0ceu2okzq_bjbgfqrolh - localB -> gum5tzox3x_lnjdk5wtww ; localB
-> dfqjpjarik_dapv3jlyq5 [ 1 ] = localB -> hehwf2oytc_nuebgmauvi - localB ->
cncgq4bsmk_hv2ho1zopz ; localB -> dfqjpjarik_dapv3jlyq5 [ 2 ] = localB ->
i44guk2vvg_bsqwvugooi - localB -> nwy4h031y3_bnlywzniup ; localB ->
l3jo4kejut_ezqlmfzvpq = localB -> dfqjpjarik_dapv3jlyq5 [ 1 ] * abopqckbgq .
P_9 [ 2 ] ; localB -> kwenwqfzm2_bjvjhhzy4i = abopqckbgq . P_9 [ 0 ] * localB
-> dfqjpjarik_dapv3jlyq5 [ 2 ] ; localB -> ale4aanaik_jzx3amusab = localB ->
dfqjpjarik_dapv3jlyq5 [ 0 ] * abopqckbgq . P_9 [ 1 ] ; localB ->
irir3q2hou_fdinthrxmb = abopqckbgq . P_9 [ 1 ] * localB ->
dfqjpjarik_dapv3jlyq5 [ 2 ] ; localB -> k0acye40sn_al00mdgrv4 = localB ->
dfqjpjarik_dapv3jlyq5 [ 0 ] * abopqckbgq . P_9 [ 2 ] ; localB ->
emhhu5s0gl_ju13rw2h0m = abopqckbgq . P_9 [ 0 ] * localB ->
dfqjpjarik_dapv3jlyq5 [ 1 ] ; localB -> g11yqvtiub_jz50ptvnrg [ 0 ] = localB
-> l3jo4kejut_ezqlmfzvpq - localB -> irir3q2hou_fdinthrxmb ; localB ->
g11yqvtiub_jz50ptvnrg [ 1 ] = localB -> kwenwqfzm2_bjvjhhzy4i - localB ->
k0acye40sn_al00mdgrv4 ; localB -> g11yqvtiub_jz50ptvnrg [ 2 ] = localB ->
ale4aanaik_jzx3amusab - localB -> emhhu5s0gl_ju13rw2h0m ; g11yqvtiub_p =
abopqckbgq . P_9 [ 0 ] ; aulmnbewtw_p = abopqckbgq . P_11 [ 0 ] ;
eezfy0115l_p = aulmnbewtw_p ; u0 = g11yqvtiub_p * eezfy0115l_p ; eezfy0115l_p
= g11yqvtiub_p ; i55bdf31c4_p = g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p =
aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; P_9 = g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = localB -> g11yqvtiub_jz50ptvnrg [ 0 ] ;
eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p = g11yqvtiub_p * eezfy0115l_p ;
g11yqvtiub_p = abopqckbgq . P_9 [ 1 ] ; aulmnbewtw_p = abopqckbgq . P_11 [ 1
] ; eezfy0115l_p = aulmnbewtw_p ; u0 += g11yqvtiub_p * eezfy0115l_p ;
eezfy0115l_p = g11yqvtiub_p ; i55bdf31c4_p += g11yqvtiub_p * eezfy0115l_p ;
g11yqvtiub_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; P_9 +=
g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p = localB -> g11yqvtiub_jz50ptvnrg
[ 1 ] ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p += g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = abopqckbgq . P_9 [ 2 ] ; aulmnbewtw_p =
abopqckbgq . P_11 [ 2 ] ; eezfy0115l_p = aulmnbewtw_p ; u0 += g11yqvtiub_p *
eezfy0115l_p ; eezfy0115l_p = g11yqvtiub_p ; i55bdf31c4_p += g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ;
P_9 += g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p = localB ->
g11yqvtiub_jz50ptvnrg [ 2 ] ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p +=
g11yqvtiub_p * eezfy0115l_p ; localB -> jpaaj212yy_mbvzarwird = u0 ; localB
-> czcssosf1z_cl54gopm0x = i55bdf31c4_p ; localB -> aen0aszu3e_kkiq3xxxve =
P_9 ; localB -> gunaobe300_cxarnvbvui = localB -> czcssosf1z_cl54gopm0x *
localB -> aen0aszu3e_kkiq3xxxve ; localB -> ov4vhkp3o2_bhxxfovxdy =
muDoubleScalarSqrt ( localB -> gunaobe300_cxarnvbvui ) ; localB ->
bvzybml4ix_pbm3vprmfu = localB -> jpaaj212yy_mbvzarwird / localB ->
ov4vhkp3o2_bhxxfovxdy ; localB -> lhvbn1u0tx_cv5hdgrwft = localB ->
bvzybml4ix_pbm3vprmfu + abopqckbgq . P_129 ; localB -> kdginuldqs_fqdqrf4qbc
= muDoubleScalarAbs ( localB -> lhvbn1u0tx_cv5hdgrwft ) ; localB ->
dfo0fydpsk_g2mlkqadfk = localB -> bvzybml4ix_pbm3vprmfu + abopqckbgq . P_130
; localB -> bcyepzkahx_g1smspu5ke = muDoubleScalarAbs ( localB ->
dfo0fydpsk_g2mlkqadfk ) ; localB -> ho0jylt0hh_merlcviukg = i55bdf31c4_p ;
localB -> jxalf3d0tm_nz4o0shxby = i55bdf31c4_p ; localB ->
de4u044ohl_o4f35lbcvx = cfc45nbsjb_p ; localB -> a4cosmw5lm_nyxm0bsxsn =
cfc45nbsjb_p ; localB -> mi4apm2zjc_icdfyazkhu = abopqckbgq . P_138 * localB
-> g11yqvtiub_jz50ptvnrg [ 1 ] ; localB -> licbno2boh_eikkpx0qsf = ( localB
-> g11yqvtiub_jz50ptvnrg [ 0 ] > localB -> g11yqvtiub_jz50ptvnrg [ 2 ] ) ;
localB -> hcubmd0liv_oyypvi4boh = abopqckbgq . P_141 * localB ->
g11yqvtiub_jz50ptvnrg [ 2 ] ; if ( localB -> licbno2boh_eikkpx0qsf ) { localB
-> kt0xe204ka_nvsvtgkap4 [ 0 ] = localB -> mi4apm2zjc_icdfyazkhu ; localB ->
kt0xe204ka_nvsvtgkap4 [ 1 ] = localB -> g11yqvtiub_jz50ptvnrg [ 0 ] ; localB
-> kt0xe204ka_nvsvtgkap4 [ 2 ] = abopqckbgq . P_139 ; } else { localB ->
kt0xe204ka_nvsvtgkap4 [ 0 ] = abopqckbgq . P_140 ; localB ->
kt0xe204ka_nvsvtgkap4 [ 1 ] = localB -> hcubmd0liv_oyypvi4boh ; localB ->
kt0xe204ka_nvsvtgkap4 [ 2 ] = localB -> g11yqvtiub_jz50ptvnrg [ 1 ] ; }
localB -> p5lfsonodp_m3yhjduhi1 = localB -> g11yqvtiub_jz50ptvnrg [ 0 ] *
localB -> kt0xe204ka_nvsvtgkap4 [ 1 ] ; localB -> me3p1k22xz_czkfpwuzm5 =
localB -> g11yqvtiub_jz50ptvnrg [ 1 ] * localB -> kt0xe204ka_nvsvtgkap4 [ 2 ]
; localB -> ltbrmuqara_mdoasc5av4 = localB -> kt0xe204ka_nvsvtgkap4 [ 0 ] *
localB -> g11yqvtiub_jz50ptvnrg [ 2 ] ; localB -> msdu4nx1aq_m3ybdk4ikc =
localB -> g11yqvtiub_jz50ptvnrg [ 0 ] * localB -> kt0xe204ka_nvsvtgkap4 [ 2 ]
; localB -> ihwaoscgmh_jacdjrqyev = localB -> kt0xe204ka_nvsvtgkap4 [ 0 ] *
localB -> g11yqvtiub_jz50ptvnrg [ 1 ] ; localB -> kmg1lk4mdb = localB ->
kt0xe204ka_nvsvtgkap4 [ 1 ] * localB -> g11yqvtiub_jz50ptvnrg [ 2 ] ; localB
-> fep3wcprh2 [ 0 ] = localB -> me3p1k22xz_czkfpwuzm5 - localB -> kmg1lk4mdb
; localB -> fep3wcprh2 [ 1 ] = localB -> ltbrmuqara_mdoasc5av4 - localB ->
msdu4nx1aq_m3ybdk4ikc ; localB -> fep3wcprh2 [ 2 ] = localB ->
p5lfsonodp_m3yhjduhi1 - localB -> ihwaoscgmh_jacdjrqyev ; } break ; default :
if ( * odamlphqyv == 1.0 ) { localB -> hfrm0ub4jk = 2.0 ; localDW ->
nxghgofox1 = bo2u2aqs02 ; localB -> oy4fgz3okb = localB -> ool0nntzvr .
q_eci2b [ 0 ] * localB -> ool0nntzvr . q_eci2b [ 0 ] ; localB -> ofl0shskgn =
- localB -> ool0nntzvr . q_eci2b [ 1 ] ; localB -> g0d2oofefn = localB ->
ofl0shskgn * localB -> ofl0shskgn ; localB -> cxjpeok45y = - localB ->
ool0nntzvr . q_eci2b [ 2 ] ; localB -> oilxbs5p0c = localB -> cxjpeok45y *
localB -> cxjpeok45y ; localB -> d4yitlrmpe = - localB -> ool0nntzvr .
q_eci2b [ 3 ] ; localB -> nl40dhi54m = localB -> d4yitlrmpe * localB ->
d4yitlrmpe ; localB -> b2mfztbda1 = ( ( localB -> oy4fgz3okb + localB ->
g0d2oofefn ) + localB -> oilxbs5p0c ) + localB -> nl40dhi54m ; localB ->
dzo5rpb5em = muDoubleScalarSqrt ( localB -> b2mfztbda1 ) ; localB ->
mn3cjqchah = localB -> ool0nntzvr . q_eci2b [ 0 ] / localB -> dzo5rpb5em ;
localB -> kb1j2xuv2x = localB -> mn3cjqchah * localB -> mn3cjqchah ; localB
-> okogcmjrp1 = localB -> ofl0shskgn / localB -> dzo5rpb5em ; localB ->
am1yajpkp5 = - localB -> okogcmjrp1 ; localB -> o2ygwce3mu = localB ->
am1yajpkp5 * localB -> am1yajpkp5 ; localB -> krqzbeb01l = localB ->
cxjpeok45y / localB -> dzo5rpb5em ; localB -> moxzrom4e2 = - localB ->
krqzbeb01l ; localB -> owvd0qhkab = localB -> moxzrom4e2 * localB ->
moxzrom4e2 ; localB -> cbdkowkpf3 = localB -> d4yitlrmpe / localB ->
dzo5rpb5em ; localB -> h3jeczv0h3 = - localB -> cbdkowkpf3 ; localB ->
jrlpuigzhc = localB -> h3jeczv0h3 * localB -> h3jeczv0h3 ; localB ->
caxzxod1me = ( ( localB -> kb1j2xuv2x + localB -> o2ygwce3mu ) + localB ->
owvd0qhkab ) + localB -> jrlpuigzhc ; localB -> dxhva2syhh =
muDoubleScalarSqrt ( localB -> caxzxod1me ) ; localB -> ljhg4ah1hn = localB
-> mn3cjqchah / localB -> dxhva2syhh ; localB -> o44hoe01oz = localB ->
am1yajpkp5 / localB -> dxhva2syhh ; localB -> o4dw42eqdy = localB ->
moxzrom4e2 / localB -> dxhva2syhh ; localB -> ddi5il0z53 = localB ->
h3jeczv0h3 / localB -> dxhva2syhh ; localB -> gqcj1nfmop = localB ->
o44hoe01oz * localB -> o4dw42eqdy ; localB -> lc1r4vfhet = localB ->
ljhg4ah1hn * localB -> ddi5il0z53 ; localB -> mx012h1x4e = localB ->
gqcj1nfmop + localB -> lc1r4vfhet ; localB -> fccc45xdiq = abopqckbgq . P_21
* localB -> mx012h1x4e ; localB -> npmajomj43 = localB -> ljhg4ah1hn * localB
-> o4dw42eqdy ; localB -> icfur12eqa = localB -> o44hoe01oz * localB ->
ddi5il0z53 ; localB -> jy3su1yaqh = localB -> icfur12eqa - localB ->
npmajomj43 ; localB -> pll4iy2ltw = abopqckbgq . P_22 * localB -> jy3su1yaqh
; localB -> fzdkoxuw3r = localB -> o4dw42eqdy * localB -> o4dw42eqdy ; localB
-> fd3it4cm3p = localB -> ddi5il0z53 * localB -> ddi5il0z53 ; localB ->
ok00ebomfe = ( abopqckbgq . P_58 - localB -> fzdkoxuw3r ) - localB ->
fd3it4cm3p ; localB -> bxscoc0iwo = abopqckbgq . P_23 * localB -> ok00ebomfe
; localB -> k4b5tiznc1 = localB -> o44hoe01oz * localB -> o4dw42eqdy ; localB
-> kw0t1qhdx3 = localB -> ljhg4ah1hn * localB -> ddi5il0z53 ; localB ->
nxifsgxc2x = localB -> k4b5tiznc1 - localB -> kw0t1qhdx3 ; localB ->
g2jc0no1mq = abopqckbgq . P_24 * localB -> nxifsgxc2x ; localB -> hv2xsvyytk
= localB -> ljhg4ah1hn * localB -> o44hoe01oz ; localB -> bcdlg34pt3 = localB
-> o4dw42eqdy * localB -> ddi5il0z53 ; localB -> lg2isztegk = localB ->
hv2xsvyytk + localB -> bcdlg34pt3 ; localB -> cw4hetqa4a = abopqckbgq . P_25
* localB -> lg2isztegk ; localB -> d1sbs2pkf3 = localB -> o44hoe01oz * localB
-> o44hoe01oz ; localB -> nfdsdifffn = localB -> ddi5il0z53 * localB ->
ddi5il0z53 ; localB -> ioivmki1h5 = ( abopqckbgq . P_59 - localB ->
d1sbs2pkf3 ) - localB -> nfdsdifffn ; localB -> ljleij1km3 = abopqckbgq .
P_26 * localB -> ioivmki1h5 ; localB -> ccu3jt5v2w = localB -> o44hoe01oz *
localB -> ddi5il0z53 ; localB -> pkpl3cgh2d = localB -> ljhg4ah1hn * localB
-> o4dw42eqdy ; localB -> nhdyrg1ri3 = localB -> ccu3jt5v2w + localB ->
pkpl3cgh2d ; localB -> g0drkrngsr = abopqckbgq . P_27 * localB -> nhdyrg1ri3
; localB -> g4yahc00wc = localB -> ljhg4ah1hn * localB -> o44hoe01oz ; localB
-> mgy2tx4uj0 = localB -> o4dw42eqdy * localB -> ddi5il0z53 ; localB ->
j55rmyfoop = localB -> mgy2tx4uj0 - localB -> g4yahc00wc ; localB ->
i30rvmobjs = abopqckbgq . P_28 * localB -> j55rmyfoop ; localB -> hbxw1z240h
= localB -> o44hoe01oz * localB -> o44hoe01oz ; localB -> ayebppg4gx = localB
-> o4dw42eqdy * localB -> o4dw42eqdy ; localB -> mlbbs4fqao = ( abopqckbgq .
P_60 - localB -> hbxw1z240h ) - localB -> ayebppg4gx ; localB -> nsqipfztjp =
abopqckbgq . P_29 * localB -> mlbbs4fqao ; localB -> p35guikpkx = localB ->
ool0nntzvr . X_eci [ 1 ] * localB -> ool0nntzvr . V_eci [ 2 ] ; localB ->
ec0syteeth = localB -> ool0nntzvr . V_eci [ 0 ] * localB -> ool0nntzvr .
X_eci [ 2 ] ; localB -> ep2mm5jz5g = localB -> ool0nntzvr . X_eci [ 0 ] *
localB -> ool0nntzvr . V_eci [ 1 ] ; localB -> byxaey0x2e = localB ->
ool0nntzvr . V_eci [ 1 ] * localB -> ool0nntzvr . X_eci [ 2 ] ; localB ->
evsphivwme = localB -> ool0nntzvr . X_eci [ 0 ] * localB -> ool0nntzvr .
V_eci [ 2 ] ; localB -> mn4qnpiisu = localB -> ool0nntzvr . V_eci [ 0 ] *
localB -> ool0nntzvr . X_eci [ 1 ] ; localB -> dg1abadomh [ 0 ] = localB ->
p35guikpkx - localB -> byxaey0x2e ; localB -> dg1abadomh [ 1 ] = localB ->
ec0syteeth - localB -> evsphivwme ; localB -> dg1abadomh [ 2 ] = localB ->
ep2mm5jz5g - localB -> mn4qnpiisu ; localB -> etb30mxmsv = abopqckbgq . P_61
[ 1 ] * localB -> dg1abadomh [ 2 ] ; localB -> glxglw03ek = localB ->
dg1abadomh [ 0 ] * abopqckbgq . P_61 [ 2 ] ; localB -> n541cz4kc4 =
abopqckbgq . P_61 [ 0 ] * localB -> dg1abadomh [ 1 ] ; localB -> bmrs115gg5 =
localB -> dg1abadomh [ 1 ] * abopqckbgq . P_61 [ 2 ] ; localB -> fzuuudcvoz =
abopqckbgq . P_61 [ 0 ] * localB -> dg1abadomh [ 2 ] ; localB -> jgrywmthgg =
localB -> dg1abadomh [ 0 ] * abopqckbgq . P_61 [ 1 ] ; localB -> l4qn0wlr0t [
0 ] = localB -> etb30mxmsv - localB -> bmrs115gg5 ; localB -> l4qn0wlr0t [ 1
] = localB -> glxglw03ek - localB -> fzuuudcvoz ; localB -> l4qn0wlr0t [ 2 ]
= localB -> n541cz4kc4 - localB -> jgrywmthgg ; localB -> agwhucmw4a = localB
-> ool0nntzvr . V_eci [ 1 ] * localB -> dg1abadomh [ 2 ] ; localB ->
db55uyfujk = localB -> dg1abadomh [ 0 ] * localB -> ool0nntzvr . V_eci [ 2 ]
; localB -> hicmxn41fn = localB -> ool0nntzvr . V_eci [ 0 ] * localB ->
dg1abadomh [ 1 ] ; localB -> bt12pjuurh = localB -> dg1abadomh [ 1 ] * localB
-> ool0nntzvr . V_eci [ 2 ] ; localB -> m1z4jkd45v = localB -> ool0nntzvr .
V_eci [ 0 ] * localB -> dg1abadomh [ 2 ] ; localB -> lrisupmyps = localB ->
dg1abadomh [ 0 ] * localB -> ool0nntzvr . V_eci [ 1 ] ; localB -> ljvwgfcthm
[ 0 ] = localB -> agwhucmw4a - localB -> bt12pjuurh ; localB -> ljvwgfcthm [
1 ] = localB -> db55uyfujk - localB -> m1z4jkd45v ; localB -> ljvwgfcthm [ 2
] = localB -> hicmxn41fn - localB -> lrisupmyps ; aulmnbewtw_p = localB ->
ool0nntzvr . X_eci [ 0 ] ; localB -> bjczw412ug [ 0 ] = abopqckbgq . P_20 *
aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p * aulmnbewtw_p ; localB ->
ahpliz1e1p [ 0 ] = localB -> ljvwgfcthm [ 0 ] / abopqckbgq . P_7 ;
aulmnbewtw_p = localB -> ool0nntzvr . X_eci [ 1 ] ; localB -> bjczw412ug [ 1
] = abopqckbgq . P_20 * aulmnbewtw_p ; eezfy0115l_p += aulmnbewtw_p *
aulmnbewtw_p ; localB -> ahpliz1e1p [ 1 ] = localB -> ljvwgfcthm [ 1 ] /
abopqckbgq . P_7 ; aulmnbewtw_p = localB -> ool0nntzvr . X_eci [ 2 ] ; localB
-> bjczw412ug [ 2 ] = abopqckbgq . P_20 * aulmnbewtw_p ; eezfy0115l_p +=
aulmnbewtw_p * aulmnbewtw_p ; localB -> ahpliz1e1p [ 2 ] = localB ->
ljvwgfcthm [ 2 ] / abopqckbgq . P_7 ; localB -> bbygxkv5lv = localB ->
fccc45xdiq * localB -> bjczw412ug [ 1 ] ; localB -> pjp0mnhgft = localB ->
pll4iy2ltw * localB -> bjczw412ug [ 2 ] ; localB -> aut5hni3kn = localB ->
bjczw412ug [ 0 ] * localB -> bxscoc0iwo ; localB -> d5qrgk5srt = ( localB ->
aut5hni3kn + localB -> bbygxkv5lv ) + localB -> pjp0mnhgft ; localB ->
nnyklgzqdv = localB -> bjczw412ug [ 0 ] * localB -> g2jc0no1mq ; localB ->
le1y3tomzf = localB -> cw4hetqa4a * localB -> bjczw412ug [ 2 ] ; localB ->
phopglwagr = localB -> ljleij1km3 * localB -> bjczw412ug [ 1 ] ; localB ->
pkaclggswi = ( localB -> nnyklgzqdv + localB -> phopglwagr ) + localB ->
le1y3tomzf ; localB -> ied0h2kyh4 = localB -> bjczw412ug [ 0 ] * localB ->
g0drkrngsr ; localB -> mlq3m1iq03 = localB -> i30rvmobjs * localB ->
bjczw412ug [ 1 ] ; localB -> m32g5gho0y = localB -> nsqipfztjp * localB ->
bjczw412ug [ 2 ] ; localB -> npxvfyksso = ( localB -> ied0h2kyh4 + localB ->
mlq3m1iq03 ) + localB -> m32g5gho0y ; localB -> e2eydg5nti = eezfy0115l_p ;
localB -> afdifrnx0o = muDoubleScalarSqrt ( localB -> e2eydg5nti ) ;
aulmnbewtw_p = localB -> ool0nntzvr . X_eci [ 0 ] ; eezfy0115l_p =
aulmnbewtw_p / localB -> afdifrnx0o ; localB -> eezfy0115l [ 0 ] =
eezfy0115l_p ; g11yqvtiub_p = localB -> ahpliz1e1p [ 0 ] - eezfy0115l_p ;
localB -> lnuwwpg5ug [ 0 ] = g11yqvtiub_p ; dg1abadomh_p = localB ->
l4qn0wlr0t [ 0 ] ; eezfy0115l_p = g11yqvtiub_p ; u0 = dg1abadomh_p *
eezfy0115l_p ; eezfy0115l_p = dg1abadomh_p ; P_9 = dg1abadomh_p *
eezfy0115l_p ; dg1abadomh_p = localB -> dg1abadomh [ 0 ] ; eezfy0115l_p =
dg1abadomh_p ; i55bdf31c4_p = dg1abadomh_p * eezfy0115l_p ; dg1abadomh_p =
g11yqvtiub_p ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p = dg1abadomh_p *
eezfy0115l_p ; eezfy0115l_p = aulmnbewtw_p ; tmp = dg1abadomh_p *
eezfy0115l_p ; dg1abadomh_p = aulmnbewtw_p ; eezfy0115l_p = localB ->
ool0nntzvr . V_eci [ 0 ] ; tmp_p = dg1abadomh_p * eezfy0115l_p ; aulmnbewtw_p
= localB -> ool0nntzvr . X_eci [ 1 ] ; eezfy0115l_p = aulmnbewtw_p / localB
-> afdifrnx0o ; localB -> eezfy0115l [ 1 ] = eezfy0115l_p ; g11yqvtiub_p =
localB -> ahpliz1e1p [ 1 ] - eezfy0115l_p ; localB -> lnuwwpg5ug [ 1 ] =
g11yqvtiub_p ; dg1abadomh_p = localB -> l4qn0wlr0t [ 1 ] ; eezfy0115l_p =
g11yqvtiub_p ; u0 += dg1abadomh_p * eezfy0115l_p ; eezfy0115l_p =
dg1abadomh_p ; P_9 += dg1abadomh_p * eezfy0115l_p ; dg1abadomh_p = localB ->
dg1abadomh [ 1 ] ; eezfy0115l_p = dg1abadomh_p ; i55bdf31c4_p += dg1abadomh_p
* eezfy0115l_p ; dg1abadomh_p = g11yqvtiub_p ; eezfy0115l_p = g11yqvtiub_p ;
cfc45nbsjb_p += dg1abadomh_p * eezfy0115l_p ; eezfy0115l_p = aulmnbewtw_p ;
tmp += dg1abadomh_p * eezfy0115l_p ; dg1abadomh_p = aulmnbewtw_p ;
eezfy0115l_p = localB -> ool0nntzvr . V_eci [ 1 ] ; tmp_p += dg1abadomh_p *
eezfy0115l_p ; aulmnbewtw_p = localB -> ool0nntzvr . X_eci [ 2 ] ;
eezfy0115l_p = aulmnbewtw_p / localB -> afdifrnx0o ; localB -> eezfy0115l [ 2
] = eezfy0115l_p ; g11yqvtiub_p = localB -> ahpliz1e1p [ 2 ] - eezfy0115l_p ;
localB -> lnuwwpg5ug [ 2 ] = g11yqvtiub_p ; dg1abadomh_p = localB ->
l4qn0wlr0t [ 2 ] ; eezfy0115l_p = g11yqvtiub_p ; u0 += dg1abadomh_p *
eezfy0115l_p ; eezfy0115l_p = dg1abadomh_p ; P_9 += dg1abadomh_p *
eezfy0115l_p ; dg1abadomh_p = localB -> dg1abadomh [ 2 ] ; eezfy0115l_p =
dg1abadomh_p ; i55bdf31c4_p += dg1abadomh_p * eezfy0115l_p ; dg1abadomh_p =
g11yqvtiub_p ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p += dg1abadomh_p *
eezfy0115l_p ; eezfy0115l_p = aulmnbewtw_p ; tmp += dg1abadomh_p *
eezfy0115l_p ; dg1abadomh_p = aulmnbewtw_p ; eezfy0115l_p = localB ->
ool0nntzvr . V_eci [ 2 ] ; tmp_p += dg1abadomh_p * eezfy0115l_p ; localB ->
j3ga1oyuck = u0 ; localB -> mrblli0fpi = P_9 ; localB -> fkdijksvcv =
i55bdf31c4_p ; localB -> pt3iorklut = cfc45nbsjb_p ; localB -> jjdn5hhzge =
tmp ; localB -> aqnp4cfgwe = tmp_p ; localB -> ebc3bll03g =
muDoubleScalarSqrt ( localB -> mrblli0fpi ) ; localB -> ndfwtndhb2 =
muDoubleScalarSqrt ( localB -> pt3iorklut ) ; localB -> f0mhs3a4rd = localB
-> ebc3bll03g * localB -> ndfwtndhb2 ; localB -> lori3upyy2 = localB ->
ndfwtndhb2 * localB -> afdifrnx0o ; localB -> ekdzdlnhil = localB ->
l4qn0wlr0t [ 0 ] / localB -> ebc3bll03g ; u0 = muDoubleScalarMin ( localB ->
ekdzdlnhil , abopqckbgq . P_69 ) ; localB -> iwkcx0lavi = u0 ; u0 =
muDoubleScalarMax ( abopqckbgq . P_70 , localB -> iwkcx0lavi ) ; localB ->
o4yd4b4gzf = u0 ; u0 = localB -> o4yd4b4gzf ; if ( u0 > 1.0 ) { u0 = 1.0 ; }
else if ( u0 < - 1.0 ) { u0 = - 1.0 ; } localB -> cpusfl2sar =
muDoubleScalarAcos ( u0 ) ; if ( localB -> l4qn0wlr0t [ 1 ] >= abopqckbgq .
P_30 ) { localB -> p0e0vtyjru = localB -> cpusfl2sar ; } else { localB ->
cmyyjtuluk = abopqckbgq . P_62 - localB -> cpusfl2sar ; localB -> p0e0vtyjru
= localB -> cmyyjtuluk ; } localB -> dlsbwzhxr4 = muDoubleScalarSqrt ( localB
-> fkdijksvcv ) ; localB -> aasjpcgrqs = localB -> dg1abadomh [ 2 ] / localB
-> dlsbwzhxr4 ; u0 = muDoubleScalarMin ( localB -> aasjpcgrqs , abopqckbgq .
P_71 ) ; localB -> pmbdp4ddbl = u0 ; u0 = muDoubleScalarMax ( abopqckbgq .
P_72 , localB -> pmbdp4ddbl ) ; localB -> iv1ukfp1hd = u0 ; u0 = localB ->
iv1ukfp1hd ; if ( u0 > 1.0 ) { u0 = 1.0 ; } else if ( u0 < - 1.0 ) { u0 = -
1.0 ; } localB -> geq0gvkcrx = muDoubleScalarAcos ( u0 ) ; localB ->
oxu45avetf = localB -> j3ga1oyuck / localB -> f0mhs3a4rd ; u0 =
muDoubleScalarMin ( localB -> oxu45avetf , abopqckbgq . P_67 ) ; localB ->
lbgwnudhf3 = u0 ; u0 = muDoubleScalarMax ( abopqckbgq . P_68 , localB ->
lbgwnudhf3 ) ; localB -> etfy3m1bru = u0 ; u0 = localB -> etfy3m1bru ; if (
u0 > 1.0 ) { u0 = 1.0 ; } else if ( u0 < - 1.0 ) { u0 = - 1.0 ; } localB ->
pdyuavc2jy = muDoubleScalarAcos ( u0 ) ; if ( localB -> lnuwwpg5ug [ 2 ] >=
abopqckbgq . P_31 ) { localB -> n1fcoqkpg3 = localB -> pdyuavc2jy ; } else {
localB -> nrjnkhol5s = abopqckbgq . P_63 - localB -> pdyuavc2jy ; localB ->
n1fcoqkpg3 = localB -> nrjnkhol5s ; } localB -> hm1zxbrphi = localB ->
jjdn5hhzge / localB -> lori3upyy2 ; u0 = muDoubleScalarMin ( localB ->
hm1zxbrphi , abopqckbgq . P_65 ) ; localB -> agjasow33a = u0 ; u0 =
muDoubleScalarMax ( abopqckbgq . P_66 , localB -> agjasow33a ) ; localB ->
hee2xb0e3y = u0 ; u0 = localB -> hee2xb0e3y ; if ( u0 > 1.0 ) { u0 = 1.0 ; }
else if ( u0 < - 1.0 ) { u0 = - 1.0 ; } localB -> giwnupiv41 =
muDoubleScalarAcos ( u0 ) ; if ( localB -> aqnp4cfgwe >= abopqckbgq . P_32 )
{ localB -> hc1vhewxx2 = localB -> giwnupiv41 ; } else { localB -> cs1r1b1pky
= abopqckbgq . P_64 - localB -> giwnupiv41 ; localB -> hc1vhewxx2 = localB ->
cs1r1b1pky ; } localB -> o2czp4pxpi = localB -> n1fcoqkpg3 + localB ->
hc1vhewxx2 ; localB -> byqmxcdqdo [ 0 ] = abopqckbgq . P_33 * localB ->
p0e0vtyjru ; localB -> byqmxcdqdo [ 1 ] = abopqckbgq . P_33 * localB ->
geq0gvkcrx ; localB -> byqmxcdqdo [ 2 ] = abopqckbgq . P_33 * localB ->
o2czp4pxpi ; muDoubleScalarSinCos ( localB -> byqmxcdqdo [ 0 ] , & localB ->
bpyazwfbkd [ 0 ] , & localB -> kawuvckvyr [ 0 ] ) ; muDoubleScalarSinCos (
localB -> byqmxcdqdo [ 1 ] , & localB -> bpyazwfbkd [ 1 ] , & localB ->
kawuvckvyr [ 1 ] ) ; muDoubleScalarSinCos ( localB -> byqmxcdqdo [ 2 ] , &
localB -> bpyazwfbkd [ 2 ] , & localB -> kawuvckvyr [ 2 ] ) ; localB ->
jbsnkvz0di = localB -> kawuvckvyr [ 0 ] * localB -> kawuvckvyr [ 1 ] * localB
-> kawuvckvyr [ 2 ] - localB -> bpyazwfbkd [ 0 ] * localB -> kawuvckvyr [ 1 ]
* localB -> bpyazwfbkd [ 2 ] ; localB -> lqbpxct3qp = localB -> jbsnkvz0di *
localB -> jbsnkvz0di ; localB -> fn2z54iays = localB -> kawuvckvyr [ 0 ] *
localB -> bpyazwfbkd [ 1 ] * localB -> kawuvckvyr [ 2 ] + localB ->
bpyazwfbkd [ 0 ] * localB -> bpyazwfbkd [ 1 ] * localB -> bpyazwfbkd [ 2 ] ;
localB -> eohy2rd4a4 = localB -> fn2z54iays * localB -> fn2z54iays ; localB
-> hxb4vrni02 = localB -> bpyazwfbkd [ 0 ] * localB -> bpyazwfbkd [ 1 ] *
localB -> kawuvckvyr [ 2 ] - localB -> kawuvckvyr [ 0 ] * localB ->
bpyazwfbkd [ 1 ] * localB -> bpyazwfbkd [ 2 ] ; localB -> fqynvuyycv = localB
-> hxb4vrni02 * localB -> hxb4vrni02 ; localB -> dnekb3ylbz = localB ->
bpyazwfbkd [ 0 ] * localB -> kawuvckvyr [ 1 ] * localB -> kawuvckvyr [ 2 ] +
localB -> kawuvckvyr [ 0 ] * localB -> kawuvckvyr [ 1 ] * localB ->
bpyazwfbkd [ 2 ] ; localB -> egd2x3b42d = localB -> dnekb3ylbz * localB ->
dnekb3ylbz ; localB -> causmkh21x = ( ( localB -> lqbpxct3qp + localB ->
eohy2rd4a4 ) + localB -> fqynvuyycv ) + localB -> egd2x3b42d ; localB ->
hvhu304r2r = muDoubleScalarSqrt ( localB -> causmkh21x ) ; localB ->
ozooxpy2ht = localB -> jbsnkvz0di / localB -> hvhu304r2r ; localB ->
mndxssdo01 = localB -> fn2z54iays / localB -> hvhu304r2r ; localB ->
hnzm5biay5 = localB -> hxb4vrni02 / localB -> hvhu304r2r ; localB ->
j5yi5zwe0m = localB -> dnekb3ylbz / localB -> hvhu304r2r ; localB ->
ck0xndebxb = localB -> ool0nntzvr . q_eci2b [ 0 ] * localB -> ool0nntzvr .
q_eci2b [ 0 ] ; localB -> gx42flf332 = localB -> ofl0shskgn * localB ->
ofl0shskgn ; localB -> iimemfbj1j = localB -> cxjpeok45y * localB ->
cxjpeok45y ; localB -> gzm43st2xf = localB -> d4yitlrmpe * localB ->
d4yitlrmpe ; localB -> p3cu53gvm4 = ( ( localB -> ck0xndebxb + localB ->
gx42flf332 ) + localB -> iimemfbj1j ) + localB -> gzm43st2xf ; localB ->
fqkrnszdxr = muDoubleScalarSqrt ( localB -> p3cu53gvm4 ) ; localB ->
ejangytgog = localB -> ool0nntzvr . q_eci2b [ 0 ] / localB -> fqkrnszdxr ;
localB -> mm1olqviq0 = localB -> ejangytgog * localB -> mndxssdo01 ; localB
-> k44r2lq5zi = localB -> ofl0shskgn / localB -> fqkrnszdxr ; localB ->
p3llpzcon2 = localB -> k44r2lq5zi * localB -> ozooxpy2ht ; localB ->
pkb3fbobtq = localB -> cxjpeok45y / localB -> fqkrnszdxr ; localB ->
ndev3kmaqo = localB -> pkb3fbobtq * localB -> j5yi5zwe0m ; localB ->
iitpu0db13 = localB -> d4yitlrmpe / localB -> fqkrnszdxr ; localB ->
biy4ycq4xn = localB -> iitpu0db13 * localB -> hnzm5biay5 ; localB ->
jmha5x3bse = ( ( localB -> mm1olqviq0 + localB -> p3llpzcon2 ) + localB ->
ndev3kmaqo ) - localB -> biy4ycq4xn ; localB -> osbykivhho = - localB ->
jmha5x3bse ; localB -> hq21ywahrw = localB -> ejangytgog * localB ->
hnzm5biay5 ; localB -> pb231gezyc = localB -> k44r2lq5zi * localB ->
j5yi5zwe0m ; localB -> knqusqhaxz = localB -> pkb3fbobtq * localB ->
ozooxpy2ht ; localB -> bot4qcnl3h = localB -> iitpu0db13 * localB ->
mndxssdo01 ; localB -> ju2rgaiwab = ( ( localB -> hq21ywahrw - localB ->
pb231gezyc ) + localB -> knqusqhaxz ) + localB -> bot4qcnl3h ; localB ->
cuyvgrwyjq = - localB -> ju2rgaiwab ; localB -> ihr23c3nfm = localB ->
ejangytgog * localB -> j5yi5zwe0m ; localB -> gqehaoywi5 = localB ->
k44r2lq5zi * localB -> hnzm5biay5 ; localB -> jmebeghu43 = localB ->
pkb3fbobtq * localB -> mndxssdo01 ; localB -> lgjhe3i5tp = localB ->
iitpu0db13 * localB -> ozooxpy2ht ; localB -> kknswnzgar = ( ( localB ->
ihr23c3nfm + localB -> gqehaoywi5 ) - localB -> jmebeghu43 ) + localB ->
lgjhe3i5tp ; localB -> npiw0h41ov = - localB -> kknswnzgar ; localB ->
o4elbvptle = localB -> ejangytgog * localB -> ozooxpy2ht ; localB ->
axdpxmsalb = localB -> k44r2lq5zi * localB -> mndxssdo01 ; localB ->
pdynksfixu = localB -> pkb3fbobtq * localB -> hnzm5biay5 ; localB ->
eldkjarxwa = localB -> iitpu0db13 * localB -> j5yi5zwe0m ; localB ->
orywbc4cl5 = ( ( localB -> o4elbvptle - localB -> axdpxmsalb ) - localB ->
pdynksfixu ) - localB -> eldkjarxwa ; if ( localB -> o4dw42eqdy_ax3wx1gs5w <
1.0E-6 ) { cu0mwyodxb ( & localB -> lt2hx2wr0q , & abopqckbgq . cu0mwyodxbx )
; } else if ( localB -> gqcj1nfmop_ifotjnizh4 < 1.0E-6 ) { cu0mwyodxb ( &
localB -> lt2hx2wr0q , & abopqckbgq . eul4q2la45 ) ; } else { cu0mwyodxb ( &
localB -> lt2hx2wr0q , & abopqckbgq . eknrx3nsh2 ) ; } localB -> dcverjtere [
0 ] = localB -> d5qrgk5srt ; localB -> dcverjtere [ 1 ] = localB ->
pkaclggswi ; localB -> dcverjtere [ 2 ] = localB -> npxvfyksso ; localB ->
pnykh1l0uu = localB -> orywbc4cl5 * localB -> orywbc4cl5 ; localB ->
famiddnr2p = localB -> osbykivhho * localB -> osbykivhho ; localB ->
erolfntca5 = localB -> cuyvgrwyjq * localB -> cuyvgrwyjq ; localB ->
nhxpebouz0 = localB -> npiw0h41ov * localB -> npiw0h41ov ; localB ->
dv4s1bllvm = ( ( localB -> pnykh1l0uu + localB -> famiddnr2p ) + localB ->
erolfntca5 ) + localB -> nhxpebouz0 ; localB -> njzoclsfrw =
muDoubleScalarSqrt ( localB -> dv4s1bllvm ) ; localB -> gkj32djha1 = localB
-> cuyvgrwyjq / localB -> njzoclsfrw ; localB -> jpsem5kzpa = localB ->
gkj32djha1 * localB -> gkj32djha1 ; localB -> opgoqfynbk = localB ->
npiw0h41ov / localB -> njzoclsfrw ; localB -> fzdu1bw0eq = localB ->
opgoqfynbk * localB -> opgoqfynbk ; localB -> bvgybwoesr = ( abopqckbgq .
P_86 - localB -> jpsem5kzpa ) - localB -> fzdu1bw0eq ; localB -> gjyddckmfw =
abopqckbgq . P_34 * localB -> bvgybwoesr ; localB -> mxolqqyrsh = abopqckbgq
. P_12 [ 0 ] * localB -> gjyddckmfw ; localB -> d0gpkwcwsz = localB ->
osbykivhho / localB -> njzoclsfrw ; localB -> ecqe5qsszq = localB ->
d0gpkwcwsz * localB -> gkj32djha1 ; localB -> o34sdvhd0t = localB ->
orywbc4cl5 / localB -> njzoclsfrw ; localB -> nejfa4cive = localB ->
o34sdvhd0t * localB -> opgoqfynbk ; localB -> mogbelzrvm = localB ->
ecqe5qsszq + localB -> nejfa4cive ; localB -> b4tceedauc = abopqckbgq . P_35
* localB -> mogbelzrvm ; localB -> mloup0leue = localB -> b4tceedauc *
abopqckbgq . P_12 [ 1 ] ; localB -> hwf5oytlj3 = localB -> o34sdvhd0t *
localB -> gkj32djha1 ; localB -> ewnxwss35j = localB -> d0gpkwcwsz * localB
-> opgoqfynbk ; localB -> lqypjp3o31 = localB -> ewnxwss35j - localB ->
hwf5oytlj3 ; localB -> ckeankaivt = abopqckbgq . P_36 * localB -> lqypjp3o31
; localB -> dxnwzic3ry = localB -> ckeankaivt * abopqckbgq . P_12 [ 2 ] ;
localB -> gm5d1w405k = ( localB -> mxolqqyrsh + localB -> mloup0leue ) +
localB -> dxnwzic3ry ; localB -> epo5mzwugv = localB -> d0gpkwcwsz * localB
-> gkj32djha1 ; localB -> eu0zkvqcss = localB -> o34sdvhd0t * localB ->
opgoqfynbk ; localB -> ngddbpyr12 = localB -> epo5mzwugv - localB ->
eu0zkvqcss ; localB -> i1h1avmx4p = abopqckbgq . P_37 * localB -> ngddbpyr12
; localB -> l2ocykfp5v = abopqckbgq . P_12 [ 0 ] * localB -> i1h1avmx4p ;
localB -> n13b5y24ff = localB -> d0gpkwcwsz * localB -> d0gpkwcwsz ; localB
-> lskp2xkenu = localB -> opgoqfynbk * localB -> opgoqfynbk ; localB ->
ougw0bes4c = ( abopqckbgq . P_87 - localB -> n13b5y24ff ) - localB ->
lskp2xkenu ; localB -> cla0xgqqil = abopqckbgq . P_38 * localB -> ougw0bes4c
; localB -> nhegb3bljs = localB -> cla0xgqqil * abopqckbgq . P_12 [ 1 ] ;
localB -> kbjn45aotw = localB -> o34sdvhd0t * localB -> d0gpkwcwsz ; localB
-> nggjvy3hkt = localB -> gkj32djha1 * localB -> opgoqfynbk ; localB ->
htnbixkhek = localB -> kbjn45aotw + localB -> nggjvy3hkt ; localB ->
k0k0usb52x = abopqckbgq . P_39 * localB -> htnbixkhek ; localB -> g52gdp4kin
= localB -> k0k0usb52x * abopqckbgq . P_12 [ 2 ] ; localB -> kb0ryg5dhg = (
localB -> l2ocykfp5v + localB -> nhegb3bljs ) + localB -> g52gdp4kin ; localB
-> nvgi1erz12 = localB -> d0gpkwcwsz * localB -> opgoqfynbk ; localB ->
pkws233urp = localB -> o34sdvhd0t * localB -> gkj32djha1 ; localB ->
gqpgn5ktxa = localB -> nvgi1erz12 + localB -> pkws233urp ; localB ->
mb24zlt2cy = abopqckbgq . P_40 * localB -> gqpgn5ktxa ; localB -> ntihw5sbjd
= abopqckbgq . P_12 [ 0 ] * localB -> mb24zlt2cy ; localB -> gof5340kkx =
localB -> o34sdvhd0t * localB -> d0gpkwcwsz ; localB -> d2rc3ibhk0 = localB
-> gkj32djha1 * localB -> opgoqfynbk ; localB -> epkeyt301b = localB ->
d2rc3ibhk0 - localB -> gof5340kkx ; localB -> luywqi2ior = abopqckbgq . P_41
* localB -> epkeyt301b ; localB -> cpif1eq3mm = localB -> luywqi2ior *
abopqckbgq . P_12 [ 1 ] ; localB -> mr4kqey1h1 = localB -> d0gpkwcwsz *
localB -> d0gpkwcwsz ; localB -> mqvdudwbs0 = localB -> gkj32djha1 * localB
-> gkj32djha1 ; localB -> n2hred2weo = ( abopqckbgq . P_88 - localB ->
mr4kqey1h1 ) - localB -> mqvdudwbs0 ; localB -> fu1bxhersx = abopqckbgq .
P_42 * localB -> n2hred2weo ; localB -> jgb2wihvax = localB -> fu1bxhersx *
abopqckbgq . P_12 [ 2 ] ; localB -> iycqa0hlfu = ( localB -> ntihw5sbjd +
localB -> cpif1eq3mm ) + localB -> jgb2wihvax ; localB -> gwhdsxmtaq [ 0 ] =
localB -> gm5d1w405k ; localB -> gwhdsxmtaq [ 1 ] = localB -> kb0ryg5dhg ;
localB -> gwhdsxmtaq [ 2 ] = localB -> iycqa0hlfu ; cfc45nbsjb_p = localB ->
dcverjtere [ 0 ] ; aulmnbewtw_p = localB -> gwhdsxmtaq [ 0 ] ; eezfy0115l_p =
aulmnbewtw_p ; u0 = cfc45nbsjb_p * eezfy0115l_p ; eezfy0115l_p = cfc45nbsjb_p
; P_9 = cfc45nbsjb_p * eezfy0115l_p ; cfc45nbsjb_p = aulmnbewtw_p ;
eezfy0115l_p = aulmnbewtw_p ; i55bdf31c4_p = cfc45nbsjb_p * eezfy0115l_p ;
cfc45nbsjb_p = localB -> dcverjtere [ 1 ] ; aulmnbewtw_p = localB ->
gwhdsxmtaq [ 1 ] ; eezfy0115l_p = aulmnbewtw_p ; u0 += cfc45nbsjb_p *
eezfy0115l_p ; eezfy0115l_p = cfc45nbsjb_p ; P_9 += cfc45nbsjb_p *
eezfy0115l_p ; cfc45nbsjb_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ;
i55bdf31c4_p += cfc45nbsjb_p * eezfy0115l_p ; cfc45nbsjb_p = localB ->
dcverjtere [ 2 ] ; aulmnbewtw_p = localB -> gwhdsxmtaq [ 2 ] ; eezfy0115l_p =
aulmnbewtw_p ; u0 += cfc45nbsjb_p * eezfy0115l_p ; eezfy0115l_p =
cfc45nbsjb_p ; P_9 += cfc45nbsjb_p * eezfy0115l_p ; cfc45nbsjb_p =
aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; i55bdf31c4_p += cfc45nbsjb_p *
eezfy0115l_p ; localB -> fbe3yalwvk = u0 ; localB -> daz5i3fp3z = P_9 ;
localB -> kdv2vetsd4 = i55bdf31c4_p ; localB -> gcnwjt5vnt = localB ->
daz5i3fp3z * localB -> kdv2vetsd4 ; localB -> ab50kblc1h = muDoubleScalarSqrt
( localB -> gcnwjt5vnt ) ; localB -> ou1fgxptgz = localB -> fbe3yalwvk /
localB -> ab50kblc1h ; localB -> hebyha2jan = localB -> ou1fgxptgz +
abopqckbgq . P_43 ; localB -> cxbamchcdn = muDoubleScalarAbs ( localB ->
hebyha2jan ) ; localB -> egtmju4m0t = localB -> ou1fgxptgz + abopqckbgq .
P_44 ; localB -> ggliyr2azb = muDoubleScalarAbs ( localB -> egtmju4m0t ) ; if
( localB -> cxbamchcdn < 1.0E-6 ) { cu0mwyodxb ( & localB -> ea5nunjvdj , &
abopqckbgq . hmitxmfqrk ) ; } else if ( localB -> ggliyr2azb < 1.0E-6 ) {
cu0mwyodxb ( & localB -> ea5nunjvdj , & abopqckbgq . m0bnsqzq3n ) ; } else {
cu0mwyodxb ( & localB -> ea5nunjvdj , & abopqckbgq . i52sqmyllx ) ; } localB
-> pcwqemv0zd = ( localB -> lt2hx2wr0q != abopqckbgq . P_18 ) ; localB ->
ff50carbrd = ( localB -> ea5nunjvdj != abopqckbgq . P_19 ) ; localB ->
f5hy4s11sg = ( localB -> pcwqemv0zd || localB -> ff50carbrd ) ; P_9 =
abopqckbgq . P_8 [ 0 ] ; cfc45nbsjb_p = localB -> dcverjtere [ 0 ] ;
eezfy0115l_p = P_9 * cfc45nbsjb_p ; P_9 = cfc45nbsjb_p ; u0 = P_9 *
cfc45nbsjb_p ; P_9 = abopqckbgq . P_8 [ 1 ] ; cfc45nbsjb_p = localB ->
dcverjtere [ 1 ] ; eezfy0115l_p += P_9 * cfc45nbsjb_p ; P_9 = cfc45nbsjb_p ;
u0 += P_9 * cfc45nbsjb_p ; P_9 = abopqckbgq . P_8 [ 2 ] ; cfc45nbsjb_p =
localB -> dcverjtere [ 2 ] ; eezfy0115l_p += P_9 * cfc45nbsjb_p ; P_9 =
cfc45nbsjb_p ; u0 += P_9 * cfc45nbsjb_p ; localB -> osp1o22rda = eezfy0115l_p
; localB -> bxxxu5bwho = u0 ; localB -> jhbzhadq4q = localB ->
d5qrgk5srt_ojunzewo4f * localB -> bxxxu5bwho ; localB -> coh0mstb42 =
muDoubleScalarSqrt ( localB -> jhbzhadq4q ) ; localB -> jnyglzy4dk = localB
-> osp1o22rda + localB -> coh0mstb42 ; localB -> hvxwz1vz3c = localB ->
jnyglzy4dk * localB -> jnyglzy4dk ; localB -> bxg5g3zdkx = eezfy0115l_p ;
localB -> lvl001jgra = u0 ; localB -> bkef4tcfj5 = localB ->
ok00ebomfe_ltu3syw14q * localB -> lvl001jgra ; localB -> d00vlavgmu =
muDoubleScalarSqrt ( localB -> bkef4tcfj5 ) ; localB -> kstypcc31r = localB
-> bxg5g3zdkx / localB -> d00vlavgmu ; localB -> oe4dpjejx1 = localB ->
kstypcc31r + abopqckbgq . P_45 ; localB -> jdvrkdcl5m = muDoubleScalarAbs (
localB -> oe4dpjejx1 ) ; localB -> ehtmgsase3 = localB -> kstypcc31r +
abopqckbgq . P_46 ; localB -> on50o5cfd4 = muDoubleScalarAbs ( localB ->
ehtmgsase3 ) ; if ( localB -> jdvrkdcl5m < 1.0E-6 ) { cu0mwyodxb ( & localB
-> e2qflkqxme , & abopqckbgq . ggcc21rrux ) ; } else if ( localB ->
on50o5cfd4 < 1.0E-6 ) { cu0mwyodxb ( & localB -> e2qflkqxme , & abopqckbgq .
fk0imeoonn ) ; } else { cu0mwyodxb ( & localB -> e2qflkqxme , & abopqckbgq .
ne0qiqncyo ) ; } localB -> n4q5yyr3k5 = ( localB -> e2qflkqxme != abopqckbgq
. P_3 ) ; if ( localB -> n4q5yyr3k5 ) { localB -> bj11js3edn = abopqckbgq .
P_8 [ 1 ] * localB -> d5qrgk5srt ; localB -> l4w0k5vh3j = abopqckbgq . P_8 [
0 ] * localB -> npxvfyksso ; localB -> f0xbzdpffo = abopqckbgq . P_8 [ 2 ] *
localB -> pkaclggswi ; localB -> g4ufmnozok = abopqckbgq . P_8 [ 0 ] * localB
-> pkaclggswi ; localB -> ddfggx0jho = abopqckbgq . P_8 [ 2 ] * localB ->
d5qrgk5srt ; localB -> j1jh51tjjo = abopqckbgq . P_8 [ 1 ] * localB ->
npxvfyksso ; localB -> oyyyr2w4eh [ 0 ] = localB -> j1jh51tjjo - localB ->
f0xbzdpffo ; localB -> oyyyr2w4eh [ 1 ] = localB -> ddfggx0jho - localB ->
l4w0k5vh3j ; localB -> oyyyr2w4eh [ 2 ] = localB -> g4ufmnozok - localB ->
bj11js3edn ; localB -> bwgvonrywj [ 0 ] = localB -> oyyyr2w4eh [ 0 ] ; localB
-> bwgvonrywj [ 1 ] = localB -> oyyyr2w4eh [ 1 ] ; localB -> bwgvonrywj [ 2 ]
= localB -> oyyyr2w4eh [ 2 ] ; } else { localB -> bwgvonrywj [ 0 ] = localB
-> nnyklgzqdv_mvr1suhnoo [ 0 ] ; localB -> bwgvonrywj [ 1 ] = localB ->
nnyklgzqdv_mvr1suhnoo [ 1 ] ; localB -> bwgvonrywj [ 2 ] = localB ->
nnyklgzqdv_mvr1suhnoo [ 2 ] ; } localB -> izw54oqg3g = localB -> bwgvonrywj [
0 ] * localB -> bwgvonrywj [ 0 ] ; localB -> krdiev1g22 = localB ->
bwgvonrywj [ 1 ] * localB -> bwgvonrywj [ 1 ] ; localB -> ih0ttwlfcj = localB
-> bwgvonrywj [ 2 ] * localB -> bwgvonrywj [ 2 ] ; localB -> ktcdg14d2l = ( (
localB -> hvxwz1vz3c + localB -> izw54oqg3g ) + localB -> krdiev1g22 ) +
localB -> ih0ttwlfcj ; localB -> gqhfn3hukz = muDoubleScalarSqrt ( localB ->
ktcdg14d2l ) ; localB -> gfuclxattu = localB -> jnyglzy4dk / localB ->
gqhfn3hukz ; localB -> pg5opvcrvh = localB -> pkaclggswi * localB ->
iycqa0hlfu ; localB -> ohiz2bpqhh = localB -> npxvfyksso * localB ->
gm5d1w405k ; localB -> b0fmiw0h2k = localB -> d5qrgk5srt * localB ->
kb0ryg5dhg ; localB -> hmzlvsezex = localB -> npxvfyksso * localB ->
kb0ryg5dhg ; localB -> pcbplvsuqj = localB -> d5qrgk5srt * localB ->
iycqa0hlfu ; localB -> bcih1onunj = localB -> pkaclggswi * localB ->
gm5d1w405k ; localB -> pz44ami1qa [ 0 ] = localB -> pg5opvcrvh - localB ->
hmzlvsezex ; localB -> pz44ami1qa [ 1 ] = localB -> ohiz2bpqhh - localB ->
pcbplvsuqj ; localB -> pz44ami1qa [ 2 ] = localB -> b0fmiw0h2k - localB ->
bcih1onunj ; localB -> hdncwc5fdq = localB -> pz44ami1qa [ 1 ] * localB ->
npxvfyksso ; localB -> kwpnv2rcpo = localB -> pz44ami1qa [ 2 ] * localB ->
d5qrgk5srt ; localB -> d5rgzq2tvx = localB -> pz44ami1qa [ 0 ] * localB ->
pkaclggswi ; localB -> j5yf3xat2v = localB -> pz44ami1qa [ 2 ] * localB ->
pkaclggswi ; localB -> hrkro30xus = localB -> pz44ami1qa [ 0 ] * localB ->
npxvfyksso ; localB -> iefvnwwjyt = localB -> pz44ami1qa [ 1 ] * localB ->
d5qrgk5srt ; localB -> g4ewvtnxzf [ 0 ] = localB -> hdncwc5fdq - localB ->
j5yf3xat2v ; localB -> g4ewvtnxzf [ 1 ] = localB -> kwpnv2rcpo - localB ->
hrkro30xus ; localB -> g4ewvtnxzf [ 2 ] = localB -> d5rgzq2tvx - localB ->
iefvnwwjyt ; localB -> jm3m25bbb2 = localB -> bwgvonrywj [ 1 ] / localB ->
gqhfn3hukz ; localB -> gd1cqa4zrx = localB -> gfuclxattu * localB ->
gfuclxattu ; localB -> g5t4vavgkm = localB -> bwgvonrywj [ 0 ] / localB ->
gqhfn3hukz ; localB -> icyllkenls = localB -> g5t4vavgkm * localB ->
g5t4vavgkm ; localB -> aq42vatfbe = localB -> jm3m25bbb2 * localB ->
jm3m25bbb2 ; localB -> f4ejwfkds5 = localB -> bwgvonrywj [ 2 ] / localB ->
gqhfn3hukz ; localB -> fio5ggjtz4 = localB -> f4ejwfkds5 * localB ->
f4ejwfkds5 ; localB -> nm35qh3zu3 = ( ( localB -> gd1cqa4zrx + localB ->
icyllkenls ) + localB -> aq42vatfbe ) + localB -> fio5ggjtz4 ; localB ->
bpjgo1njll = muDoubleScalarSqrt ( localB -> nm35qh3zu3 ) ; localB ->
pntfmsjbtn = localB -> jm3m25bbb2 / localB -> bpjgo1njll ; localB ->
lk4t5si4ze = localB -> pntfmsjbtn * localB -> pntfmsjbtn ; localB ->
mggrlncne4 = localB -> f4ejwfkds5 / localB -> bpjgo1njll ; localB ->
el50wvophu = localB -> mggrlncne4 * localB -> mggrlncne4 ; localB ->
a4zudisqko = ( abopqckbgq . P_75 - localB -> lk4t5si4ze ) - localB ->
el50wvophu ; localB -> kzycw52ejt = abopqckbgq . P_47 * localB -> a4zudisqko
; localB -> hp4ufb2oze = localB -> g4ewvtnxzf [ 0 ] * localB -> kzycw52ejt ;
localB -> pxo5ezwv0g = localB -> g5t4vavgkm / localB -> bpjgo1njll ; localB
-> nyfow5mrge = localB -> pxo5ezwv0g * localB -> pntfmsjbtn ; localB ->
bksedwpvip = localB -> gfuclxattu / localB -> bpjgo1njll ; localB ->
nxqqmeatul = localB -> bksedwpvip * localB -> mggrlncne4 ; localB ->
pgphduumir = localB -> nyfow5mrge + localB -> nxqqmeatul ; localB ->
m1sc5t5ela = abopqckbgq . P_48 * localB -> pgphduumir ; localB -> hmykqehskp
= localB -> m1sc5t5ela * localB -> g4ewvtnxzf [ 1 ] ; localB -> iysjb31p2t =
localB -> bksedwpvip * localB -> pntfmsjbtn ; localB -> c21izmax0z = localB
-> pxo5ezwv0g * localB -> mggrlncne4 ; localB -> dmx1oysjlt = localB ->
c21izmax0z - localB -> iysjb31p2t ; localB -> ppzpnv2e3i = abopqckbgq . P_49
* localB -> dmx1oysjlt ; localB -> ea43ud3w4p = localB -> ppzpnv2e3i * localB
-> g4ewvtnxzf [ 2 ] ; localB -> eajaumkk43 = ( localB -> hp4ufb2oze + localB
-> hmykqehskp ) + localB -> ea43ud3w4p ; localB -> f22olq3k3u = localB ->
pxo5ezwv0g * localB -> pntfmsjbtn ; localB -> omu3glusyp = localB ->
bksedwpvip * localB -> mggrlncne4 ; localB -> b4e3y4mqrh = localB ->
f22olq3k3u - localB -> omu3glusyp ; localB -> bmtjf3bm54 = abopqckbgq . P_50
* localB -> b4e3y4mqrh ; localB -> bt0fpawuup = localB -> g4ewvtnxzf [ 0 ] *
localB -> bmtjf3bm54 ; localB -> lpjuypkr20 = localB -> pxo5ezwv0g * localB
-> pxo5ezwv0g ; localB -> byubrgg54v = localB -> mggrlncne4 * localB ->
mggrlncne4 ; localB -> bm3sl4vywz = ( abopqckbgq . P_76 - localB ->
lpjuypkr20 ) - localB -> byubrgg54v ; localB -> nuf03svhyi = abopqckbgq .
P_51 * localB -> bm3sl4vywz ; localB -> ap0gzzkhfq = localB -> nuf03svhyi *
localB -> g4ewvtnxzf [ 1 ] ; localB -> cstrhea5p5 = localB -> bksedwpvip *
localB -> pxo5ezwv0g ; localB -> fxeoc2bvwc = localB -> pntfmsjbtn * localB
-> mggrlncne4 ; localB -> mshngjj1xo = localB -> cstrhea5p5 + localB ->
fxeoc2bvwc ; localB -> ig1krgspx2 = abopqckbgq . P_52 * localB -> mshngjj1xo
; localB -> poswq35ses = localB -> ig1krgspx2 * localB -> g4ewvtnxzf [ 2 ] ;
localB -> knwf3igq3m = ( localB -> bt0fpawuup + localB -> ap0gzzkhfq ) +
localB -> poswq35ses ; localB -> m5mxsaorav = localB -> pxo5ezwv0g * localB
-> mggrlncne4 ; localB -> e4yms3rzr1 = localB -> bksedwpvip * localB ->
pntfmsjbtn ; localB -> b4rpx3r1t1 = localB -> m5mxsaorav + localB ->
e4yms3rzr1 ; localB -> miqiol3cw1 = abopqckbgq . P_53 * localB -> b4rpx3r1t1
; localB -> aoyku4xzoc = localB -> g4ewvtnxzf [ 0 ] * localB -> miqiol3cw1 ;
localB -> mntsxbtdsv = localB -> bksedwpvip * localB -> pxo5ezwv0g ; localB
-> kkdaxsazqy = localB -> pntfmsjbtn * localB -> mggrlncne4 ; localB ->
e3hxopmdit = localB -> kkdaxsazqy - localB -> mntsxbtdsv ; localB ->
j1anqoqr5z = abopqckbgq . P_54 * localB -> e3hxopmdit ; localB -> it2b121c5v
= localB -> j1anqoqr5z * localB -> g4ewvtnxzf [ 1 ] ; localB -> hgblyiczhq =
localB -> pxo5ezwv0g * localB -> pxo5ezwv0g ; localB -> ckmdjiurfo = localB
-> pntfmsjbtn * localB -> pntfmsjbtn ; localB -> okzmpwrkaf = ( abopqckbgq .
P_77 - localB -> hgblyiczhq ) - localB -> ckmdjiurfo ; localB -> m2yqc5dpa2 =
abopqckbgq . P_55 * localB -> okzmpwrkaf ; localB -> dmkwu2mgu1 = localB ->
m2yqc5dpa2 * localB -> g4ewvtnxzf [ 2 ] ; localB -> mlnawjq3c4 = ( localB ->
aoyku4xzoc + localB -> it2b121c5v ) + localB -> dmkwu2mgu1 ; localB ->
bd0rx40fsv [ 0 ] = localB -> eajaumkk43 ; localB -> bd0rx40fsv [ 1 ] = localB
-> knwf3igq3m ; localB -> bd0rx40fsv [ 2 ] = localB -> mlnawjq3c4 ;
eezfy0115l_p = localB -> mlbbs4fqao_klmngopk1n [ 0 ] ; i55bdf31c4_p = localB
-> bd0rx40fsv [ 0 ] ; u0 = eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p =
i55bdf31c4_p ; P_9 = eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
mlbbs4fqao_klmngopk1n [ 1 ] ; i55bdf31c4_p = localB -> bd0rx40fsv [ 1 ] ; u0
+= eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = i55bdf31c4_p ; P_9 +=
eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB -> mlbbs4fqao_klmngopk1n
[ 2 ] ; i55bdf31c4_p = localB -> bd0rx40fsv [ 2 ] ; u0 += eezfy0115l_p *
i55bdf31c4_p ; eezfy0115l_p = i55bdf31c4_p ; P_9 += eezfy0115l_p *
i55bdf31c4_p ; localB -> nif21oiusf = u0 ; localB -> et2yyla4gc = P_9 ;
localB -> gjkvmbojd1 = localB -> nsqipfztjp_pcqitb31bm * localB -> et2yyla4gc
; localB -> o0lvy3fyxu = muDoubleScalarSqrt ( localB -> gjkvmbojd1 ) ; localB
-> cfepvck034 = localB -> nif21oiusf / localB -> o0lvy3fyxu ; localB ->
ifeq1sbzol = localB -> cfepvck034 + abopqckbgq . P_56 ; localB -> oviasilnmi
= muDoubleScalarAbs ( localB -> ifeq1sbzol ) ; localB -> mqw4bi2sim = localB
-> cfepvck034 + abopqckbgq . P_57 ; localB -> inufxuou0o = muDoubleScalarAbs
( localB -> mqw4bi2sim ) ; if ( localB -> oviasilnmi < 1.0E-6 ) { cu0mwyodxb
( & localB -> mwiosqwbdf , & abopqckbgq . dkriegmois ) ; } else if ( localB
-> inufxuou0o < 1.0E-6 ) { cu0mwyodxb ( & localB -> mwiosqwbdf , & abopqckbgq
. mundwwrfcc ) ; } else { cu0mwyodxb ( & localB -> mwiosqwbdf , & abopqckbgq
. o5uea2bm34 ) ; } if ( localB -> f5hy4s11sg ) { localB -> dsml5wy5qc [ 0 ] =
localB -> gfuclxattu ; localB -> dsml5wy5qc [ 1 ] = localB -> g5t4vavgkm ;
localB -> dsml5wy5qc [ 2 ] = localB -> jm3m25bbb2 ; localB -> dsml5wy5qc [ 3
] = localB -> f4ejwfkds5 ; } else { localB -> owt2sondvh = ( localB ->
mwiosqwbdf != abopqckbgq . P_4 ) ; if ( localB -> owt2sondvh ) { localB ->
njzf5pexup = localB -> mlbbs4fqao_klmngopk1n [ 1 ] * localB -> eajaumkk43 ;
localB -> f4lujt1fq0 = localB -> mlbbs4fqao_klmngopk1n [ 0 ] * localB ->
mlnawjq3c4 ; localB -> psmqbkozvc = localB -> mlbbs4fqao_klmngopk1n [ 2 ] *
localB -> knwf3igq3m ; localB -> nekbr5le3q = localB -> mlbbs4fqao_klmngopk1n
[ 0 ] * localB -> knwf3igq3m ; localB -> pvyqfsuvyf = localB ->
mlbbs4fqao_klmngopk1n [ 2 ] * localB -> eajaumkk43 ; localB -> b1zxvcgz2w =
localB -> mlbbs4fqao_klmngopk1n [ 1 ] * localB -> mlnawjq3c4 ; localB ->
om5oj4r3tv [ 0 ] = localB -> b1zxvcgz2w - localB -> psmqbkozvc ; localB ->
om5oj4r3tv [ 1 ] = localB -> pvyqfsuvyf - localB -> f4lujt1fq0 ; localB ->
om5oj4r3tv [ 2 ] = localB -> nekbr5le3q - localB -> njzf5pexup ; localB ->
mi35iqh4zh [ 0 ] = localB -> om5oj4r3tv [ 0 ] ; localB -> mi35iqh4zh [ 1 ] =
localB -> om5oj4r3tv [ 1 ] ; localB -> mi35iqh4zh [ 2 ] = localB ->
om5oj4r3tv [ 2 ] ; } else { localB -> mi35iqh4zh [ 0 ] = localB ->
jgrywmthgg_fi0130k5dq [ 0 ] ; localB -> mi35iqh4zh [ 1 ] = localB ->
jgrywmthgg_fi0130k5dq [ 1 ] ; localB -> mi35iqh4zh [ 2 ] = localB ->
jgrywmthgg_fi0130k5dq [ 2 ] ; } localB -> mz5phavgkw = localB -> mi35iqh4zh [
2 ] * localB -> mi35iqh4zh [ 2 ] ; localB -> mtgl00davg = localB ->
mi35iqh4zh [ 1 ] * localB -> mi35iqh4zh [ 1 ] ; localB -> bjqsryhiyj = localB
-> mi35iqh4zh [ 0 ] * localB -> mi35iqh4zh [ 0 ] ; i55bdf31c4_p = localB ->
bd0rx40fsv [ 0 ] ; eezfy0115l_p = i55bdf31c4_p ; u0 = eezfy0115l_p *
i55bdf31c4_p ; eezfy0115l_p = localB -> mlbbs4fqao_klmngopk1n [ 0 ] ; P_9 =
eezfy0115l_p * i55bdf31c4_p ; i55bdf31c4_p = localB -> bd0rx40fsv [ 1 ] ;
eezfy0115l_p = i55bdf31c4_p ; u0 += eezfy0115l_p * i55bdf31c4_p ;
eezfy0115l_p = localB -> mlbbs4fqao_klmngopk1n [ 1 ] ; P_9 += eezfy0115l_p *
i55bdf31c4_p ; i55bdf31c4_p = localB -> bd0rx40fsv [ 2 ] ; eezfy0115l_p =
i55bdf31c4_p ; u0 += eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
mlbbs4fqao_klmngopk1n [ 2 ] ; P_9 += eezfy0115l_p * i55bdf31c4_p ; localB ->
phrqrm5pmv = u0 ; localB -> ii3vy4mmpg = localB -> e2eydg5nti_pxv1dlndn0 *
localB -> phrqrm5pmv ; localB -> fctoiiws0s = muDoubleScalarSqrt ( localB ->
ii3vy4mmpg ) ; localB -> a51egkwgwo = P_9 ; localB -> ckgmoczxve = localB ->
a51egkwgwo + localB -> fctoiiws0s ; localB -> bt2rqkb51j = localB ->
ckgmoczxve * localB -> ckgmoczxve ; localB -> cam0ve4zqh = ( ( localB ->
bt2rqkb51j + localB -> bjqsryhiyj ) + localB -> mtgl00davg ) + localB ->
mz5phavgkw ; localB -> ij4lx1s34m = muDoubleScalarSqrt ( localB -> cam0ve4zqh
) ; localB -> hz3ewtedst = localB -> mi35iqh4zh [ 2 ] / localB -> ij4lx1s34m
; localB -> nezmtpenwv = localB -> f4ejwfkds5 * localB -> hz3ewtedst ; localB
-> nwwi3spcvi = localB -> mi35iqh4zh [ 1 ] / localB -> ij4lx1s34m ; localB ->
g30fwms10z = localB -> jm3m25bbb2 * localB -> nwwi3spcvi ; localB ->
ihzny3c3s4 = localB -> mi35iqh4zh [ 0 ] / localB -> ij4lx1s34m ; localB ->
j43hegl5rg = localB -> g5t4vavgkm * localB -> ihzny3c3s4 ; localB ->
lcpdbhb1y5 = localB -> ckgmoczxve / localB -> ij4lx1s34m ; localB ->
kfpoxyrwdt = localB -> gfuclxattu * localB -> lcpdbhb1y5 ; localB ->
bc2fd3yjnq = ( ( localB -> kfpoxyrwdt - localB -> j43hegl5rg ) - localB ->
g30fwms10z ) - localB -> nezmtpenwv ; localB -> ohb5mctuy0 = localB ->
f4ejwfkds5 * localB -> nwwi3spcvi ; localB -> cvo4lad0zq = localB ->
jm3m25bbb2 * localB -> hz3ewtedst ; localB -> gmwwryuamq = localB ->
g5t4vavgkm * localB -> lcpdbhb1y5 ; localB -> hu3fv1h2mh = localB ->
gfuclxattu * localB -> ihzny3c3s4 ; localB -> ljz0n02bon = ( ( localB ->
hu3fv1h2mh + localB -> gmwwryuamq ) + localB -> cvo4lad0zq ) - localB ->
ohb5mctuy0 ; localB -> lkquleht4a = localB -> f4ejwfkds5 * localB ->
ihzny3c3s4 ; localB -> afgx52hcfw = localB -> jm3m25bbb2 * localB ->
lcpdbhb1y5 ; localB -> p0hzmjntzb = localB -> g5t4vavgkm * localB ->
hz3ewtedst ; localB -> dktvhijtxu = localB -> gfuclxattu * localB ->
nwwi3spcvi ; localB -> ddzmwdqzmx = ( ( localB -> dktvhijtxu - localB ->
p0hzmjntzb ) + localB -> afgx52hcfw ) + localB -> lkquleht4a ; localB ->
n3tbogbenx = localB -> f4ejwfkds5 * localB -> lcpdbhb1y5 ; localB ->
dfullnmqq3 = localB -> jm3m25bbb2 * localB -> ihzny3c3s4 ; localB ->
dmco5n5boy = localB -> g5t4vavgkm * localB -> nwwi3spcvi ; localB ->
ci3p3hoamk = localB -> gfuclxattu * localB -> hz3ewtedst ; localB ->
iwcfsxie40 = ( ( localB -> ci3p3hoamk + localB -> dmco5n5boy ) - localB ->
dfullnmqq3 ) + localB -> n3tbogbenx ; localB -> dsml5wy5qc [ 0 ] = localB ->
bc2fd3yjnq ; localB -> dsml5wy5qc [ 1 ] = localB -> ljz0n02bon ; localB ->
dsml5wy5qc [ 2 ] = localB -> ddzmwdqzmx ; localB -> dsml5wy5qc [ 3 ] = localB
-> iwcfsxie40 ; } localB -> eva0gxek30 [ 0 ] = localB -> dsml5wy5qc [ 0 ] ;
localB -> eva0gxek30 [ 1 ] = localB -> dsml5wy5qc [ 1 ] ; localB ->
eva0gxek30 [ 2 ] = localB -> dsml5wy5qc [ 2 ] ; localB -> eva0gxek30 [ 3 ] =
localB -> dsml5wy5qc [ 3 ] ; localB -> owqjvnpw0p = localB -> dsml5wy5qc [ 0
] * localB -> dsml5wy5qc [ 0 ] ; localB -> c25ls5pdce = localB -> dsml5wy5qc
[ 1 ] * localB -> dsml5wy5qc [ 1 ] ; localB -> po2am01g3q = localB ->
dsml5wy5qc [ 2 ] * localB -> dsml5wy5qc [ 2 ] ; localB -> fx5k5czumc = localB
-> dsml5wy5qc [ 3 ] * localB -> dsml5wy5qc [ 3 ] ; localB -> pegjrnaxqm = ( (
localB -> owqjvnpw0p + localB -> c25ls5pdce ) + localB -> po2am01g3q ) +
localB -> fx5k5czumc ; localB -> jqtlywacmr = muDoubleScalarSqrt ( localB ->
pegjrnaxqm ) ; localB -> bw3pflfgbf = localB -> dsml5wy5qc [ 0 ] / localB ->
jqtlywacmr ; localB -> awnqlou4an = localB -> dsml5wy5qc [ 1 ] / localB ->
jqtlywacmr ; localB -> ekhrfsceyv = localB -> dsml5wy5qc [ 2 ] / localB ->
jqtlywacmr ; localB -> ibuevqycit = localB -> dsml5wy5qc [ 3 ] / localB ->
jqtlywacmr ; localB -> p34dq44x5s = ( localB -> awnqlou4an * localB ->
ibuevqycit + localB -> bw3pflfgbf * localB -> ekhrfsceyv ) * 2.0 ; if (
localB -> p34dq44x5s > 1.0 ) { localB -> axt4bl01jm = abopqckbgq . P_16 ;
srUpdateBC ( localDW -> kw1ggasixl ) ; } else if ( localB -> p34dq44x5s < -
1.0 ) { localB -> axt4bl01jm = abopqckbgq . P_17 ; srUpdateBC ( localDW ->
fvctynab0j ) ; } else { localB -> axt4bl01jm = localB -> p34dq44x5s ;
srUpdateBC ( localDW -> fyislxta05 ) ; } localB -> bgnqrybgws = ( localB ->
ekhrfsceyv * localB -> ibuevqycit - localB -> bw3pflfgbf * localB ->
awnqlou4an ) * - 2.0 ; localB -> mybab5em2j = ( ( localB -> bw3pflfgbf *
localB -> bw3pflfgbf - localB -> awnqlou4an * localB -> awnqlou4an ) - localB
-> ekhrfsceyv * localB -> ekhrfsceyv ) + localB -> ibuevqycit * localB ->
ibuevqycit ; localB -> eajnvfro2c [ 0 ] = muDoubleScalarAtan2 ( localB ->
bgnqrybgws , localB -> mybab5em2j ) ; localB -> fgfr5h5b4m = ( localB ->
awnqlou4an * localB -> ekhrfsceyv - localB -> bw3pflfgbf * localB ->
ibuevqycit ) * - 2.0 ; localB -> js1mes1qs3 = ( ( localB -> bw3pflfgbf *
localB -> bw3pflfgbf + localB -> awnqlou4an * localB -> awnqlou4an ) - localB
-> ekhrfsceyv * localB -> ekhrfsceyv ) - localB -> ibuevqycit * localB ->
ibuevqycit ; localB -> eajnvfro2c [ 2 ] = muDoubleScalarAtan2 ( localB ->
fgfr5h5b4m , localB -> js1mes1qs3 ) ; u0 = localB -> axt4bl01jm ; if ( u0 >
1.0 ) { u0 = 1.0 ; } else if ( u0 < - 1.0 ) { u0 = - 1.0 ; } localB ->
eajnvfro2c [ 1 ] = muDoubleScalarAsin ( u0 ) ; localB ->
k4b5tiznc1_o2tow3gxzm = abopqckbgq . P_78 * abopqckbgq . P_8 [ 1 ] ; localB
-> nxifsgxc2x_chiskqqvhf = ( abopqckbgq . P_8 [ 0 ] > abopqckbgq . P_8 [ 2 ]
) ; localB -> hv2xsvyytk_ipgns4eet5 = abopqckbgq . P_81 * abopqckbgq . P_8 [
2 ] ; if ( localB -> nxifsgxc2x_chiskqqvhf ) { localB ->
bcdlg34pt3_fkr0r45bcn [ 0 ] = localB -> k4b5tiznc1_o2tow3gxzm ; localB ->
bcdlg34pt3_fkr0r45bcn [ 1 ] = abopqckbgq . P_8 [ 0 ] ; localB ->
bcdlg34pt3_fkr0r45bcn [ 2 ] = abopqckbgq . P_79 ; } else { localB ->
bcdlg34pt3_fkr0r45bcn [ 0 ] = abopqckbgq . P_80 ; localB ->
bcdlg34pt3_fkr0r45bcn [ 1 ] = localB -> hv2xsvyytk_ipgns4eet5 ; localB ->
bcdlg34pt3_fkr0r45bcn [ 2 ] = abopqckbgq . P_8 [ 1 ] ; } localB ->
lg2isztegk_izlwqhinl5 = abopqckbgq . P_8 [ 0 ] * localB ->
bcdlg34pt3_fkr0r45bcn [ 1 ] ; localB -> cw4hetqa4a_fft32lqtda = abopqckbgq .
P_8 [ 1 ] * localB -> bcdlg34pt3_fkr0r45bcn [ 2 ] ; localB ->
d1sbs2pkf3_gxhmnjv5xa = localB -> bcdlg34pt3_fkr0r45bcn [ 0 ] * abopqckbgq .
P_8 [ 2 ] ; localB -> nfdsdifffn_covwwkkf2n = abopqckbgq . P_8 [ 0 ] * localB
-> bcdlg34pt3_fkr0r45bcn [ 2 ] ; localB -> ioivmki1h5_o32uf0f2k4 = localB ->
bcdlg34pt3_fkr0r45bcn [ 0 ] * abopqckbgq . P_8 [ 1 ] ; localB ->
ljleij1km3_lmeaga4sr3 = localB -> bcdlg34pt3_fkr0r45bcn [ 1 ] * abopqckbgq .
P_8 [ 2 ] ; localB -> nnyklgzqdv_mvr1suhnoo [ 0 ] = localB ->
cw4hetqa4a_fft32lqtda - localB -> ljleij1km3_lmeaga4sr3 ; localB ->
nnyklgzqdv_mvr1suhnoo [ 1 ] = localB -> d1sbs2pkf3_gxhmnjv5xa - localB ->
nfdsdifffn_covwwkkf2n ; localB -> nnyklgzqdv_mvr1suhnoo [ 2 ] = localB ->
lg2isztegk_izlwqhinl5 - localB -> ioivmki1h5_o32uf0f2k4 ; localB ->
le1y3tomzf_mjmkwwa5je = abopqckbgq . P_8 [ 1 ] * abopqckbgq . P_10 [ 2 ] ;
localB -> phopglwagr_cnk35bhqvj = abopqckbgq . P_10 [ 0 ] * abopqckbgq . P_8
[ 2 ] ; localB -> pkaclggswi_fme3ifz5tm = abopqckbgq . P_8 [ 0 ] * abopqckbgq
. P_10 [ 1 ] ; localB -> ccu3jt5v2w_p43y5eooqm = abopqckbgq . P_10 [ 1 ] *
abopqckbgq . P_8 [ 2 ] ; localB -> pkpl3cgh2d_e13kp1af4b = abopqckbgq . P_8 [
0 ] * abopqckbgq . P_10 [ 2 ] ; localB -> nhdyrg1ri3_o4akcuk44c = abopqckbgq
. P_10 [ 0 ] * abopqckbgq . P_8 [ 1 ] ; localB -> g0drkrngsr_hh0jorglq2 [ 0 ]
= localB -> le1y3tomzf_mjmkwwa5je - localB -> ccu3jt5v2w_p43y5eooqm ; localB
-> g0drkrngsr_hh0jorglq2 [ 1 ] = localB -> phopglwagr_cnk35bhqvj - localB ->
pkpl3cgh2d_e13kp1af4b ; localB -> g0drkrngsr_hh0jorglq2 [ 2 ] = localB ->
pkaclggswi_fme3ifz5tm - localB -> nhdyrg1ri3_o4akcuk44c ; localB ->
g4yahc00wc_l5yj2lrthv = localB -> g0drkrngsr_hh0jorglq2 [ 1 ] * abopqckbgq .
P_8 [ 2 ] ; localB -> mgy2tx4uj0_h255b31ynd = abopqckbgq . P_8 [ 0 ] * localB
-> g0drkrngsr_hh0jorglq2 [ 2 ] ; localB -> j55rmyfoop_mert0vuy2i = localB ->
g0drkrngsr_hh0jorglq2 [ 0 ] * abopqckbgq . P_8 [ 1 ] ; localB ->
i30rvmobjs_mcke2mvmgq = abopqckbgq . P_8 [ 1 ] * localB ->
g0drkrngsr_hh0jorglq2 [ 2 ] ; localB -> hbxw1z240h_h34q0rd5y0 = localB ->
g0drkrngsr_hh0jorglq2 [ 0 ] * abopqckbgq . P_8 [ 2 ] ; localB ->
ayebppg4gx_csvudntq5v = abopqckbgq . P_8 [ 0 ] * localB ->
g0drkrngsr_hh0jorglq2 [ 1 ] ; localB -> mlbbs4fqao_klmngopk1n [ 0 ] = localB
-> g4yahc00wc_l5yj2lrthv - localB -> i30rvmobjs_mcke2mvmgq ; localB ->
mlbbs4fqao_klmngopk1n [ 1 ] = localB -> mgy2tx4uj0_h255b31ynd - localB ->
hbxw1z240h_h34q0rd5y0 ; localB -> mlbbs4fqao_klmngopk1n [ 2 ] = localB ->
j55rmyfoop_mert0vuy2i - localB -> ayebppg4gx_csvudntq5v ; g11yqvtiub_p =
abopqckbgq . P_8 [ 0 ] ; aulmnbewtw_p = abopqckbgq . P_10 [ 0 ] ;
eezfy0115l_p = aulmnbewtw_p ; u0 = g11yqvtiub_p * eezfy0115l_p ; eezfy0115l_p
= g11yqvtiub_p ; i55bdf31c4_p = g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p =
aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; P_9 = g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = localB -> mlbbs4fqao_klmngopk1n [ 0 ] ;
eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p = g11yqvtiub_p * eezfy0115l_p ;
g11yqvtiub_p = abopqckbgq . P_8 [ 1 ] ; aulmnbewtw_p = abopqckbgq . P_10 [ 1
] ; eezfy0115l_p = aulmnbewtw_p ; u0 += g11yqvtiub_p * eezfy0115l_p ;
eezfy0115l_p = g11yqvtiub_p ; i55bdf31c4_p += g11yqvtiub_p * eezfy0115l_p ;
g11yqvtiub_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; P_9 +=
g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p = localB -> mlbbs4fqao_klmngopk1n
[ 1 ] ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p += g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = abopqckbgq . P_8 [ 2 ] ; aulmnbewtw_p =
abopqckbgq . P_10 [ 2 ] ; eezfy0115l_p = aulmnbewtw_p ; u0 += g11yqvtiub_p *
eezfy0115l_p ; eezfy0115l_p = g11yqvtiub_p ; i55bdf31c4_p += g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ;
P_9 += g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p = localB ->
mlbbs4fqao_klmngopk1n [ 2 ] ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p +=
g11yqvtiub_p * eezfy0115l_p ; localB -> cbdkowkpf3_h522xzlxvt = u0 ; localB
-> h3jeczv0h3_c0dok3111h = i55bdf31c4_p ; localB -> jrlpuigzhc_ctvw0tpkon =
P_9 ; localB -> caxzxod1me_pxqvlbal2i = localB -> h3jeczv0h3_c0dok3111h *
localB -> jrlpuigzhc_ctvw0tpkon ; localB -> dxhva2syhh_p5h3gwuwqg =
muDoubleScalarSqrt ( localB -> caxzxod1me_pxqvlbal2i ) ; localB ->
ljhg4ah1hn_afnsueciae = localB -> cbdkowkpf3_h522xzlxvt / localB ->
dxhva2syhh_p5h3gwuwqg ; localB -> o44hoe01oz_evg4t2fsev = localB ->
ljhg4ah1hn_afnsueciae + abopqckbgq . P_73 ; localB -> o4dw42eqdy_ax3wx1gs5w =
muDoubleScalarAbs ( localB -> o44hoe01oz_evg4t2fsev ) ; localB ->
ddi5il0z53_as0qznsxlv = localB -> ljhg4ah1hn_afnsueciae + abopqckbgq . P_74 ;
localB -> gqcj1nfmop_ifotjnizh4 = muDoubleScalarAbs ( localB ->
ddi5il0z53_as0qznsxlv ) ; localB -> ok00ebomfe_ltu3syw14q = i55bdf31c4_p ;
localB -> d5qrgk5srt_ojunzewo4f = i55bdf31c4_p ; localB ->
nsqipfztjp_pcqitb31bm = cfc45nbsjb_p ; localB -> e2eydg5nti_pxv1dlndn0 =
cfc45nbsjb_p ; localB -> p35guikpkx_p4u43j1tg5 = abopqckbgq . P_82 * localB
-> mlbbs4fqao_klmngopk1n [ 1 ] ; localB -> ep2mm5jz5g_axzrpos33g = ( localB
-> mlbbs4fqao_klmngopk1n [ 0 ] > localB -> mlbbs4fqao_klmngopk1n [ 2 ] ) ;
localB -> evsphivwme_appanwio2d = abopqckbgq . P_85 * localB ->
mlbbs4fqao_klmngopk1n [ 2 ] ; if ( localB -> ep2mm5jz5g_axzrpos33g ) { localB
-> mn4qnpiisu_jdc3mylhw0 [ 0 ] = localB -> p35guikpkx_p4u43j1tg5 ; localB ->
mn4qnpiisu_jdc3mylhw0 [ 1 ] = localB -> mlbbs4fqao_klmngopk1n [ 0 ] ; localB
-> mn4qnpiisu_jdc3mylhw0 [ 2 ] = abopqckbgq . P_83 ; } else { localB ->
mn4qnpiisu_jdc3mylhw0 [ 0 ] = abopqckbgq . P_84 ; localB ->
mn4qnpiisu_jdc3mylhw0 [ 1 ] = localB -> evsphivwme_appanwio2d ; localB ->
mn4qnpiisu_jdc3mylhw0 [ 2 ] = localB -> mlbbs4fqao_klmngopk1n [ 1 ] ; }
localB -> dg1abadomh_ekaxkojgre = localB -> mlbbs4fqao_klmngopk1n [ 0 ] *
localB -> mn4qnpiisu_jdc3mylhw0 [ 1 ] ; localB -> etb30mxmsv_olzclp30in =
localB -> mlbbs4fqao_klmngopk1n [ 1 ] * localB -> mn4qnpiisu_jdc3mylhw0 [ 2 ]
; localB -> glxglw03ek_bbahwrwppi = localB -> mn4qnpiisu_jdc3mylhw0 [ 0 ] *
localB -> mlbbs4fqao_klmngopk1n [ 2 ] ; localB -> n541cz4kc4_ao3bw4rxqa =
localB -> mlbbs4fqao_klmngopk1n [ 0 ] * localB -> mn4qnpiisu_jdc3mylhw0 [ 2 ]
; localB -> bmrs115gg5_g2zhzn021n = localB -> mn4qnpiisu_jdc3mylhw0 [ 0 ] *
localB -> mlbbs4fqao_klmngopk1n [ 1 ] ; localB -> fzuuudcvoz_ex1giwvd5a =
localB -> mn4qnpiisu_jdc3mylhw0 [ 1 ] * localB -> mlbbs4fqao_klmngopk1n [ 2 ]
; localB -> jgrywmthgg_fi0130k5dq [ 0 ] = localB -> etb30mxmsv_olzclp30in -
localB -> fzuuudcvoz_ex1giwvd5a ; localB -> jgrywmthgg_fi0130k5dq [ 1 ] =
localB -> glxglw03ek_bbahwrwppi - localB -> n541cz4kc4_ao3bw4rxqa ; localB ->
jgrywmthgg_fi0130k5dq [ 2 ] = localB -> dg1abadomh_ekaxkojgre - localB ->
bmrs115gg5_g2zhzn021n ; } else if ( * odamlphqyv == 2.0 ) { localB ->
hfrm0ub4jk = 2.0 ; localDW -> nxghgofox1 = opeya5azww ; localB -> d3odadnzgn
= localB -> ool0nntzvr . q_eci2b [ 0 ] * localB -> ool0nntzvr . q_eci2b [ 0 ]
; localB -> fodgyubpjs = - localB -> ool0nntzvr . q_eci2b [ 1 ] ; localB ->
lzo1k4mul2 = localB -> fodgyubpjs * localB -> fodgyubpjs ; localB ->
glx2os2mzw = - localB -> ool0nntzvr . q_eci2b [ 2 ] ; localB -> h4g3klusdd =
localB -> glx2os2mzw * localB -> glx2os2mzw ; localB -> jpaaj212yy = - localB
-> ool0nntzvr . q_eci2b [ 3 ] ; localB -> czcssosf1z = localB -> jpaaj212yy *
localB -> jpaaj212yy ; localB -> aen0aszu3e = ( ( localB -> d3odadnzgn +
localB -> lzo1k4mul2 ) + localB -> h4g3klusdd ) + localB -> czcssosf1z ;
localB -> gunaobe300 = muDoubleScalarSqrt ( localB -> aen0aszu3e ) ; localB
-> ov4vhkp3o2 = localB -> ool0nntzvr . q_eci2b [ 0 ] / localB -> gunaobe300 ;
localB -> bvzybml4ix = localB -> ov4vhkp3o2 * localB -> ov4vhkp3o2 ; localB
-> lhvbn1u0tx = localB -> fodgyubpjs / localB -> gunaobe300 ; localB ->
kdginuldqs = - localB -> lhvbn1u0tx ; localB -> dfo0fydpsk = localB ->
kdginuldqs * localB -> kdginuldqs ; localB -> bcyepzkahx = localB ->
glx2os2mzw / localB -> gunaobe300 ; localB -> h2zekqoxp5 = - localB ->
bcyepzkahx ; localB -> myzqzjbcu3 = localB -> h2zekqoxp5 * localB ->
h2zekqoxp5 ; localB -> lnt5ykhylk = localB -> jpaaj212yy / localB ->
gunaobe300 ; localB -> kwbfaqxddn = - localB -> lnt5ykhylk ; localB ->
aehfytsgae = localB -> kwbfaqxddn * localB -> kwbfaqxddn ; localB ->
acwieewca2 = ( ( localB -> bvzybml4ix + localB -> dfo0fydpsk ) + localB ->
myzqzjbcu3 ) + localB -> aehfytsgae ; localB -> ebv251iwdf =
muDoubleScalarSqrt ( localB -> acwieewca2 ) ; localB -> ko3pwhar3t = localB
-> ov4vhkp3o2 / localB -> ebv251iwdf ; localB -> nyxw0kxrtl = localB ->
kdginuldqs / localB -> ebv251iwdf ; localB -> ho0jylt0hh = localB ->
h2zekqoxp5 / localB -> ebv251iwdf ; localB -> k4yv1l0ysr = localB ->
kwbfaqxddn / localB -> ebv251iwdf ; localB -> giuiigfwct = localB ->
nyxw0kxrtl * localB -> ho0jylt0hh ; localB -> bbvmxed4yj = localB ->
ko3pwhar3t * localB -> k4yv1l0ysr ; localB -> emuu1mduk5 = localB ->
giuiigfwct + localB -> bbvmxed4yj ; localB -> jxalf3d0tm = abopqckbgq . P_93
* localB -> emuu1mduk5 ; localB -> pf1xmdshjh = localB -> ko3pwhar3t * localB
-> ho0jylt0hh ; localB -> jwzocllfss = localB -> nyxw0kxrtl * localB ->
k4yv1l0ysr ; localB -> etyhz1d54p = localB -> jwzocllfss - localB ->
pf1xmdshjh ; localB -> ghfpen2xfm = abopqckbgq . P_94 * localB -> etyhz1d54p
; localB -> pybu30gra0 = localB -> ho0jylt0hh * localB -> ho0jylt0hh ; localB
-> p5ythyyc1w = localB -> k4yv1l0ysr * localB -> k4yv1l0ysr ; localB ->
jrb3n1e1op = ( abopqckbgq . P_126 - localB -> pybu30gra0 ) - localB ->
p5ythyyc1w ; localB -> glokcynnu0 = abopqckbgq . P_95 * localB -> jrb3n1e1op
; localB -> ahhv2odar5 = localB -> jxalf3d0tm * localB -> p5xc1va2sp .
x_sun_eci [ 1 ] ; localB -> bdkn43iyoi = localB -> ghfpen2xfm * localB ->
p5xc1va2sp . x_sun_eci [ 2 ] ; localB -> gupwco05zf = localB -> p5xc1va2sp .
x_sun_eci [ 0 ] * localB -> glokcynnu0 ; localB -> cfpwmg2iv5 = ( localB ->
gupwco05zf + localB -> ahhv2odar5 ) + localB -> bdkn43iyoi ; localB ->
dactqdrvkq = localB -> nyxw0kxrtl * localB -> ho0jylt0hh ; localB ->
e0ceu2okzq = localB -> ko3pwhar3t * localB -> k4yv1l0ysr ; localB ->
hehwf2oytc = localB -> dactqdrvkq - localB -> e0ceu2okzq ; localB ->
i44guk2vvg = abopqckbgq . P_96 * localB -> hehwf2oytc ; localB -> gum5tzox3x
= localB -> ko3pwhar3t * localB -> nyxw0kxrtl ; localB -> cncgq4bsmk = localB
-> ho0jylt0hh * localB -> k4yv1l0ysr ; localB -> nwy4h031y3 = localB ->
gum5tzox3x + localB -> cncgq4bsmk ; localB -> dfqjpjarik = abopqckbgq . P_97
* localB -> nwy4h031y3 ; localB -> l3jo4kejut = localB -> nyxw0kxrtl * localB
-> nyxw0kxrtl ; localB -> kwenwqfzm2 = localB -> k4yv1l0ysr * localB ->
k4yv1l0ysr ; localB -> ale4aanaik = ( abopqckbgq . P_127 - localB ->
l3jo4kejut ) - localB -> kwenwqfzm2 ; localB -> irir3q2hou = abopqckbgq .
P_98 * localB -> ale4aanaik ; localB -> k0acye40sn = localB -> p5xc1va2sp .
x_sun_eci [ 0 ] * localB -> i44guk2vvg ; localB -> emhhu5s0gl = localB ->
dfqjpjarik * localB -> p5xc1va2sp . x_sun_eci [ 2 ] ; localB -> g11yqvtiub =
localB -> irir3q2hou * localB -> p5xc1va2sp . x_sun_eci [ 1 ] ; localB ->
de4u044ohl = ( localB -> k0acye40sn + localB -> g11yqvtiub ) + localB ->
emhhu5s0gl ; localB -> huvd5fayr4 = localB -> nyxw0kxrtl * localB ->
k4yv1l0ysr ; localB -> h3gpqzdq01 = localB -> ko3pwhar3t * localB ->
ho0jylt0hh ; localB -> munt1w11is = localB -> huvd5fayr4 + localB ->
h3gpqzdq01 ; localB -> cceagtsjdw = abopqckbgq . P_99 * localB -> munt1w11is
; localB -> a4cosmw5lm = localB -> ko3pwhar3t * localB -> nyxw0kxrtl ; localB
-> mi4apm2zjc = localB -> ho0jylt0hh * localB -> k4yv1l0ysr ; localB ->
mf0tqbtc3s = localB -> mi4apm2zjc - localB -> a4cosmw5lm ; localB ->
licbno2boh = abopqckbgq . P_100 * localB -> mf0tqbtc3s ; localB -> ngbbrxa51f
= localB -> nyxw0kxrtl * localB -> nyxw0kxrtl ; localB -> hcubmd0liv = localB
-> ho0jylt0hh * localB -> ho0jylt0hh ; localB -> kt0xe204ka = ( abopqckbgq .
P_128 - localB -> ngbbrxa51f ) - localB -> hcubmd0liv ; localB -> p5lfsonodp
= abopqckbgq . P_101 * localB -> kt0xe204ka ; localB -> me3p1k22xz = localB
-> p5xc1va2sp . x_sun_eci [ 0 ] * localB -> cceagtsjdw ; localB -> ltbrmuqara
= localB -> licbno2boh * localB -> p5xc1va2sp . x_sun_eci [ 1 ] ; localB ->
msdu4nx1aq = localB -> p5lfsonodp * localB -> p5xc1va2sp . x_sun_eci [ 2 ] ;
localB -> ihwaoscgmh = ( localB -> me3p1k22xz + localB -> ltbrmuqara ) +
localB -> msdu4nx1aq ; if ( localB -> kdginuldqs_fqdqrf4qbc < 1.0E-6 ) {
cu0mwyodxb ( & localB -> n32d2jxjgp , & abopqckbgq . kmn5ikrhii ) ; } else if
( localB -> bcyepzkahx_g1smspu5ke < 1.0E-6 ) { cu0mwyodxb ( & localB ->
n32d2jxjgp , & abopqckbgq . k5rtgyuloh ) ; } else { cu0mwyodxb ( & localB ->
n32d2jxjgp , & abopqckbgq . h4xtjhm5ns ) ; } localB -> cfc45nbsjb [ 0 ] =
localB -> cfpwmg2iv5 ; localB -> cfc45nbsjb [ 1 ] = localB -> de4u044ohl ;
localB -> cfc45nbsjb [ 2 ] = localB -> ihwaoscgmh ; localB -> cmr51l152v =
localB -> ov4vhkp3o2 * localB -> ov4vhkp3o2 ; localB -> bflzdi334h = localB
-> kdginuldqs * localB -> kdginuldqs ; localB -> bv1zkqgzil = localB ->
h2zekqoxp5 * localB -> h2zekqoxp5 ; localB -> brmpcz2qbx = localB ->
kwbfaqxddn * localB -> kwbfaqxddn ; localB -> o1q4vuuom3 = ( ( localB ->
cmr51l152v + localB -> bflzdi334h ) + localB -> bv1zkqgzil ) + localB ->
brmpcz2qbx ; localB -> f5qd1ffihn = muDoubleScalarSqrt ( localB -> o1q4vuuom3
) ; localB -> ojtewlm1bq = localB -> h2zekqoxp5 / localB -> f5qd1ffihn ;
localB -> j4w2ibwt10 = localB -> ojtewlm1bq * localB -> ojtewlm1bq ; localB
-> joeg0albfh = localB -> kwbfaqxddn / localB -> f5qd1ffihn ; localB ->
iejtxnetig = localB -> joeg0albfh * localB -> joeg0albfh ; localB ->
ei351ozc14 = ( abopqckbgq . P_142 - localB -> j4w2ibwt10 ) - localB ->
iejtxnetig ; localB -> kr1xvrqq4i = abopqckbgq . P_102 * localB -> ei351ozc14
; localB -> ecnsuqfcc1 = abopqckbgq . P_13 [ 0 ] * localB -> kr1xvrqq4i ;
localB -> jj1lmvybzd = localB -> kdginuldqs / localB -> f5qd1ffihn ; localB
-> idvdvyq30r = localB -> jj1lmvybzd * localB -> ojtewlm1bq ; localB ->
ebis0zh5a2 = localB -> ov4vhkp3o2 / localB -> f5qd1ffihn ; localB ->
ap1kecuizw = localB -> ebis0zh5a2 * localB -> joeg0albfh ; localB ->
e1klj20zb1 = localB -> idvdvyq30r + localB -> ap1kecuizw ; localB ->
kj4t50kyyc = abopqckbgq . P_103 * localB -> e1klj20zb1 ; localB -> ot5yr0zw1p
= localB -> kj4t50kyyc * abopqckbgq . P_13 [ 1 ] ; localB -> mhbkw1ubaj =
localB -> ebis0zh5a2 * localB -> ojtewlm1bq ; localB -> k30n1mbngj = localB
-> jj1lmvybzd * localB -> joeg0albfh ; localB -> pjm4at2lgs = localB ->
k30n1mbngj - localB -> mhbkw1ubaj ; localB -> a3e3ursurh = abopqckbgq . P_104
* localB -> pjm4at2lgs ; localB -> penc24o4z4 = localB -> a3e3ursurh *
abopqckbgq . P_13 [ 2 ] ; localB -> npijt2t3rq = ( localB -> ecnsuqfcc1 +
localB -> ot5yr0zw1p ) + localB -> penc24o4z4 ; localB -> nz01pnira3 = localB
-> jj1lmvybzd * localB -> ojtewlm1bq ; localB -> j1qmfgimhc = localB ->
ebis0zh5a2 * localB -> joeg0albfh ; localB -> eyz2vqrxl1 = localB ->
nz01pnira3 - localB -> j1qmfgimhc ; localB -> kqcndwlrpi = abopqckbgq . P_105
* localB -> eyz2vqrxl1 ; localB -> egewsknas0 = abopqckbgq . P_13 [ 0 ] *
localB -> kqcndwlrpi ; localB -> dfcpdkz3qy = localB -> jj1lmvybzd * localB
-> jj1lmvybzd ; localB -> kuxn0ecyfg = localB -> joeg0albfh * localB ->
joeg0albfh ; localB -> cxpwy13ncd = ( abopqckbgq . P_143 - localB ->
dfcpdkz3qy ) - localB -> kuxn0ecyfg ; localB -> b3iukvqnrj = abopqckbgq .
P_106 * localB -> cxpwy13ncd ; localB -> j54kyrrulw = localB -> b3iukvqnrj *
abopqckbgq . P_13 [ 1 ] ; localB -> ecbttofb24 = localB -> ebis0zh5a2 *
localB -> jj1lmvybzd ; localB -> maih1xmael = localB -> ojtewlm1bq * localB
-> joeg0albfh ; localB -> jsfmn0pkbx = localB -> ecbttofb24 + localB ->
maih1xmael ; localB -> izpvjcfn1f = abopqckbgq . P_107 * localB -> jsfmn0pkbx
; localB -> flxyk5kscq = localB -> izpvjcfn1f * abopqckbgq . P_13 [ 2 ] ;
localB -> bhp4p2woax = ( localB -> egewsknas0 + localB -> j54kyrrulw ) +
localB -> flxyk5kscq ; localB -> cerm0adi5z = localB -> jj1lmvybzd * localB
-> joeg0albfh ; localB -> nosoehtibn = localB -> ebis0zh5a2 * localB ->
ojtewlm1bq ; localB -> jyh1hoyxxh = localB -> cerm0adi5z + localB ->
nosoehtibn ; localB -> gcavehrbsl = abopqckbgq . P_108 * localB -> jyh1hoyxxh
; localB -> d4ts3qmblt = abopqckbgq . P_13 [ 0 ] * localB -> gcavehrbsl ;
localB -> kyfj55nzny = localB -> ebis0zh5a2 * localB -> jj1lmvybzd ; localB
-> hqfj2l2jsu = localB -> ojtewlm1bq * localB -> joeg0albfh ; localB ->
ipaiailov1 = localB -> hqfj2l2jsu - localB -> kyfj55nzny ; localB ->
g4dcwn3ypt = abopqckbgq . P_109 * localB -> ipaiailov1 ; localB -> gzqtcwduap
= localB -> g4dcwn3ypt * abopqckbgq . P_13 [ 1 ] ; localB -> ddqumwzxax =
localB -> jj1lmvybzd * localB -> jj1lmvybzd ; localB -> h1sv2bid0m = localB
-> ojtewlm1bq * localB -> ojtewlm1bq ; localB -> noicpyoaxf = ( abopqckbgq .
P_144 - localB -> ddqumwzxax ) - localB -> h1sv2bid0m ; localB -> iohdyojdtg
= abopqckbgq . P_110 * localB -> noicpyoaxf ; localB -> hwxjns5opb = localB
-> iohdyojdtg * abopqckbgq . P_13 [ 2 ] ; localB -> esbrwlthoz = ( localB ->
d4ts3qmblt + localB -> gzqtcwduap ) + localB -> hwxjns5opb ; localB ->
aulmnbewtw [ 0 ] = localB -> npijt2t3rq ; localB -> aulmnbewtw [ 1 ] = localB
-> bhp4p2woax ; localB -> aulmnbewtw [ 2 ] = localB -> esbrwlthoz ;
cfc45nbsjb_p = localB -> cfc45nbsjb [ 0 ] ; aulmnbewtw_p = localB ->
aulmnbewtw [ 0 ] ; eezfy0115l_p = aulmnbewtw_p ; u0 = cfc45nbsjb_p *
eezfy0115l_p ; eezfy0115l_p = cfc45nbsjb_p ; P_9 = cfc45nbsjb_p *
eezfy0115l_p ; cfc45nbsjb_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ;
i55bdf31c4_p = cfc45nbsjb_p * eezfy0115l_p ; cfc45nbsjb_p = localB ->
cfc45nbsjb [ 1 ] ; aulmnbewtw_p = localB -> aulmnbewtw [ 1 ] ; eezfy0115l_p =
aulmnbewtw_p ; u0 += cfc45nbsjb_p * eezfy0115l_p ; eezfy0115l_p =
cfc45nbsjb_p ; P_9 += cfc45nbsjb_p * eezfy0115l_p ; cfc45nbsjb_p =
aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; i55bdf31c4_p += cfc45nbsjb_p *
eezfy0115l_p ; cfc45nbsjb_p = localB -> cfc45nbsjb [ 2 ] ; aulmnbewtw_p =
localB -> aulmnbewtw [ 2 ] ; eezfy0115l_p = aulmnbewtw_p ; u0 += cfc45nbsjb_p
* eezfy0115l_p ; eezfy0115l_p = cfc45nbsjb_p ; P_9 += cfc45nbsjb_p *
eezfy0115l_p ; cfc45nbsjb_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ;
i55bdf31c4_p += cfc45nbsjb_p * eezfy0115l_p ; localB -> b0vinsiowc = u0 ;
localB -> bwhm53hj2z = P_9 ; localB -> ghsw34cu0i = i55bdf31c4_p ; localB ->
khoowgsa0c = localB -> bwhm53hj2z * localB -> ghsw34cu0i ; localB ->
a0bo2ucid3 = muDoubleScalarSqrt ( localB -> khoowgsa0c ) ; localB ->
fgbv1nguyc = localB -> b0vinsiowc / localB -> a0bo2ucid3 ; localB ->
f44vixbdmy = localB -> fgbv1nguyc + abopqckbgq . P_111 ; localB -> hkcvwwbfgd
= muDoubleScalarAbs ( localB -> f44vixbdmy ) ; localB -> al2xwqyeer = localB
-> fgbv1nguyc + abopqckbgq . P_112 ; localB -> ajwao05aic = muDoubleScalarAbs
( localB -> al2xwqyeer ) ; if ( localB -> hkcvwwbfgd < 1.0E-6 ) { cu0mwyodxb
( & localB -> mtxmv02bob , & abopqckbgq . eshunq0a4x ) ; } else if ( localB
-> ajwao05aic < 1.0E-6 ) { cu0mwyodxb ( & localB -> mtxmv02bob , & abopqckbgq
. kqvn05n2kk ) ; } else { cu0mwyodxb ( & localB -> mtxmv02bob , & abopqckbgq
. mufdwlxkzp ) ; } localB -> om42glthuj = ( localB -> n32d2jxjgp !=
abopqckbgq . P_91 ) ; localB -> crivvl3nas = ( localB -> mtxmv02bob !=
abopqckbgq . P_92 ) ; localB -> emugtdcgnx = ( localB -> om42glthuj || localB
-> crivvl3nas ) ; P_9 = abopqckbgq . P_9 [ 0 ] ; cfc45nbsjb_p = localB ->
cfc45nbsjb [ 0 ] ; eezfy0115l_p = P_9 * cfc45nbsjb_p ; P_9 = cfc45nbsjb_p ;
u0 = P_9 * cfc45nbsjb_p ; P_9 = abopqckbgq . P_9 [ 1 ] ; cfc45nbsjb_p =
localB -> cfc45nbsjb [ 1 ] ; eezfy0115l_p += P_9 * cfc45nbsjb_p ; P_9 =
cfc45nbsjb_p ; u0 += P_9 * cfc45nbsjb_p ; P_9 = abopqckbgq . P_9 [ 2 ] ;
cfc45nbsjb_p = localB -> cfc45nbsjb [ 2 ] ; eezfy0115l_p += P_9 *
cfc45nbsjb_p ; P_9 = cfc45nbsjb_p ; u0 += P_9 * cfc45nbsjb_p ; localB ->
gnteax5h3n = eezfy0115l_p ; localB -> is11124flk = u0 ; localB -> a4mc4bqcds
= localB -> jxalf3d0tm_nz4o0shxby * localB -> is11124flk ; localB ->
mkrrjil1it = muDoubleScalarSqrt ( localB -> a4mc4bqcds ) ; localB ->
kgb3cpprtp = localB -> gnteax5h3n + localB -> mkrrjil1it ; localB ->
llafrnfn4e = localB -> kgb3cpprtp * localB -> kgb3cpprtp ; localB ->
dblbijbcto = eezfy0115l_p ; localB -> jlgqmscjl4 = u0 ; localB -> dkmxqfklmw
= localB -> ho0jylt0hh_merlcviukg * localB -> jlgqmscjl4 ; localB ->
pvxlfzudav = muDoubleScalarSqrt ( localB -> dkmxqfklmw ) ; localB ->
b0bs3n34iv = localB -> dblbijbcto / localB -> pvxlfzudav ; localB ->
b0ib3ldpv5 = localB -> b0bs3n34iv + abopqckbgq . P_113 ; localB -> hzgyhv32h1
= muDoubleScalarAbs ( localB -> b0ib3ldpv5 ) ; localB -> klvszsn1bv = localB
-> b0bs3n34iv + abopqckbgq . P_114 ; localB -> j3gen42ucf = muDoubleScalarAbs
( localB -> klvszsn1bv ) ; if ( localB -> hzgyhv32h1 < 1.0E-6 ) { cu0mwyodxb
( & localB -> l4ypgofdmw , & abopqckbgq . ovuvbo1lgf ) ; } else if ( localB
-> j3gen42ucf < 1.0E-6 ) { cu0mwyodxb ( & localB -> l4ypgofdmw , & abopqckbgq
. iwf1ikz5vp ) ; } else { cu0mwyodxb ( & localB -> l4ypgofdmw , & abopqckbgq
. m1c5auh51y ) ; } localB -> potqldc5ec = ( localB -> l4ypgofdmw !=
abopqckbgq . P_5 ) ; if ( localB -> potqldc5ec ) { localB -> bz1gjtuoqb =
abopqckbgq . P_9 [ 1 ] * localB -> cfpwmg2iv5 ; localB -> d0uguxmxbq =
abopqckbgq . P_9 [ 0 ] * localB -> ihwaoscgmh ; localB -> ln5urmh5mw =
abopqckbgq . P_9 [ 2 ] * localB -> de4u044ohl ; localB -> frgsgtn1mp =
abopqckbgq . P_9 [ 0 ] * localB -> de4u044ohl ; localB -> edxv3qgybn =
abopqckbgq . P_9 [ 2 ] * localB -> cfpwmg2iv5 ; localB -> b1r1wuoueq =
abopqckbgq . P_9 [ 1 ] * localB -> ihwaoscgmh ; localB -> dvprdrli5v [ 0 ] =
localB -> b1r1wuoueq - localB -> ln5urmh5mw ; localB -> dvprdrli5v [ 1 ] =
localB -> edxv3qgybn - localB -> d0uguxmxbq ; localB -> dvprdrli5v [ 2 ] =
localB -> frgsgtn1mp - localB -> bz1gjtuoqb ; localB -> es3lwacrnk [ 0 ] =
localB -> dvprdrli5v [ 0 ] ; localB -> es3lwacrnk [ 1 ] = localB ->
dvprdrli5v [ 1 ] ; localB -> es3lwacrnk [ 2 ] = localB -> dvprdrli5v [ 2 ] ;
} else { localB -> es3lwacrnk [ 0 ] = localB -> dactqdrvkq_owjr1h1vqy [ 0 ] ;
localB -> es3lwacrnk [ 1 ] = localB -> dactqdrvkq_owjr1h1vqy [ 1 ] ; localB
-> es3lwacrnk [ 2 ] = localB -> dactqdrvkq_owjr1h1vqy [ 2 ] ; } localB ->
demriltcok = localB -> es3lwacrnk [ 0 ] * localB -> es3lwacrnk [ 0 ] ; localB
-> hfjpjmuufk = localB -> es3lwacrnk [ 1 ] * localB -> es3lwacrnk [ 1 ] ;
localB -> ksvb1lzrjs = localB -> es3lwacrnk [ 2 ] * localB -> es3lwacrnk [ 2
] ; localB -> kafws4sucv = ( ( localB -> llafrnfn4e + localB -> demriltcok )
+ localB -> hfjpjmuufk ) + localB -> ksvb1lzrjs ; localB -> eku4uywj5n =
muDoubleScalarSqrt ( localB -> kafws4sucv ) ; localB -> dxdd53dn5c = localB
-> kgb3cpprtp / localB -> eku4uywj5n ; localB -> alvyyylc1d = localB ->
de4u044ohl * localB -> esbrwlthoz ; localB -> a33uo1on3v = localB ->
ihwaoscgmh * localB -> npijt2t3rq ; localB -> kf2cj34q4i = localB ->
cfpwmg2iv5 * localB -> bhp4p2woax ; localB -> oinzqb0del = localB ->
ihwaoscgmh * localB -> bhp4p2woax ; localB -> lfrqyw5or4 = localB ->
cfpwmg2iv5 * localB -> esbrwlthoz ; localB -> fy5rojjgaq = localB ->
de4u044ohl * localB -> npijt2t3rq ; localB -> pwvm1cvys3 [ 0 ] = localB ->
alvyyylc1d - localB -> oinzqb0del ; localB -> pwvm1cvys3 [ 1 ] = localB ->
a33uo1on3v - localB -> lfrqyw5or4 ; localB -> pwvm1cvys3 [ 2 ] = localB ->
kf2cj34q4i - localB -> fy5rojjgaq ; localB -> hlmymlwl3i = localB ->
pwvm1cvys3 [ 1 ] * localB -> ihwaoscgmh ; localB -> osrebcplyq = localB ->
pwvm1cvys3 [ 2 ] * localB -> cfpwmg2iv5 ; localB -> pexenij4e3 = localB ->
pwvm1cvys3 [ 0 ] * localB -> de4u044ohl ; localB -> c44lcdg0mx = localB ->
pwvm1cvys3 [ 2 ] * localB -> de4u044ohl ; localB -> ofpgkysusa = localB ->
pwvm1cvys3 [ 0 ] * localB -> ihwaoscgmh ; localB -> kgwkjraldr = localB ->
pwvm1cvys3 [ 1 ] * localB -> cfpwmg2iv5 ; localB -> izvajsfkfm [ 0 ] = localB
-> hlmymlwl3i - localB -> c44lcdg0mx ; localB -> izvajsfkfm [ 1 ] = localB ->
osrebcplyq - localB -> ofpgkysusa ; localB -> izvajsfkfm [ 2 ] = localB ->
pexenij4e3 - localB -> kgwkjraldr ; localB -> gpsncmqs1n = localB ->
es3lwacrnk [ 1 ] / localB -> eku4uywj5n ; localB -> d4yfowfxod = localB ->
dxdd53dn5c * localB -> dxdd53dn5c ; localB -> lluanupaow = localB ->
es3lwacrnk [ 0 ] / localB -> eku4uywj5n ; localB -> gsdon20h0k = localB ->
lluanupaow * localB -> lluanupaow ; localB -> mp44bdcztc = localB ->
gpsncmqs1n * localB -> gpsncmqs1n ; localB -> mv33t0pc5q = localB ->
es3lwacrnk [ 2 ] / localB -> eku4uywj5n ; localB -> bynwhnhoxd = localB ->
mv33t0pc5q * localB -> mv33t0pc5q ; localB -> nojgqbps2j = ( ( localB ->
d4yfowfxod + localB -> gsdon20h0k ) + localB -> mp44bdcztc ) + localB ->
bynwhnhoxd ; localB -> glt3qhswla = muDoubleScalarSqrt ( localB -> nojgqbps2j
) ; localB -> oio3wjtl4j = localB -> gpsncmqs1n / localB -> glt3qhswla ;
localB -> mrcs11biur = localB -> oio3wjtl4j * localB -> oio3wjtl4j ; localB
-> ast1d0ii1d = localB -> mv33t0pc5q / localB -> glt3qhswla ; localB ->
pjp32jmmut = localB -> ast1d0ii1d * localB -> ast1d0ii1d ; localB ->
mva44vpfc2 = ( abopqckbgq . P_131 - localB -> mrcs11biur ) - localB ->
pjp32jmmut ; localB -> dpwnlpjyzf = abopqckbgq . P_115 * localB -> mva44vpfc2
; localB -> nqf3ahpofp = localB -> izvajsfkfm [ 0 ] * localB -> dpwnlpjyzf ;
localB -> la2zofuijo = localB -> lluanupaow / localB -> glt3qhswla ; localB
-> bgjmzqoecp = localB -> la2zofuijo * localB -> oio3wjtl4j ; localB ->
fca11zzkrd = localB -> dxdd53dn5c / localB -> glt3qhswla ; localB ->
aiud22aj0d = localB -> fca11zzkrd * localB -> ast1d0ii1d ; localB ->
luq2usfqsa = localB -> bgjmzqoecp + localB -> aiud22aj0d ; localB ->
axkbhn0cny = abopqckbgq . P_116 * localB -> luq2usfqsa ; localB -> d504p5qexg
= localB -> axkbhn0cny * localB -> izvajsfkfm [ 1 ] ; localB -> mhtbukw4ea =
localB -> fca11zzkrd * localB -> oio3wjtl4j ; localB -> ai4mkbbaan = localB
-> la2zofuijo * localB -> ast1d0ii1d ; localB -> gerr4jmvnh = localB ->
ai4mkbbaan - localB -> mhtbukw4ea ; localB -> hy3i4x5wqj = abopqckbgq . P_117
* localB -> gerr4jmvnh ; localB -> gat44e2fg1 = localB -> hy3i4x5wqj * localB
-> izvajsfkfm [ 2 ] ; localB -> ouopwnt0l5 = ( localB -> nqf3ahpofp + localB
-> d504p5qexg ) + localB -> gat44e2fg1 ; localB -> lcpbokipqe = localB ->
la2zofuijo * localB -> oio3wjtl4j ; localB -> ghenvnxzza = localB ->
fca11zzkrd * localB -> ast1d0ii1d ; localB -> hahbm33aeu = localB ->
lcpbokipqe - localB -> ghenvnxzza ; localB -> m3fkutigpq = abopqckbgq . P_118
* localB -> hahbm33aeu ; localB -> baht50f5r1 = localB -> izvajsfkfm [ 0 ] *
localB -> m3fkutigpq ; localB -> iud0hfcnyz = localB -> la2zofuijo * localB
-> la2zofuijo ; localB -> mmmimr3ju3 = localB -> ast1d0ii1d * localB ->
ast1d0ii1d ; localB -> oux4ikkkb2 = ( abopqckbgq . P_132 - localB ->
iud0hfcnyz ) - localB -> mmmimr3ju3 ; localB -> liuehcys3m = abopqckbgq .
P_119 * localB -> oux4ikkkb2 ; localB -> cefxrogje3 = localB -> liuehcys3m *
localB -> izvajsfkfm [ 1 ] ; localB -> fp2gqy5zek = localB -> fca11zzkrd *
localB -> la2zofuijo ; localB -> fc0sapae1u = localB -> oio3wjtl4j * localB
-> ast1d0ii1d ; localB -> drctt4evwf = localB -> fp2gqy5zek + localB ->
fc0sapae1u ; localB -> fsykih5kdc = abopqckbgq . P_120 * localB -> drctt4evwf
; localB -> edx4w0yjew = localB -> fsykih5kdc * localB -> izvajsfkfm [ 2 ] ;
localB -> cuoiibllhs = ( localB -> baht50f5r1 + localB -> cefxrogje3 ) +
localB -> edx4w0yjew ; localB -> bpbo53npsh = localB -> la2zofuijo * localB
-> ast1d0ii1d ; localB -> mjs1kyckeb = localB -> fca11zzkrd * localB ->
oio3wjtl4j ; localB -> n12zyyzkzp = localB -> bpbo53npsh + localB ->
mjs1kyckeb ; localB -> dnmterkpd5 = abopqckbgq . P_121 * localB -> n12zyyzkzp
; localB -> jajfh4crdy = localB -> izvajsfkfm [ 0 ] * localB -> dnmterkpd5 ;
localB -> pr3drqow4z = localB -> fca11zzkrd * localB -> la2zofuijo ; localB
-> pxsgcjzsik = localB -> oio3wjtl4j * localB -> ast1d0ii1d ; localB ->
kjqrgsc3wa = localB -> pxsgcjzsik - localB -> pr3drqow4z ; localB ->
clky40vnkm = abopqckbgq . P_122 * localB -> kjqrgsc3wa ; localB -> o05achetzf
= localB -> clky40vnkm * localB -> izvajsfkfm [ 1 ] ; localB -> dvadcxuzy5 =
localB -> la2zofuijo * localB -> la2zofuijo ; localB -> gbc4ehbrdc = localB
-> oio3wjtl4j * localB -> oio3wjtl4j ; localB -> hkgmxfy014 = ( abopqckbgq .
P_133 - localB -> dvadcxuzy5 ) - localB -> gbc4ehbrdc ; localB -> izs2h4teyx
= abopqckbgq . P_123 * localB -> hkgmxfy014 ; localB -> fbut1j1j3z = localB
-> izs2h4teyx * localB -> izvajsfkfm [ 2 ] ; localB -> ih4ljwvyz3 = ( localB
-> jajfh4crdy + localB -> o05achetzf ) + localB -> fbut1j1j3z ; localB ->
i55bdf31c4 [ 0 ] = localB -> ouopwnt0l5 ; localB -> i55bdf31c4 [ 1 ] = localB
-> cuoiibllhs ; localB -> i55bdf31c4 [ 2 ] = localB -> ih4ljwvyz3 ;
eezfy0115l_p = localB -> g11yqvtiub_jz50ptvnrg [ 0 ] ; i55bdf31c4_p = localB
-> i55bdf31c4 [ 0 ] ; u0 = eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p =
i55bdf31c4_p ; P_9 = eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
g11yqvtiub_jz50ptvnrg [ 1 ] ; i55bdf31c4_p = localB -> i55bdf31c4 [ 1 ] ; u0
+= eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = i55bdf31c4_p ; P_9 +=
eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB -> g11yqvtiub_jz50ptvnrg
[ 2 ] ; i55bdf31c4_p = localB -> i55bdf31c4 [ 2 ] ; u0 += eezfy0115l_p *
i55bdf31c4_p ; eezfy0115l_p = i55bdf31c4_p ; P_9 += eezfy0115l_p *
i55bdf31c4_p ; localB -> p4tltvujqb = u0 ; localB -> d5duesvdsg = P_9 ;
localB -> dqw3vltwcr = localB -> de4u044ohl_o4f35lbcvx * localB -> d5duesvdsg
; localB -> cief2n5si4 = muDoubleScalarSqrt ( localB -> dqw3vltwcr ) ; localB
-> c2iis34dgy = localB -> p4tltvujqb / localB -> cief2n5si4 ; localB ->
b4vhy4fid0 = localB -> c2iis34dgy + abopqckbgq . P_124 ; localB -> k3bxfmssr3
= muDoubleScalarAbs ( localB -> b4vhy4fid0 ) ; localB -> eiqg1ejffy = localB
-> c2iis34dgy + abopqckbgq . P_125 ; localB -> p2cyoh4zu2 = muDoubleScalarAbs
( localB -> eiqg1ejffy ) ; if ( localB -> k3bxfmssr3 < 1.0E-6 ) { cu0mwyodxb
( & localB -> lk0jb1dsya , & abopqckbgq . eh1au0gcdu ) ; } else if ( localB
-> p2cyoh4zu2 < 1.0E-6 ) { cu0mwyodxb ( & localB -> lk0jb1dsya , & abopqckbgq
. kufh2i43cj ) ; } else { cu0mwyodxb ( & localB -> lk0jb1dsya , & abopqckbgq
. otxy3nsbi1 ) ; } if ( localB -> emugtdcgnx ) { localB -> mncbjjwvwc [ 0 ] =
localB -> dxdd53dn5c ; localB -> mncbjjwvwc [ 1 ] = localB -> lluanupaow ;
localB -> mncbjjwvwc [ 2 ] = localB -> gpsncmqs1n ; localB -> mncbjjwvwc [ 3
] = localB -> mv33t0pc5q ; } else { localB -> mt5jnqvty1 = ( localB ->
lk0jb1dsya != abopqckbgq . P_6 ) ; if ( localB -> mt5jnqvty1 ) { localB ->
bcwus35002 = localB -> g11yqvtiub_jz50ptvnrg [ 1 ] * localB -> ouopwnt0l5 ;
localB -> hu52fy2qew = localB -> g11yqvtiub_jz50ptvnrg [ 0 ] * localB ->
ih4ljwvyz3 ; localB -> kt2vyh0zq2 = localB -> g11yqvtiub_jz50ptvnrg [ 2 ] *
localB -> cuoiibllhs ; localB -> avedtkdeir = localB -> g11yqvtiub_jz50ptvnrg
[ 0 ] * localB -> cuoiibllhs ; localB -> ef5fduy0he = localB ->
g11yqvtiub_jz50ptvnrg [ 2 ] * localB -> ouopwnt0l5 ; localB -> gcop45soft =
localB -> g11yqvtiub_jz50ptvnrg [ 1 ] * localB -> ih4ljwvyz3 ; localB ->
f3cfsgrk2z [ 0 ] = localB -> gcop45soft - localB -> kt2vyh0zq2 ; localB ->
f3cfsgrk2z [ 1 ] = localB -> ef5fduy0he - localB -> hu52fy2qew ; localB ->
f3cfsgrk2z [ 2 ] = localB -> avedtkdeir - localB -> bcwus35002 ; localB ->
fze1eqloth [ 0 ] = localB -> f3cfsgrk2z [ 0 ] ; localB -> fze1eqloth [ 1 ] =
localB -> f3cfsgrk2z [ 1 ] ; localB -> fze1eqloth [ 2 ] = localB ->
f3cfsgrk2z [ 2 ] ; } else { localB -> fze1eqloth [ 0 ] = localB -> fep3wcprh2
[ 0 ] ; localB -> fze1eqloth [ 1 ] = localB -> fep3wcprh2 [ 1 ] ; localB ->
fze1eqloth [ 2 ] = localB -> fep3wcprh2 [ 2 ] ; } localB -> ltpyaywcqp =
localB -> fze1eqloth [ 2 ] * localB -> fze1eqloth [ 2 ] ; localB ->
f4siibtobg = localB -> fze1eqloth [ 1 ] * localB -> fze1eqloth [ 1 ] ; localB
-> gq0plhui2z = localB -> fze1eqloth [ 0 ] * localB -> fze1eqloth [ 0 ] ;
i55bdf31c4_p = localB -> i55bdf31c4 [ 0 ] ; eezfy0115l_p = i55bdf31c4_p ; u0
= eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
g11yqvtiub_jz50ptvnrg [ 0 ] ; P_9 = eezfy0115l_p * i55bdf31c4_p ;
i55bdf31c4_p = localB -> i55bdf31c4 [ 1 ] ; eezfy0115l_p = i55bdf31c4_p ; u0
+= eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
g11yqvtiub_jz50ptvnrg [ 1 ] ; P_9 += eezfy0115l_p * i55bdf31c4_p ;
i55bdf31c4_p = localB -> i55bdf31c4 [ 2 ] ; eezfy0115l_p = i55bdf31c4_p ; u0
+= eezfy0115l_p * i55bdf31c4_p ; eezfy0115l_p = localB ->
g11yqvtiub_jz50ptvnrg [ 2 ] ; P_9 += eezfy0115l_p * i55bdf31c4_p ; localB ->
et3awjyjyj = u0 ; localB -> csev1iasnl = localB -> a4cosmw5lm_nyxm0bsxsn *
localB -> et3awjyjyj ; localB -> jk0majnude = muDoubleScalarSqrt ( localB ->
csev1iasnl ) ; localB -> n2kvyyoxdb = P_9 ; localB -> fkkw5e5koi = localB ->
n2kvyyoxdb + localB -> jk0majnude ; localB -> as1ygynqht = localB ->
fkkw5e5koi * localB -> fkkw5e5koi ; localB -> a1ts5ugptw = ( ( localB ->
as1ygynqht + localB -> gq0plhui2z ) + localB -> f4siibtobg ) + localB ->
ltpyaywcqp ; localB -> lio1rwy5k5 = muDoubleScalarSqrt ( localB -> a1ts5ugptw
) ; localB -> hr2lnj20rj = localB -> fze1eqloth [ 2 ] / localB -> lio1rwy5k5
; localB -> kzesecjrxj = localB -> mv33t0pc5q * localB -> hr2lnj20rj ; localB
-> cgh5gny5hv = localB -> fze1eqloth [ 1 ] / localB -> lio1rwy5k5 ; localB ->
cmriilrpgm = localB -> gpsncmqs1n * localB -> cgh5gny5hv ; localB ->
nqv0wyt4c4 = localB -> fze1eqloth [ 0 ] / localB -> lio1rwy5k5 ; localB ->
pnkkogr5lv = localB -> lluanupaow * localB -> nqv0wyt4c4 ; localB ->
hxddz4vki0 = localB -> fkkw5e5koi / localB -> lio1rwy5k5 ; localB ->
fe2mfyjhwp = localB -> dxdd53dn5c * localB -> hxddz4vki0 ; localB ->
iz2roo0su3 = ( ( localB -> fe2mfyjhwp - localB -> pnkkogr5lv ) - localB ->
cmriilrpgm ) - localB -> kzesecjrxj ; localB -> birstjnuik = localB ->
mv33t0pc5q * localB -> cgh5gny5hv ; localB -> eb225iytu1 = localB ->
gpsncmqs1n * localB -> hr2lnj20rj ; localB -> et1ffwosiv = localB ->
lluanupaow * localB -> hxddz4vki0 ; localB -> jx05z25abg = localB ->
dxdd53dn5c * localB -> nqv0wyt4c4 ; localB -> cenkdmml5c = ( ( localB ->
jx05z25abg + localB -> et1ffwosiv ) + localB -> eb225iytu1 ) - localB ->
birstjnuik ; localB -> iz2w1kto3z = localB -> mv33t0pc5q * localB ->
nqv0wyt4c4 ; localB -> ed5pilfg2c = localB -> gpsncmqs1n * localB ->
hxddz4vki0 ; localB -> aet11y5rkg = localB -> lluanupaow * localB ->
hr2lnj20rj ; localB -> b4m5skyndx = localB -> dxdd53dn5c * localB ->
cgh5gny5hv ; localB -> cpogodbvj5 = ( ( localB -> b4m5skyndx - localB ->
aet11y5rkg ) + localB -> ed5pilfg2c ) + localB -> iz2w1kto3z ; localB ->
i1cd0gihrf = localB -> mv33t0pc5q * localB -> hxddz4vki0 ; localB ->
dengk2ddaw = localB -> gpsncmqs1n * localB -> nqv0wyt4c4 ; localB ->
ou2j2y0tmf = localB -> lluanupaow * localB -> cgh5gny5hv ; localB ->
jjblk12nf5 = localB -> dxdd53dn5c * localB -> hr2lnj20rj ; localB ->
drji2s4yzw = ( ( localB -> jjblk12nf5 + localB -> ou2j2y0tmf ) - localB ->
dengk2ddaw ) + localB -> i1cd0gihrf ; localB -> mncbjjwvwc [ 0 ] = localB ->
iz2roo0su3 ; localB -> mncbjjwvwc [ 1 ] = localB -> cenkdmml5c ; localB ->
mncbjjwvwc [ 2 ] = localB -> cpogodbvj5 ; localB -> mncbjjwvwc [ 3 ] = localB
-> drji2s4yzw ; } localB -> eva0gxek30 [ 0 ] = localB -> mncbjjwvwc [ 0 ] ;
localB -> eva0gxek30 [ 1 ] = localB -> mncbjjwvwc [ 1 ] ; localB ->
eva0gxek30 [ 2 ] = localB -> mncbjjwvwc [ 2 ] ; localB -> eva0gxek30 [ 3 ] =
localB -> mncbjjwvwc [ 3 ] ; localB -> fsfsyc1psv = localB -> mncbjjwvwc [ 0
] * localB -> mncbjjwvwc [ 0 ] ; localB -> ouypzaxkni = localB -> mncbjjwvwc
[ 1 ] * localB -> mncbjjwvwc [ 1 ] ; localB -> ldzjvrkfor = localB ->
mncbjjwvwc [ 2 ] * localB -> mncbjjwvwc [ 2 ] ; localB -> kevyisdutv = localB
-> mncbjjwvwc [ 3 ] * localB -> mncbjjwvwc [ 3 ] ; localB -> h0maffmfmc = ( (
localB -> fsfsyc1psv + localB -> ouypzaxkni ) + localB -> ldzjvrkfor ) +
localB -> kevyisdutv ; localB -> pybbcxhwgw = muDoubleScalarSqrt ( localB ->
h0maffmfmc ) ; localB -> auz3ups4wx = localB -> mncbjjwvwc [ 0 ] / localB ->
pybbcxhwgw ; localB -> bba3ad1h1n = localB -> mncbjjwvwc [ 1 ] / localB ->
pybbcxhwgw ; localB -> iohyxr4csy = localB -> mncbjjwvwc [ 2 ] / localB ->
pybbcxhwgw ; localB -> oj5mjmwmtk = localB -> mncbjjwvwc [ 3 ] / localB ->
pybbcxhwgw ; localB -> ceogqkolte = ( localB -> bba3ad1h1n * localB ->
oj5mjmwmtk + localB -> auz3ups4wx * localB -> iohyxr4csy ) * 2.0 ; if (
localB -> ceogqkolte > 1.0 ) { localB -> ba0zm3uzwr = abopqckbgq . P_89 ;
srUpdateBC ( localDW -> g2u3gf3pir ) ; } else if ( localB -> ceogqkolte < -
1.0 ) { localB -> ba0zm3uzwr = abopqckbgq . P_90 ; srUpdateBC ( localDW ->
duxa0lwnyy ) ; } else { localB -> ba0zm3uzwr = localB -> ceogqkolte ;
srUpdateBC ( localDW -> m4ktsb34zu ) ; } localB -> a32eudeoqb = ( localB ->
iohyxr4csy * localB -> oj5mjmwmtk - localB -> auz3ups4wx * localB ->
bba3ad1h1n ) * - 2.0 ; localB -> ahmrerjgdn = ( ( localB -> auz3ups4wx *
localB -> auz3ups4wx - localB -> bba3ad1h1n * localB -> bba3ad1h1n ) - localB
-> iohyxr4csy * localB -> iohyxr4csy ) + localB -> oj5mjmwmtk * localB ->
oj5mjmwmtk ; localB -> eajnvfro2c [ 0 ] = muDoubleScalarAtan2 ( localB ->
a32eudeoqb , localB -> ahmrerjgdn ) ; localB -> jiiedsgtma = ( localB ->
bba3ad1h1n * localB -> iohyxr4csy - localB -> auz3ups4wx * localB ->
oj5mjmwmtk ) * - 2.0 ; localB -> ifuv2i1q30 = ( ( localB -> auz3ups4wx *
localB -> auz3ups4wx + localB -> bba3ad1h1n * localB -> bba3ad1h1n ) - localB
-> iohyxr4csy * localB -> iohyxr4csy ) - localB -> oj5mjmwmtk * localB ->
oj5mjmwmtk ; localB -> eajnvfro2c [ 2 ] = muDoubleScalarAtan2 ( localB ->
jiiedsgtma , localB -> ifuv2i1q30 ) ; u0 = localB -> ba0zm3uzwr ; if ( u0 >
1.0 ) { u0 = 1.0 ; } else if ( u0 < - 1.0 ) { u0 = - 1.0 ; } localB ->
eajnvfro2c [ 1 ] = muDoubleScalarAsin ( u0 ) ; localB ->
pf1xmdshjh_ppxrqq0gsf = abopqckbgq . P_134 * abopqckbgq . P_9 [ 1 ] ; localB
-> etyhz1d54p_h22x25zmds = ( abopqckbgq . P_9 [ 0 ] > abopqckbgq . P_9 [ 2 ]
) ; localB -> pybu30gra0_llw0u2ae0v = abopqckbgq . P_137 * abopqckbgq . P_9 [
2 ] ; if ( localB -> etyhz1d54p_h22x25zmds ) { localB ->
p5ythyyc1w_jwzvbuczlb [ 0 ] = localB -> pf1xmdshjh_ppxrqq0gsf ; localB ->
p5ythyyc1w_jwzvbuczlb [ 1 ] = abopqckbgq . P_9 [ 0 ] ; localB ->
p5ythyyc1w_jwzvbuczlb [ 2 ] = abopqckbgq . P_135 ; } else { localB ->
p5ythyyc1w_jwzvbuczlb [ 0 ] = abopqckbgq . P_136 ; localB ->
p5ythyyc1w_jwzvbuczlb [ 1 ] = localB -> pybu30gra0_llw0u2ae0v ; localB ->
p5ythyyc1w_jwzvbuczlb [ 2 ] = abopqckbgq . P_9 [ 1 ] ; } localB ->
jrb3n1e1op_dhmrxtyqop = abopqckbgq . P_9 [ 0 ] * localB ->
p5ythyyc1w_jwzvbuczlb [ 1 ] ; localB -> glokcynnu0_guugdwf2m3 = abopqckbgq .
P_9 [ 1 ] * localB -> p5ythyyc1w_jwzvbuczlb [ 2 ] ; localB ->
ahhv2odar5_ldqodwenvz = localB -> p5ythyyc1w_jwzvbuczlb [ 0 ] * abopqckbgq .
P_9 [ 2 ] ; localB -> bdkn43iyoi_dhamdvybc1 = abopqckbgq . P_9 [ 0 ] * localB
-> p5ythyyc1w_jwzvbuczlb [ 2 ] ; localB -> gupwco05zf_dypejvacrn = localB ->
p5ythyyc1w_jwzvbuczlb [ 0 ] * abopqckbgq . P_9 [ 1 ] ; localB ->
cfpwmg2iv5_lxo5edjg3c = localB -> p5ythyyc1w_jwzvbuczlb [ 1 ] * abopqckbgq .
P_9 [ 2 ] ; localB -> dactqdrvkq_owjr1h1vqy [ 0 ] = localB ->
glokcynnu0_guugdwf2m3 - localB -> cfpwmg2iv5_lxo5edjg3c ; localB ->
dactqdrvkq_owjr1h1vqy [ 1 ] = localB -> ahhv2odar5_ldqodwenvz - localB ->
bdkn43iyoi_dhamdvybc1 ; localB -> dactqdrvkq_owjr1h1vqy [ 2 ] = localB ->
jrb3n1e1op_dhmrxtyqop - localB -> gupwco05zf_dypejvacrn ; localB ->
e0ceu2okzq_bjbgfqrolh = abopqckbgq . P_9 [ 1 ] * abopqckbgq . P_11 [ 2 ] ;
localB -> hehwf2oytc_nuebgmauvi = abopqckbgq . P_11 [ 0 ] * abopqckbgq . P_9
[ 2 ] ; localB -> i44guk2vvg_bsqwvugooi = abopqckbgq . P_9 [ 0 ] * abopqckbgq
. P_11 [ 1 ] ; localB -> gum5tzox3x_lnjdk5wtww = abopqckbgq . P_11 [ 1 ] *
abopqckbgq . P_9 [ 2 ] ; localB -> cncgq4bsmk_hv2ho1zopz = abopqckbgq . P_9 [
0 ] * abopqckbgq . P_11 [ 2 ] ; localB -> nwy4h031y3_bnlywzniup = abopqckbgq
. P_11 [ 0 ] * abopqckbgq . P_9 [ 1 ] ; localB -> dfqjpjarik_dapv3jlyq5 [ 0 ]
= localB -> e0ceu2okzq_bjbgfqrolh - localB -> gum5tzox3x_lnjdk5wtww ; localB
-> dfqjpjarik_dapv3jlyq5 [ 1 ] = localB -> hehwf2oytc_nuebgmauvi - localB ->
cncgq4bsmk_hv2ho1zopz ; localB -> dfqjpjarik_dapv3jlyq5 [ 2 ] = localB ->
i44guk2vvg_bsqwvugooi - localB -> nwy4h031y3_bnlywzniup ; localB ->
l3jo4kejut_ezqlmfzvpq = localB -> dfqjpjarik_dapv3jlyq5 [ 1 ] * abopqckbgq .
P_9 [ 2 ] ; localB -> kwenwqfzm2_bjvjhhzy4i = abopqckbgq . P_9 [ 0 ] * localB
-> dfqjpjarik_dapv3jlyq5 [ 2 ] ; localB -> ale4aanaik_jzx3amusab = localB ->
dfqjpjarik_dapv3jlyq5 [ 0 ] * abopqckbgq . P_9 [ 1 ] ; localB ->
irir3q2hou_fdinthrxmb = abopqckbgq . P_9 [ 1 ] * localB ->
dfqjpjarik_dapv3jlyq5 [ 2 ] ; localB -> k0acye40sn_al00mdgrv4 = localB ->
dfqjpjarik_dapv3jlyq5 [ 0 ] * abopqckbgq . P_9 [ 2 ] ; localB ->
emhhu5s0gl_ju13rw2h0m = abopqckbgq . P_9 [ 0 ] * localB ->
dfqjpjarik_dapv3jlyq5 [ 1 ] ; localB -> g11yqvtiub_jz50ptvnrg [ 0 ] = localB
-> l3jo4kejut_ezqlmfzvpq - localB -> irir3q2hou_fdinthrxmb ; localB ->
g11yqvtiub_jz50ptvnrg [ 1 ] = localB -> kwenwqfzm2_bjvjhhzy4i - localB ->
k0acye40sn_al00mdgrv4 ; localB -> g11yqvtiub_jz50ptvnrg [ 2 ] = localB ->
ale4aanaik_jzx3amusab - localB -> emhhu5s0gl_ju13rw2h0m ; g11yqvtiub_p =
abopqckbgq . P_9 [ 0 ] ; aulmnbewtw_p = abopqckbgq . P_11 [ 0 ] ;
eezfy0115l_p = aulmnbewtw_p ; u0 = g11yqvtiub_p * eezfy0115l_p ; eezfy0115l_p
= g11yqvtiub_p ; i55bdf31c4_p = g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p =
aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; P_9 = g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = localB -> g11yqvtiub_jz50ptvnrg [ 0 ] ;
eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p = g11yqvtiub_p * eezfy0115l_p ;
g11yqvtiub_p = abopqckbgq . P_9 [ 1 ] ; aulmnbewtw_p = abopqckbgq . P_11 [ 1
] ; eezfy0115l_p = aulmnbewtw_p ; u0 += g11yqvtiub_p * eezfy0115l_p ;
eezfy0115l_p = g11yqvtiub_p ; i55bdf31c4_p += g11yqvtiub_p * eezfy0115l_p ;
g11yqvtiub_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ; P_9 +=
g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p = localB -> g11yqvtiub_jz50ptvnrg
[ 1 ] ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p += g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = abopqckbgq . P_9 [ 2 ] ; aulmnbewtw_p =
abopqckbgq . P_11 [ 2 ] ; eezfy0115l_p = aulmnbewtw_p ; u0 += g11yqvtiub_p *
eezfy0115l_p ; eezfy0115l_p = g11yqvtiub_p ; i55bdf31c4_p += g11yqvtiub_p *
eezfy0115l_p ; g11yqvtiub_p = aulmnbewtw_p ; eezfy0115l_p = aulmnbewtw_p ;
P_9 += g11yqvtiub_p * eezfy0115l_p ; g11yqvtiub_p = localB ->
g11yqvtiub_jz50ptvnrg [ 2 ] ; eezfy0115l_p = g11yqvtiub_p ; cfc45nbsjb_p +=
g11yqvtiub_p * eezfy0115l_p ; localB -> jpaaj212yy_mbvzarwird = u0 ; localB
-> czcssosf1z_cl54gopm0x = i55bdf31c4_p ; localB -> aen0aszu3e_kkiq3xxxve =
P_9 ; localB -> gunaobe300_cxarnvbvui = localB -> czcssosf1z_cl54gopm0x *
localB -> aen0aszu3e_kkiq3xxxve ; localB -> ov4vhkp3o2_bhxxfovxdy =
muDoubleScalarSqrt ( localB -> gunaobe300_cxarnvbvui ) ; localB ->
bvzybml4ix_pbm3vprmfu = localB -> jpaaj212yy_mbvzarwird / localB ->
ov4vhkp3o2_bhxxfovxdy ; localB -> lhvbn1u0tx_cv5hdgrwft = localB ->
bvzybml4ix_pbm3vprmfu + abopqckbgq . P_129 ; localB -> kdginuldqs_fqdqrf4qbc
= muDoubleScalarAbs ( localB -> lhvbn1u0tx_cv5hdgrwft ) ; localB ->
dfo0fydpsk_g2mlkqadfk = localB -> bvzybml4ix_pbm3vprmfu + abopqckbgq . P_130
; localB -> bcyepzkahx_g1smspu5ke = muDoubleScalarAbs ( localB ->
dfo0fydpsk_g2mlkqadfk ) ; localB -> ho0jylt0hh_merlcviukg = i55bdf31c4_p ;
localB -> jxalf3d0tm_nz4o0shxby = i55bdf31c4_p ; localB ->
de4u044ohl_o4f35lbcvx = cfc45nbsjb_p ; localB -> a4cosmw5lm_nyxm0bsxsn =
cfc45nbsjb_p ; localB -> mi4apm2zjc_icdfyazkhu = abopqckbgq . P_138 * localB
-> g11yqvtiub_jz50ptvnrg [ 1 ] ; localB -> licbno2boh_eikkpx0qsf = ( localB
-> g11yqvtiub_jz50ptvnrg [ 0 ] > localB -> g11yqvtiub_jz50ptvnrg [ 2 ] ) ;
localB -> hcubmd0liv_oyypvi4boh = abopqckbgq . P_141 * localB ->
g11yqvtiub_jz50ptvnrg [ 2 ] ; if ( localB -> licbno2boh_eikkpx0qsf ) { localB
-> kt0xe204ka_nvsvtgkap4 [ 0 ] = localB -> mi4apm2zjc_icdfyazkhu ; localB ->
kt0xe204ka_nvsvtgkap4 [ 1 ] = localB -> g11yqvtiub_jz50ptvnrg [ 0 ] ; localB
-> kt0xe204ka_nvsvtgkap4 [ 2 ] = abopqckbgq . P_139 ; } else { localB ->
kt0xe204ka_nvsvtgkap4 [ 0 ] = abopqckbgq . P_140 ; localB ->
kt0xe204ka_nvsvtgkap4 [ 1 ] = localB -> hcubmd0liv_oyypvi4boh ; localB ->
kt0xe204ka_nvsvtgkap4 [ 2 ] = localB -> g11yqvtiub_jz50ptvnrg [ 1 ] ; }
localB -> p5lfsonodp_m3yhjduhi1 = localB -> g11yqvtiub_jz50ptvnrg [ 0 ] *
localB -> kt0xe204ka_nvsvtgkap4 [ 1 ] ; localB -> me3p1k22xz_czkfpwuzm5 =
localB -> g11yqvtiub_jz50ptvnrg [ 1 ] * localB -> kt0xe204ka_nvsvtgkap4 [ 2 ]
; localB -> ltbrmuqara_mdoasc5av4 = localB -> kt0xe204ka_nvsvtgkap4 [ 0 ] *
localB -> g11yqvtiub_jz50ptvnrg [ 2 ] ; localB -> msdu4nx1aq_m3ybdk4ikc =
localB -> g11yqvtiub_jz50ptvnrg [ 0 ] * localB -> kt0xe204ka_nvsvtgkap4 [ 2 ]
; localB -> ihwaoscgmh_jacdjrqyev = localB -> kt0xe204ka_nvsvtgkap4 [ 0 ] *
localB -> g11yqvtiub_jz50ptvnrg [ 1 ] ; localB -> kmg1lk4mdb = localB ->
kt0xe204ka_nvsvtgkap4 [ 1 ] * localB -> g11yqvtiub_jz50ptvnrg [ 2 ] ; localB
-> fep3wcprh2 [ 0 ] = localB -> me3p1k22xz_czkfpwuzm5 - localB -> kmg1lk4mdb
; localB -> fep3wcprh2 [ 1 ] = localB -> ltbrmuqara_mdoasc5av4 - localB ->
msdu4nx1aq_m3ybdk4ikc ; localB -> fep3wcprh2 [ 2 ] = localB ->
p5lfsonodp_m3yhjduhi1 - localB -> ihwaoscgmh_jacdjrqyev ; } break ; } }
localB -> be5djkeied . Roll = localB -> eajnvfro2c [ 0 ] ; localB ->
be5djkeied . Pitch = localB -> eajnvfro2c [ 1 ] ; localB -> be5djkeied . Yaw
= localB -> eajnvfro2c [ 2 ] ; a5dz0igc5a -> AttitudeError = localB ->
be5djkeied ; u0 = rtP__gains2f2asbCubeSatModelData_sldd_ . Kp ; eezfy0115l_p
= rtP__gains2f2asbCubeSatModelData_sldd_ . Kd ; cfc45nbsjb_p = localB ->
eajnvfro2c [ 0 ] ; P_9 = u0 * cfc45nbsjb_p ; localB -> au3w5yidgk [ 0 ] = P_9
; i55bdf31c4_p = localDW -> csgaj2fyjn [ 0 ] ; localB -> iupe40uwru [ 0 ] =
i55bdf31c4_p ; cfc45nbsjb_p *= eezfy0115l_p ; localB -> c2454p0jkv [ 0 ] =
cfc45nbsjb_p ; localB -> hivlkmtcjb [ 0 ] = cfc45nbsjb_p ; aulmnbewtw_p =
localDW -> drbjvug1h2 [ 0 ] ; localB -> mntvep4smd [ 0 ] = aulmnbewtw_p ;
cfc45nbsjb_p -= aulmnbewtw_p ; localB -> hpwetwzqv4 [ 0 ] = cfc45nbsjb_p ;
P_9 = ( P_9 + i55bdf31c4_p ) + cfc45nbsjb_p ; localB -> cst45mhli4 [ 0 ] =
P_9 ; a5dz0igc5a -> TorqueCmds [ 0 ] = P_9 ; cfc45nbsjb_p = localB ->
eajnvfro2c [ 1 ] ; P_9 = u0 * cfc45nbsjb_p ; localB -> au3w5yidgk [ 1 ] = P_9
; i55bdf31c4_p = localDW -> csgaj2fyjn [ 1 ] ; localB -> iupe40uwru [ 1 ] =
i55bdf31c4_p ; cfc45nbsjb_p *= eezfy0115l_p ; localB -> c2454p0jkv [ 1 ] =
cfc45nbsjb_p ; localB -> hivlkmtcjb [ 1 ] = cfc45nbsjb_p ; aulmnbewtw_p =
localDW -> drbjvug1h2 [ 1 ] ; localB -> mntvep4smd [ 1 ] = aulmnbewtw_p ;
cfc45nbsjb_p -= aulmnbewtw_p ; localB -> hpwetwzqv4 [ 1 ] = cfc45nbsjb_p ;
P_9 = ( P_9 + i55bdf31c4_p ) + cfc45nbsjb_p ; localB -> cst45mhli4 [ 1 ] =
P_9 ; a5dz0igc5a -> TorqueCmds [ 1 ] = P_9 ; cfc45nbsjb_p = localB ->
eajnvfro2c [ 2 ] ; P_9 = u0 * cfc45nbsjb_p ; localB -> au3w5yidgk [ 2 ] = P_9
; i55bdf31c4_p = localDW -> csgaj2fyjn [ 2 ] ; localB -> iupe40uwru [ 2 ] =
i55bdf31c4_p ; cfc45nbsjb_p *= eezfy0115l_p ; localB -> c2454p0jkv [ 2 ] =
cfc45nbsjb_p ; localB -> hivlkmtcjb [ 2 ] = cfc45nbsjb_p ; aulmnbewtw_p =
localDW -> drbjvug1h2 [ 2 ] ; localB -> mntvep4smd [ 2 ] = aulmnbewtw_p ;
cfc45nbsjb_p -= aulmnbewtw_p ; localB -> hpwetwzqv4 [ 2 ] = cfc45nbsjb_p ;
P_9 = ( P_9 + i55bdf31c4_p ) + cfc45nbsjb_p ; localB -> cst45mhli4 [ 2 ] =
P_9 ; a5dz0igc5a -> TorqueCmds [ 2 ] = P_9 ; a5dz0igc5a -> cmd_q_b2tgt [ 0 ]
= localB -> eva0gxek30 [ 0 ] ; a5dz0igc5a -> cmd_q_b2tgt [ 1 ] = localB ->
eva0gxek30 [ 1 ] ; a5dz0igc5a -> cmd_q_b2tgt [ 2 ] = localB -> eva0gxek30 [ 2
] ; a5dz0igc5a -> cmd_q_b2tgt [ 3 ] = localB -> eva0gxek30 [ 3 ] ; a5dz0igc5a
-> NavMode = * odamlphqyv ; localB -> pldmhcxbbk [ 0 ] =
rtP__gains2f2asbCubeSatModelData_sldd_ . Ki * localB -> eajnvfro2c [ 0 ] ;
localB -> pldmhcxbbk [ 1 ] = rtP__gains2f2asbCubeSatModelData_sldd_ . Ki *
localB -> eajnvfro2c [ 1 ] ; localB -> pldmhcxbbk [ 2 ] =
rtP__gains2f2asbCubeSatModelData_sldd_ . Ki * localB -> eajnvfro2c [ 2 ] ; }
void jj0if5albh ( ophodr0x0g * localB , due31ddxq5 * localDW ) { localDW ->
csgaj2fyjn [ 0 ] += abopqckbgq . P_145 * localB -> pldmhcxbbk [ 0 ] ; localDW
-> drbjvug1h2 [ 0 ] = localB -> hivlkmtcjb [ 0 ] ; localDW -> csgaj2fyjn [ 1
] += abopqckbgq . P_145 * localB -> pldmhcxbbk [ 1 ] ; localDW -> drbjvug1h2
[ 1 ] = localB -> hivlkmtcjb [ 1 ] ; localDW -> csgaj2fyjn [ 2 ] +=
abopqckbgq . P_145 * localB -> pldmhcxbbk [ 2 ] ; localDW -> drbjvug1h2 [ 2 ]
= localB -> hivlkmtcjb [ 2 ] ; } void h1ucxuq2iv ( dgtzqiy1yy * const
fprqfujhwe ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( fprqfujhwe -> _mdlRefSfcnS , "asbCubeSatACS" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void b4vxdooov4 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , dgtzqiy1yy
* const fprqfujhwe , ophodr0x0g * localB , due31ddxq5 * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
fprqfujhwe , 0 , sizeof ( dgtzqiy1yy ) ) ; fprqfujhwe -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; fprqfujhwe -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; fprqfujhwe -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( fprqfujhwe -> _mdlRefSfcnS , "asbCubeSatACS" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( ophodr0x0g ) ) ; { localB -> ool0nntzvr =
asbCubeSatACS_rtZStatesOutBus ; localB -> p5xc1va2sp =
asbCubeSatACS_rtZEnvBus ; localB -> be5djkeied =
asbCubeSatACS_rtZAttitudeErrorBus ; localB -> au3w5yidgk [ 0 ] = 0.0 ; localB
-> au3w5yidgk [ 1 ] = 0.0 ; localB -> au3w5yidgk [ 2 ] = 0.0 ; localB ->
iupe40uwru [ 0 ] = 0.0 ; localB -> iupe40uwru [ 1 ] = 0.0 ; localB ->
iupe40uwru [ 2 ] = 0.0 ; localB -> c2454p0jkv [ 0 ] = 0.0 ; localB ->
c2454p0jkv [ 1 ] = 0.0 ; localB -> c2454p0jkv [ 2 ] = 0.0 ; localB ->
hivlkmtcjb [ 0 ] = 0.0 ; localB -> hivlkmtcjb [ 1 ] = 0.0 ; localB ->
hivlkmtcjb [ 2 ] = 0.0 ; localB -> mntvep4smd [ 0 ] = 0.0 ; localB ->
mntvep4smd [ 1 ] = 0.0 ; localB -> mntvep4smd [ 2 ] = 0.0 ; localB ->
hpwetwzqv4 [ 0 ] = 0.0 ; localB -> hpwetwzqv4 [ 1 ] = 0.0 ; localB ->
hpwetwzqv4 [ 2 ] = 0.0 ; localB -> cst45mhli4 [ 0 ] = 0.0 ; localB ->
cst45mhli4 [ 1 ] = 0.0 ; localB -> cst45mhli4 [ 2 ] = 0.0 ; localB ->
pldmhcxbbk [ 0 ] = 0.0 ; localB -> pldmhcxbbk [ 1 ] = 0.0 ; localB ->
pldmhcxbbk [ 2 ] = 0.0 ; localB -> hfrm0ub4jk = 0.0 ; localB -> eajnvfro2c [
0 ] = 0.0 ; localB -> eajnvfro2c [ 1 ] = 0.0 ; localB -> eajnvfro2c [ 2 ] =
0.0 ; localB -> eva0gxek30 [ 0 ] = 0.0 ; localB -> eva0gxek30 [ 1 ] = 0.0 ;
localB -> eva0gxek30 [ 2 ] = 0.0 ; localB -> eva0gxek30 [ 3 ] = 0.0 ; localB
-> d3odadnzgn = 0.0 ; localB -> fodgyubpjs = 0.0 ; localB -> lzo1k4mul2 = 0.0
; localB -> glx2os2mzw = 0.0 ; localB -> h4g3klusdd = 0.0 ; localB ->
jpaaj212yy = 0.0 ; localB -> czcssosf1z = 0.0 ; localB -> aen0aszu3e = 0.0 ;
localB -> gunaobe300 = 0.0 ; localB -> ov4vhkp3o2 = 0.0 ; localB ->
bvzybml4ix = 0.0 ; localB -> lhvbn1u0tx = 0.0 ; localB -> kdginuldqs = 0.0 ;
localB -> dfo0fydpsk = 0.0 ; localB -> bcyepzkahx = 0.0 ; localB ->
h2zekqoxp5 = 0.0 ; localB -> myzqzjbcu3 = 0.0 ; localB -> lnt5ykhylk = 0.0 ;
localB -> kwbfaqxddn = 0.0 ; localB -> aehfytsgae = 0.0 ; localB ->
acwieewca2 = 0.0 ; localB -> ebv251iwdf = 0.0 ; localB -> ko3pwhar3t = 0.0 ;
localB -> nyxw0kxrtl = 0.0 ; localB -> ho0jylt0hh = 0.0 ; localB ->
k4yv1l0ysr = 0.0 ; localB -> giuiigfwct = 0.0 ; localB -> bbvmxed4yj = 0.0 ;
localB -> emuu1mduk5 = 0.0 ; localB -> jxalf3d0tm = 0.0 ; localB ->
pf1xmdshjh = 0.0 ; localB -> jwzocllfss = 0.0 ; localB -> etyhz1d54p = 0.0 ;
localB -> ghfpen2xfm = 0.0 ; localB -> pybu30gra0 = 0.0 ; localB ->
p5ythyyc1w = 0.0 ; localB -> jrb3n1e1op = 0.0 ; localB -> glokcynnu0 = 0.0 ;
localB -> ahhv2odar5 = 0.0 ; localB -> bdkn43iyoi = 0.0 ; localB ->
gupwco05zf = 0.0 ; localB -> cfpwmg2iv5 = 0.0 ; localB -> dactqdrvkq = 0.0 ;
localB -> e0ceu2okzq = 0.0 ; localB -> hehwf2oytc = 0.0 ; localB ->
i44guk2vvg = 0.0 ; localB -> gum5tzox3x = 0.0 ; localB -> cncgq4bsmk = 0.0 ;
localB -> nwy4h031y3 = 0.0 ; localB -> dfqjpjarik = 0.0 ; localB ->
l3jo4kejut = 0.0 ; localB -> kwenwqfzm2 = 0.0 ; localB -> ale4aanaik = 0.0 ;
localB -> irir3q2hou = 0.0 ; localB -> k0acye40sn = 0.0 ; localB ->
emhhu5s0gl = 0.0 ; localB -> g11yqvtiub = 0.0 ; localB -> de4u044ohl = 0.0 ;
localB -> huvd5fayr4 = 0.0 ; localB -> h3gpqzdq01 = 0.0 ; localB ->
munt1w11is = 0.0 ; localB -> cceagtsjdw = 0.0 ; localB -> a4cosmw5lm = 0.0 ;
localB -> mi4apm2zjc = 0.0 ; localB -> mf0tqbtc3s = 0.0 ; localB ->
licbno2boh = 0.0 ; localB -> ngbbrxa51f = 0.0 ; localB -> hcubmd0liv = 0.0 ;
localB -> kt0xe204ka = 0.0 ; localB -> p5lfsonodp = 0.0 ; localB ->
me3p1k22xz = 0.0 ; localB -> ltbrmuqara = 0.0 ; localB -> msdu4nx1aq = 0.0 ;
localB -> ihwaoscgmh = 0.0 ; localB -> n32d2jxjgp = 0.0 ; localB ->
cfc45nbsjb [ 0 ] = 0.0 ; localB -> cfc45nbsjb [ 1 ] = 0.0 ; localB ->
cfc45nbsjb [ 2 ] = 0.0 ; localB -> cmr51l152v = 0.0 ; localB -> bflzdi334h =
0.0 ; localB -> bv1zkqgzil = 0.0 ; localB -> brmpcz2qbx = 0.0 ; localB ->
o1q4vuuom3 = 0.0 ; localB -> f5qd1ffihn = 0.0 ; localB -> ojtewlm1bq = 0.0 ;
localB -> j4w2ibwt10 = 0.0 ; localB -> joeg0albfh = 0.0 ; localB ->
iejtxnetig = 0.0 ; localB -> ei351ozc14 = 0.0 ; localB -> kr1xvrqq4i = 0.0 ;
localB -> ecnsuqfcc1 = 0.0 ; localB -> jj1lmvybzd = 0.0 ; localB ->
idvdvyq30r = 0.0 ; localB -> ebis0zh5a2 = 0.0 ; localB -> ap1kecuizw = 0.0 ;
localB -> e1klj20zb1 = 0.0 ; localB -> kj4t50kyyc = 0.0 ; localB ->
ot5yr0zw1p = 0.0 ; localB -> mhbkw1ubaj = 0.0 ; localB -> k30n1mbngj = 0.0 ;
localB -> pjm4at2lgs = 0.0 ; localB -> a3e3ursurh = 0.0 ; localB ->
penc24o4z4 = 0.0 ; localB -> npijt2t3rq = 0.0 ; localB -> nz01pnira3 = 0.0 ;
localB -> j1qmfgimhc = 0.0 ; localB -> eyz2vqrxl1 = 0.0 ; localB ->
kqcndwlrpi = 0.0 ; localB -> egewsknas0 = 0.0 ; localB -> dfcpdkz3qy = 0.0 ;
localB -> kuxn0ecyfg = 0.0 ; localB -> cxpwy13ncd = 0.0 ; localB ->
b3iukvqnrj = 0.0 ; localB -> j54kyrrulw = 0.0 ; localB -> ecbttofb24 = 0.0 ;
localB -> maih1xmael = 0.0 ; localB -> jsfmn0pkbx = 0.0 ; localB ->
izpvjcfn1f = 0.0 ; localB -> flxyk5kscq = 0.0 ; localB -> bhp4p2woax = 0.0 ;
localB -> cerm0adi5z = 0.0 ; localB -> nosoehtibn = 0.0 ; localB ->
jyh1hoyxxh = 0.0 ; localB -> gcavehrbsl = 0.0 ; localB -> d4ts3qmblt = 0.0 ;
localB -> kyfj55nzny = 0.0 ; localB -> hqfj2l2jsu = 0.0 ; localB ->
ipaiailov1 = 0.0 ; localB -> g4dcwn3ypt = 0.0 ; localB -> gzqtcwduap = 0.0 ;
localB -> ddqumwzxax = 0.0 ; localB -> h1sv2bid0m = 0.0 ; localB ->
noicpyoaxf = 0.0 ; localB -> iohdyojdtg = 0.0 ; localB -> hwxjns5opb = 0.0 ;
localB -> esbrwlthoz = 0.0 ; localB -> aulmnbewtw [ 0 ] = 0.0 ; localB ->
aulmnbewtw [ 1 ] = 0.0 ; localB -> aulmnbewtw [ 2 ] = 0.0 ; localB ->
b0vinsiowc = 0.0 ; localB -> bwhm53hj2z = 0.0 ; localB -> ghsw34cu0i = 0.0 ;
localB -> khoowgsa0c = 0.0 ; localB -> a0bo2ucid3 = 0.0 ; localB ->
fgbv1nguyc = 0.0 ; localB -> f44vixbdmy = 0.0 ; localB -> hkcvwwbfgd = 0.0 ;
localB -> al2xwqyeer = 0.0 ; localB -> ajwao05aic = 0.0 ; localB ->
mtxmv02bob = 0.0 ; localB -> gnteax5h3n = 0.0 ; localB -> is11124flk = 0.0 ;
localB -> a4mc4bqcds = 0.0 ; localB -> mkrrjil1it = 0.0 ; localB ->
kgb3cpprtp = 0.0 ; localB -> llafrnfn4e = 0.0 ; localB -> dblbijbcto = 0.0 ;
localB -> jlgqmscjl4 = 0.0 ; localB -> dkmxqfklmw = 0.0 ; localB ->
pvxlfzudav = 0.0 ; localB -> b0bs3n34iv = 0.0 ; localB -> b0ib3ldpv5 = 0.0 ;
localB -> hzgyhv32h1 = 0.0 ; localB -> klvszsn1bv = 0.0 ; localB ->
j3gen42ucf = 0.0 ; localB -> l4ypgofdmw = 0.0 ; localB -> es3lwacrnk [ 0 ] =
0.0 ; localB -> es3lwacrnk [ 1 ] = 0.0 ; localB -> es3lwacrnk [ 2 ] = 0.0 ;
localB -> demriltcok = 0.0 ; localB -> hfjpjmuufk = 0.0 ; localB ->
ksvb1lzrjs = 0.0 ; localB -> kafws4sucv = 0.0 ; localB -> eku4uywj5n = 0.0 ;
localB -> dxdd53dn5c = 0.0 ; localB -> alvyyylc1d = 0.0 ; localB ->
a33uo1on3v = 0.0 ; localB -> kf2cj34q4i = 0.0 ; localB -> oinzqb0del = 0.0 ;
localB -> lfrqyw5or4 = 0.0 ; localB -> fy5rojjgaq = 0.0 ; localB ->
pwvm1cvys3 [ 0 ] = 0.0 ; localB -> pwvm1cvys3 [ 1 ] = 0.0 ; localB ->
pwvm1cvys3 [ 2 ] = 0.0 ; localB -> hlmymlwl3i = 0.0 ; localB -> osrebcplyq =
0.0 ; localB -> pexenij4e3 = 0.0 ; localB -> c44lcdg0mx = 0.0 ; localB ->
ofpgkysusa = 0.0 ; localB -> kgwkjraldr = 0.0 ; localB -> izvajsfkfm [ 0 ] =
0.0 ; localB -> izvajsfkfm [ 1 ] = 0.0 ; localB -> izvajsfkfm [ 2 ] = 0.0 ;
localB -> gpsncmqs1n = 0.0 ; localB -> d4yfowfxod = 0.0 ; localB ->
lluanupaow = 0.0 ; localB -> gsdon20h0k = 0.0 ; localB -> mp44bdcztc = 0.0 ;
localB -> mv33t0pc5q = 0.0 ; localB -> bynwhnhoxd = 0.0 ; localB ->
nojgqbps2j = 0.0 ; localB -> glt3qhswla = 0.0 ; localB -> oio3wjtl4j = 0.0 ;
localB -> mrcs11biur = 0.0 ; localB -> ast1d0ii1d = 0.0 ; localB ->
pjp32jmmut = 0.0 ; localB -> mva44vpfc2 = 0.0 ; localB -> dpwnlpjyzf = 0.0 ;
localB -> nqf3ahpofp = 0.0 ; localB -> la2zofuijo = 0.0 ; localB ->
bgjmzqoecp = 0.0 ; localB -> fca11zzkrd = 0.0 ; localB -> aiud22aj0d = 0.0 ;
localB -> luq2usfqsa = 0.0 ; localB -> axkbhn0cny = 0.0 ; localB ->
d504p5qexg = 0.0 ; localB -> mhtbukw4ea = 0.0 ; localB -> ai4mkbbaan = 0.0 ;
localB -> gerr4jmvnh = 0.0 ; localB -> hy3i4x5wqj = 0.0 ; localB ->
gat44e2fg1 = 0.0 ; localB -> ouopwnt0l5 = 0.0 ; localB -> lcpbokipqe = 0.0 ;
localB -> ghenvnxzza = 0.0 ; localB -> hahbm33aeu = 0.0 ; localB ->
m3fkutigpq = 0.0 ; localB -> baht50f5r1 = 0.0 ; localB -> iud0hfcnyz = 0.0 ;
localB -> mmmimr3ju3 = 0.0 ; localB -> oux4ikkkb2 = 0.0 ; localB ->
liuehcys3m = 0.0 ; localB -> cefxrogje3 = 0.0 ; localB -> fp2gqy5zek = 0.0 ;
localB -> fc0sapae1u = 0.0 ; localB -> drctt4evwf = 0.0 ; localB ->
fsykih5kdc = 0.0 ; localB -> edx4w0yjew = 0.0 ; localB -> cuoiibllhs = 0.0 ;
localB -> bpbo53npsh = 0.0 ; localB -> mjs1kyckeb = 0.0 ; localB ->
n12zyyzkzp = 0.0 ; localB -> dnmterkpd5 = 0.0 ; localB -> jajfh4crdy = 0.0 ;
localB -> pr3drqow4z = 0.0 ; localB -> pxsgcjzsik = 0.0 ; localB ->
kjqrgsc3wa = 0.0 ; localB -> clky40vnkm = 0.0 ; localB -> o05achetzf = 0.0 ;
localB -> dvadcxuzy5 = 0.0 ; localB -> gbc4ehbrdc = 0.0 ; localB ->
hkgmxfy014 = 0.0 ; localB -> izs2h4teyx = 0.0 ; localB -> fbut1j1j3z = 0.0 ;
localB -> ih4ljwvyz3 = 0.0 ; localB -> i55bdf31c4 [ 0 ] = 0.0 ; localB ->
i55bdf31c4 [ 1 ] = 0.0 ; localB -> i55bdf31c4 [ 2 ] = 0.0 ; localB ->
p4tltvujqb = 0.0 ; localB -> d5duesvdsg = 0.0 ; localB -> dqw3vltwcr = 0.0 ;
localB -> cief2n5si4 = 0.0 ; localB -> c2iis34dgy = 0.0 ; localB ->
b4vhy4fid0 = 0.0 ; localB -> k3bxfmssr3 = 0.0 ; localB -> eiqg1ejffy = 0.0 ;
localB -> p2cyoh4zu2 = 0.0 ; localB -> lk0jb1dsya = 0.0 ; localB ->
mncbjjwvwc [ 0 ] = 0.0 ; localB -> mncbjjwvwc [ 1 ] = 0.0 ; localB ->
mncbjjwvwc [ 2 ] = 0.0 ; localB -> mncbjjwvwc [ 3 ] = 0.0 ; localB ->
fsfsyc1psv = 0.0 ; localB -> ouypzaxkni = 0.0 ; localB -> ldzjvrkfor = 0.0 ;
localB -> kevyisdutv = 0.0 ; localB -> h0maffmfmc = 0.0 ; localB ->
pybbcxhwgw = 0.0 ; localB -> auz3ups4wx = 0.0 ; localB -> bba3ad1h1n = 0.0 ;
localB -> iohyxr4csy = 0.0 ; localB -> oj5mjmwmtk = 0.0 ; localB ->
ceogqkolte = 0.0 ; localB -> ba0zm3uzwr = 0.0 ; localB -> a32eudeoqb = 0.0 ;
localB -> ahmrerjgdn = 0.0 ; localB -> jiiedsgtma = 0.0 ; localB ->
ifuv2i1q30 = 0.0 ; localB -> jpaaj212yy_mbvzarwird = 0.0 ; localB ->
czcssosf1z_cl54gopm0x = 0.0 ; localB -> aen0aszu3e_kkiq3xxxve = 0.0 ; localB
-> gunaobe300_cxarnvbvui = 0.0 ; localB -> ov4vhkp3o2_bhxxfovxdy = 0.0 ;
localB -> bvzybml4ix_pbm3vprmfu = 0.0 ; localB -> lhvbn1u0tx_cv5hdgrwft = 0.0
; localB -> kdginuldqs_fqdqrf4qbc = 0.0 ; localB -> dfo0fydpsk_g2mlkqadfk =
0.0 ; localB -> bcyepzkahx_g1smspu5ke = 0.0 ; localB -> ho0jylt0hh_merlcviukg
= 0.0 ; localB -> jxalf3d0tm_nz4o0shxby = 0.0 ; localB ->
pf1xmdshjh_ppxrqq0gsf = 0.0 ; localB -> pybu30gra0_llw0u2ae0v = 0.0 ; localB
-> p5ythyyc1w_jwzvbuczlb [ 0 ] = 0.0 ; localB -> p5ythyyc1w_jwzvbuczlb [ 1 ]
= 0.0 ; localB -> p5ythyyc1w_jwzvbuczlb [ 2 ] = 0.0 ; localB ->
jrb3n1e1op_dhmrxtyqop = 0.0 ; localB -> glokcynnu0_guugdwf2m3 = 0.0 ; localB
-> ahhv2odar5_ldqodwenvz = 0.0 ; localB -> bdkn43iyoi_dhamdvybc1 = 0.0 ;
localB -> gupwco05zf_dypejvacrn = 0.0 ; localB -> cfpwmg2iv5_lxo5edjg3c = 0.0
; localB -> dactqdrvkq_owjr1h1vqy [ 0 ] = 0.0 ; localB ->
dactqdrvkq_owjr1h1vqy [ 1 ] = 0.0 ; localB -> dactqdrvkq_owjr1h1vqy [ 2 ] =
0.0 ; localB -> e0ceu2okzq_bjbgfqrolh = 0.0 ; localB -> hehwf2oytc_nuebgmauvi
= 0.0 ; localB -> i44guk2vvg_bsqwvugooi = 0.0 ; localB ->
gum5tzox3x_lnjdk5wtww = 0.0 ; localB -> cncgq4bsmk_hv2ho1zopz = 0.0 ; localB
-> nwy4h031y3_bnlywzniup = 0.0 ; localB -> dfqjpjarik_dapv3jlyq5 [ 0 ] = 0.0
; localB -> dfqjpjarik_dapv3jlyq5 [ 1 ] = 0.0 ; localB ->
dfqjpjarik_dapv3jlyq5 [ 2 ] = 0.0 ; localB -> l3jo4kejut_ezqlmfzvpq = 0.0 ;
localB -> kwenwqfzm2_bjvjhhzy4i = 0.0 ; localB -> ale4aanaik_jzx3amusab = 0.0
; localB -> irir3q2hou_fdinthrxmb = 0.0 ; localB -> k0acye40sn_al00mdgrv4 =
0.0 ; localB -> emhhu5s0gl_ju13rw2h0m = 0.0 ; localB -> g11yqvtiub_jz50ptvnrg
[ 0 ] = 0.0 ; localB -> g11yqvtiub_jz50ptvnrg [ 1 ] = 0.0 ; localB ->
g11yqvtiub_jz50ptvnrg [ 2 ] = 0.0 ; localB -> de4u044ohl_o4f35lbcvx = 0.0 ;
localB -> a4cosmw5lm_nyxm0bsxsn = 0.0 ; localB -> mi4apm2zjc_icdfyazkhu = 0.0
; localB -> hcubmd0liv_oyypvi4boh = 0.0 ; localB -> kt0xe204ka_nvsvtgkap4 [ 0
] = 0.0 ; localB -> kt0xe204ka_nvsvtgkap4 [ 1 ] = 0.0 ; localB ->
kt0xe204ka_nvsvtgkap4 [ 2 ] = 0.0 ; localB -> p5lfsonodp_m3yhjduhi1 = 0.0 ;
localB -> me3p1k22xz_czkfpwuzm5 = 0.0 ; localB -> ltbrmuqara_mdoasc5av4 = 0.0
; localB -> msdu4nx1aq_m3ybdk4ikc = 0.0 ; localB -> ihwaoscgmh_jacdjrqyev =
0.0 ; localB -> kmg1lk4mdb = 0.0 ; localB -> fep3wcprh2 [ 0 ] = 0.0 ; localB
-> fep3wcprh2 [ 1 ] = 0.0 ; localB -> fep3wcprh2 [ 2 ] = 0.0 ; localB ->
fze1eqloth [ 0 ] = 0.0 ; localB -> fze1eqloth [ 1 ] = 0.0 ; localB ->
fze1eqloth [ 2 ] = 0.0 ; localB -> ltpyaywcqp = 0.0 ; localB -> f4siibtobg =
0.0 ; localB -> gq0plhui2z = 0.0 ; localB -> et3awjyjyj = 0.0 ; localB ->
csev1iasnl = 0.0 ; localB -> jk0majnude = 0.0 ; localB -> n2kvyyoxdb = 0.0 ;
localB -> fkkw5e5koi = 0.0 ; localB -> as1ygynqht = 0.0 ; localB ->
a1ts5ugptw = 0.0 ; localB -> lio1rwy5k5 = 0.0 ; localB -> hr2lnj20rj = 0.0 ;
localB -> kzesecjrxj = 0.0 ; localB -> cgh5gny5hv = 0.0 ; localB ->
cmriilrpgm = 0.0 ; localB -> nqv0wyt4c4 = 0.0 ; localB -> pnkkogr5lv = 0.0 ;
localB -> hxddz4vki0 = 0.0 ; localB -> fe2mfyjhwp = 0.0 ; localB ->
iz2roo0su3 = 0.0 ; localB -> birstjnuik = 0.0 ; localB -> eb225iytu1 = 0.0 ;
localB -> et1ffwosiv = 0.0 ; localB -> jx05z25abg = 0.0 ; localB ->
cenkdmml5c = 0.0 ; localB -> iz2w1kto3z = 0.0 ; localB -> ed5pilfg2c = 0.0 ;
localB -> aet11y5rkg = 0.0 ; localB -> b4m5skyndx = 0.0 ; localB ->
cpogodbvj5 = 0.0 ; localB -> i1cd0gihrf = 0.0 ; localB -> dengk2ddaw = 0.0 ;
localB -> ou2j2y0tmf = 0.0 ; localB -> jjblk12nf5 = 0.0 ; localB ->
drji2s4yzw = 0.0 ; localB -> bcwus35002 = 0.0 ; localB -> hu52fy2qew = 0.0 ;
localB -> kt2vyh0zq2 = 0.0 ; localB -> avedtkdeir = 0.0 ; localB ->
ef5fduy0he = 0.0 ; localB -> gcop45soft = 0.0 ; localB -> f3cfsgrk2z [ 0 ] =
0.0 ; localB -> f3cfsgrk2z [ 1 ] = 0.0 ; localB -> f3cfsgrk2z [ 2 ] = 0.0 ;
localB -> bz1gjtuoqb = 0.0 ; localB -> d0uguxmxbq = 0.0 ; localB ->
ln5urmh5mw = 0.0 ; localB -> frgsgtn1mp = 0.0 ; localB -> edxv3qgybn = 0.0 ;
localB -> b1r1wuoueq = 0.0 ; localB -> dvprdrli5v [ 0 ] = 0.0 ; localB ->
dvprdrli5v [ 1 ] = 0.0 ; localB -> dvprdrli5v [ 2 ] = 0.0 ; localB ->
bjczw412ug [ 0 ] = 0.0 ; localB -> bjczw412ug [ 1 ] = 0.0 ; localB ->
bjczw412ug [ 2 ] = 0.0 ; localB -> oy4fgz3okb = 0.0 ; localB -> ofl0shskgn =
0.0 ; localB -> g0d2oofefn = 0.0 ; localB -> cxjpeok45y = 0.0 ; localB ->
oilxbs5p0c = 0.0 ; localB -> d4yitlrmpe = 0.0 ; localB -> nl40dhi54m = 0.0 ;
localB -> b2mfztbda1 = 0.0 ; localB -> dzo5rpb5em = 0.0 ; localB ->
mn3cjqchah = 0.0 ; localB -> kb1j2xuv2x = 0.0 ; localB -> okogcmjrp1 = 0.0 ;
localB -> am1yajpkp5 = 0.0 ; localB -> o2ygwce3mu = 0.0 ; localB ->
krqzbeb01l = 0.0 ; localB -> moxzrom4e2 = 0.0 ; localB -> owvd0qhkab = 0.0 ;
localB -> cbdkowkpf3 = 0.0 ; localB -> h3jeczv0h3 = 0.0 ; localB ->
jrlpuigzhc = 0.0 ; localB -> caxzxod1me = 0.0 ; localB -> dxhva2syhh = 0.0 ;
localB -> ljhg4ah1hn = 0.0 ; localB -> o44hoe01oz = 0.0 ; localB ->
o4dw42eqdy = 0.0 ; localB -> ddi5il0z53 = 0.0 ; localB -> gqcj1nfmop = 0.0 ;
localB -> lc1r4vfhet = 0.0 ; localB -> mx012h1x4e = 0.0 ; localB ->
fccc45xdiq = 0.0 ; localB -> npmajomj43 = 0.0 ; localB -> icfur12eqa = 0.0 ;
localB -> jy3su1yaqh = 0.0 ; localB -> pll4iy2ltw = 0.0 ; localB ->
fzdkoxuw3r = 0.0 ; localB -> fd3it4cm3p = 0.0 ; localB -> ok00ebomfe = 0.0 ;
localB -> bxscoc0iwo = 0.0 ; localB -> bbygxkv5lv = 0.0 ; localB ->
pjp0mnhgft = 0.0 ; localB -> aut5hni3kn = 0.0 ; localB -> d5qrgk5srt = 0.0 ;
localB -> k4b5tiznc1 = 0.0 ; localB -> kw0t1qhdx3 = 0.0 ; localB ->
nxifsgxc2x = 0.0 ; localB -> g2jc0no1mq = 0.0 ; localB -> hv2xsvyytk = 0.0 ;
localB -> bcdlg34pt3 = 0.0 ; localB -> lg2isztegk = 0.0 ; localB ->
cw4hetqa4a = 0.0 ; localB -> d1sbs2pkf3 = 0.0 ; localB -> nfdsdifffn = 0.0 ;
localB -> ioivmki1h5 = 0.0 ; localB -> ljleij1km3 = 0.0 ; localB ->
nnyklgzqdv = 0.0 ; localB -> le1y3tomzf = 0.0 ; localB -> phopglwagr = 0.0 ;
localB -> pkaclggswi = 0.0 ; localB -> ccu3jt5v2w = 0.0 ; localB ->
pkpl3cgh2d = 0.0 ; localB -> nhdyrg1ri3 = 0.0 ; localB -> g0drkrngsr = 0.0 ;
localB -> g4yahc00wc = 0.0 ; localB -> mgy2tx4uj0 = 0.0 ; localB ->
j55rmyfoop = 0.0 ; localB -> i30rvmobjs = 0.0 ; localB -> hbxw1z240h = 0.0 ;
localB -> ayebppg4gx = 0.0 ; localB -> mlbbs4fqao = 0.0 ; localB ->
nsqipfztjp = 0.0 ; localB -> ied0h2kyh4 = 0.0 ; localB -> mlq3m1iq03 = 0.0 ;
localB -> m32g5gho0y = 0.0 ; localB -> npxvfyksso = 0.0 ; localB ->
e2eydg5nti = 0.0 ; localB -> p35guikpkx = 0.0 ; localB -> ec0syteeth = 0.0 ;
localB -> ep2mm5jz5g = 0.0 ; localB -> byxaey0x2e = 0.0 ; localB ->
evsphivwme = 0.0 ; localB -> mn4qnpiisu = 0.0 ; localB -> dg1abadomh [ 0 ] =
0.0 ; localB -> dg1abadomh [ 1 ] = 0.0 ; localB -> dg1abadomh [ 2 ] = 0.0 ;
localB -> etb30mxmsv = 0.0 ; localB -> glxglw03ek = 0.0 ; localB ->
n541cz4kc4 = 0.0 ; localB -> bmrs115gg5 = 0.0 ; localB -> fzuuudcvoz = 0.0 ;
localB -> jgrywmthgg = 0.0 ; localB -> l4qn0wlr0t [ 0 ] = 0.0 ; localB ->
l4qn0wlr0t [ 1 ] = 0.0 ; localB -> l4qn0wlr0t [ 2 ] = 0.0 ; localB ->
agwhucmw4a = 0.0 ; localB -> db55uyfujk = 0.0 ; localB -> hicmxn41fn = 0.0 ;
localB -> bt12pjuurh = 0.0 ; localB -> m1z4jkd45v = 0.0 ; localB ->
lrisupmyps = 0.0 ; localB -> ljvwgfcthm [ 0 ] = 0.0 ; localB -> ljvwgfcthm [
1 ] = 0.0 ; localB -> ljvwgfcthm [ 2 ] = 0.0 ; localB -> ahpliz1e1p [ 0 ] =
0.0 ; localB -> ahpliz1e1p [ 1 ] = 0.0 ; localB -> ahpliz1e1p [ 2 ] = 0.0 ;
localB -> afdifrnx0o = 0.0 ; localB -> eezfy0115l [ 0 ] = 0.0 ; localB ->
eezfy0115l [ 1 ] = 0.0 ; localB -> eezfy0115l [ 2 ] = 0.0 ; localB ->
lnuwwpg5ug [ 0 ] = 0.0 ; localB -> lnuwwpg5ug [ 1 ] = 0.0 ; localB ->
lnuwwpg5ug [ 2 ] = 0.0 ; localB -> j3ga1oyuck = 0.0 ; localB -> mrblli0fpi =
0.0 ; localB -> fkdijksvcv = 0.0 ; localB -> pt3iorklut = 0.0 ; localB ->
jjdn5hhzge = 0.0 ; localB -> aqnp4cfgwe = 0.0 ; localB -> ebc3bll03g = 0.0 ;
localB -> ndfwtndhb2 = 0.0 ; localB -> f0mhs3a4rd = 0.0 ; localB ->
lori3upyy2 = 0.0 ; localB -> ekdzdlnhil = 0.0 ; localB -> iwkcx0lavi = 0.0 ;
localB -> o4yd4b4gzf = 0.0 ; localB -> cpusfl2sar = 0.0 ; localB ->
p0e0vtyjru = 0.0 ; localB -> dlsbwzhxr4 = 0.0 ; localB -> aasjpcgrqs = 0.0 ;
localB -> pmbdp4ddbl = 0.0 ; localB -> iv1ukfp1hd = 0.0 ; localB ->
geq0gvkcrx = 0.0 ; localB -> oxu45avetf = 0.0 ; localB -> lbgwnudhf3 = 0.0 ;
localB -> etfy3m1bru = 0.0 ; localB -> pdyuavc2jy = 0.0 ; localB ->
n1fcoqkpg3 = 0.0 ; localB -> hm1zxbrphi = 0.0 ; localB -> agjasow33a = 0.0 ;
localB -> hee2xb0e3y = 0.0 ; localB -> giwnupiv41 = 0.0 ; localB ->
hc1vhewxx2 = 0.0 ; localB -> o2czp4pxpi = 0.0 ; localB -> byqmxcdqdo [ 0 ] =
0.0 ; localB -> byqmxcdqdo [ 1 ] = 0.0 ; localB -> byqmxcdqdo [ 2 ] = 0.0 ;
localB -> bpyazwfbkd [ 0 ] = 0.0 ; localB -> bpyazwfbkd [ 1 ] = 0.0 ; localB
-> bpyazwfbkd [ 2 ] = 0.0 ; localB -> kawuvckvyr [ 0 ] = 0.0 ; localB ->
kawuvckvyr [ 1 ] = 0.0 ; localB -> kawuvckvyr [ 2 ] = 0.0 ; localB ->
jbsnkvz0di = 0.0 ; localB -> lqbpxct3qp = 0.0 ; localB -> fn2z54iays = 0.0 ;
localB -> eohy2rd4a4 = 0.0 ; localB -> hxb4vrni02 = 0.0 ; localB ->
fqynvuyycv = 0.0 ; localB -> dnekb3ylbz = 0.0 ; localB -> egd2x3b42d = 0.0 ;
localB -> causmkh21x = 0.0 ; localB -> hvhu304r2r = 0.0 ; localB ->
ozooxpy2ht = 0.0 ; localB -> mndxssdo01 = 0.0 ; localB -> hnzm5biay5 = 0.0 ;
localB -> j5yi5zwe0m = 0.0 ; localB -> ck0xndebxb = 0.0 ; localB ->
gx42flf332 = 0.0 ; localB -> iimemfbj1j = 0.0 ; localB -> gzm43st2xf = 0.0 ;
localB -> p3cu53gvm4 = 0.0 ; localB -> fqkrnszdxr = 0.0 ; localB ->
ejangytgog = 0.0 ; localB -> mm1olqviq0 = 0.0 ; localB -> k44r2lq5zi = 0.0 ;
localB -> p3llpzcon2 = 0.0 ; localB -> pkb3fbobtq = 0.0 ; localB ->
ndev3kmaqo = 0.0 ; localB -> iitpu0db13 = 0.0 ; localB -> biy4ycq4xn = 0.0 ;
localB -> jmha5x3bse = 0.0 ; localB -> osbykivhho = 0.0 ; localB ->
hq21ywahrw = 0.0 ; localB -> pb231gezyc = 0.0 ; localB -> knqusqhaxz = 0.0 ;
localB -> bot4qcnl3h = 0.0 ; localB -> ju2rgaiwab = 0.0 ; localB ->
cuyvgrwyjq = 0.0 ; localB -> ihr23c3nfm = 0.0 ; localB -> gqehaoywi5 = 0.0 ;
localB -> jmebeghu43 = 0.0 ; localB -> lgjhe3i5tp = 0.0 ; localB ->
kknswnzgar = 0.0 ; localB -> npiw0h41ov = 0.0 ; localB -> o4elbvptle = 0.0 ;
localB -> axdpxmsalb = 0.0 ; localB -> pdynksfixu = 0.0 ; localB ->
eldkjarxwa = 0.0 ; localB -> orywbc4cl5 = 0.0 ; localB -> lt2hx2wr0q = 0.0 ;
localB -> dcverjtere [ 0 ] = 0.0 ; localB -> dcverjtere [ 1 ] = 0.0 ; localB
-> dcverjtere [ 2 ] = 0.0 ; localB -> pnykh1l0uu = 0.0 ; localB -> famiddnr2p
= 0.0 ; localB -> erolfntca5 = 0.0 ; localB -> nhxpebouz0 = 0.0 ; localB ->
dv4s1bllvm = 0.0 ; localB -> njzoclsfrw = 0.0 ; localB -> gkj32djha1 = 0.0 ;
localB -> jpsem5kzpa = 0.0 ; localB -> opgoqfynbk = 0.0 ; localB ->
fzdu1bw0eq = 0.0 ; localB -> bvgybwoesr = 0.0 ; localB -> gjyddckmfw = 0.0 ;
localB -> mxolqqyrsh = 0.0 ; localB -> d0gpkwcwsz = 0.0 ; localB ->
ecqe5qsszq = 0.0 ; localB -> o34sdvhd0t = 0.0 ; localB -> nejfa4cive = 0.0 ;
localB -> mogbelzrvm = 0.0 ; localB -> b4tceedauc = 0.0 ; localB ->
mloup0leue = 0.0 ; localB -> hwf5oytlj3 = 0.0 ; localB -> ewnxwss35j = 0.0 ;
localB -> lqypjp3o31 = 0.0 ; localB -> ckeankaivt = 0.0 ; localB ->
dxnwzic3ry = 0.0 ; localB -> gm5d1w405k = 0.0 ; localB -> epo5mzwugv = 0.0 ;
localB -> eu0zkvqcss = 0.0 ; localB -> ngddbpyr12 = 0.0 ; localB ->
i1h1avmx4p = 0.0 ; localB -> l2ocykfp5v = 0.0 ; localB -> n13b5y24ff = 0.0 ;
localB -> lskp2xkenu = 0.0 ; localB -> ougw0bes4c = 0.0 ; localB ->
cla0xgqqil = 0.0 ; localB -> nhegb3bljs = 0.0 ; localB -> kbjn45aotw = 0.0 ;
localB -> nggjvy3hkt = 0.0 ; localB -> htnbixkhek = 0.0 ; localB ->
k0k0usb52x = 0.0 ; localB -> g52gdp4kin = 0.0 ; localB -> kb0ryg5dhg = 0.0 ;
localB -> nvgi1erz12 = 0.0 ; localB -> pkws233urp = 0.0 ; localB ->
gqpgn5ktxa = 0.0 ; localB -> mb24zlt2cy = 0.0 ; localB -> ntihw5sbjd = 0.0 ;
localB -> gof5340kkx = 0.0 ; localB -> d2rc3ibhk0 = 0.0 ; localB ->
epkeyt301b = 0.0 ; localB -> luywqi2ior = 0.0 ; localB -> cpif1eq3mm = 0.0 ;
localB -> mr4kqey1h1 = 0.0 ; localB -> mqvdudwbs0 = 0.0 ; localB ->
n2hred2weo = 0.0 ; localB -> fu1bxhersx = 0.0 ; localB -> jgb2wihvax = 0.0 ;
localB -> iycqa0hlfu = 0.0 ; localB -> gwhdsxmtaq [ 0 ] = 0.0 ; localB ->
gwhdsxmtaq [ 1 ] = 0.0 ; localB -> gwhdsxmtaq [ 2 ] = 0.0 ; localB ->
fbe3yalwvk = 0.0 ; localB -> daz5i3fp3z = 0.0 ; localB -> kdv2vetsd4 = 0.0 ;
localB -> gcnwjt5vnt = 0.0 ; localB -> ab50kblc1h = 0.0 ; localB ->
ou1fgxptgz = 0.0 ; localB -> hebyha2jan = 0.0 ; localB -> cxbamchcdn = 0.0 ;
localB -> egtmju4m0t = 0.0 ; localB -> ggliyr2azb = 0.0 ; localB ->
ea5nunjvdj = 0.0 ; localB -> osp1o22rda = 0.0 ; localB -> bxxxu5bwho = 0.0 ;
localB -> jhbzhadq4q = 0.0 ; localB -> coh0mstb42 = 0.0 ; localB ->
jnyglzy4dk = 0.0 ; localB -> hvxwz1vz3c = 0.0 ; localB -> bxg5g3zdkx = 0.0 ;
localB -> lvl001jgra = 0.0 ; localB -> bkef4tcfj5 = 0.0 ; localB ->
d00vlavgmu = 0.0 ; localB -> kstypcc31r = 0.0 ; localB -> oe4dpjejx1 = 0.0 ;
localB -> jdvrkdcl5m = 0.0 ; localB -> ehtmgsase3 = 0.0 ; localB ->
on50o5cfd4 = 0.0 ; localB -> e2qflkqxme = 0.0 ; localB -> bwgvonrywj [ 0 ] =
0.0 ; localB -> bwgvonrywj [ 1 ] = 0.0 ; localB -> bwgvonrywj [ 2 ] = 0.0 ;
localB -> izw54oqg3g = 0.0 ; localB -> krdiev1g22 = 0.0 ; localB ->
ih0ttwlfcj = 0.0 ; localB -> ktcdg14d2l = 0.0 ; localB -> gqhfn3hukz = 0.0 ;
localB -> gfuclxattu = 0.0 ; localB -> pg5opvcrvh = 0.0 ; localB ->
ohiz2bpqhh = 0.0 ; localB -> b0fmiw0h2k = 0.0 ; localB -> hmzlvsezex = 0.0 ;
localB -> pcbplvsuqj = 0.0 ; localB -> bcih1onunj = 0.0 ; localB ->
pz44ami1qa [ 0 ] = 0.0 ; localB -> pz44ami1qa [ 1 ] = 0.0 ; localB ->
pz44ami1qa [ 2 ] = 0.0 ; localB -> hdncwc5fdq = 0.0 ; localB -> kwpnv2rcpo =
0.0 ; localB -> d5rgzq2tvx = 0.0 ; localB -> j5yf3xat2v = 0.0 ; localB ->
hrkro30xus = 0.0 ; localB -> iefvnwwjyt = 0.0 ; localB -> g4ewvtnxzf [ 0 ] =
0.0 ; localB -> g4ewvtnxzf [ 1 ] = 0.0 ; localB -> g4ewvtnxzf [ 2 ] = 0.0 ;
localB -> jm3m25bbb2 = 0.0 ; localB -> gd1cqa4zrx = 0.0 ; localB ->
g5t4vavgkm = 0.0 ; localB -> icyllkenls = 0.0 ; localB -> aq42vatfbe = 0.0 ;
localB -> f4ejwfkds5 = 0.0 ; localB -> fio5ggjtz4 = 0.0 ; localB ->
nm35qh3zu3 = 0.0 ; localB -> bpjgo1njll = 0.0 ; localB -> pntfmsjbtn = 0.0 ;
localB -> lk4t5si4ze = 0.0 ; localB -> mggrlncne4 = 0.0 ; localB ->
el50wvophu = 0.0 ; localB -> a4zudisqko = 0.0 ; localB -> kzycw52ejt = 0.0 ;
localB -> hp4ufb2oze = 0.0 ; localB -> pxo5ezwv0g = 0.0 ; localB ->
nyfow5mrge = 0.0 ; localB -> bksedwpvip = 0.0 ; localB -> nxqqmeatul = 0.0 ;
localB -> pgphduumir = 0.0 ; localB -> m1sc5t5ela = 0.0 ; localB ->
hmykqehskp = 0.0 ; localB -> iysjb31p2t = 0.0 ; localB -> c21izmax0z = 0.0 ;
localB -> dmx1oysjlt = 0.0 ; localB -> ppzpnv2e3i = 0.0 ; localB ->
ea43ud3w4p = 0.0 ; localB -> eajaumkk43 = 0.0 ; localB -> f22olq3k3u = 0.0 ;
localB -> omu3glusyp = 0.0 ; localB -> b4e3y4mqrh = 0.0 ; localB ->
bmtjf3bm54 = 0.0 ; localB -> bt0fpawuup = 0.0 ; localB -> lpjuypkr20 = 0.0 ;
localB -> byubrgg54v = 0.0 ; localB -> bm3sl4vywz = 0.0 ; localB ->
nuf03svhyi = 0.0 ; localB -> ap0gzzkhfq = 0.0 ; localB -> cstrhea5p5 = 0.0 ;
localB -> fxeoc2bvwc = 0.0 ; localB -> mshngjj1xo = 0.0 ; localB ->
ig1krgspx2 = 0.0 ; localB -> poswq35ses = 0.0 ; localB -> knwf3igq3m = 0.0 ;
localB -> m5mxsaorav = 0.0 ; localB -> e4yms3rzr1 = 0.0 ; localB ->
b4rpx3r1t1 = 0.0 ; localB -> miqiol3cw1 = 0.0 ; localB -> aoyku4xzoc = 0.0 ;
localB -> mntsxbtdsv = 0.0 ; localB -> kkdaxsazqy = 0.0 ; localB ->
e3hxopmdit = 0.0 ; localB -> j1anqoqr5z = 0.0 ; localB -> it2b121c5v = 0.0 ;
localB -> hgblyiczhq = 0.0 ; localB -> ckmdjiurfo = 0.0 ; localB ->
okzmpwrkaf = 0.0 ; localB -> m2yqc5dpa2 = 0.0 ; localB -> dmkwu2mgu1 = 0.0 ;
localB -> mlnawjq3c4 = 0.0 ; localB -> bd0rx40fsv [ 0 ] = 0.0 ; localB ->
bd0rx40fsv [ 1 ] = 0.0 ; localB -> bd0rx40fsv [ 2 ] = 0.0 ; localB ->
nif21oiusf = 0.0 ; localB -> et2yyla4gc = 0.0 ; localB -> gjkvmbojd1 = 0.0 ;
localB -> o0lvy3fyxu = 0.0 ; localB -> cfepvck034 = 0.0 ; localB ->
ifeq1sbzol = 0.0 ; localB -> oviasilnmi = 0.0 ; localB -> mqw4bi2sim = 0.0 ;
localB -> inufxuou0o = 0.0 ; localB -> mwiosqwbdf = 0.0 ; localB ->
dsml5wy5qc [ 0 ] = 0.0 ; localB -> dsml5wy5qc [ 1 ] = 0.0 ; localB ->
dsml5wy5qc [ 2 ] = 0.0 ; localB -> dsml5wy5qc [ 3 ] = 0.0 ; localB ->
owqjvnpw0p = 0.0 ; localB -> c25ls5pdce = 0.0 ; localB -> po2am01g3q = 0.0 ;
localB -> fx5k5czumc = 0.0 ; localB -> pegjrnaxqm = 0.0 ; localB ->
jqtlywacmr = 0.0 ; localB -> bw3pflfgbf = 0.0 ; localB -> awnqlou4an = 0.0 ;
localB -> ekhrfsceyv = 0.0 ; localB -> ibuevqycit = 0.0 ; localB ->
p34dq44x5s = 0.0 ; localB -> axt4bl01jm = 0.0 ; localB -> bgnqrybgws = 0.0 ;
localB -> mybab5em2j = 0.0 ; localB -> fgfr5h5b4m = 0.0 ; localB ->
js1mes1qs3 = 0.0 ; localB -> cbdkowkpf3_h522xzlxvt = 0.0 ; localB ->
h3jeczv0h3_c0dok3111h = 0.0 ; localB -> jrlpuigzhc_ctvw0tpkon = 0.0 ; localB
-> caxzxod1me_pxqvlbal2i = 0.0 ; localB -> dxhva2syhh_p5h3gwuwqg = 0.0 ;
localB -> ljhg4ah1hn_afnsueciae = 0.0 ; localB -> o44hoe01oz_evg4t2fsev = 0.0
; localB -> o4dw42eqdy_ax3wx1gs5w = 0.0 ; localB -> ddi5il0z53_as0qznsxlv =
0.0 ; localB -> gqcj1nfmop_ifotjnizh4 = 0.0 ; localB -> ok00ebomfe_ltu3syw14q
= 0.0 ; localB -> d5qrgk5srt_ojunzewo4f = 0.0 ; localB ->
k4b5tiznc1_o2tow3gxzm = 0.0 ; localB -> hv2xsvyytk_ipgns4eet5 = 0.0 ; localB
-> bcdlg34pt3_fkr0r45bcn [ 0 ] = 0.0 ; localB -> bcdlg34pt3_fkr0r45bcn [ 1 ]
= 0.0 ; localB -> bcdlg34pt3_fkr0r45bcn [ 2 ] = 0.0 ; localB ->
lg2isztegk_izlwqhinl5 = 0.0 ; localB -> cw4hetqa4a_fft32lqtda = 0.0 ; localB
-> d1sbs2pkf3_gxhmnjv5xa = 0.0 ; localB -> nfdsdifffn_covwwkkf2n = 0.0 ;
localB -> ioivmki1h5_o32uf0f2k4 = 0.0 ; localB -> ljleij1km3_lmeaga4sr3 = 0.0
; localB -> nnyklgzqdv_mvr1suhnoo [ 0 ] = 0.0 ; localB ->
nnyklgzqdv_mvr1suhnoo [ 1 ] = 0.0 ; localB -> nnyklgzqdv_mvr1suhnoo [ 2 ] =
0.0 ; localB -> le1y3tomzf_mjmkwwa5je = 0.0 ; localB -> phopglwagr_cnk35bhqvj
= 0.0 ; localB -> pkaclggswi_fme3ifz5tm = 0.0 ; localB ->
ccu3jt5v2w_p43y5eooqm = 0.0 ; localB -> pkpl3cgh2d_e13kp1af4b = 0.0 ; localB
-> nhdyrg1ri3_o4akcuk44c = 0.0 ; localB -> g0drkrngsr_hh0jorglq2 [ 0 ] = 0.0
; localB -> g0drkrngsr_hh0jorglq2 [ 1 ] = 0.0 ; localB ->
g0drkrngsr_hh0jorglq2 [ 2 ] = 0.0 ; localB -> g4yahc00wc_l5yj2lrthv = 0.0 ;
localB -> mgy2tx4uj0_h255b31ynd = 0.0 ; localB -> j55rmyfoop_mert0vuy2i = 0.0
; localB -> i30rvmobjs_mcke2mvmgq = 0.0 ; localB -> hbxw1z240h_h34q0rd5y0 =
0.0 ; localB -> ayebppg4gx_csvudntq5v = 0.0 ; localB -> mlbbs4fqao_klmngopk1n
[ 0 ] = 0.0 ; localB -> mlbbs4fqao_klmngopk1n [ 1 ] = 0.0 ; localB ->
mlbbs4fqao_klmngopk1n [ 2 ] = 0.0 ; localB -> nsqipfztjp_pcqitb31bm = 0.0 ;
localB -> e2eydg5nti_pxv1dlndn0 = 0.0 ; localB -> p35guikpkx_p4u43j1tg5 = 0.0
; localB -> evsphivwme_appanwio2d = 0.0 ; localB -> mn4qnpiisu_jdc3mylhw0 [ 0
] = 0.0 ; localB -> mn4qnpiisu_jdc3mylhw0 [ 1 ] = 0.0 ; localB ->
mn4qnpiisu_jdc3mylhw0 [ 2 ] = 0.0 ; localB -> dg1abadomh_ekaxkojgre = 0.0 ;
localB -> etb30mxmsv_olzclp30in = 0.0 ; localB -> glxglw03ek_bbahwrwppi = 0.0
; localB -> n541cz4kc4_ao3bw4rxqa = 0.0 ; localB -> bmrs115gg5_g2zhzn021n =
0.0 ; localB -> fzuuudcvoz_ex1giwvd5a = 0.0 ; localB -> jgrywmthgg_fi0130k5dq
[ 0 ] = 0.0 ; localB -> jgrywmthgg_fi0130k5dq [ 1 ] = 0.0 ; localB ->
jgrywmthgg_fi0130k5dq [ 2 ] = 0.0 ; localB -> mi35iqh4zh [ 0 ] = 0.0 ; localB
-> mi35iqh4zh [ 1 ] = 0.0 ; localB -> mi35iqh4zh [ 2 ] = 0.0 ; localB ->
mz5phavgkw = 0.0 ; localB -> mtgl00davg = 0.0 ; localB -> bjqsryhiyj = 0.0 ;
localB -> phrqrm5pmv = 0.0 ; localB -> ii3vy4mmpg = 0.0 ; localB ->
fctoiiws0s = 0.0 ; localB -> a51egkwgwo = 0.0 ; localB -> ckgmoczxve = 0.0 ;
localB -> bt2rqkb51j = 0.0 ; localB -> cam0ve4zqh = 0.0 ; localB ->
ij4lx1s34m = 0.0 ; localB -> hz3ewtedst = 0.0 ; localB -> nezmtpenwv = 0.0 ;
localB -> nwwi3spcvi = 0.0 ; localB -> g30fwms10z = 0.0 ; localB ->
ihzny3c3s4 = 0.0 ; localB -> j43hegl5rg = 0.0 ; localB -> lcpdbhb1y5 = 0.0 ;
localB -> kfpoxyrwdt = 0.0 ; localB -> bc2fd3yjnq = 0.0 ; localB ->
ohb5mctuy0 = 0.0 ; localB -> cvo4lad0zq = 0.0 ; localB -> gmwwryuamq = 0.0 ;
localB -> hu3fv1h2mh = 0.0 ; localB -> ljz0n02bon = 0.0 ; localB ->
lkquleht4a = 0.0 ; localB -> afgx52hcfw = 0.0 ; localB -> p0hzmjntzb = 0.0 ;
localB -> dktvhijtxu = 0.0 ; localB -> ddzmwdqzmx = 0.0 ; localB ->
n3tbogbenx = 0.0 ; localB -> dfullnmqq3 = 0.0 ; localB -> dmco5n5boy = 0.0 ;
localB -> ci3p3hoamk = 0.0 ; localB -> iwcfsxie40 = 0.0 ; localB ->
njzf5pexup = 0.0 ; localB -> f4lujt1fq0 = 0.0 ; localB -> psmqbkozvc = 0.0 ;
localB -> nekbr5le3q = 0.0 ; localB -> pvyqfsuvyf = 0.0 ; localB ->
b1zxvcgz2w = 0.0 ; localB -> om5oj4r3tv [ 0 ] = 0.0 ; localB -> om5oj4r3tv [
1 ] = 0.0 ; localB -> om5oj4r3tv [ 2 ] = 0.0 ; localB -> bj11js3edn = 0.0 ;
localB -> l4w0k5vh3j = 0.0 ; localB -> f0xbzdpffo = 0.0 ; localB ->
g4ufmnozok = 0.0 ; localB -> ddfggx0jho = 0.0 ; localB -> j1jh51tjjo = 0.0 ;
localB -> oyyyr2w4eh [ 0 ] = 0.0 ; localB -> oyyyr2w4eh [ 1 ] = 0.0 ; localB
-> oyyyr2w4eh [ 2 ] = 0.0 ; localB -> cs1r1b1pky = 0.0 ; localB -> cmyyjtuluk
= 0.0 ; localB -> nrjnkhol5s = 0.0 ; } ( void ) memset ( ( void * ) localDW ,
0 , sizeof ( due31ddxq5 ) ) ; localDW -> csgaj2fyjn [ 0 ] = 0.0 ; localDW ->
csgaj2fyjn [ 1 ] = 0.0 ; localDW -> csgaj2fyjn [ 2 ] = 0.0 ; localDW ->
drbjvug1h2 [ 0 ] = 0.0 ; localDW -> drbjvug1h2 [ 1 ] = 0.0 ; localDW ->
drbjvug1h2 [ 2 ] = 0.0 ; asbCubeSatACS_InitializeDataMapInfo ( fprqfujhwe ,
localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( fprqfujhwe -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
fprqfujhwe -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( fprqfujhwe -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_asbCubeSatACS_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_asbCubeSatACS , 70 ) ; * retVal = 1 ; } static void
mr_asbCubeSatACS_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) ; static void
mr_asbCubeSatACS_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_asbCubeSatACS_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_asbCubeSatACS_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_asbCubeSatACS_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void mr_asbCubeSatACS_cacheBitFieldToMxArray
( mxArray * destArray , mwIndex i , int j , uint_T bitVal ) {
mxSetFieldByNumber ( destArray , i , j , mxCreateDoubleScalar ( ( real_T )
bitVal ) ) ; } static uint_T mr_asbCubeSatACS_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) ; static
uint_T mr_asbCubeSatACS_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_asbCubeSatACS_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_asbCubeSatACS_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_asbCubeSatACS_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_asbCubeSatACS_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_asbCubeSatACS_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_asbCubeSatACS_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_asbCubeSatACS_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_asbCubeSatACS_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_asbCubeSatACS_GetDWork ( const
obi5idc0yut * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( ssDW , 0
, 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ;
{ static const char_T * rtdwDataFieldNames [ 38 ] = {
"mdlrefDW->rtdw.csgaj2fyjn" , "mdlrefDW->rtdw.drbjvug1h2" ,
"mdlrefDW->rtdw.aspvqi5kaq" , "mdlrefDW->rtdw.m4ktsb34zu" ,
"mdlrefDW->rtdw.duxa0lwnyy" , "mdlrefDW->rtdw.g2u3gf3pir" ,
"mdlrefDW->rtdw.hm1z23ie2k" , "mdlrefDW->rtdw.fyislxta05" ,
"mdlrefDW->rtdw.fvctynab0j" , "mdlrefDW->rtdw.kw1ggasixl" ,
"mdlrefDW->rtdw.btx3klejj4" , "mdlrefDW->rtdw.hliomhtf3d" ,
"mdlrefDW->rtdw.chsuhepoo1" , "mdlrefDW->rtdw.nxghgofox1" ,
"mdlrefDW->rtdw.otxy3nsbi1.ai304lwbz4" ,
"mdlrefDW->rtdw.kufh2i43cj.ai304lwbz4" ,
"mdlrefDW->rtdw.eh1au0gcdu.ai304lwbz4" ,
"mdlrefDW->rtdw.m1c5auh51y.ai304lwbz4" ,
"mdlrefDW->rtdw.iwf1ikz5vp.ai304lwbz4" ,
"mdlrefDW->rtdw.ovuvbo1lgf.ai304lwbz4" ,
"mdlrefDW->rtdw.mufdwlxkzp.ai304lwbz4" ,
"mdlrefDW->rtdw.kqvn05n2kk.ai304lwbz4" ,
"mdlrefDW->rtdw.eshunq0a4x.ai304lwbz4" ,
"mdlrefDW->rtdw.h4xtjhm5ns.ai304lwbz4" ,
"mdlrefDW->rtdw.k5rtgyuloh.ai304lwbz4" ,
"mdlrefDW->rtdw.kmn5ikrhii.ai304lwbz4" ,
"mdlrefDW->rtdw.o5uea2bm34.ai304lwbz4" ,
"mdlrefDW->rtdw.mundwwrfcc.ai304lwbz4" ,
"mdlrefDW->rtdw.dkriegmois.ai304lwbz4" ,
"mdlrefDW->rtdw.ne0qiqncyo.ai304lwbz4" ,
"mdlrefDW->rtdw.fk0imeoonn.ai304lwbz4" ,
"mdlrefDW->rtdw.ggcc21rrux.ai304lwbz4" ,
"mdlrefDW->rtdw.i52sqmyllx.ai304lwbz4" ,
"mdlrefDW->rtdw.m0bnsqzq3n.ai304lwbz4" ,
"mdlrefDW->rtdw.hmitxmfqrk.ai304lwbz4" ,
"mdlrefDW->rtdw.eknrx3nsh2.ai304lwbz4" ,
"mdlrefDW->rtdw.eul4q2la45.ai304lwbz4" ,
"mdlrefDW->rtdw.cu0mwyodxbx.ai304lwbz4" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 38 , rtdwDataFieldNames ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtdw . csgaj2fyjn ) , sizeof ( mdlrefDW -> rtdw . csgaj2fyjn ) )
; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) &
( mdlrefDW -> rtdw . drbjvug1h2 ) , sizeof ( mdlrefDW -> rtdw . drbjvug1h2 )
) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * )
& ( mdlrefDW -> rtdw . aspvqi5kaq ) , sizeof ( mdlrefDW -> rtdw . aspvqi5kaq
) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void *
) & ( mdlrefDW -> rtdw . m4ktsb34zu ) , sizeof ( mdlrefDW -> rtdw .
m4ktsb34zu ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 4 , (
const void * ) & ( mdlrefDW -> rtdw . duxa0lwnyy ) , sizeof ( mdlrefDW ->
rtdw . duxa0lwnyy ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 ,
5 , ( const void * ) & ( mdlrefDW -> rtdw . g2u3gf3pir ) , sizeof ( mdlrefDW
-> rtdw . g2u3gf3pir ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0
, 6 , ( const void * ) & ( mdlrefDW -> rtdw . hm1z23ie2k ) , sizeof (
mdlrefDW -> rtdw . hm1z23ie2k ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( mdlrefDW -> rtdw . fyislxta05 ) ,
sizeof ( mdlrefDW -> rtdw . fyislxta05 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
mdlrefDW -> rtdw . fvctynab0j ) , sizeof ( mdlrefDW -> rtdw . fvctynab0j ) )
; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) &
( mdlrefDW -> rtdw . kw1ggasixl ) , sizeof ( mdlrefDW -> rtdw . kw1ggasixl )
) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void *
) & ( mdlrefDW -> rtdw . btx3klejj4 ) , sizeof ( mdlrefDW -> rtdw .
btx3klejj4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 11 , (
const void * ) & ( mdlrefDW -> rtdw . hliomhtf3d ) , sizeof ( mdlrefDW ->
rtdw . hliomhtf3d ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 ,
12 , ( const void * ) & ( mdlrefDW -> rtdw . chsuhepoo1 ) , sizeof ( mdlrefDW
-> rtdw . chsuhepoo1 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0
, 13 , ( const void * ) & ( mdlrefDW -> rtdw . nxghgofox1 ) , sizeof (
mdlrefDW -> rtdw . nxghgofox1 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray (
rtdwData , 0 , 14 , ( const void * ) & ( mdlrefDW -> rtdw . otxy3nsbi1 .
ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw . otxy3nsbi1 . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) &
( mdlrefDW -> rtdw . kufh2i43cj . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
kufh2i43cj . ai304lwbz4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData
, 0 , 16 , ( const void * ) & ( mdlrefDW -> rtdw . eh1au0gcdu . ai304lwbz4 )
, sizeof ( mdlrefDW -> rtdw . eh1au0gcdu . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) &
( mdlrefDW -> rtdw . m1c5auh51y . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
m1c5auh51y . ai304lwbz4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData
, 0 , 18 , ( const void * ) & ( mdlrefDW -> rtdw . iwf1ikz5vp . ai304lwbz4 )
, sizeof ( mdlrefDW -> rtdw . iwf1ikz5vp . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) &
( mdlrefDW -> rtdw . ovuvbo1lgf . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
ovuvbo1lgf . ai304lwbz4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData
, 0 , 20 , ( const void * ) & ( mdlrefDW -> rtdw . mufdwlxkzp . ai304lwbz4 )
, sizeof ( mdlrefDW -> rtdw . mufdwlxkzp . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) &
( mdlrefDW -> rtdw . kqvn05n2kk . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
kqvn05n2kk . ai304lwbz4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData
, 0 , 22 , ( const void * ) & ( mdlrefDW -> rtdw . eshunq0a4x . ai304lwbz4 )
, sizeof ( mdlrefDW -> rtdw . eshunq0a4x . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) &
( mdlrefDW -> rtdw . h4xtjhm5ns . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
h4xtjhm5ns . ai304lwbz4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData
, 0 , 24 , ( const void * ) & ( mdlrefDW -> rtdw . k5rtgyuloh . ai304lwbz4 )
, sizeof ( mdlrefDW -> rtdw . k5rtgyuloh . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) &
( mdlrefDW -> rtdw . kmn5ikrhii . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
kmn5ikrhii . ai304lwbz4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData
, 0 , 26 , ( const void * ) & ( mdlrefDW -> rtdw . o5uea2bm34 . ai304lwbz4 )
, sizeof ( mdlrefDW -> rtdw . o5uea2bm34 . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) &
( mdlrefDW -> rtdw . mundwwrfcc . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
mundwwrfcc . ai304lwbz4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData
, 0 , 28 , ( const void * ) & ( mdlrefDW -> rtdw . dkriegmois . ai304lwbz4 )
, sizeof ( mdlrefDW -> rtdw . dkriegmois . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) &
( mdlrefDW -> rtdw . ne0qiqncyo . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
ne0qiqncyo . ai304lwbz4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData
, 0 , 30 , ( const void * ) & ( mdlrefDW -> rtdw . fk0imeoonn . ai304lwbz4 )
, sizeof ( mdlrefDW -> rtdw . fk0imeoonn . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) &
( mdlrefDW -> rtdw . ggcc21rrux . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
ggcc21rrux . ai304lwbz4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData
, 0 , 32 , ( const void * ) & ( mdlrefDW -> rtdw . i52sqmyllx . ai304lwbz4 )
, sizeof ( mdlrefDW -> rtdw . i52sqmyllx . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) &
( mdlrefDW -> rtdw . m0bnsqzq3n . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
m0bnsqzq3n . ai304lwbz4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData
, 0 , 34 , ( const void * ) & ( mdlrefDW -> rtdw . hmitxmfqrk . ai304lwbz4 )
, sizeof ( mdlrefDW -> rtdw . hmitxmfqrk . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) &
( mdlrefDW -> rtdw . eknrx3nsh2 . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
eknrx3nsh2 . ai304lwbz4 ) ) ; mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData
, 0 , 36 , ( const void * ) & ( mdlrefDW -> rtdw . eul4q2la45 . ai304lwbz4 )
, sizeof ( mdlrefDW -> rtdw . eul4q2la45 . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) &
( mdlrefDW -> rtdw . cu0mwyodxbx . ai304lwbz4 ) , sizeof ( mdlrefDW -> rtdw .
cu0mwyodxbx . ai304lwbz4 ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData )
; } ( void ) mdlrefDW ; return ssDW ; } void mr_asbCubeSatACS_SetDWork (
obi5idc0yut * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
csgaj2fyjn ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . csgaj2fyjn ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
drbjvug1h2 ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . drbjvug1h2 ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
aspvqi5kaq ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . aspvqi5kaq ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
m4ktsb34zu ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . m4ktsb34zu ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
duxa0lwnyy ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . duxa0lwnyy ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
g2u3gf3pir ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . g2u3gf3pir ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
hm1z23ie2k ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . hm1z23ie2k ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
fyislxta05 ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . fyislxta05 ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
fvctynab0j ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . fvctynab0j ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
kw1ggasixl ) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . kw1ggasixl ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
btx3klejj4 ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . btx3klejj4 ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
hliomhtf3d ) , rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . hliomhtf3d ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
chsuhepoo1 ) , rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . chsuhepoo1 ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
nxghgofox1 ) , rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw . nxghgofox1 ) )
; mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
otxy3nsbi1 . ai304lwbz4 ) , rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw .
otxy3nsbi1 . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . kufh2i43cj . ai304lwbz4 ) , rtdwData , 0 , 15
, sizeof ( mdlrefDW -> rtdw . kufh2i43cj . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
eh1au0gcdu . ai304lwbz4 ) , rtdwData , 0 , 16 , sizeof ( mdlrefDW -> rtdw .
eh1au0gcdu . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . m1c5auh51y . ai304lwbz4 ) , rtdwData , 0 , 17
, sizeof ( mdlrefDW -> rtdw . m1c5auh51y . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
iwf1ikz5vp . ai304lwbz4 ) , rtdwData , 0 , 18 , sizeof ( mdlrefDW -> rtdw .
iwf1ikz5vp . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . ovuvbo1lgf . ai304lwbz4 ) , rtdwData , 0 , 19
, sizeof ( mdlrefDW -> rtdw . ovuvbo1lgf . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
mufdwlxkzp . ai304lwbz4 ) , rtdwData , 0 , 20 , sizeof ( mdlrefDW -> rtdw .
mufdwlxkzp . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . kqvn05n2kk . ai304lwbz4 ) , rtdwData , 0 , 21
, sizeof ( mdlrefDW -> rtdw . kqvn05n2kk . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
eshunq0a4x . ai304lwbz4 ) , rtdwData , 0 , 22 , sizeof ( mdlrefDW -> rtdw .
eshunq0a4x . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . h4xtjhm5ns . ai304lwbz4 ) , rtdwData , 0 , 23
, sizeof ( mdlrefDW -> rtdw . h4xtjhm5ns . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
k5rtgyuloh . ai304lwbz4 ) , rtdwData , 0 , 24 , sizeof ( mdlrefDW -> rtdw .
k5rtgyuloh . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . kmn5ikrhii . ai304lwbz4 ) , rtdwData , 0 , 25
, sizeof ( mdlrefDW -> rtdw . kmn5ikrhii . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
o5uea2bm34 . ai304lwbz4 ) , rtdwData , 0 , 26 , sizeof ( mdlrefDW -> rtdw .
o5uea2bm34 . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . mundwwrfcc . ai304lwbz4 ) , rtdwData , 0 , 27
, sizeof ( mdlrefDW -> rtdw . mundwwrfcc . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
dkriegmois . ai304lwbz4 ) , rtdwData , 0 , 28 , sizeof ( mdlrefDW -> rtdw .
dkriegmois . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . ne0qiqncyo . ai304lwbz4 ) , rtdwData , 0 , 29
, sizeof ( mdlrefDW -> rtdw . ne0qiqncyo . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
fk0imeoonn . ai304lwbz4 ) , rtdwData , 0 , 30 , sizeof ( mdlrefDW -> rtdw .
fk0imeoonn . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . ggcc21rrux . ai304lwbz4 ) , rtdwData , 0 , 31
, sizeof ( mdlrefDW -> rtdw . ggcc21rrux . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
i52sqmyllx . ai304lwbz4 ) , rtdwData , 0 , 32 , sizeof ( mdlrefDW -> rtdw .
i52sqmyllx . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . m0bnsqzq3n . ai304lwbz4 ) , rtdwData , 0 , 33
, sizeof ( mdlrefDW -> rtdw . m0bnsqzq3n . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
hmitxmfqrk . ai304lwbz4 ) , rtdwData , 0 , 34 , sizeof ( mdlrefDW -> rtdw .
hmitxmfqrk . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . eknrx3nsh2 . ai304lwbz4 ) , rtdwData , 0 , 35
, sizeof ( mdlrefDW -> rtdw . eknrx3nsh2 . ai304lwbz4 ) ) ;
mr_asbCubeSatACS_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
eul4q2la45 . ai304lwbz4 ) , rtdwData , 0 , 36 , sizeof ( mdlrefDW -> rtdw .
eul4q2la45 . ai304lwbz4 ) ) ; mr_asbCubeSatACS_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . cu0mwyodxbx . ai304lwbz4 ) , rtdwData , 0 ,
37 , sizeof ( mdlrefDW -> rtdw . cu0mwyodxbx . ai304lwbz4 ) ) ; } } void
mr_asbCubeSatACS_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 513049973U , 2210511190U , 2400854119U , 2278253708U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "asbCubeSatACS" , & chksum [ 0 ] )
; } mxArray * mr_asbCubeSatACS_GetSimStateDisallowedBlocks ( ) { return (
NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
