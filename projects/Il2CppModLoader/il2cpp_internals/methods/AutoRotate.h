using namespace app;

namespace app::methods::AutoRotate {
IL2CPP_REGISTER_METHOD(0x0085CEE0, void, Awake, (AutoRotate * __this));
IL2CPP_REGISTER_METHOD(0x0085D010, Quaternion, ZOnlyQuaternion, (AutoRotate * __this, float zAngle));
IL2CPP_REGISTER_METHOD(0x0085D0F0, void, FixedUpdate, (AutoRotate * __this));
IL2CPP_REGISTER_METHOD(0x0085D630, bool, get_CanRotate, (AutoRotate * __this));
IL2CPP_REGISTER_METHOD(0x0085D710, float, GetCurrentRotationSpeed, (AutoRotate * __this));
IL2CPP_REGISTER_METHOD(0x0085D750, bool, get_IsSuspended, (AutoRotate * __this));
IL2CPP_REGISTER_METHOD(0x003FFE00, void, set_IsSuspended, (AutoRotate * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0085D760, void, Serialize, (AutoRotate * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0085D790, void, OnDrawGizmos, (AutoRotate * __this));
IL2CPP_REGISTER_METHOD(0x0085DBF0, void, GetManagedEarlyZDynamicGraphicTargets, (AutoRotate * __this, List_1_UnityEngine_GameObject_ * targets));
IL2CPP_REGISTER_METHOD(0x0085DCE0, void, __ctor, (AutoRotate * __this));
IL2CPP_REGISTER_METHOD(0x0085DD00, void, __cctor, (MethodInfo * method));
}
