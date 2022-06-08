#include <interception_macros.h>

namespace app::methods::MicroProfilerCSV {
IL2CPP_REGISTER_METHOD(0x03157BF0, void, AppendHeaderRow, (StringBuilder * s, String * separator));
IL2CPP_REGISTER_METHOD(0x03157CB0, void, AppendHeaderRow, (StringBuilder * s, String * separator, MetricOutput__Array * formatting));
IL2CPP_REGISTER_METHOD(0x03157E60, void, AppendSummaryHeaderRow, (StringBuilder * s, String * separator));
IL2CPP_REGISTER_METHOD(0x03157F20, void, AppendSummaryToStringBuilder, (int32_t startFrame, int32_t endFrame, StringBuilder * sb, MetricOutput__Array * formatting, String * separator));
IL2CPP_REGISTER_METHOD(0x03158120, void, AppendToStringBuilder, (MicroProfiler_SampleStats * stats, StringBuilder * sb, String * separator));
IL2CPP_REGISTER_METHOD(0x031581F0, void, AppendToStringBuilder, (MicroProfiler_SampleStats * stats, StringBuilder * sb, MetricOutput__Array * formatting, String * separator));
}
