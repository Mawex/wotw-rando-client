using namespace app;

namespace app::methods::RecordTransformPlugin {
IL2CPP_REGISTER_METHOD(0x00735C80, void, Awake, (RecordTransformPlugin * __this));
IL2CPP_REGISTER_METHOD(0x00735D40, void, OnDestroy, (RecordTransformPlugin * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (RecordTransformPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00735E00, Vector4, QuaternionToVector, (RecordTransformPlugin * __this, Quaternion q));
IL2CPP_REGISTER_METHOD(0x00735E30, void, RecordCycle, (RecordTransformPlugin * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x00735F00, void, Exit, (RecordTransformPlugin * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (RecordTransformPlugin * __this));
}
