#include <interception_macros.h>

namespace app::methods::XGamingRuntime::Interop::AsyncHelpers {
IL2CPP_REGISTER_METHOD(0x030AFB50, XAsyncBlockPtr, WrapAsyncBlock, (XTaskQueueHandle queue, XAsyncCompletionRoutine * callback));
IL2CPP_REGISTER_METHOD(0x030B0020, void, CleanupAsyncBlock, (XAsyncBlockPtr block));
IL2CPP_REGISTER_METHOD(0x030B0150, void, AsyncBlockCallback, (XAsyncBlockPtr block));
IL2CPP_REGISTER_METHODINFO(0x04758830, AsyncHelpers_AsyncBlockCallback__MethodInfo);
}
