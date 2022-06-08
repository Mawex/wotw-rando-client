#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard {
IL2CPP_REGISTER_METHOD(0x002FBB80, Browser *, get_ActiveBrowser, (ExternalKeyboard * __this));
IL2CPP_REGISTER_METHOD(0x01DDA4C0, void, set_ActiveBrowser, (ExternalKeyboard * __this, Browser * value));
IL2CPP_REGISTER_METHOD(0x01DDA4F0, void, _SetActiveBrowser, (ExternalKeyboard * __this, Browser * browser));
IL2CPP_REGISTER_METHOD(0x01DDA6D0, void, add_onFocusChange, (ExternalKeyboard * __this, Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x01DDA7C0, void, remove_onFocusChange, (ExternalKeyboard * __this, Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_ * value));
IL2CPP_REGISTER_METHOD(0x01DDA8B0, void, Awake, (ExternalKeyboard * __this));
IL2CPP_REGISTER_METHOD(0x01DDAF00, IEnumerator *, FindAndListenForBrowsers, (ExternalKeyboard * __this));
IL2CPP_REGISTER_METHOD(0x01DDB050, void, ObserveBrowser, (ExternalKeyboard * __this, Browser * browser));
IL2CPP_REGISTER_METHODINFO(0x0475A820, ExternalKeyboard_ObserveBrowser__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DDB540, void, DoFocus, (ExternalKeyboard * __this, Browser * browser));
IL2CPP_REGISTER_METHOD(0x01DDB7B0, void, SetVisible, (ExternalKeyboard * __this, bool visible));
IL2CPP_REGISTER_METHOD(0x01DDB8F0, void, OnBrowserFocus, (ExternalKeyboard * __this, bool mouseFocused, bool kbFocused));
IL2CPP_REGISTER_METHODINFO(0x04747E80, ExternalKeyboard_OnBrowserFocus__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DDBA50, void, CommandEntered, (ExternalKeyboard * __this, JSONNode * args));
IL2CPP_REGISTER_METHODINFO(0x0472F698, ExternalKeyboard_CommandEntered__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DDC600, void, TextTyped, (ExternalKeyboard * __this, JSONNode * args));
IL2CPP_REGISTER_METHODINFO(0x04781960, ExternalKeyboard_TextTyped__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DDC750, void, __ctor, (ExternalKeyboard * __this));
}
