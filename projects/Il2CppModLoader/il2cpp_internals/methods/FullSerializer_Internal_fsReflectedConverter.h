#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsReflectedConverter {
IL2CPP_REGISTER_METHOD(0x0165C8F0, bool, CanProcess, (fsReflectedConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x0165CA20, fsResult, TrySerialize, (fsReflectedConverter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x0165CD00, fsResult, TryDeserialize, (fsReflectedConverter * __this, fsData * data, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHOD(0x0165D060, Object *, CreateInstance, (fsReflectedConverter * __this, fsData * data, Type * storageType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsReflectedConverter * __this));
}
