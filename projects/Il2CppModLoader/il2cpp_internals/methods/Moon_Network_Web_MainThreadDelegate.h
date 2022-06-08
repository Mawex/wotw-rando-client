using namespace app;

namespace app::methods::Moon::Network::Web::MainThreadDelegate {
IL2CPP_REGISTER_METHOD(0x02E95C80, MainThreadDelegate *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E95F90, void, Create, (MainThreadDelegate * __this));
IL2CPP_REGISTER_METHOD(0x02E962B0, void, TimeToWork, (MainThreadDelegate * __this, Object * sender, ElapsedEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x047493A0, MainThreadDelegate_TimeToWork__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02E96420, void, Update, (MainThreadDelegate * __this));
IL2CPP_REGISTER_METHOD(0x02E96590, void, Add, (MainThreadDelegate * __this, Action * action));
IL2CPP_REGISTER_METHOD(0x02E966E0, void, Init, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02E96790, void, __ctor, (MainThreadDelegate * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
