using namespace app;

namespace app::methods::GhostUberStatePlugin_UberStateData {
IL2CPP_REGISTER_METHOD(0x007EC4E0, void, Save, (GhostUberStatePlugin_UberStateData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x007EC610, void, Load, (GhostUberStatePlugin_UberStateData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x007EC6B0, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostUberStatePlugin_UberStateData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (GhostUberStatePlugin_UberStateData * __this));
IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_Executed, (GhostUberStatePlugin_UberStateData * __this));
IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_Executed, (GhostUberStatePlugin_UberStateData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GhostUberStatePlugin_UberStateData * __this));
}
