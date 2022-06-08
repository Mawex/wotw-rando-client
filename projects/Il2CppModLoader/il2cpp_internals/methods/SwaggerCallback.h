#include <interception_macros.h>

namespace app::methods::SwaggerCallback {
IL2CPP_REGISTER_METHOD(0x02EA25C0, void, __ctor, (SwaggerCallback * __this));
IL2CPP_REGISTER_METHOD(0x02EA2710, void, OnResult, (SwaggerCallback * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x02EA2820, void, OnError, (SwaggerCallback * __this, Exception * e));
IL2CPP_REGISTER_METHOD(0x02EA2AE0, SwaggerJSONParser *, get_Parser, (SwaggerCallback * __this));
}
