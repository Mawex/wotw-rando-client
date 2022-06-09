#include <interception_macros.h>

namespace app::methods::Moon::MoonProfilerSample {
    IL2CPP_REGISTER_METHOD(0x0111BF20, app::MoonProfilerSample, operator_, (app::Recorder * recorder));
    IL2CPP_REGISTER_METHOD(0x00EB0C50, app::MoonProfilerSample, operator___1, (app::MoonProfilerSample a, app::MoonProfilerSample b));
    IL2CPP_REGISTER_METHOD(0x00EB0C90, app::MoonProfilerSample, operator___2, (app::MoonProfilerSample a, int32_t b));
}
