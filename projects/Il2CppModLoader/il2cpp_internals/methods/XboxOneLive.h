#include <interception_macros.h>

namespace app::methods::XboxOneLive {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_LiveOnline, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_Online, ());
IL2CPP_REGISTER_METHOD(0x01C590C0, Action *, get_OnOnlineStateChanged, ());
IL2CPP_REGISTER_METHOD(0x01C59140, void, set_OnOnlineStateChanged, (Action * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XboxOneLive * __this));
}
