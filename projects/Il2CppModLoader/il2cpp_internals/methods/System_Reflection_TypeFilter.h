using namespace app;

namespace app::methods::System::Reflection::TypeFilter {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (TypeFilter * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (TypeFilter * __this, Type * m, Object * filterCriteria));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (TypeFilter * __this, Type * m, Object * filterCriteria, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (TypeFilter * __this, IAsyncResult * result));
}
