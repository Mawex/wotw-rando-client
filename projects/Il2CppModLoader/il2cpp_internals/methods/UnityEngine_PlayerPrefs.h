#include <interception_macros.h>

namespace app::methods::UnityEngine::PlayerPrefs {
IL2CPP_REGISTER_METHOD(0x02967A40, bool, TrySetInt, (String * key, int32_t value));
IL2CPP_REGISTER_METHOD(0x02967AA0, bool, TrySetFloat, (String * key, float value));
IL2CPP_REGISTER_METHOD(0x02967B00, bool, TrySetSetString, (String * key, String * value));
IL2CPP_REGISTER_METHOD(0x02967B60, void, SetInt, (String * key, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x047601C8, PlayerPrefs_SetInt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02967C60, int32_t, GetInt, (String * key, int32_t defaultValue));
IL2CPP_REGISTER_METHOD(0x02967CC0, void, SetFloat, (String * key, float value));
IL2CPP_REGISTER_METHODINFO(0x04724D00, PlayerPrefs_SetFloat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02967DC0, float, GetFloat, (String * key, float defaultValue));
IL2CPP_REGISTER_METHOD(0x02967E20, void, SetString, (String * key, String * value));
IL2CPP_REGISTER_METHODINFO(0x047215B8, PlayerPrefs_SetString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02967F20, String *, GetString, (String * key, String * defaultValue));
IL2CPP_REGISTER_METHOD(0x02967F80, void, DeleteKey, (String * key));
IL2CPP_REGISTER_METHOD(0x02967FD0, void, Save, ());
}
