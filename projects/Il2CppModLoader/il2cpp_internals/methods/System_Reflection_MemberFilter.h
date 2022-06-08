using namespace app;

namespace app::methods::System::Reflection::MemberFilter {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (MemberFilter * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (MemberFilter * __this, MemberInfo_1 * m, Object * filterCriteria));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (MemberFilter * __this, MemberInfo_1 * m, Object * filterCriteria, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (MemberFilter * __this, IAsyncResult * result));
}
