#include <interception_macros.h>

namespace app::methods::HierarchyPerfTest::PerfTestTimer_TestData {
IL2CPP_REGISTER_METHOD(0x01974EF0, void, __ctor, (PerfTestTimer_TestData * __this));
IL2CPP_REGISTER_METHOD(0x01974FB0, String__Array *, ToCsvRow, (PerfTestTimer_TestData * __this));
IL2CPP_REGISTER_METHOD(0x01975280, String *, FormatBytes, (int64_t bytes));
IL2CPP_REGISTER_METHOD(0x019752B0, String *, FormatTimeSpan, (TimeSpan timeSpan));
IL2CPP_REGISTER_METHOD(0x01975310, void, __cctor, ());
}
