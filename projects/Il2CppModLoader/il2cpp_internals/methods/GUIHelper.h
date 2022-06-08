#include <interception_macros.h>

namespace app::methods::GUIHelper {
IL2CPP_REGISTER_METHOD(0x0151D9B0, GUIStyle *, get_BigTextStyle, ());
IL2CPP_REGISTER_METHOD(0x0151DCC0, GUIStyle *, get_MediumSizeTextSyle, ());
IL2CPP_REGISTER_METHOD(0x0151DFE0, void, DrawLargeCenteredMessage, (String * messsage, Color color));
IL2CPP_REGISTER_METHOD(0x0151E310, void, DrawFooterMessage, (String * messsage, Color color));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GUIHelper * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
