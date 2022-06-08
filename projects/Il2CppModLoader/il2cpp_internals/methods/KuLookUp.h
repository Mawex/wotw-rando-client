#include <interception_macros.h>

namespace app::methods::KuLookUp {
IL2CPP_REGISTER_METHOD(0x01241070, void, OnSetReferenceToKu, (KuLookUp * __this));
IL2CPP_REGISTER_METHOD(0x012410A0, void, OnEnable, (KuLookUp * __this));
IL2CPP_REGISTER_METHOD(0x01241250, void, OnDisable, (KuLookUp * __this));
IL2CPP_REGISTER_METHOD(0x01241420, bool, get_IsStatePerforming, (KuLookUp * __this));
IL2CPP_REGISTER_METHOD(0x01241450, void, UpdateState, (KuLookUp * __this));
IL2CPP_REGISTER_METHOD(0x01241850, bool, ShouldLookUp, (KuLookUp * __this));
IL2CPP_REGISTER_METHODINFO(0x047461E8, KuLookUp_ShouldLookUp__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0122F500, void, ModifyHorizontalPlatformMovementSettings, (KuLookUp * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0477CC60, KuLookUp_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01241A20, void, __ctor, (KuLookUp * __this));
}
