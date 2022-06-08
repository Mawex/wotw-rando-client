#include <interception_macros.h>

namespace app::methods::System::Net::WebConnectionData {
IL2CPP_REGISTER_METHOD(0x00C26ED0, void, __ctor, (WebConnectionData * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (WebConnectionData * __this, HttpWebRequest * request));
IL2CPP_REGISTER_METHOD(0x002FA280, HttpWebRequest *, get_request, (WebConnectionData * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_request, (WebConnectionData * __this, HttpWebRequest * value));
IL2CPP_REGISTER_METHOD(0x002FD490, ReadState__Enum, get_ReadState, (WebConnectionData * __this));
IL2CPP_REGISTER_METHOD(0x01D68B50, void, set_ReadState, (WebConnectionData * __this, ReadState__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04707578, WebConnectionData_set_ReadState__MethodInfo);
}
