#include <interception_macros.h>

namespace app::methods::System::Data::Common::ADP {
IL2CPP_REGISTER_METHOD(0x02153240, void, TraceException, (String * trace, Exception * e));
IL2CPP_REGISTER_METHOD(0x02153310, void, TraceExceptionAsReturnValue, (Exception * e));
IL2CPP_REGISTER_METHOD(0x021533B0, void, TraceExceptionWithoutRethrow, (Exception * e));
IL2CPP_REGISTER_METHOD(0x02153450, ArgumentException *, Argument, (String * error));
IL2CPP_REGISTER_METHOD(0x021535D0, ArgumentOutOfRangeException *, ArgumentOutOfRange, (String * parameterName));
IL2CPP_REGISTER_METHOD(0x02153750, ArgumentOutOfRangeException *, ArgumentOutOfRange, (String * message, String * parameterName));
IL2CPP_REGISTER_METHOD(0x021538D0, InvalidOperationException *, InvalidOperation, (String * error));
IL2CPP_REGISTER_METHOD(0x02153A50, NotSupportedException *, NotSupported, (String * error));
IL2CPP_REGISTER_METHOD(0x02153BD0, bool, IsCatchableExceptionType, (Exception * e));
IL2CPP_REGISTER_METHOD(0x02153EA0, bool, IsCatchableOrSecurityExceptionType, (Exception * e));
IL2CPP_REGISTER_METHOD(0x02154120, ArgumentOutOfRangeException *, InvalidEnumerationValue, (Type * type, int32_t value));
IL2CPP_REGISTER_METHOD(0x02154260, Exception *, InvalidSeekOrigin, (String * parameterName));
IL2CPP_REGISTER_METHOD(0x02154300, ArgumentOutOfRangeException *, InvalidAcceptRejectRule, (AcceptRejectRule__Enum value));
IL2CPP_REGISTER_METHOD(0x021543D0, ArgumentOutOfRangeException *, InvalidMissingSchemaAction, (MissingSchemaAction__Enum value));
IL2CPP_REGISTER_METHOD(0x021544A0, ArgumentOutOfRangeException *, InvalidRule, (Rule__Enum value));
IL2CPP_REGISTER_METHOD(0x02154570, Exception *, WrongType, (Type * got, Type * expected));
IL2CPP_REGISTER_METHOD(0x02154670, void, __cctor, ());
}
