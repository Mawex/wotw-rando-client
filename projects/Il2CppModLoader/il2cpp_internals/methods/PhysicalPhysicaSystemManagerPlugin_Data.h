#include <interception_macros.h>

namespace app::methods::PhysicalPhysicaSystemManagerPlugin_Data {
IL2CPP_REGISTER_METHOD(0x014ED2B0, GhostFrame_FrameDataTypes__Enum, get_FrameType, (PhysicalPhysicaSystemManagerPlugin_Data * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (PhysicalPhysicaSystemManagerPlugin_Data * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Executed, (PhysicalPhysicaSystemManagerPlugin_Data * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Executed, (PhysicalPhysicaSystemManagerPlugin_Data * __this, bool value));
IL2CPP_REGISTER_METHOD(0x014ED2C0, void, Load, (PhysicalPhysicaSystemManagerPlugin_Data * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x014ED770, void, Save, (PhysicalPhysicaSystemManagerPlugin_Data * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x014EDB40, void, Record, (BinaryWriter * binaryWriter, GlobalRecordingTable * table));
IL2CPP_REGISTER_METHOD(0x014EE260, bool, IsPhysicalSystemValidForRecording, (PhysicalSystemManager * physicalSystemManager));
IL2CPP_REGISTER_METHOD(0x014EE2A0, void, __ctor, (PhysicalPhysicaSystemManagerPlugin_Data * __this));
}
