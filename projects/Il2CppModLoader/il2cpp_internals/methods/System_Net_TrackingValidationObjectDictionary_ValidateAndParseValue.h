#include <interception_macros.h>

namespace app::methods::System_Net::TrackingValidationObjectDictionary_ValidateAndParseValue {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::TrackingValidationObjectDictionary_ValidateAndParseValue * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x01852930, Object *, Invoke, (app::TrackingValidationObjectDictionary_ValidateAndParseValue * this_ptr, app::Object * value_to_validate));
IL2CPP_REGISTER_METHOD(0x00674080, IAsyncResult *, BeginInvoke, (app::TrackingValidationObjectDictionary_ValidateAndParseValue * this_ptr, app::Object * value_to_validate, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Object *, EndInvoke, (app::TrackingValidationObjectDictionary_ValidateAndParseValue * this_ptr, app::IAsyncResult * result));
}
