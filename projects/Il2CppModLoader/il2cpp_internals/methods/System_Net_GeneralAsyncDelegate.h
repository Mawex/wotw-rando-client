using namespace app;

namespace app::methods::System::Net::GeneralAsyncDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (GeneralAsyncDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (GeneralAsyncDelegate * __this, Object * request, Object * state));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (GeneralAsyncDelegate * __this, Object * request, Object * state, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (GeneralAsyncDelegate * __this, IAsyncResult * result));
}
