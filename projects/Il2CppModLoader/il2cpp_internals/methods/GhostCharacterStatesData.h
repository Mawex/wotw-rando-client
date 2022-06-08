using namespace app;

namespace app::methods::GhostCharacterStatesData {
IL2CPP_REGISTER_METHOD(0x002FA280, Dictionary_2_System_Int32_System_Boolean_ *, get_States, (GhostCharacterStatesData * __this));
IL2CPP_REGISTER_METHOD(0x00E18A30, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostCharacterStatesData * __this));
IL2CPP_REGISTER_METHOD(0x00E18A40, int32_t, GetDataSize, (GhostCharacterStatesData * __this));
IL2CPP_REGISTER_METHOD(0x00E18AD0, void, __ctor, (GhostCharacterStatesData * __this));
IL2CPP_REGISTER_METHOD(0x00E18C40, void, __ctor, (GhostCharacterStatesData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x00E18DD0, void, Record, (BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00E190B0, void, Save, (GhostCharacterStatesData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00E19390, void, Load, (GhostCharacterStatesData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Executed, (GhostCharacterStatesData * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_Executed, (GhostCharacterStatesData * __this, bool value));
}
