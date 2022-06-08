#include <interception_macros.h>

namespace app::methods::XGamingRuntime::XRegistrationToken {
IL2CPP_REGISTER_METHOD(0x0091DD30, void, __ctor, (XRegistrationToken * __this, GCHandle callbackHandle, XTaskQueueRegistrationToken token));
IL2CPP_REGISTER_METHOD(0x002FC6D0, GCHandle, get_CallbackHandle, (XRegistrationToken * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, XTaskQueueRegistrationToken, get_Token, (XRegistrationToken * __this));
}
