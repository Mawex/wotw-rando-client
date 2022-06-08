using namespace app;

namespace app::methods::JumpFlipPlatform {
IL2CPP_REGISTER_METHOD(0x00E4A210, void, OnValidate, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00E4A2B0, void, Awake, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00E4A860, void, OnDestroy, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00E4ADE0, void, FixedUpdate, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00E4AFA0, void, Start, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00E4B070, void, Toggle, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00E4B090, void, UpdateState, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00E4BB80, void, OnPlayerWallJump, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHODINFO(0x04771420, JumpFlipPlatform_OnPlayerWallJump__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4BC20, void, OnPlayerDoubleJump, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHODINFO(0x0471A568, JumpFlipPlatform_OnPlayerDoubleJump__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4BCC0, void, OnPlayerJump, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHODINFO(0x04712830, JumpFlipPlatform_OnPlayerJump__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4BD60, void, OnPlayerChargeJump, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHODINFO(0x04748C18, JumpFlipPlatform_OnPlayerChargeJump__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E4BD90, void, Serialize, (JumpFlipPlatform * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x003FFE10, bool, get_IsSuspended, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHOD(0x0057BAC0, void, set_IsSuspended, (JumpFlipPlatform * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0070DEC0, SuspendableMask__Enum, get_Mask, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00E4BDE0, void, set_Mask, (JumpFlipPlatform * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00E4BEA0, void, __ctor, (JumpFlipPlatform * __this));
IL2CPP_REGISTER_METHOD(0x00E4C0E0, void, __cctor, (MethodInfo * method));
}
