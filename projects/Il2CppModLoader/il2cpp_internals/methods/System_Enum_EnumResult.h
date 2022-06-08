using namespace app;

namespace app::methods::System::Enum_EnumResult {
IL2CPP_REGISTER_METHOD(0x001557F0, void, Init, (Enum_EnumResult__Boxed * __this, bool canMethodThrow));
IL2CPP_REGISTER_METHOD(0x00155800, void, SetFailure, (Enum_EnumResult__Boxed * __this, Exception * unhandledException));
IL2CPP_REGISTER_METHOD(0x00155810, void, SetFailure, (Enum_EnumResult__Boxed * __this, Enum_ParseFailureKind__Enum failure, String * failureParameter));
IL2CPP_REGISTER_METHODINFO(0x047431F0, Enum_EnumResult_SetFailure_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00155820, void, SetFailure, (Enum_EnumResult__Boxed * __this, Enum_ParseFailureKind__Enum failure, String * failureMessageID, Object * failureMessageFormatArgument));
IL2CPP_REGISTER_METHODINFO(0x0478F2B0, Enum_EnumResult_SetFailure_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00155830, Exception *, GetEnumParseException, (Enum_EnumResult__Boxed * __this));
}
