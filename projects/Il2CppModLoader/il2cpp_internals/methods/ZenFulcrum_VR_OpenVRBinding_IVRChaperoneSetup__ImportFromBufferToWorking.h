#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ImportFromBufferToWorking {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_ImportFromBufferToWorking * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x023CD700, bool, Invoke, (IVRChaperoneSetup_ImportFromBufferToWorking * __this, String * pBuffer, uint32_t nImportFlags));
IL2CPP_REGISTER_METHOD(0x02F408A0, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_ImportFromBufferToWorking * __this, String * pBuffer, uint32_t nImportFlags, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (IVRChaperoneSetup_ImportFromBufferToWorking * __this, IAsyncResult * result));
}
