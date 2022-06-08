#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ByteTypeInfo {
IL2CPP_REGISTER_METHOD(0x017479F0, void, WriteMetadata, (ByteTypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01747AC0, void, WriteData, (ByteTypeInfo * __this, TraceLoggingDataCollector * collector, uint8_t * value));
IL2CPP_REGISTER_METHOD(0x01747AF0, void, __ctor, (ByteTypeInfo * __this));
}
