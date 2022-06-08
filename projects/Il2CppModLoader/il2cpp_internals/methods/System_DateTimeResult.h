using namespace app;

namespace app::methods::System::DateTimeResult {
IL2CPP_REGISTER_METHOD(0x0013D290, void, Init, (DateTimeResult__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013D2C0, void, SetDate, (DateTimeResult__Boxed * __this, int32_t year, int32_t month, int32_t day));
IL2CPP_REGISTER_METHOD(0x0013D2D0, void, SetFailure, (DateTimeResult__Boxed * __this, ParseFailureKind__Enum failure, String * failureMessageID, Object * failureMessageFormatArgument));
IL2CPP_REGISTER_METHOD(0x0013D2E0, void, SetFailure, (DateTimeResult__Boxed * __this, ParseFailureKind__Enum failure, String * failureMessageID, Object * failureMessageFormatArgument, String * failureArgumentName));
}
