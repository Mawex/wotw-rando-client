using namespace app;

namespace app::methods::XGamingRuntime::XGameSaveReadBlobDataCompleted {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XGameSaveReadBlobDataCompleted * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (XGameSaveReadBlobDataCompleted * __this, int32_t hresult, XGameSaveBlob__Array * blobs));
IL2CPP_REGISTER_METHOD(0x030BB1C0, IAsyncResult *, BeginInvoke, (XGameSaveReadBlobDataCompleted * __this, int32_t hresult, XGameSaveBlob__Array * blobs, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XGameSaveReadBlobDataCompleted * __this, IAsyncResult * result));
}
