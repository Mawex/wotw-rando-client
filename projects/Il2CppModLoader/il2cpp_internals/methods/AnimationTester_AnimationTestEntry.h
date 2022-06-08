#include <interception_macros.h>

namespace app::methods::AnimationTester_AnimationTestEntry {
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_CurrentAnimationIndex, (AnimationTester_AnimationTestEntry * __this));
IL2CPP_REGISTER_METHOD(0x01AFD860, void, set_CurrentAnimationIndex, (AnimationTester_AnimationTestEntry * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01AFD900, Transform *, get_Transform, (AnimationTester_AnimationTestEntry * __this));
IL2CPP_REGISTER_METHOD(0x01AFD970, void, PlayNextAnimation, (AnimationTester_AnimationTestEntry * __this, int32_t amountOfLayers));
IL2CPP_REGISTER_METHOD(0x01AFDB70, void, Interrupt, (AnimationTester_AnimationTestEntry * __this));
IL2CPP_REGISTER_METHOD(0x01AFDBA0, String *, get_ToogleName, (AnimationTester_AnimationTestEntry * __this));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IsEnabled, (AnimationTester_AnimationTestEntry * __this));
IL2CPP_REGISTER_METHOD(0x00446980, void, set_IsEnabled, (AnimationTester_AnimationTestEntry * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01AFDBD0, void, Toogle, (AnimationTester_AnimationTestEntry * __this));
IL2CPP_REGISTER_METHOD(0x01AFDC30, void, OnEnable, (AnimationTester_AnimationTestEntry * __this));
IL2CPP_REGISTER_METHOD(0x01AFDB70, void, OnDisable, (AnimationTester_AnimationTestEntry * __this));
IL2CPP_REGISTER_METHOD(0x01AFDC40, void, __ctor, (AnimationTester_AnimationTestEntry * __this));
}
