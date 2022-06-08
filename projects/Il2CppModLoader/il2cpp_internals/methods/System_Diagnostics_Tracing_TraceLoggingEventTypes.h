#include <interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::TraceLoggingEventTypes {
IL2CPP_REGISTER_METHOD(0x01A0B7B0, void, __ctor, (TraceLoggingEventTypes * __this, String * name, EventTags__Enum tags, Type__Array * types));
IL2CPP_REGISTER_METHOD(0x01A0B800, void, __ctor, (TraceLoggingEventTypes * __this, String * name, EventTags__Enum tags, ParameterInfo_1__Array * paramInfos));
IL2CPP_REGISTER_METHODINFO(0x0475CCD8, TraceLoggingEventTypes__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A0BBA0, void, __ctor, (TraceLoggingEventTypes * __this, EventTags__Enum tags, String * defaultName, TraceLoggingTypeInfo__Array * typeInfos));
IL2CPP_REGISTER_METHODINFO(0x04723150, TraceLoggingEventTypes__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Name, (TraceLoggingEventTypes * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, EventTags__Enum, get_Tags, (TraceLoggingEventTypes * __this));
IL2CPP_REGISTER_METHOD(0x01A0BE80, NameInfo_1 *, GetNameInfo, (TraceLoggingEventTypes * __this, String * name, EventTags__Enum tags));
IL2CPP_REGISTER_METHOD(0x01A0C050, TraceLoggingTypeInfo__Array *, MakeArray, (TraceLoggingEventTypes * __this, ParameterInfo_1__Array * paramInfos));
IL2CPP_REGISTER_METHODINFO(0x047774A8, TraceLoggingEventTypes_MakeArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01A0C2C0, TraceLoggingTypeInfo__Array *, MakeArray, (Type__Array * types));
IL2CPP_REGISTER_METHODINFO(0x04701738, TraceLoggingEventTypes_MakeArray_1__MethodInfo);
}
