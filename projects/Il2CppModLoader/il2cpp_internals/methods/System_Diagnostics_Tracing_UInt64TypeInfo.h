#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::UInt64TypeInfo {
IL2CPP_REGISTER_METHOD(0x01A0F220, void, WriteMetadata, (UInt64TypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01A0F2F0, void, WriteData, (UInt64TypeInfo * __this, TraceLoggingDataCollector * collector, uint64_t * value));
IL2CPP_REGISTER_METHOD(0x01A0F320, void, __ctor, (UInt64TypeInfo * __this));
}
