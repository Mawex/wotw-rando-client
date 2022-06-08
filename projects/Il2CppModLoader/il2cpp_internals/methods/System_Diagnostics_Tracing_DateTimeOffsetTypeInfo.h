#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::DateTimeOffsetTypeInfo {
IL2CPP_REGISTER_METHOD(0x01748C70, void, WriteMetadata, (DateTimeOffsetTypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01748D70, void, WriteData, (DateTimeOffsetTypeInfo * __this, TraceLoggingDataCollector * collector, DateTimeOffset * value));
IL2CPP_REGISTER_METHOD(0x01748E10, void, __ctor, (DateTimeOffsetTypeInfo * __this));
}
