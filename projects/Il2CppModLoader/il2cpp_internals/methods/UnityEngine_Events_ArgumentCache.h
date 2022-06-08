#include <interception_macros.h>

namespace app::methods::UnityEngine::Events::ArgumentCache {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ArgumentCache * __this));
IL2CPP_REGISTER_METHOD(0x01F2AB40, Object_1 *, get_unityObjectArgument, (ArgumentCache * __this));
IL2CPP_REGISTER_METHOD(0x01F25880, String *, get_unityObjectArgumentAssemblyTypeName, (ArgumentCache * __this));
IL2CPP_REGISTER_METHOD(0x00EB1C70, int32_t, get_intArgument, (ArgumentCache * __this));
IL2CPP_REGISTER_METHOD(0x0242E6A0, float, get_floatArgument, (ArgumentCache * __this));
IL2CPP_REGISTER_METHOD(0x01F234C0, String *, get_stringArgument, (ArgumentCache * __this));
IL2CPP_REGISTER_METHOD(0x0242E6B0, bool, get_boolArgument, (ArgumentCache * __this));
IL2CPP_REGISTER_METHOD(0x0242E6C0, void, TidyAssemblyTypeName, (ArgumentCache * __this));
IL2CPP_REGISTER_METHOD(0x0242E920, void, OnBeforeSerialize, (ArgumentCache * __this));
IL2CPP_REGISTER_METHOD(0x0242E920, void, OnAfterDeserialize, (ArgumentCache * __this));
}
