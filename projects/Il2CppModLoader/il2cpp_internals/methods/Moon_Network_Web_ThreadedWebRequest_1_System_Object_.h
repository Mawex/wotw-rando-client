using namespace app;

namespace app::methods::Moon::Network::Web::ThreadedWebRequest_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x002FB950, Thread *, get_Thread, (ThreadedWebRequest_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02723010, void, __ctor, (ThreadedWebRequest_1_System_Object_ * __this, String * url, IRequest * request));
IL2CPP_REGISTER_METHOD(0x02723030, Thread *, Run, (ThreadedWebRequest_1_System_Object_ * __this, Action_2_Moon_Network_Web_IRequest_Moon_Network_Web_IRequestCallback_ * callback));
IL2CPP_REGISTER_METHOD(0x02723280, void, Finish, (ThreadedWebRequest_1_System_Object_ * __this, WebResponse_1 * response));
IL2CPP_REGISTER_METHOD(0x027235B0, void, StartTimeout, (ThreadedWebRequest_1_System_Object_ * __this, float time));
IL2CPP_REGISTER_METHOD(0x02723830, void, StopTimeout, (ThreadedWebRequest_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02723890, void, TimeoutHandler, (ThreadedWebRequest_1_System_Object_ * __this, Object * sender, ElapsedEventArgs * e));
IL2CPP_REGISTER_METHOD(0x02723B10, String *, ParamToString, (ThreadedWebRequest_1_System_Object_ * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x02723BB0, void, _Run_b__7_0, (ThreadedWebRequest_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02724430, void, _Run_b__7_1, (ThreadedWebRequest_1_System_Object_ * __this, WebResponse_1 * response));
}
