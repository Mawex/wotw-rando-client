#include <interception_macros.h>

namespace app::methods::ShowHelpTextAction {
IL2CPP_REGISTER_METHOD(0x005C4390, void, Perform, (ShowHelpTextAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005C46F0, void, OnMessageScreenHide, (ShowHelpTextAction * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x04753540, ShowHelpTextAction_OnMessageScreenHide__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (ShowHelpTextAction * __this));
IL2CPP_REGISTER_METHOD(0x005C4780, bool, get_IsPerforming, (ShowHelpTextAction * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (ShowHelpTextAction * __this));
}
