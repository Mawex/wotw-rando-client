using namespace app;

namespace app::methods::InputData {
IL2CPP_REGISTER_METHOD(0x00628710, void, Initialize, (InputData * __this));
IL2CPP_REGISTER_METHOD(0x00628720, void, CheckButtonChanged, (InputData * __this, bool * changed, bool * member, Input_InputButtonProcessor * * button));
IL2CPP_REGISTER_METHOD(0x00628760, bool, UpdateInputs, (InputData * __this));
IL2CPP_REGISTER_METHOD(0x00628910, void, Record, (BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00628AF0, void, Save, (InputData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00628BF0, void, Load, (InputData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x00417920, RecorderFrame_FrameDataTypes__Enum, FrameType, (InputData * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (InputData * __this));
}
