#include <interception_macros.h>

namespace app::methods::DatadogMetricsEvent {
IL2CPP_REGISTER_METHOD(0x02E90170, String *, get_Url, (DatadogMetricsEvent * __this));
IL2CPP_REGISTER_METHOD(0x02E90260, void, __ctor, (DatadogMetricsEvent * __this, String * metric));
IL2CPP_REGISTER_METHOD(0x02E904B0, String *, ToJson, (DatadogMetricsEvent * __this));
IL2CPP_REGISTER_METHOD(0x02E90960, DatadogMetricsEvent *, AddTag, (DatadogMetricsEvent * __this, String * key, String * value));
IL2CPP_REGISTER_METHOD(0x02E90AC0, DatadogMetricsEvent *, AddPoint, (DatadogMetricsEvent * __this, int64_t time, int64_t value));
IL2CPP_REGISTER_METHOD(0x02E90C00, DatadogMetricsEvent *, AddPointNow, (DatadogMetricsEvent * __this, int64_t value));
}
