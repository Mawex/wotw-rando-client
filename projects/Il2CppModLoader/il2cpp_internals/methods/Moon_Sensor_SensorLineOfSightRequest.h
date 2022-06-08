#include <interception_macros.h>

namespace app::methods::Moon::Sensor_SensorLineOfSightRequest {
IL2CPP_REGISTER_METHOD(0x00120650, void, Init, (Sensor_SensorLineOfSightRequest__Boxed * __this, Sensor * _sensor));
IL2CPP_REGISTER_METHOD(0x00120660, void, Dispose, (Sensor_SensorLineOfSightRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001206A0, void, Start, (Sensor_SensorLineOfSightRequest__Boxed * __this, Vector3 _origin, Vector3 _target));
IL2CPP_REGISTER_METHOD(0x001206D0, bool, get_IsFinished, (Sensor_SensorLineOfSightRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001206E0, bool, get_Result, (Sensor_SensorLineOfSightRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001206F0, AsyncRaycast_Result__Enum, get_ArcResult, (Sensor_SensorLineOfSightRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010E170, Sensor_SensorLineOfSightRequest_State__Enum, get_CurrentState, (Sensor_SensorLineOfSightRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120710, void, Finish, (Sensor_SensorLineOfSightRequest__Boxed * __this, bool result));
IL2CPP_REGISTER_METHOD(0x00120720, void, Cancel, (Sensor_SensorLineOfSightRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120770, void, PerformCast, (Sensor_SensorLineOfSightRequest__Boxed * __this, Vector3 from, Vector3 to, Sensor_SensorLineOfSightRequest_State__Enum asyncState));
IL2CPP_REGISTER_METHOD(0x001207F0, bool, get_Blocked, (Sensor_SensorLineOfSightRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120810, bool, get_HitPlayer, (Sensor_SensorLineOfSightRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00120820, bool, TryGetHitCollider, (Sensor_SensorLineOfSightRequest__Boxed * __this, Collider * * collider));
IL2CPP_REGISTER_METHOD(0x00120830, void, Update, (Sensor_SensorLineOfSightRequest__Boxed * __this));
}
