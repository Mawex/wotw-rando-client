#include <interception_macros.h>

namespace app::methods::HierarchyPerfTest::PerfTestTimer_TestData {
IL2CPP_REGISTER_METHOD(0x01974EF0, void, __ctor, (app::PerfTestTimer_TestData * this_ptr));
IL2CPP_REGISTER_METHOD(0x01974FB0, String__Array *, ToCsvRow, (app::PerfTestTimer_TestData * this_ptr));
IL2CPP_REGISTER_METHOD(0x01975280, String *, FormatBytes, (int64_t bytes));
IL2CPP_REGISTER_METHOD(0x019752B0, String *, FormatTimeSpan, (app::TimeSpan time_span));
IL2CPP_REGISTER_METHOD(0x01975310, void, __cctor, ());
}
