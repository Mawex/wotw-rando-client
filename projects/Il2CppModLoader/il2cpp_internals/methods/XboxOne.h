#include <interception_macros.h>

namespace app::methods::XboxOne {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_Ready, ());
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ControllerReady, ());
IL2CPP_REGISTER_METHOD(0x00596FA0, uint32_t, get_TitleId, ());
IL2CPP_REGISTER_METHODINFO(0x047452F8, XboxOne_get_TitleId__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, Help, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, ErrorHelp, (String * context, uint32_t errorID));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (XboxOne * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
