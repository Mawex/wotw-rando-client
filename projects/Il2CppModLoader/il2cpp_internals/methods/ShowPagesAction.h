#include <interception_macros.h>

namespace app::methods::ShowPagesAction {
IL2CPP_REGISTER_METHOD(0x005C51A0, void, Perform, (ShowPagesAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x005C59B0, void, OnFinishedReading, (ShowPagesAction * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x0477A628, ShowPagesAction_OnFinishedReading__MethodInfo);
IL2CPP_REGISTER_METHOD(0x005C5D00, void, Stop, (ShowPagesAction * __this));
IL2CPP_REGISTER_METHOD(0x005C5DB0, bool, get_IsPerforming, (ShowPagesAction * __this));
IL2CPP_REGISTER_METHOD(0x005C5E50, void, __ctor, (ShowPagesAction * __this));
}
