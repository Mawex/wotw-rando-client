#include <interception_macros.h>

namespace app::methods::System_Text_RegularExpressions::Capture {
IL2CPP_REGISTER_METHOD(0x01DF8C80, void, __ctor_1, (app::Capture * this_ptr, app::String * text, int32_t i, int32_t l));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Index, (app::Capture * this_ptr));
IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Length, (app::Capture * this_ptr));
IL2CPP_REGISTER_METHOD(0x02580B40, String *, get_Value, (app::Capture * this_ptr));
IL2CPP_REGISTER_METHOD(0x02580B40, String *, ToString, (app::Capture * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, GetOriginalString, (app::Capture * this_ptr));
IL2CPP_REGISTER_METHOD(0x02580B70, String *, GetLeftSubstring, (app::Capture * this_ptr));
IL2CPP_REGISTER_METHOD(0x02580BA0, String *, GetRightSubstring, (app::Capture * this_ptr));
IL2CPP_REGISTER_METHOD(0x02580BE0, void, __ctor_2, (app::Capture * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0478A9D0, Capture__ctor_1__MethodInfo);
}
