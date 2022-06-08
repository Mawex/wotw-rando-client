#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingPlayAreaSize {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRChaperoneSetup_GetWorkingPlayAreaSize * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (IVRChaperoneSetup_GetWorkingPlayAreaSize * __this, float * pSizeX, float * pSizeZ));
IL2CPP_REGISTER_METHOD(0x02F40610, IAsyncResult *, BeginInvoke, (IVRChaperoneSetup_GetWorkingPlayAreaSize * __this, float * pSizeX, float * pSizeZ, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (IVRChaperoneSetup_GetWorkingPlayAreaSize * __this, float * pSizeX, float * pSizeZ, IAsyncResult * result));
}
