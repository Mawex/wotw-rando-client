using namespace app;

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ExportLiveToBuffer {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_ExportLiveToBuffer * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (IVRChaperoneSetup_ExportLiveToBuffer * __this, StringBuilder * pBuffer, uint32_t * pnBufferLength));
IL2CPP_REGISTER_METHOD(0x02F40010, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_ExportLiveToBuffer * __this, StringBuilder * pBuffer, uint32_t * pnBufferLength, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (IVRChaperoneSetup_ExportLiveToBuffer * __this, uint32_t * pnBufferLength, IAsyncResult * result));
}
