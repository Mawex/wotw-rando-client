#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsEnumConverter {
IL2CPP_REGISTER_METHOD(0x01654CA0, bool, CanProcess, (fsEnumConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (fsEnumConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (fsEnumConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01654D50, Object *, CreateInstance, (fsEnumConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01654E10, fsResult, TrySerialize, (fsEnumConverter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x016554F0, fsResult, TryDeserialize, (fsEnumConverter * __this, fsData * data, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsEnumConverter * __this));
IL2CPP_REGISTER_METHOD(0x018F2990, bool, ArrayContains, (Object__Array * values, Object * value));
IL2CPP_REGISTER_METHOD(0x018F2990, bool, ArrayContains, (String__Array * values, String * value));
IL2CPP_REGISTER_METHODINFO(0x04790FB0, fsEnumConverter_ArrayContains_1__MethodInfo);
}
