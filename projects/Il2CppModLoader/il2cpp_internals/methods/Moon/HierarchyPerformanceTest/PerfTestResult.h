#include <interception_macros.h>

namespace app::methods::Moon::HierarchyPerformanceTest::PerfTestResult {
    IL2CPP_REGISTER_METHOD(0x00B55DF0, void, __ctor, (app::PerfTestResult * this_ptr, double cpu_time, double gpu_time));
    IL2CPP_REGISTER_METHOD(0x014A9990, app::String *, ToString, (app::PerfTestResult * this_ptr));
}
