#include <interception_macros.h>

namespace app::methods::ZenFulcrum_VR_OpenVRBinding::IVRSystem__GetHiddenAreaMesh {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (app::IVRSystem_GetHiddenAreaMesh * this_ptr, app::Object * object, app::void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEC030, HiddenAreaMesh_t, Invoke, (app::IVRSystem_GetHiddenAreaMesh * this_ptr, app::EVREye__Enum e_eye, app::EHiddenAreaMeshType__Enum type));
IL2CPP_REGISTER_METHOD(0x02CEC470, IAsyncResult *, BeginInvoke, (app::IVRSystem_GetHiddenAreaMesh * this_ptr, app::EVREye__Enum e_eye, app::EHiddenAreaMeshType__Enum type, app::AsyncCallback * callback, app::Object * object));
IL2CPP_REGISTER_METHOD(0x01C7A680, HiddenAreaMesh_t, EndInvoke, (app::IVRSystem_GetHiddenAreaMesh * this_ptr, app::IAsyncResult * result));
}
