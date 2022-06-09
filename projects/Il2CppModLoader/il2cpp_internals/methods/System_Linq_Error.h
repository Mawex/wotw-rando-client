#include <interception_macros.h>

namespace app::methods::System_Linq::Error {
IL2CPP_REGISTER_METHOD(0x01F9B720, Exception *, ArgumentNull, (app::String * s));
IL2CPP_REGISTER_METHOD(0x01F9B870, Exception *, ArgumentOutOfRange, (app::String * s));
IL2CPP_REGISTER_METHOD(0x01F9B9D0, Exception *, MoreThanOneElement, ());
IL2CPP_REGISTER_METHOD(0x01F9BB20, Exception *, MoreThanOneMatch, ());
IL2CPP_REGISTER_METHOD(0x01F9BC70, Exception *, NoElements, ());
IL2CPP_REGISTER_METHOD(0x01F9BDC0, Exception *, NoMatch, ());
IL2CPP_REGISTER_METHOD(0x01F9BF10, Exception *, NotSupported, ());
}
