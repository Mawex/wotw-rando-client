using namespace app;

namespace app::methods::System::Net::EndPointListener {
IL2CPP_REGISTER_METHOD(0x01EB42F0, void, __ctor, (EndPointListener * __this, HttpListener * listener, IPAddress * addr, int32_t port, bool secure));
IL2CPP_REGISTER_METHOD(0x002FA280, HttpListener *, get_Listener, (EndPointListener * __this));
IL2CPP_REGISTER_METHOD(0x01EB4AF0, void, Accept, (Socket * socket, SocketAsyncEventArgs * e, Socket * * accepted));
IL2CPP_REGISTER_METHOD(0x01EB4C10, void, ProcessAccept, (SocketAsyncEventArgs * args));
IL2CPP_REGISTER_METHOD(0x01EB4F60, void, OnAccept, (Object * sender, SocketAsyncEventArgs * e));
IL2CPP_REGISTER_METHODINFO(0x04728DB8, EndPointListener_OnAccept__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB4F70, void, RemoveConnection, (EndPointListener * __this, HttpConnection * conn));
IL2CPP_REGISTER_METHOD(0x01EB50C0, bool, BindContext, (EndPointListener * __this, HttpListenerContext * context));
IL2CPP_REGISTER_METHOD(0x01EB5130, void, UnbindContext, (EndPointListener * __this, HttpListenerContext * context));
IL2CPP_REGISTER_METHOD(0x01EB5160, HttpListener *, SearchListener, (EndPointListener * __this, Uri * uri, ListenerPrefix * * prefix));
IL2CPP_REGISTER_METHOD(0x01EB56B0, HttpListener *, MatchFromList, (EndPointListener * __this, String * host, String * path, ArrayList * list, ListenerPrefix * * prefix));
IL2CPP_REGISTER_METHOD(0x01EB5960, void, AddSpecial, (EndPointListener * __this, ArrayList * coll, ListenerPrefix * prefix));
IL2CPP_REGISTER_METHODINFO(0x047471F8, EndPointListener_AddSpecial__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB5BD0, bool, RemoveSpecial, (EndPointListener * __this, ArrayList * coll, ListenerPrefix * prefix));
IL2CPP_REGISTER_METHOD(0x01EB5D30, void, CheckIfRemove, (EndPointListener * __this));
IL2CPP_REGISTER_METHOD(0x01EB5E40, void, Close, (EndPointListener * __this));
IL2CPP_REGISTER_METHOD(0x01EB6190, void, AddPrefix, (EndPointListener * __this, ListenerPrefix * prefix, HttpListener * listener));
IL2CPP_REGISTER_METHODINFO(0x04772B10, EndPointListener_AddPrefix__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB66D0, void, RemovePrefix, (EndPointListener * __this, ListenerPrefix * prefix, HttpListener * listener));
}
