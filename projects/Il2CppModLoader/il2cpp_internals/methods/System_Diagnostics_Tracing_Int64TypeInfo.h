#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::Int64TypeInfo {
IL2CPP_REGISTER_METHOD(0x019FEFC0, void, WriteMetadata, (Int64TypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x019FF090, void, WriteData, (Int64TypeInfo * __this, TraceLoggingDataCollector * collector, int64_t * value));
IL2CPP_REGISTER_METHOD(0x019FF0C0, void, __ctor, (Int64TypeInfo * __this));
}
