using namespace app;

namespace app::methods::UnityEngine::Events::UnityAction {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (UnityAction * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (UnityAction * __this));
IL2CPP_REGISTER_METHOD(0x00611B10, IAsyncResult *, BeginInvoke, (UnityAction * __this, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (UnityAction * __this, IAsyncResult * result));
}
