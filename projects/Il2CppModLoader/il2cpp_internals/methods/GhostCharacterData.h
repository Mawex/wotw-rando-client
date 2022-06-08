using namespace app;

namespace app::methods::GhostCharacterData {
IL2CPP_REGISTER_METHOD(0x00E16AD0, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostCharacterData * __this));
IL2CPP_REGISTER_METHOD(0x00E16AE0, int32_t, GetDataSize, (GhostCharacterData * __this));
IL2CPP_REGISTER_METHOD(0x00E16AF0, void, __ctor, (GhostCharacterData * __this));
IL2CPP_REGISTER_METHOD(0x00E16FE0, void, __ctor, (GhostCharacterData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x00E16FF0, void, ResetPrevious, (GhostCharacterData * previous));
IL2CPP_REGISTER_METHOD(0x00E17150, void, UpdatePrevious, (GhostCharacterData * previous, Vector3 pos, Vector3 feetPos, Vector2 speed, bool faceLeft, float feetAngle, Quaternion rot));
IL2CPP_REGISTER_METHOD(0x00E171C0, void, Record, (BinaryWriter * binaryWriter, GhostCharacterData * previous));
IL2CPP_REGISTER_METHOD(0x00E17C50, void, Save, (GhostCharacterData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00E17DB0, void, Load, (GhostCharacterData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_Executed, (GhostCharacterData * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_Executed, (GhostCharacterData * __this, bool value));
}
