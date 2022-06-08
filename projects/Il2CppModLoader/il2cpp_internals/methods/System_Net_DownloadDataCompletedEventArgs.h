#include <interception_macros.h>

namespace app::methods::System::Net::DownloadDataCompletedEventArgs {
IL2CPP_REGISTER_METHOD(0x01BCB240, void, __ctor, (DownloadDataCompletedEventArgs * __this, Byte__Array * result, Exception * exception, bool cancelled, Object * userToken));
IL2CPP_REGISTER_METHOD(0x01BCB280, Byte__Array *, get_Result, (DownloadDataCompletedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x01EB4020, void, __ctor, (DownloadDataCompletedEventArgs * __this));
IL2CPP_REGISTER_METHODINFO(0x047410C0, DownloadDataCompletedEventArgs__ctor_1__MethodInfo);
}
