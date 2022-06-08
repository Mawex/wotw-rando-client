using namespace app;

namespace app::methods::AnimationTester_Group {
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_ToogleName, (AnimationTester_Group * __this));
IL2CPP_REGISTER_METHOD(0x01AFDC50, bool, get_IsEnabled, (AnimationTester_Group * __this));
IL2CPP_REGISTER_METHOD(0x01AFDDB0, void, __ctor, (AnimationTester_Group * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x01AFDFF0, void, __ctor, (AnimationTester_Group * __this, Transform * transform, String * name));
IL2CPP_REGISTER_METHOD(0x01AFE220, void, Toogle, (AnimationTester_Group * __this));
IL2CPP_REGISTER_METHOD(0x01AFE3F0, AnimationTester_IToogleGroup__Array *, GetChildren, (AnimationTester_Group * __this));
IL2CPP_REGISTER_METHOD(0x01AFE670, void, PlayNext, (AnimationTester_Group * __this, int32_t amountOfLayers));
IL2CPP_REGISTER_METHOD(0x01AFE840, void, Interrupt, (AnimationTester_Group * __this));
}
