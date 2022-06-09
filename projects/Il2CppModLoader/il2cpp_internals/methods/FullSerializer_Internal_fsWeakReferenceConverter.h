#include <interception_macros.h>

namespace app::methods::FullSerializer_Internal::fsWeakReferenceConverter {
IL2CPP_REGISTER_METHOD(0x01504A10, bool, CanProcess, (app::fsWeakReferenceConverter * this_ptr, app::Type * type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestCycleSupport, (app::fsWeakReferenceConverter * this_ptr, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x00417870, bool, RequestInheritanceSupport, (app::fsWeakReferenceConverter * this_ptr, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x01504AC0, fsResult, TrySerialize, (app::fsWeakReferenceConverter * this_ptr, app::Object * instance, app::fsData * * serialized, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x01504F30, fsResult, TryDeserialize, (app::fsWeakReferenceConverter * this_ptr, app::fsData * data, app::Object * * instance, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x015053D0, Object *, CreateInstance, (app::fsWeakReferenceConverter * this_ptr, app::fsData * data, app::Type * storage_type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::fsWeakReferenceConverter * this_ptr));
}
