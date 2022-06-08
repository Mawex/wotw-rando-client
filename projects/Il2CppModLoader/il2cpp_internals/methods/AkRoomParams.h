#include <interception_macros.h>

namespace app::methods::AkRoomParams {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkRoomParams * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x01894F20, void *, getCPtr, (AkRoomParams * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkRoomParams * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x01894FB0, void, Finalize, (AkRoomParams * __this));
IL2CPP_REGISTER_METHOD(0x01895030, void, Dispose, (AkRoomParams * __this));
IL2CPP_REGISTER_METHOD(0x01895240, void, __ctor, (AkRoomParams * __this));
IL2CPP_REGISTER_METHOD(0x01895360, void, set_Up, (AkRoomParams * __this, AkVector * value));
IL2CPP_REGISTER_METHOD(0x018954A0, AkVector *, get_Up, (AkRoomParams * __this));
IL2CPP_REGISTER_METHOD(0x018956B0, void, set_Front, (AkRoomParams * __this, AkVector * value));
IL2CPP_REGISTER_METHOD(0x018957F0, AkVector *, get_Front, (AkRoomParams * __this));
IL2CPP_REGISTER_METHOD(0x01895A00, void, set_ReverbAuxBus, (AkRoomParams * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x01895B30, uint32_t, get_ReverbAuxBus, (AkRoomParams * __this));
IL2CPP_REGISTER_METHOD(0x01895C50, void, set_ReverbLevel, (AkRoomParams * __this, float value));
IL2CPP_REGISTER_METHOD(0x01895D80, float, get_ReverbLevel, (AkRoomParams * __this));
IL2CPP_REGISTER_METHOD(0x01895EA0, void, set_WallOcclusion, (AkRoomParams * __this, float value));
IL2CPP_REGISTER_METHOD(0x01895FD0, float, get_WallOcclusion, (AkRoomParams * __this));
IL2CPP_REGISTER_METHOD(0x018960F0, void, set_RoomGameObj_AuxSendLevelToSelf, (AkRoomParams * __this, float value));
IL2CPP_REGISTER_METHOD(0x01896220, float, get_RoomGameObj_AuxSendLevelToSelf, (AkRoomParams * __this));
IL2CPP_REGISTER_METHOD(0x01896340, void, set_RoomGameObj_KeepRegistered, (AkRoomParams * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01896470, bool, get_RoomGameObj_KeepRegistered, (AkRoomParams * __this));
}
