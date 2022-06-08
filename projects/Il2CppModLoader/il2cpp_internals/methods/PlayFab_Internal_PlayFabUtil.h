#include <interception_macros.h>

namespace app::methods::PlayFab::Internal::PlayFabUtil {
IL2CPP_REGISTER_METHOD(0x0183FF40, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01840570, SimpleJsonInstance_PlayFabSimpleJsonCuztomization *, get_ApiSerializerStrategy, ());
IL2CPP_REGISTER_METHOD(0x01840610, String *, get_timeStamp, ());
IL2CPP_REGISTER_METHOD(0x01840710, String *, get_utcTimeStamp, ());
IL2CPP_REGISTER_METHOD(0x01840810, String *, Format, (String * text, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01840840, String *, ReadAllFileText, (String * filename));
IL2CPP_REGISTER_METHOD(0x01840F40, String *, GetLocalSettingsFileProperty, (String * propertyKey));
}
