using namespace app;

namespace app::methods::GhostLineRendererPlugin_LineRendererData {
IL2CPP_REGISTER_METHOD(0x00E21D20, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostLineRendererPlugin_LineRendererData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (GhostLineRendererPlugin_LineRendererData * __this));
IL2CPP_REGISTER_METHOD(0x00E21D30, void, __ctor, (GhostLineRendererPlugin_LineRendererData * __this));
IL2CPP_REGISTER_METHOD(0x00E21DC0, void, Save, (GhostLineRendererPlugin_LineRendererData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00E21F60, void, Load, (GhostLineRendererPlugin_LineRendererData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Executed, (GhostLineRendererPlugin_LineRendererData * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Executed, (GhostLineRendererPlugin_LineRendererData * __this, bool value));
}
