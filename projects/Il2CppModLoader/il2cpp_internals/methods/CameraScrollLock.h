#include <interception_macros.h>

namespace app::methods::CameraScrollLock {
IL2CPP_REGISTER_METHOD(0x00C3DF40, Vector3, get_ScrollCenter, (CameraScrollLock * __this));
IL2CPP_REGISTER_METHOD(0x016A2480, void, set_ScrollCenter, (CameraScrollLock * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x016A2490, Vector3, get_HalfScrollSize, (CameraScrollLock * __this));
IL2CPP_REGISTER_METHOD(0x016A24B0, void, set_HalfScrollSize, (CameraScrollLock * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00653FB0, CameraScrollLock_Type__Enum, get_ScrollType, (CameraScrollLock * __this));
IL2CPP_REGISTER_METHOD(0x016A24C0, void, Awake, (CameraScrollLock * __this));
IL2CPP_REGISTER_METHOD(0x016A24D0, Rect, get_BoundingRect, (CameraScrollLock * __this));
IL2CPP_REGISTER_METHOD(0x016A2750, void, OnEnable, (CameraScrollLock * __this));
IL2CPP_REGISTER_METHOD(0x016A2BD0, void, Init, (CameraScrollLock * __this));
IL2CPP_REGISTER_METHOD(0x016A3050, void, OnDisable, (CameraScrollLock * __this));
IL2CPP_REGISTER_METHOD(0x00417920, SelectableCategory__Enum, get_Category, (CameraScrollLock * __this));
IL2CPP_REGISTER_METHOD(0x008223A0, void, __ctor, (CameraScrollLock * __this));
}
