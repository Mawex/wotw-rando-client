using namespace app;

namespace app::methods::System::Diagnostics::Tracing::TimeSpanTypeInfo {
IL2CPP_REGISTER_METHOD(0x01A09160, void, WriteMetadata, (TimeSpanTypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x019FF090, void, WriteData, (TimeSpanTypeInfo * __this, TraceLoggingDataCollector * collector, TimeSpan * value));
IL2CPP_REGISTER_METHOD(0x01A09230, void, __ctor, (TimeSpanTypeInfo * __this));
}
