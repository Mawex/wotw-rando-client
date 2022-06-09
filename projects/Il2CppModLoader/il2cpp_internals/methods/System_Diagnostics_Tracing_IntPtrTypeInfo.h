#include <interception_macros.h>

namespace app::methods::System_Diagnostics_Tracing::IntPtrTypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FF470, void, WriteMetadata, (app::IntPtrTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format));
    IL2CPP_REGISTER_METHOD(0x019FF550, void, WriteData, (app::IntPtrTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::void * * value));
    IL2CPP_REGISTER_METHOD(0x019FF620, void, __ctor, (app::IntPtrTypeInfo * this_ptr));
}
