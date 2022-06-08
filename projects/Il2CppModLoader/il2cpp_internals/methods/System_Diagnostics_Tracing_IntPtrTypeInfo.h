#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::IntPtrTypeInfo {
IL2CPP_REGISTER_METHOD(0x019FF470, void, WriteMetadata, (IntPtrTypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x019FF550, void, WriteData, (IntPtrTypeInfo * __this, TraceLoggingDataCollector * collector, void * * value));
IL2CPP_REGISTER_METHOD(0x019FF620, void, __ctor, (IntPtrTypeInfo * __this));
}
