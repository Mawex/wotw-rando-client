using namespace app;

namespace app::methods::ZenFulcrum::EmbeddedBrowser::PromiseTimer {
IL2CPP_REGISTER_METHOD(0x01669140, IPromise *, WaitFor, (PromiseTimer * __this, float seconds));
IL2CPP_REGISTER_METHOD(0x01669390, IPromise *, WaitWhile, (PromiseTimer * __this, Func_2_ZenFulcrum_EmbeddedBrowser_TimeData_Boolean_ * predicate));
IL2CPP_REGISTER_METHOD(0x016695C0, IPromise *, WaitUntil, (PromiseTimer * __this, Func_2_ZenFulcrum_EmbeddedBrowser_TimeData_Boolean_ * predicate));
IL2CPP_REGISTER_METHOD(0x01669810, void, Update, (PromiseTimer * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01669A20, void, __ctor, (PromiseTimer * __this));
}
