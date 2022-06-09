#include <interception_macros.h>

namespace app::methods::System_Threading_Tasks::StandardTaskContinuation {
    IL2CPP_REGISTER_METHOD(0x0232FBB0, void, __ctor, (app::StandardTaskContinuation * this_ptr, app::Task * task, app::TaskContinuationOptions__Enum options, app::TaskScheduler * scheduler));
    IL2CPP_REGISTER_METHOD(0x0232FCB0, void, Run, (app::StandardTaskContinuation * this_ptr, app::Task * completed_task, bool b_can_inline_continuation_task));
}
