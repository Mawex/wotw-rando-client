#include <interception_macros.h>

namespace app::methods::Moon::ContinuousIntegration::ProgressReport {
IL2CPP_REGISTER_METHOD(0x0318B700, void, __ctor, (ProgressReport * __this, String * taskName));
IL2CPP_REGISTER_METHOD(0x0318B7C0, void, __ctor, (ProgressReport * __this, String * taskName, int32_t taskIndex, int32_t taskCount));
IL2CPP_REGISTER_METHOD(0x0318BA90, void, Dispose, (ProgressReport * __this));
IL2CPP_REGISTER_METHOD(0x00502220, String *, Build, (ProgressReport * __this, String * taskName));
IL2CPP_REGISTER_METHOD(0x0318BB30, String *, Build, (ProgressReport * __this, String * taskName, int32_t taskIndex, int32_t taskCount));
}
