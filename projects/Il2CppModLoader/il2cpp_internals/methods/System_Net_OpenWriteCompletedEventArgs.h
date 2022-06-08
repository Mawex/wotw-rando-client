#include <interception_macros.h>

namespace app::methods::System::Net::OpenWriteCompletedEventArgs {
IL2CPP_REGISTER_METHOD(0x01BCB240, void, __ctor, (OpenWriteCompletedEventArgs * __this, Stream * result, Exception * exception, bool cancelled, Object * userToken));
IL2CPP_REGISTER_METHOD(0x01BCB280, Stream *, get_Result, (OpenWriteCompletedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x01BCB2D0, void, __ctor, (OpenWriteCompletedEventArgs * __this));
IL2CPP_REGISTER_METHODINFO(0x04731238, OpenWriteCompletedEventArgs__ctor_1__MethodInfo);
}
