using namespace app;

namespace app::methods::System::ComponentModel::AsyncCompletedEventArgs {
IL2CPP_REGISTER_METHOD(0x024A0290, void, __ctor, (AsyncCompletedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x024A0320, void, __ctor, (AsyncCompletedEventArgs * __this, Exception * error, bool cancelled, Object * userState));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Cancelled, (AsyncCompletedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, Exception *, get_Error, (AsyncCompletedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_UserState, (AsyncCompletedEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x024A03E0, void, RaiseExceptionIfNecessary, (AsyncCompletedEventArgs * __this));
IL2CPP_REGISTER_METHODINFO(0x04734D58, AsyncCompletedEventArgs_RaiseExceptionIfNecessary__MethodInfo);
}
