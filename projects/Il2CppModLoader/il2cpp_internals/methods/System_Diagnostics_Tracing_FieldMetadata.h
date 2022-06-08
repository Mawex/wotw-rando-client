#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::FieldMetadata {
IL2CPP_REGISTER_METHOD(0x019FD900, void, __ctor, (FieldMetadata * __this, String * name, TraceLoggingDataType__Enum type, EventFieldTags__Enum tags, bool variableCount));
IL2CPP_REGISTER_METHOD(0x019FD940, void, __ctor, (FieldMetadata * __this, String * name, TraceLoggingDataType__Enum dataType, EventFieldTags__Enum tags, uint8_t countFlags, uint16_t fixedCount, Byte__Array * custom));
IL2CPP_REGISTER_METHODINFO(0x04795A48, FieldMetadata__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019FDBB0, void, IncrementStructFieldCount, (FieldMetadata * __this));
IL2CPP_REGISTER_METHODINFO(0x047547F0, FieldMetadata_IncrementStructFieldCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x019FDC80, void, Encode, (FieldMetadata * __this, int32_t * pos, Byte__Array * metadata));
}
