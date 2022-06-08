using namespace app;

namespace app::methods::System::Runtime::Remoting::Identity {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (Identity * __this, String * objectUri));
IL2CPP_REGISTER_METHOD(0x002FB930, IMessageSink *, get_ChannelSink, (Identity * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ChannelSink, (Identity * __this, IMessageSink * value));
IL2CPP_REGISTER_METHOD(0x002FB950, IMessageSink *, get_EnvoySink, (Identity * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_ObjectUri, (Identity * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ObjectUri, (Identity * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00627D70, bool, get_IsConnected, (Identity * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_Disposed, (Identity * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_Disposed, (Identity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02306460, DynamicPropertyCollection *, get_ClientDynamicProperties, (Identity * __this));
IL2CPP_REGISTER_METHOD(0x023065C0, bool, get_HasServerDynamicSinks, (Identity * __this));
IL2CPP_REGISTER_METHOD(0x02306600, void, NotifyClientDynamicSinks, (Identity * __this, bool start, IMessage * req_msg, bool client_site, bool async));
IL2CPP_REGISTER_METHOD(0x023066A0, void, NotifyServerDynamicSinks, (Identity * __this, bool start, IMessage * req_msg, bool client_site, bool async));
}
