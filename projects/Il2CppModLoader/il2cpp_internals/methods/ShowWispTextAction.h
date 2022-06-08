using namespace app;

namespace app::methods::ShowWispTextAction {
IL2CPP_REGISTER_METHOD(0x00739260, void, Perform, (ShowWispTextAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00739510, void, OnFinishedReading, (ShowWispTextAction * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x04783608, ShowWispTextAction_OnFinishedReading__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (ShowWispTextAction * __this));
IL2CPP_REGISTER_METHOD(0x007396E0, bool, get_IsPerforming, (ShowWispTextAction * __this));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (ShowWispTextAction * __this));
}
