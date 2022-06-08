#include <interception_macros.h>

namespace app::methods::System::Globalization::TimeSpanParse_TimeSpanResult {
IL2CPP_REGISTER_METHOD(0x001D43C0, void, Init, (TimeSpanParse_TimeSpanResult__Boxed * __this, TimeSpanParse_TimeSpanThrowStyle__Enum canThrow));
IL2CPP_REGISTER_METHOD(0x001D43D0, void, SetFailure, (TimeSpanParse_TimeSpanResult__Boxed * __this, TimeSpanParse_ParseFailureKind__Enum failure, String * failureMessageID));
IL2CPP_REGISTER_METHOD(0x001D43F0, void, SetFailure, (TimeSpanParse_TimeSpanResult__Boxed * __this, TimeSpanParse_ParseFailureKind__Enum failure, String * failureMessageID, Object * failureMessageFormatArgument));
IL2CPP_REGISTER_METHOD(0x001D4410, void, SetFailure, (TimeSpanParse_TimeSpanResult__Boxed * __this, TimeSpanParse_ParseFailureKind__Enum failure, String * failureMessageID, Object * failureMessageFormatArgument, String * failureArgumentName));
IL2CPP_REGISTER_METHODINFO(0x04723160, TimeSpanParse_TimeSpanResult_SetFailure_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D4420, Exception *, GetTimeSpanParseException, (TimeSpanParse_TimeSpanResult__Boxed * __this));
}
