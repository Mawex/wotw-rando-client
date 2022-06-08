using namespace app;

namespace app::methods::KuCrouch {
IL2CPP_REGISTER_METHOD(0x0122EAF0, void, OnSetReferenceToKu, (KuCrouch * __this));
IL2CPP_REGISTER_METHOD(0x0122EB20, void, OnEnable, (KuCrouch * __this));
IL2CPP_REGISTER_METHOD(0x0122ECD0, void, OnDisable, (KuCrouch * __this));
IL2CPP_REGISTER_METHOD(0x0122EEA0, bool, get_IsStatePerforming, (KuCrouch * __this));
IL2CPP_REGISTER_METHOD(0x0122EED0, void, UpdateState, (KuCrouch * __this));
IL2CPP_REGISTER_METHOD(0x0122F2D0, bool, ShouldCrouch, (KuCrouch * __this));
IL2CPP_REGISTER_METHODINFO(0x04792018, KuCrouch_ShouldCrouch__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0122F500, void, ModifyHorizontalPlatformMovementSettings, (KuCrouch * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0477C9A0, KuCrouch_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0122F550, void, __ctor, (KuCrouch * __this));
}
