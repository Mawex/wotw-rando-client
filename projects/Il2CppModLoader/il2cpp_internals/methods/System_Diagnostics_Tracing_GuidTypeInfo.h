using namespace app;

namespace app::methods::System::Diagnostics::Tracing::GuidTypeInfo {
IL2CPP_REGISTER_METHOD(0x019FE130, void, WriteMetadata, (GuidTypeInfo * __this, TraceLoggingMetadataCollector * collector, String * name, EventFieldFormat__Enum format));
IL2CPP_REGISTER_METHOD(0x019FE200, void, WriteData, (GuidTypeInfo * __this, TraceLoggingDataCollector * collector, Guid * value));
IL2CPP_REGISTER_METHOD(0x019FE2E0, void, __ctor, (GuidTypeInfo * __this));
}
