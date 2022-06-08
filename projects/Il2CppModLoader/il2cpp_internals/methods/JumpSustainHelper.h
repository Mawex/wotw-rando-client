#include <interception_macros.h>

namespace app::methods::JumpSustainHelper {
IL2CPP_REGISTER_METHOD(0x00E50E70, void, Awake, (JumpSustainHelper * __this));
IL2CPP_REGISTER_METHOD(0x00E51250, void, OnDestroy, (JumpSustainHelper * __this));
IL2CPP_REGISTER_METHOD(0x00E517A0, void, OnWallJump, (JumpSustainHelper * __this));
IL2CPP_REGISTER_METHODINFO(0x0474F370, JumpSustainHelper_OnWallJump__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E51AE0, void, OnDoubleJump, (JumpSustainHelper * __this, float jumpStrength));
IL2CPP_REGISTER_METHODINFO(0x04788CF0, JumpSustainHelper_OnDoubleJump__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E51AF0, void, OnJump, (JumpSustainHelper * __this, float speed));
IL2CPP_REGISTER_METHODINFO(0x04706C70, JumpSustainHelper_OnJump__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E51D80, void, OnGUI, (JumpSustainHelper * __this));
IL2CPP_REGISTER_METHOD(0x00E51F20, void, Update, (JumpSustainHelper * __this));
IL2CPP_REGISTER_METHOD(0x00E51F40, void, UpdateAnalyzingWallJumps, (JumpSustainHelper * __this));
IL2CPP_REGISTER_METHOD(0x00E52230, void, UpdateAnalyzingGroundJumps, (JumpSustainHelper * __this));
IL2CPP_REGISTER_METHOD(0x00E52640, void, CompleteAnalysis, (JumpSustainHelper * __this));
IL2CPP_REGISTER_METHOD(0x00E52C30, void, __ctor, (JumpSustainHelper * __this));
IL2CPP_REGISTER_METHOD(0x00E52DD0, bool, _CompleteAnalysis_b__33_0, (JumpSustainHelper * __this, float result));
IL2CPP_REGISTER_METHODINFO(0x047436D0, JumpSustainHelper__CompleteAnalysis_b__33_0__MethodInfo);
}
