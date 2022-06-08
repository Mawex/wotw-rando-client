#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingMetadataCollector_Impl {
IL2CPP_REGISTER_METHOD(0x01A0D610, void, AddScalar, (TraceLoggingMetadataCollector_Impl * __this, int32_t size));
IL2CPP_REGISTER_METHODINFO(0x04726D60, TraceLoggingMetadataCollector_Impl_AddScalar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A0D740, void, AddNonscalar, (TraceLoggingMetadataCollector_Impl * __this));
IL2CPP_REGISTER_METHODINFO(0x0474DE50, TraceLoggingMetadataCollector_Impl_AddNonscalar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A0D850, void, BeginBuffered, (TraceLoggingMetadataCollector_Impl * __this));
IL2CPP_REGISTER_METHOD(0x01A0D880, void, EndBuffered, (TraceLoggingMetadataCollector_Impl * __this));
IL2CPP_REGISTER_METHOD(0x01A0D890, int32_t, Encode, (TraceLoggingMetadataCollector_Impl * __this, Byte__Array * metadata));
IL2CPP_REGISTER_METHOD(0x01A0D9F0, void, __ctor, (TraceLoggingMetadataCollector_Impl * __this));
}
