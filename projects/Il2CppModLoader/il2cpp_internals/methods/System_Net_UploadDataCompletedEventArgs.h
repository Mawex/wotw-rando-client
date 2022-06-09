#include <interception_macros.h>

namespace app::methods::System_Net::UploadDataCompletedEventArgs {
IL2CPP_REGISTER_METHOD(0x01BCB240, void, __ctor_1, (app::UploadDataCompletedEventArgs * this_ptr, app::Byte__Array * result, app::Exception * exception, bool cancelled, app::Object * user_token));
IL2CPP_REGISTER_METHOD(0x01BCB280, Byte__Array *, get_Result, (app::UploadDataCompletedEventArgs * this_ptr));
IL2CPP_REGISTER_METHOD(0x020ACF10, void, __ctor_2, (app::UploadDataCompletedEventArgs * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04711758, UploadDataCompletedEventArgs__ctor_1__MethodInfo);
}
