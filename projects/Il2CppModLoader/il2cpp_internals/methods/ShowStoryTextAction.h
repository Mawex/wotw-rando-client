using namespace app;

namespace app::methods::ShowStoryTextAction {
IL2CPP_REGISTER_METHOD(0x00737F30, void, Perform, (ShowStoryTextAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x007383C0, void, OnMessageScreenHide, (ShowStoryTextAction * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x04723DC8, ShowStoryTextAction_OnMessageScreenHide__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (ShowStoryTextAction * __this));
IL2CPP_REGISTER_METHOD(0x007385F0, bool, get_IsPerforming, (ShowStoryTextAction * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (ShowStoryTextAction * __this));
}
