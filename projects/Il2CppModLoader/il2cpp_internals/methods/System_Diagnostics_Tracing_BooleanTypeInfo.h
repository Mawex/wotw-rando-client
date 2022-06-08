#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::BooleanTypeInfo {
IL2CPP_REGISTER_METHOD(0x017473D0, void, WriteMetadata, (BooleanTypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x017474A0, void, WriteData, (BooleanTypeInfo * __this, TraceLoggingDataCollector * collector, bool * value));
IL2CPP_REGISTER_METHOD(0x01747580, void, __ctor, (BooleanTypeInfo * __this));
}
