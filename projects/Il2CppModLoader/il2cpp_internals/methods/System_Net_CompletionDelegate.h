using namespace app;

namespace app::methods::System::Net::CompletionDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (CompletionDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01434270, void, Invoke, (CompletionDelegate * __this, Byte__Array * responseBytes, Exception * exception, Object * State));
IL2CPP_REGISTER_METHOD(0x00DC7DB0, IAsyncResult *, BeginInvoke, (CompletionDelegate * __this, Byte__Array * responseBytes, Exception * exception, Object * State, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (CompletionDelegate * __this, IAsyncResult * result));
}
