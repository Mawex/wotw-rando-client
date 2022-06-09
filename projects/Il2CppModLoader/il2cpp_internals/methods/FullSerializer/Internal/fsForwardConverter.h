#include <interception_macros.h>

namespace app::methods::FullSerializer::Internal::fsForwardConverter {
    IL2CPP_REGISTER_METHOD(0x01655A90, void, __ctor, (app::fsForwardConverter * this_ptr, app::fsForwardAttribute * attribute));
    IL2CPP_REGISTER_METHOD(0x01655AB0, bool, CanProcess, (app::fsForwardConverter * this_ptr, app::Type * type));
    IL2CPP_REGISTER_METHODINFO(0x0477EF78, fsForwardConverter_CanProcess__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01655B10, app::fsResult, GetProperty, (app::fsForwardConverter * this_ptr, app::Object * instance, app::fsMetaProperty * * property));
    IL2CPP_REGISTER_METHOD(0x01655D90, app::fsResult, TrySerialize, (app::fsForwardConverter * this_ptr, app::Object * instance, app::fsData * * serialized, app::Type * storage_type));
    IL2CPP_REGISTER_METHOD(0x01655F50, app::fsResult, TryDeserialize, (app::fsForwardConverter * this_ptr, app::fsData * data, app::Object * * instance, app::Type * storage_type));
    IL2CPP_REGISTER_METHOD(0x01656150, app::Object *, CreateInstance, (app::fsForwardConverter * this_ptr, app::fsData * data, app::Type * storage_type));
}
