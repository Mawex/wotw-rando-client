#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingTypeInfo {
IL2CPP_REGISTER_METHOD(0x01A0DB40, void, __ctor, (TraceLoggingTypeInfo * __this, Type * dataType));
IL2CPP_REGISTER_METHODINFO(0x04748D78, TraceLoggingTypeInfo__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A0DC40, void, __ctor, (TraceLoggingTypeInfo * __this, Type * dataType, String * name, EventLevel__Enum level, EventOpcode__Enum opcode, EventKeywords__Enum keywords, EventTags__Enum tags));
IL2CPP_REGISTER_METHODINFO(0x047521C8, TraceLoggingTypeInfo__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Name, (TraceLoggingTypeInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, EventLevel__Enum, get_Level, (TraceLoggingTypeInfo * __this));
IL2CPP_REGISTER_METHOD(0x00529E80, EventOpcode__Enum, get_Opcode, (TraceLoggingTypeInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, EventKeywords__Enum, get_Keywords, (TraceLoggingTypeInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB970, EventTags__Enum, get_Tags, (TraceLoggingTypeInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Type *, get_DataType, (TraceLoggingTypeInfo * __this));
IL2CPP_REGISTER_METHOD(0x00502220, Object *, GetData, (TraceLoggingTypeInfo * __this, Object * value));
}
