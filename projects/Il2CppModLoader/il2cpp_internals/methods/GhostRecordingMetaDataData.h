#include <interception_macros.h>

namespace app::methods::GhostRecordingMetaDataData {
IL2CPP_REGISTER_METHOD(0x007E3F10, int64_t, GetSize, (GhostRecordingMetaDataData * __this));
IL2CPP_REGISTER_METHOD(0x007E3F20, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostRecordingMetaDataData * __this));
IL2CPP_REGISTER_METHOD(0x007E3F30, int32_t, GetDataSize, (GhostRecordingMetaDataData * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Executed, (GhostRecordingMetaDataData * __this));
IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Executed, (GhostRecordingMetaDataData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x007E3F40, PlatformBehaviour *, get_CurrentPlatformBehaviour, ());
IL2CPP_REGISTER_METHOD(0x007E3FF0, void, __ctor, (GhostRecordingMetaDataData * __this, bool loadingFromFile));
IL2CPP_REGISTER_METHOD(0x007E43C0, void, __ctor, (GhostRecordingMetaDataData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x007E43D0, void, Save, (GhostRecordingMetaDataData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x007E4470, void, Load, (GhostRecordingMetaDataData * __this, BinaryReader * binaryReader));
}
