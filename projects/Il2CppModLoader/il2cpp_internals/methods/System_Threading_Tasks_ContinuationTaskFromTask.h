#include <interception_macros.h>

namespace app::methods::System::Threading::Tasks::ContinuationTaskFromTask {
IL2CPP_REGISTER_METHOD(0x0232F930, void, __ctor, (ContinuationTaskFromTask * __this, Task * antecedent, Delegate * action, Object * state, TaskCreationOptions__Enum creationOptions, InternalTaskOptions__Enum internalOptions, StackCrawlMark__Enum * stackMark));
IL2CPP_REGISTER_METHOD(0x0232FA40, void, InnerInvoke, (ContinuationTaskFromTask * __this));
}
