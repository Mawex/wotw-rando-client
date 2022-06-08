#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::StackGuard {
IL2CPP_REGISTER_METHOD(0x0232FB80, bool, TryBeginInliningScope, (StackGuard * __this));
IL2CPP_REGISTER_METHOD(0x0232FB90, void, EndInliningScope, (StackGuard * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CheckForSufficientStack, (StackGuard * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (StackGuard * __this));
}
