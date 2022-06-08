using namespace app;

namespace app::methods::CameraController {
IL2CPP_REGISTER_METHOD(0x003FBE50, bool, get_FrustumLocked, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x016848B0, void, set_FrustumLocked, (CameraController_1 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00EE3AD0, Vector3, get_CameraPosition, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x016849A0, void, OnEnable, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01684E70, void, OnDisable, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x016850C0, void, LockFrustumForDebug, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01685210, void, UnlockFrustum, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01685220, void, OnEnterFrustumLock, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01685360, void, OnGameReset, (CameraController_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04774E80, CameraController_1_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006260E0, Vector3, get_Position, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x016853F0, Quaternion, get_Rotation, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01685480, bool, InsideFrustum, (CameraController_1 * __this, Bounds bounds));
IL2CPP_REGISTER_METHOD(0x01685510, void, InsideFrustumBatched, (CameraController_1 * __this, NativeArray_1_UnityEngine_Bounds_ bounds, int32_t boundsCount, NativeArray_1_System_Byte_ insideResults));
IL2CPP_REGISTER_METHOD(0x01685620, Plane__Array *, get_FrustrumPlanes, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01685640, void, SetForcePlaneUpdate, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01685650, void, UpdateFrustrumPlanes, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01685D40, void, FixedUpdate, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01685D70, void, Update, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01685DE0, void, UpdateCamera, (CameraController_1 * __this, bool forceUpdate));
IL2CPP_REGISTER_METHOD(0x016861F0, void, UpdateSpeed, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01686580, void, OnDrawGizmos, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01686680, void, Awake, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01686830, void, OnGUI, (CameraController_1 * __this));
IL2CPP_REGISTER_METHOD(0x01686F30, void, __ctor, (CameraController_1 * __this));
}
