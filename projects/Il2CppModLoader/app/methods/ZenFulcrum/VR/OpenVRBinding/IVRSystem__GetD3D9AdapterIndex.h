#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetD3D9AdapterIndex {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetD3D9AdapterIndex * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0167F180, int32_t, Invoke, (app::IVRSystem_GetD3D9AdapterIndex * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::IVRSystem_GetD3D9AdapterIndex * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::IVRSystem_GetD3D9AdapterIndex * this_ptr, app::IAsyncResult * result))
}
