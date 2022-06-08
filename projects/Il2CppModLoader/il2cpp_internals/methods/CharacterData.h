using namespace app;

namespace app::methods::CharacterData {
IL2CPP_REGISTER_METHOD(0x00420230, RecorderFrame_FrameDataTypes__Enum, FrameType, (CharacterData * __this));
IL2CPP_REGISTER_METHOD(0x0104D430, PlatformBehaviour *, get_CurrentPlatformBehaviour, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0104D9C0, void, Initialize, (CharacterData * __this));
IL2CPP_REGISTER_METHOD(0x0104DB90, void, Record, (BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x0104DE80, void, Save, (CharacterData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x0104DF30, void, Load, (CharacterData * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (CharacterData * __this));
}
