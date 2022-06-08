using namespace app;

namespace app::methods::System::ResolveEventHandler {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (ResolveEventHandler * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01434D20, Assembly *, Invoke, (ResolveEventHandler * __this, Object * sender, ResolveEventArgs * args));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (ResolveEventHandler * __this, Object * sender, ResolveEventArgs * args, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, Assembly *, EndInvoke, (ResolveEventHandler * __this, IAsyncResult * result));
}
