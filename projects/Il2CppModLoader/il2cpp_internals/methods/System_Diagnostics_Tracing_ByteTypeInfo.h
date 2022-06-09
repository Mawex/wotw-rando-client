#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::ByteTypeInfo {
    IL2CPP_REGISTER_METHOD(0x017479F0, void, WriteMetadata, (app::ByteTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x01747AC0, void, WriteData, (app::ByteTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, uint8_t * value));
    IL2CPP_REGISTER_METHOD(0x01747AF0, void, __ctor, (app::ByteTypeInfo * this_ptr));
}
