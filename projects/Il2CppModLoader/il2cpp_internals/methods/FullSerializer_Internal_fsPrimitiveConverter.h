#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsPrimitiveConverter {
IL2CPP_REGISTER_METHOD(0x0165B220, bool, CanProcess, (fsPrimitiveConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (fsPrimitiveConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (fsPrimitiveConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x0165B360, bool, UseBool, (Type * type));
IL2CPP_REGISTER_METHOD(0x0165B410, bool, UseInt64, (Type * type));
IL2CPP_REGISTER_METHOD(0x0165B650, bool, UseDouble, (Type * type));
IL2CPP_REGISTER_METHOD(0x0165B780, bool, UseString, (Type * type));
IL2CPP_REGISTER_METHOD(0x0165B880, fsResult, TrySerialize, (fsPrimitiveConverter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x0165C2F0, fsResult, TryDeserialize, (fsPrimitiveConverter * __this, fsData * storage, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsPrimitiveConverter * __this));
}
