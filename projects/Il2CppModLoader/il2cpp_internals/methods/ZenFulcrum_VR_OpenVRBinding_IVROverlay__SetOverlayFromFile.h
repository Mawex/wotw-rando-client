using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetOverlayFromFile {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVROverlay_SetOverlayFromFile * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02188B40, EVROverlayError__Enum, Invoke, (IVROverlay_SetOverlayFromFile * __this, uint64_t ulOverlayHandle, String * pchFilePath));
IL2CPP_REGISTER_METHOD(0x02D7FBA0, IAsyncResult *, BeginInvoke, (IVROverlay_SetOverlayFromFile * __this, uint64_t ulOverlayHandle, String * pchFilePath, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, EVROverlayError__Enum, EndInvoke, (IVROverlay_SetOverlayFromFile * __this, IAsyncResult * result));
}
