#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::StringTypeInfo {
IL2CPP_REGISTER_METHOD(0x01A08E70, void, WriteMetadata, (StringTypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01A08F40, void, WriteData, (StringTypeInfo * __this, TraceLoggingDataCollector * collector, String * * value));
IL2CPP_REGISTER_METHOD(0x01A09060, Object *, GetData, (StringTypeInfo * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x01A090E0, void, __ctor, (StringTypeInfo * __this));
}
