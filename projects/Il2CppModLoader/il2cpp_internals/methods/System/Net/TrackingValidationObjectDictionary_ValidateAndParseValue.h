#include <interception_macros.h>

namespace app::methods::System::Net::TrackingValidationObjectDictionary_ValidateAndParseValue {
    IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::TrackingValidationObjectDictionary_ValidateAndParseValue * this_ptr, app::Object * object, void * method_1));
    IL2CPP_REGISTER_METHOD(0x01852930, app::Object *, Invoke, (app::TrackingValidationObjectDictionary_ValidateAndParseValue * this_ptr, app::Object * value_to_validate));
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::TrackingValidationObjectDictionary_ValidateAndParseValue * this_ptr, app::Object * value_to_validate, app::AsyncCallback * callback, app::Object * object));
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::TrackingValidationObjectDictionary_ValidateAndParseValue * this_ptr, app::IAsyncResult * result));
}
