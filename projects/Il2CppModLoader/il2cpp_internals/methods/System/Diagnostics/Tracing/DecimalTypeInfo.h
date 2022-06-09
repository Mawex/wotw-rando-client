#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::DecimalTypeInfo {
    IL2CPP_REGISTER_METHOD(0x017491A0, void, WriteMetadata, (app::DecimalTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x01749270, void, WriteData, (app::DecimalTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::Decimal * value));
    IL2CPP_REGISTER_METHOD(0x01749350, void, __ctor, (app::DecimalTypeInfo * this_ptr));
}
