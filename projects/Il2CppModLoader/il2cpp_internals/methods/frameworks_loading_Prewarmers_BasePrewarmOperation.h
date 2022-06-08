#include <interception_macros.h>

namespace app::methods::frameworks::loading::Prewarmers::BasePrewarmOperation {
IL2CPP_REGISTER_METHOD(0x002FC6D0, PrewarmOperationType__Enum, get_OperationType, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_OperationType, (BasePrewarmOperation * __this, PrewarmOperationType__Enum value));
IL2CPP_REGISTER_METHOD(0x00CC59E0, PrewarmOperationSlot__Enum, get_OperationSlot, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_OperationSlot, (BasePrewarmOperation * __this, PrewarmOperationSlot__Enum value));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_PrewarmOperationOrder, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x0052A000, void, set_PrewarmOperationOrder, (BasePrewarmOperation * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_Name, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Name, (BasePrewarmOperation * __this, String * value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_HasBegun, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_HasBegun, (BasePrewarmOperation * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_ShouldExecute, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F5DF40, void, set_ShouldExecute, (BasePrewarmOperation * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00F5DF50, bool, get_IsDone, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F5DF60, void, set_IsDone, (BasePrewarmOperation * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00504E70, float, get_PercentDone, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00504E80, void, set_PercentDone, (BasePrewarmOperation * __this, float value));
IL2CPP_REGISTER_METHOD(0x00F5DF70, float, get_TimeElapsed, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F5DE70, bool, Begin, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F5DED0, bool, Update, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, FinishImmediately, (BasePrewarmOperation * __this));
IL2CPP_REGISTER_METHOD(0x00F5E030, int32_t, DebugDrawStatus, (BasePrewarmOperation * __this, int32_t xbegin, int32_t ybegin));
IL2CPP_REGISTER_METHOD(0x00F5E1F0, bool, ShouldExecuteBasedOnCommandlineArgument, (String * argument, bool defaultValue));
IL2CPP_REGISTER_METHOD(0x00F5E2D0, String *, ParseArgument, (String * flag));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BasePrewarmOperation * __this));
}
