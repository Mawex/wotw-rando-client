#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingMetadataCollector {
IL2CPP_REGISTER_METHOD(0x01A0C500, void, __ctor, (TraceLoggingMetadataCollector * __this));
IL2CPP_REGISTER_METHOD(0x01A0C770, void, __ctor, (TraceLoggingMetadataCollector * __this, TraceLoggingMetadataCollector * other, FieldMetadata * group));
IL2CPP_REGISTER_METHOD(0x00529E80, EventFieldTags__Enum, get_Tags, (TraceLoggingMetadataCollector * __this));
IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Tags, (TraceLoggingMetadataCollector * __this, EventFieldTags__Enum value));
IL2CPP_REGISTER_METHOD(0x01A0C7A0, int32_t, get_ScratchSize, (TraceLoggingMetadataCollector * __this));
IL2CPP_REGISTER_METHOD(0x01A0C7C0, int32_t, get_DataCount, (TraceLoggingMetadataCollector * __this));
IL2CPP_REGISTER_METHOD(0x01A0C7E0, int32_t, get_PinCount, (TraceLoggingMetadataCollector * __this));
IL2CPP_REGISTER_METHOD(0x006CA2A0, bool, get_BeginningBufferedArray, (TraceLoggingMetadataCollector * __this));
IL2CPP_REGISTER_METHOD(0x01A0C800, TraceLoggingMetadataCollector *, AddGroup, (TraceLoggingMetadataCollector * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01A0CA90, void, AddScalar, (TraceLoggingMetadataCollector * __this, String * name, TraceLoggingDataType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x0477F920, TraceLoggingMetadataCollector_AddScalar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A0CD20, void, AddBinary, (TraceLoggingMetadataCollector * __this, String * name, TraceLoggingDataType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x047744C0, TraceLoggingMetadataCollector_AddBinary__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A0CF50, void, AddArray, (TraceLoggingMetadataCollector * __this, String * name, TraceLoggingDataType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x04712AD8, TraceLoggingMetadataCollector_AddArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A0D200, void, BeginBufferedArray, (TraceLoggingMetadataCollector * __this));
IL2CPP_REGISTER_METHODINFO(0x0476BD10, TraceLoggingMetadataCollector_BeginBufferedArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A0D2F0, void, EndBufferedArray, (TraceLoggingMetadataCollector * __this));
IL2CPP_REGISTER_METHODINFO(0x04736650, TraceLoggingMetadataCollector_EndBufferedArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A0D3D0, Byte__Array *, GetMetadata, (TraceLoggingMetadataCollector * __this));
IL2CPP_REGISTER_METHOD(0x01A0D4A0, void, AddField, (TraceLoggingMetadataCollector * __this, FieldMetadata * fieldMetadata));
}
