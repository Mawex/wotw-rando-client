#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::FBIKHandsOnProp {
IL2CPP_REGISTER_METHOD(0x0221A1C0, void, Awake, (FBIKHandsOnProp * __this));
IL2CPP_REGISTER_METHOD(0x0221A380, void, OnPreRead, (FBIKHandsOnProp * __this));
IL2CPP_REGISTER_METHODINFO(0x04707848, FBIKHandsOnProp_OnPreRead__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0221A500, void, HandsOnProp, (FBIKHandsOnProp * __this, IKEffector * mainHand, IKEffector * otherHand));
IL2CPP_REGISTER_METHOD(0x0221B1C0, void, OnDestroy, (FBIKHandsOnProp * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (FBIKHandsOnProp * __this));
}
