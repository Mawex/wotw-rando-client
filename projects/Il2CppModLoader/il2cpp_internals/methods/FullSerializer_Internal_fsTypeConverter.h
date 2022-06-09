#include <interception_macros.h>

namespace app::methods::FullSerializer_Internal::fsTypeConverter {
IL2CPP_REGISTER_METHOD(0x01502A50, bool, CanProcess, (app::fsTypeConverter * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (app::fsTypeConverter * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (app::fsTypeConverter * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x01502B20, fsResult, TrySerialize, (app::fsTypeConverter * this_ptr, app::Object * instance, app::fsData * * serialized, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x01502D20, fsResult, TryDeserialize, (app::fsTypeConverter * this_ptr, app::fsData * data, app::Object * * instance, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x01502ED0, Object *, CreateInstance, (app::fsTypeConverter * this_ptr, app::fsData * data, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::fsTypeConverter * this_ptr));
}
