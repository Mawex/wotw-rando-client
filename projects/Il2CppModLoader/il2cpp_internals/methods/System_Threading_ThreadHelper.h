#include <interception_macros.h>

namespace app::methods::System::Threading::ThreadHelper {
IL2CPP_REGISTER_METHOD(0x023443E0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (ThreadHelper * __this, Delegate * start));
IL2CPP_REGISTER_METHOD(0x002FB960, void, SetExecutionContextHelper, (ThreadHelper * __this, ExecutionContext * ec));
IL2CPP_REGISTER_METHOD(0x02344540, void, ThreadStart_Context, (Object * state));
IL2CPP_REGISTER_METHODINFO(0x0473EF88, ThreadHelper_ThreadStart_Context__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023446A0, void, ThreadStart, (ThreadHelper * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04796318, ThreadHelper_ThreadStart__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023447E0, void, ThreadStart, (ThreadHelper * __this));
IL2CPP_REGISTER_METHODINFO(0x0474EAD0, ThreadHelper_ThreadStart_1__MethodInfo);
}
