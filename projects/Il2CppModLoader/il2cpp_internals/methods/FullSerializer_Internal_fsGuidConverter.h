#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsGuidConverter {
IL2CPP_REGISTER_METHOD(0x01656230, bool, CanProcess, (fsGuidConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (fsGuidConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (fsGuidConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x016562E0, fsResult, TrySerialize, (fsGuidConverter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01656510, fsResult, TryDeserialize, (fsGuidConverter * __this, fsData * data, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01656670, Object *, CreateInstance, (fsGuidConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsGuidConverter * __this));
}
