using namespace app;

namespace app::methods::Microsoft::Xbox::Services::Xal::XalService_XalLogCallback {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XalService_XalLogCallback * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x0143D200, void, Invoke, (XalService_XalLogCallback * __this, String * areaName, XalTraceLevel__Enum level, uint64_t threadId, uint64_t timestamp, String * message));
IL2CPP_REGISTER_METHOD(0x0143D910, IAsyncResult *, BeginInvoke, (XalService_XalLogCallback * __this, String * areaName, XalTraceLevel__Enum level, uint64_t threadId, uint64_t timestamp, String * message, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (XalService_XalLogCallback * __this, IAsyncResult * result));
}
