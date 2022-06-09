#include <interception_macros.h>

namespace app::methods::System_Data_Common::ADP {
IL2CPP_REGISTER_METHOD(0x02153240, void, TraceException, (app::String * trace, app::Exception * e));
IL2CPP_REGISTER_METHOD(0x02153310, void, TraceExceptionAsReturnValue, (app::Exception * e));
IL2CPP_REGISTER_METHOD(0x021533B0, void, TraceExceptionWithoutRethrow, (app::Exception * e));
IL2CPP_REGISTER_METHOD(0x02153450, ArgumentException *, Argument, (app::String * error));
IL2CPP_REGISTER_METHOD(0x021535D0, ArgumentOutOfRangeException *, ArgumentOutOfRange_1, (app::String * parameter_name));
IL2CPP_REGISTER_METHOD(0x02153750, ArgumentOutOfRangeException *, ArgumentOutOfRange_2, (app::String * message, app::String * parameter_name));
IL2CPP_REGISTER_METHOD(0x021538D0, InvalidOperationException *, InvalidOperation, (app::String * error));
IL2CPP_REGISTER_METHOD(0x02153A50, NotSupportedException *, NotSupported, (app::String * error));
IL2CPP_REGISTER_METHOD(0x02153BD0, bool, IsCatchableExceptionType, (app::Exception * e));
IL2CPP_REGISTER_METHOD(0x02153EA0, bool, IsCatchableOrSecurityExceptionType, (app::Exception * e));
IL2CPP_REGISTER_METHOD(0x02154120, ArgumentOutOfRangeException *, InvalidEnumerationValue, (app::Type * type, int32_t value));
IL2CPP_REGISTER_METHOD(0x02154260, Exception *, InvalidSeekOrigin, (app::String * parameter_name));
IL2CPP_REGISTER_METHOD(0x02154300, ArgumentOutOfRangeException *, InvalidAcceptRejectRule, (app::AcceptRejectRule__Enum value));
IL2CPP_REGISTER_METHOD(0x021543D0, ArgumentOutOfRangeException *, InvalidMissingSchemaAction, (app::MissingSchemaAction__Enum value));
IL2CPP_REGISTER_METHOD(0x021544A0, ArgumentOutOfRangeException *, InvalidRule, (app::Rule__Enum value));
IL2CPP_REGISTER_METHOD(0x02154570, Exception *, WrongType, (app::Type * got, app::Type * expected));
IL2CPP_REGISTER_METHOD(0x02154670, void, __cctor, ());
}
