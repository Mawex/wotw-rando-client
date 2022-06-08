#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsTypeConverter {
IL2CPP_REGISTER_METHOD(0x01502A50, bool, CanProcess, (fsTypeConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (fsTypeConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (fsTypeConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01502B20, fsResult, TrySerialize, (fsTypeConverter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01502D20, fsResult, TryDeserialize, (fsTypeConverter * __this, fsData * data, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01502ED0, Object *, CreateInstance, (fsTypeConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsTypeConverter * __this));
}
