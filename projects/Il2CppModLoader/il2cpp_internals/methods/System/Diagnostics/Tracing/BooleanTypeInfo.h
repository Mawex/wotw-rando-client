#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::BooleanTypeInfo {
    IL2CPP_REGISTER_METHOD(0x017473D0, void, WriteMetadata, (app::BooleanTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x017474A0, void, WriteData, (app::BooleanTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, bool * value));
    IL2CPP_REGISTER_METHOD(0x01747580, void, __ctor, (app::BooleanTypeInfo * this_ptr));
}
