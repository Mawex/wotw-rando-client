using namespace app;

namespace app::methods::UnityEngine::TouchScreenKeyboard {
IL2CPP_REGISTER_METHOD(0x01F1B660, TouchScreenKeyboard *, Open, (String * text, TouchScreenKeyboardType__Enum keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, String * textPlaceholder, int32_t characterLimit));
IL2CPP_REGISTER_METHOD(0x01F1B660, TouchScreenKeyboard *, Open, (String * text, TouchScreenKeyboardType__Enum keyboardType, bool autocorrection, bool multiline, bool secure));
IL2CPP_REGISTER_METHOD(0x02C6A9C0, String *, get_text, (TouchScreenKeyboard * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_text, (TouchScreenKeyboard * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_hideInput, (bool value));
IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_active, (TouchScreenKeyboard * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_active, (TouchScreenKeyboard * __this, bool value));
IL2CPP_REGISTER_METHOD(0x024CE020, TouchScreenKeyboard_Status__Enum, get_status, (TouchScreenKeyboard * __this));
IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_isSupported, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_canGetSelection, (TouchScreenKeyboard * __this));
IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_canSetSelection, (TouchScreenKeyboard * __this));
IL2CPP_REGISTER_METHOD(0x02C6AA40, RangeInt, get_selection, (TouchScreenKeyboard * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_selection, (TouchScreenKeyboard * __this, RangeInt value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, set_characterLimit, (TouchScreenKeyboard * __this, int32_t value));
}
