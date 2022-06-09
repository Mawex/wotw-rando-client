#include <interception_macros.h>

namespace app::methods::System_Net::UploadStringCompletedEventArgs {
IL2CPP_REGISTER_METHOD(0x01BCB240, void, __ctor_1, (app::UploadStringCompletedEventArgs * this_ptr, app::String * result, app::Exception * exception, bool cancelled, app::Object * user_token));
IL2CPP_REGISTER_METHOD(0x01BCB280, String *, get_Result, (app::UploadStringCompletedEventArgs * this_ptr));
IL2CPP_REGISTER_METHOD(0x020ACFF0, void, __ctor_2, (app::UploadStringCompletedEventArgs * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x04702718, UploadStringCompletedEventArgs__ctor_1__MethodInfo);
}
