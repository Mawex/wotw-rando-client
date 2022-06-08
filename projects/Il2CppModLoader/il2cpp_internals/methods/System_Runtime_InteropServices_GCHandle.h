using namespace app;

namespace app::methods::System::Runtime::InteropServices::GCHandle {
IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (GCHandle__Boxed * __this, void * h));
IL2CPP_REGISTER_METHOD(0x0018F2D0, void, __ctor, (GCHandle__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0018F300, void, __ctor, (GCHandle__Boxed * __this, Object * value, GCHandleType__Enum type));
IL2CPP_REGISTER_METHOD(0x0018F330, bool, get_IsAllocated, (GCHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0018F340, Object *, get_Target, (GCHandle__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04775D58, GCHandle_get_Target__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0018F350, void, set_Target, (GCHandle__Boxed * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0018F360, void *, AddrOfPinnedObject, (GCHandle__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0470E710, GCHandle_AddrOfPinnedObject__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A947F0, GCHandle, Alloc, (Object * value));
IL2CPP_REGISTER_METHOD(0x01A94800, GCHandle, Alloc, (Object * value, GCHandleType__Enum type));
IL2CPP_REGISTER_METHOD(0x0018F370, void, Free, (GCHandle__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0470F148, GCHandle_Free__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A948E0, void *, operator_, (GCHandle value));
IL2CPP_REGISTER_METHOD(0x01A948F0, GCHandle, operator_, (void * value));
IL2CPP_REGISTER_METHODINFO(0x0478FDE8, GCHandle_op_Explicit_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CheckCurrentDomain, (int32_t handle));
IL2CPP_REGISTER_METHOD(0x01A949A0, Object *, GetTarget, (int32_t handle));
IL2CPP_REGISTER_METHOD(0x01A949B0, int32_t, GetTargetHandle, (Object * obj, int32_t handle, GCHandleType__Enum type));
IL2CPP_REGISTER_METHOD(0x01A949C0, void, FreeHandle, (int32_t handle));
IL2CPP_REGISTER_METHOD(0x01A949D0, void *, GetAddrOfPinnedObject, (int32_t handle));
IL2CPP_REGISTER_METHOD(0x015F7650, bool, operator___, (GCHandle a, GCHandle b));
IL2CPP_REGISTER_METHOD(0x0018F380, bool, Equals, (GCHandle__Boxed * __this, Object * o));
IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (GCHandle__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x01A94B00, GCHandle, FromIntPtr, (void * value));
IL2CPP_REGISTER_METHOD(0x01A948E0, void *, ToIntPtr, (GCHandle value));
}
