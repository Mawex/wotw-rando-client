#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsDateConverter {
IL2CPP_REGISTER_METHOD(0x01652370, String *, get_DateTimeFormatString, (fsDateConverter * __this));
IL2CPP_REGISTER_METHOD(0x01652420, bool, CanProcess, (fsDateConverter * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x01652550, fsResult, TrySerialize, (fsDateConverter * __this, Object * instance, fsData * * serialized, Type * storageType));
IL2CPP_REGISTER_METHODINFO(0x0471BE68, fsDateConverter_TrySerialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01652940, fsResult, TryDeserialize, (fsDateConverter * __this, fsData * data, Object * * instance, Type * storageType));
IL2CPP_REGISTER_METHODINFO(0x04720180, fsDateConverter_TryDeserialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (fsDateConverter * __this));
}
