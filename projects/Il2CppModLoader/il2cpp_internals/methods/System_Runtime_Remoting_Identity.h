#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting::Identity {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::Identity * this_ptr, app::String * object_uri));
IL2CPP_REGISTER_METHOD(0x002FB930, IMessageSink *, get_ChannelSink, (app::Identity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ChannelSink, (app::Identity * this_ptr, app::IMessageSink * value));
IL2CPP_REGISTER_METHOD(0x002FB950, IMessageSink *, get_EnvoySink, (app::Identity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_ObjectUri, (app::Identity * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ObjectUri, (app::Identity * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x00627D70, bool, get_IsConnected, (app::Identity * this_ptr));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_Disposed, (app::Identity * this_ptr));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_Disposed, (app::Identity * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x02306460, DynamicPropertyCollection *, get_ClientDynamicProperties, (app::Identity * this_ptr));
IL2CPP_REGISTER_METHOD(0x023065C0, bool, get_HasServerDynamicSinks, (app::Identity * this_ptr));
IL2CPP_REGISTER_METHOD(0x02306600, void, NotifyClientDynamicSinks, (app::Identity * this_ptr, bool start, app::IMessage * req_msg, bool client_site, bool async));
IL2CPP_REGISTER_METHOD(0x023066A0, void, NotifyServerDynamicSinks, (app::Identity * this_ptr, bool start, app::IMessage * req_msg, bool client_site, bool async));
}
