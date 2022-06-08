#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::Capture {
IL2CPP_REGISTER_METHOD(0x01DF8C80, void, __ctor, (Capture * __this, String * text, int32_t i, int32_t l));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Index, (Capture * __this));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Length, (Capture * __this));
IL2CPP_REGISTER_METHOD(0x02580B40, String *, get_Value, (Capture * __this));
IL2CPP_REGISTER_METHOD(0x02580B40, String *, ToString, (Capture * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, GetOriginalString, (Capture * __this));
IL2CPP_REGISTER_METHOD(0x02580B70, String *, GetLeftSubstring, (Capture * __this));
IL2CPP_REGISTER_METHOD(0x02580BA0, String *, GetRightSubstring, (Capture * __this));
IL2CPP_REGISTER_METHOD(0x02580BE0, void, __ctor, (Capture * __this));
IL2CPP_REGISTER_METHODINFO(0x0478A9D0, Capture__ctor_1__MethodInfo);
}
