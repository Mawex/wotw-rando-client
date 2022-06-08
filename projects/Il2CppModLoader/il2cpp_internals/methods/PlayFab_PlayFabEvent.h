#include <interception_macros.h>

namespace app::methods::PlayFab::PlayFabEvent {
IL2CPP_REGISTER_METHOD(0x002FC6D0, PlayFabEventType__Enum, get_EventType, (PlayFabEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_EventType, (PlayFabEvent * __this, PlayFabEventType__Enum value));
IL2CPP_REGISTER_METHOD(0x0195B0D0, String *, get_Name, (PlayFabEvent * __this));
IL2CPP_REGISTER_METHOD(0x01A27F10, void, set_Name, (PlayFabEvent * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, EventContents *, get_EventContents, (PlayFabEvent * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_EventContents, (PlayFabEvent * __this, EventContents * value));
IL2CPP_REGISTER_METHOD(0x01A27F30, void, __ctor, (PlayFabEvent * __this));
IL2CPP_REGISTER_METHOD(0x01A28160, void, SetProperty, (PlayFabEvent * __this, String * name, String * value));
IL2CPP_REGISTER_METHOD(0x01A283B0, void, SetProperty, (PlayFabEvent * __this, String * name, bool value));
IL2CPP_REGISTER_METHOD(0x01A28610, void, SetProperty, (PlayFabEvent * __this, String * name, DateTime value));
IL2CPP_REGISTER_METHOD(0x01A28890, void, SetProperty, (PlayFabEvent * __this, String * name, int64_t value));
IL2CPP_REGISTER_METHOD(0x01A28AE0, void, SetProperty, (PlayFabEvent * __this, String * name, double value));
IL2CPP_REGISTER_METHOD(0x01A28D40, void, SetProperty, (PlayFabEvent * __this, String * name, Guid value));
}
