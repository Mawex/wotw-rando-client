#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::DecimalTypeInfo {
IL2CPP_REGISTER_METHOD(0x017491A0, void, WriteMetadata, (DecimalTypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x01749270, void, WriteData, (DecimalTypeInfo * __this, TraceLoggingDataCollector * collector, Decimal * value));
IL2CPP_REGISTER_METHOD(0x01749350, void, __ctor, (DecimalTypeInfo * __this));
}
