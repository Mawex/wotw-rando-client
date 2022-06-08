using namespace app;

namespace app::methods::FrameCaptureTester_AgentOutput {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (FrameCaptureTester_AgentOutput * __this, FrameCaptureTester * self));
IL2CPP_REGISTER_METHOD(0x0163DDF0, StringBuilder *, StartWrite, (FrameCaptureTester_AgentOutput * __this));
IL2CPP_REGISTER_METHODINFO(0x0471C718, FrameCaptureTester_AgentOutput_StartWrite__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0163DEE0, void, Write, (FrameCaptureTester_AgentOutput * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0163DFA0, void, Write, (FrameCaptureTester_AgentOutput * __this, int32_t value, bool skipIfZero));
IL2CPP_REGISTER_METHOD(0x0163E090, void, Write, (FrameCaptureTester_AgentOutput * __this, float value, bool skipIfZero));
IL2CPP_REGISTER_METHOD(0x0163E160, void, Write, (FrameCaptureTester_AgentOutput * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x0163E260, void, Write, (FrameCaptureTester_AgentOutput * __this, StringBuilder * value));
IL2CPP_REGISTER_METHOD(0x0163E4A0, void, Write, (FrameCaptureTester_AgentOutput * __this, StringBuilder * value, int32_t index, int32_t length));
IL2CPP_REGISTER_METHOD(0x0163E6E0, FrameCaptureTester_StringBuilderScope, WriteScope, (FrameCaptureTester_AgentOutput * __this));
}
