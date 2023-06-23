#ifndef RTW_HEADER_asbCubeSatACS_types_h_
#define RTW_HEADER_asbCubeSatACS_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_StatesOutBus_
#define DEFINED_TYPEDEF_FOR_StatesOutBus_
typedef struct { real_T utc_JD ; real_T X_ecef [ 3 ] ; real_T V_ecef [ 3 ] ;
real_T X_eci [ 3 ] ; real_T V_eci [ 3 ] ; real_T q_ecef2b [ 4 ] ; real_T
q_eci2b [ 4 ] ; real_T Euler [ 3 ] ; real_T LatLonAlt [ 3 ] ; real_T SunAngle
; boolean_T SunInView ; uint8_T sl_padding0 [ 7 ] ; } StatesOutBus ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_EnvBus_
#define DEFINED_TYPEDEF_FOR_EnvBus_
typedef struct { real_T envAccel_ecef [ 3 ] ; real_T envForces_body [ 3 ] ;
real_T envTorques_body [ 3 ] ; real_T x_sun_eci [ 3 ] ; real_T earthAngRate [
3 ] ; } EnvBus ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_AttitudeErrorBus_
#define DEFINED_TYPEDEF_FOR_AttitudeErrorBus_
typedef struct { real_T Roll ; real_T Pitch ; real_T Yaw ; } AttitudeErrorBus
;
#endif
#ifndef DEFINED_TYPEDEF_FOR_ACSOutBus_
#define DEFINED_TYPEDEF_FOR_ACSOutBus_
typedef struct { AttitudeErrorBus AttitudeError ; real_T TorqueCmds [ 3 ] ;
real_T cmd_q_b2tgt [ 4 ] ; real_T NavMode ; } ACSOutBus ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_9iDbyyjfBL0Y1ELTIVXdBC_
#define DEFINED_TYPEDEF_FOR_struct_9iDbyyjfBL0Y1ELTIVXdBC_
typedef struct { real_T Kp ; real_T Ki ; real_T Kd ; }
struct_9iDbyyjfBL0Y1ELTIVXdBC ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 22
#endif
#ifndef SS_INT64
#define SS_INT64 23
#endif
typedef struct coxtve2dsr_ coxtve2dsr ; typedef struct abopqckbgqo_
abopqckbgqo ; typedef struct isesex4x31 dgtzqiy1yy ;
#endif
