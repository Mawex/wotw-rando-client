using namespace app;

namespace app::methods::CameraScrollLockConstraint {
IL2CPP_REGISTER_METHOD(0x016A30F0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x016A3190, void, Awake, (CameraScrollLockConstraint * __this));
IL2CPP_REGISTER_METHOD(0x016A3240, Bounds, BoundsFromPoints, (Vector3__Array * pts));
IL2CPP_REGISTER_METHOD(0x016A3330, bool, HasPassedThroughScrollLock, (CameraScrollLockConstraint * __this, Vector3 oldPosition, Vector3 position, CameraScrollLock * * scrollLockPassedThrough));
IL2CPP_REGISTER_METHOD(0x016A3600, Bounds, CalculateCameraBounds, (Camera * camera));
IL2CPP_REGISTER_METHOD(0x016A3C70, Vector3, CalculateConstraintOffset, (CameraScrollLockConstraint * __this, Vector3 position, float expand));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, get_VirtualTimelineTarget, (CameraScrollLockConstraint * __this));
IL2CPP_REGISTER_METHOD(0x0043D9E0, VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (CameraScrollLockConstraint * __this));
IL2CPP_REGISTER_METHOD(0x016A4B10, String *, get_NameDisplayedOnClip, (CameraScrollLockConstraint * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (CameraScrollLockConstraint * __this));
IL2CPP_REGISTER_METHOD(0x016A4B90, void, __cctor, (MethodInfo * method));
}
