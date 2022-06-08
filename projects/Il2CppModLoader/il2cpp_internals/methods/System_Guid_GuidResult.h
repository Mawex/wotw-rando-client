#include <interception_macros.h>

namespace app::methods::System::Guid_GuidResult {
IL2CPP_REGISTER_METHOD(0x001D4820, void, Init, (Guid_GuidResult__Boxed * __this, Guid_GuidParseThrowStyle__Enum canThrow));
IL2CPP_REGISTER_METHOD(0x001D4830, void, SetFailure, (Guid_GuidResult__Boxed * __this, Exception * nativeException));
IL2CPP_REGISTER_METHOD(0x001D4840, void, SetFailure, (Guid_GuidResult__Boxed * __this, Guid_ParseFailureKind__Enum failure, String * failureMessageID));
IL2CPP_REGISTER_METHOD(0x001D4870, void, SetFailure, (Guid_GuidResult__Boxed * __this, Guid_ParseFailureKind__Enum failure, String * failureMessageID, Object * failureMessageFormatArgument));
IL2CPP_REGISTER_METHOD(0x001D4890, void, SetFailure, (Guid_GuidResult__Boxed * __this, Guid_ParseFailureKind__Enum failure, String * failureMessageID, Object * failureMessageFormatArgument, String * failureArgumentName, Exception * innerException));
IL2CPP_REGISTER_METHODINFO(0x04780770, Guid_GuidResult_SetFailure_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D48A0, Exception *, GetGuidParseException, (Guid_GuidResult__Boxed * __this));
}
