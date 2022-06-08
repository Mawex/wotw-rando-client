using namespace app;

namespace app::methods::LeverActionSystem {
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverEnter, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x04701ED0, LeverActionSystem_OnLeverEnter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverExit, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x04764E10, LeverActionSystem_OnLeverExit__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGrabLever, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x0474BDE8, LeverActionSystem_OnGrabLever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnReleaseLever, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x0478ED48, LeverActionSystem_OnReleaseLever__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01136D40, void, OnLeverLeft, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x04720F30, LeverActionSystem_OnLeverLeft__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01136E10, void, OnLeverRight, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x0472B670, LeverActionSystem_OnLeverRight__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverLeftFailed, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x0473A3D0, LeverActionSystem_OnLeverLeftFailed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeverRightFailed, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x04704C28, LeverActionSystem_OnLeverRightFailed__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnLeftMiddle, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x04729580, LeverActionSystem_OnLeftMiddle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01136EE0, bool, CanLeverLeftCallback, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x04733500, LeverActionSystem_CanLeverLeftCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01136FC0, bool, CanLeverRightCallback, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x04708110, LeverActionSystem_CanLeverRightCallback__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011370A0, void, StopMutuallyExclusivite, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHOD(0x011371B0, void, Start, (LeverActionSystem * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (LeverActionSystem * __this));
}
