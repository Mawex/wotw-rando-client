#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::CompletionActionInvoker {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (CompletionActionInvoker * __this, ITaskCompletionAction * action, Task * completingTask));
IL2CPP_REGISTER_METHOD(0x0232F8A0, void, ExecuteWorkItem, (CompletionActionInvoker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, MarkAborted, (CompletionActionInvoker * __this, ThreadAbortException * tae));
}
