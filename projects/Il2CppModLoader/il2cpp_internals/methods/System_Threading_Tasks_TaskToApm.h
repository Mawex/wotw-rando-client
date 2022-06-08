#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::TaskToApm {
IL2CPP_REGISTER_METHOD(0x023401B0, IAsyncResult *, Begin, (Task * task, AsyncCallback * callback, Object * state));
IL2CPP_REGISTER_METHOD(0x02340440, void, End, (IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x02340530, void, InvokeCallbackWhenTaskCompletes, (Task * antecedent, AsyncCallback * callback, IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x01580480, Object *, End, (IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHOD(0x01580330, int32_t, End, (IAsyncResult * asyncResult));
IL2CPP_REGISTER_METHODINFO(0x047620A8, TaskToApm_End_2__MethodInfo);
}
