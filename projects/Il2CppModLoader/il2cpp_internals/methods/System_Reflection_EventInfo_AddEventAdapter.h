using namespace app;

namespace app::methods::System::Reflection::EventInfo_AddEventAdapter {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (EventInfo_AddEventAdapter * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (EventInfo_AddEventAdapter * __this, Object * _this, Delegate * dele));
IL2CPP_REGISTER_METHOD(0x01435260, IAsyncResult *, BeginInvoke, (EventInfo_AddEventAdapter * __this, Object * _this, Delegate * dele, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (EventInfo_AddEventAdapter * __this, IAsyncResult * result));
}
