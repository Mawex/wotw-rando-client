#include <interception_macros.h>

namespace app::methods::SelectionUtility {
IL2CPP_REGISTER_METHOD(0x03114070, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x031141C0, void, Register, (Action * action));
IL2CPP_REGISTER_METHOD(0x031142E0, void, Unregister, (Action * action));
IL2CPP_REGISTER_METHOD(0x031143A0, void, selectionChanged, ());
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SelectionUtility * __this));
}
