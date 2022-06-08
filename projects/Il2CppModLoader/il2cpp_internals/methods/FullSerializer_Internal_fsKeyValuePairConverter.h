#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsKeyValuePairConverter {
IL2CPP_REGISTER_METHOD(0x01657F40, bool, CanProcess, (fsKeyValuePairConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (fsKeyValuePairConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (fsKeyValuePairConverter * __this, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01658050, fsResult, TryDeserialize, (fsKeyValuePairConverter * __this, fsData * data, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHOD(0x01658430, fsResult, TrySerialize, (fsKeyValuePairConverter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsKeyValuePairConverter * __this));
}
