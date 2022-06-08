#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::UInt64ArrayTypeInfo {
IL2CPP_REGISTER_METHOD(0x01A0EFB0, void, WriteMetadata, (UInt64ArrayTypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01A0F080, void, WriteData, (UInt64ArrayTypeInfo * __this, TraceLoggingDataCollector * collector, UInt64__Array * * value));
IL2CPP_REGISTER_METHOD(0x01A0F1A0, void, __ctor, (UInt64ArrayTypeInfo * __this));
}
