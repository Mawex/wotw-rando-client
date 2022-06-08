#include <interception_macros.h>

namespace app::methods::Moon::Network::Web::ServerCommunicator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ServerCommunicator * __this));
IL2CPP_REGISTER_METHOD(0x02E981D0, void, Send, (ServerCommunicator * __this, IRequest * request));
IL2CPP_REGISTER_METHOD(0x02E984B0, String *, get_BaseURL, (ServerCommunicator * __this));
}
