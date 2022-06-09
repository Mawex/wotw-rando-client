#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::SByteArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A07230, void, WriteMetadata, (app::SByteArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x01A07300, void, WriteData, (app::SByteArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::SByte__Array * * value));
    IL2CPP_REGISTER_METHOD(0x01A07420, void, __ctor, (app::SByteArrayTypeInfo * this_ptr));
}
