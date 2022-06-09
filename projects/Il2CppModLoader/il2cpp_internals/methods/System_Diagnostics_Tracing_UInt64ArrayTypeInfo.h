#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::UInt64ArrayTypeInfo {
IL2CPP_REGISTER_METHOD(0x01A0EFB0, void, WriteMetadata, (app::UInt64ArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01A0F080, void, WriteData, (app::UInt64ArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::UInt64__Array * * value));
IL2CPP_REGISTER_METHOD(0x01A0F1A0, void, __ctor, (app::UInt64ArrayTypeInfo * this_ptr));
}
