#include <interception_macros.h>

namespace app::methods::System::Net::OpenReadCompletedEventArgs {
IL2CPP_REGISTER_METHOD(0x01BCB240, void, __ctor, (OpenReadCompletedEventArgs * __this, Stream * result, Exception * exception, bool cancelled, Object * userToken));
IL2CPP_REGISTER_METHOD(0x01BCB280, Stream *, get_Result, (OpenReadCompletedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x01BCB2A0, void, __ctor, (OpenReadCompletedEventArgs * __this));
IL2CPP_REGISTER_METHODINFO(0x04779D98, OpenReadCompletedEventArgs__ctor_1__MethodInfo);
}
