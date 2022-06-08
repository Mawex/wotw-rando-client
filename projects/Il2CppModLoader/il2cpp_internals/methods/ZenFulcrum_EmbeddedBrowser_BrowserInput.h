#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserInput {
IL2CPP_REGISTER_METHOD(0x01C72D70, void, __ctor, (BrowserInput * __this, Browser * browser));
IL2CPP_REGISTER_METHOD(0x01C72F80, void, HandleInput, (BrowserInput * __this));
IL2CPP_REGISTER_METHOD(0x01C73450, void, HandleMouseInput, (BrowserInput * __this));
IL2CPP_REGISTER_METHOD(0x01C73920, void, FeedScrolling, (BrowserInput * __this, Vector2 mouseScroll, float scrollSpeed));
IL2CPP_REGISTER_METHOD(0x01C73C80, void, HandleKeyInput, (BrowserInput * __this));
IL2CPP_REGISTER_METHOD(0x01C73E10, void, HandleKeyInput, (BrowserInput * __this, List_1_UnityEngine_Event_ * keyEvents));
IL2CPP_REGISTER_METHOD(0x01C741F0, void, HandleFocusLoss, (BrowserInput * __this));
IL2CPP_REGISTER_METHOD(0x01C74600, void, FireCommands, (BrowserInput * __this, Event * ev));
IL2CPP_REGISTER_METHOD(0x01C74720, void, __cctor, ());
}
