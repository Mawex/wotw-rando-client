#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::UInt32TypeInfo {
IL2CPP_REGISTER_METHOD(0x01A0ED80, void, WriteMetadata, (UInt32TypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01A0EE50, void, WriteData, (UInt32TypeInfo * __this, TraceLoggingDataCollector * collector, uint32_t * value));
IL2CPP_REGISTER_METHOD(0x01A0EE80, void, __ctor, (UInt32TypeInfo * __this));
}
