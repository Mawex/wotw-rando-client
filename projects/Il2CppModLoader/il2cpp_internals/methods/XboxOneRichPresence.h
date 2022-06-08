using namespace app;

namespace app::methods::XboxOneRichPresence {
IL2CPP_REGISTER_METHOD(0x01C591D0, bool, get_EnableRichPresence, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01C59270, void, set_EnableRichPresence, (bool value));
IL2CPP_REGISTER_METHOD(0x00417870, bool, SetPresence, (XboxOneRichPresence_RichPresence__Enum presence, Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, SetPresence, (int32_t userId, XboxOneRichPresence_RichPresence__Enum presence, Action * success, Action * failure));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateRichPresence, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00417870, bool, SendLevelStart, (String * area));
IL2CPP_REGISTER_METHOD(0x01C59320, XboxOneRichPresence_Level__Enum, MapAreaNameToLevel, (String * areaName));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAllRichPresenceStrings, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, SendGameProgress, (String * UserId, Guid PlayerSessionId, float CompletionPercent));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XboxOneRichPresence * __this));
IL2CPP_REGISTER_METHOD(0x01C59740, void, __cctor, (MethodInfo * method));
}
