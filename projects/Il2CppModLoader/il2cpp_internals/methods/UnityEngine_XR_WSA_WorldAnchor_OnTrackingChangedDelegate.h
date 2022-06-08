using namespace app;

namespace app::methods::UnityEngine::XR::WSA::WorldAnchor_OnTrackingChangedDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (WorldAnchor_OnTrackingChangedDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01C712A0, void, Invoke, (WorldAnchor_OnTrackingChangedDelegate * __this, WorldAnchor * worldAnchor, bool located));
IL2CPP_REGISTER_METHOD(0x031C37F0, IAsyncResult *, BeginInvoke, (WorldAnchor_OnTrackingChangedDelegate * __this, WorldAnchor * worldAnchor, bool located, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (WorldAnchor_OnTrackingChangedDelegate * __this, IAsyncResult * result));
}
