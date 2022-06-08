#include <interception_macros.h>

namespace app::methods::UnityEngine::AsyncOperation {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (AsyncOperation_1 * __this));
IL2CPP_REGISTER_METHOD(0x0241E2B0, void, InternalDestroy, (void * ptr));
IL2CPP_REGISTER_METHOD(0x0241E300, bool, get_isDone, (AsyncOperation_1 * __this));
IL2CPP_REGISTER_METHOD(0x0241E350, float, get_progress, (AsyncOperation_1 * __this));
IL2CPP_REGISTER_METHOD(0x0241E3A0, void, set_priority, (AsyncOperation_1 * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x0241E400, void, set_allowSceneActivation, (AsyncOperation_1 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0241E460, void, Finalize, (AsyncOperation_1 * __this));
IL2CPP_REGISTER_METHOD(0x0241E520, void, InvokeCompletionEvent, (AsyncOperation_1 * __this));
IL2CPP_REGISTER_METHOD(0x0241E5C0, void, add_completed, (AsyncOperation_1 * __this, Action_1_UnityEngine_AsyncOperation_ * value));
IL2CPP_REGISTER_METHOD(0x0241E6F0, void, remove_completed, (AsyncOperation_1 * __this, Action_1_UnityEngine_AsyncOperation_ * value));
}
