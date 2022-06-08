#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetHiddenAreaMesh {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (IVRSystem_GetHiddenAreaMesh * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x02CEC030, HiddenAreaMesh_t, Invoke, (IVRSystem_GetHiddenAreaMesh * __this, EVREye__Enum eEye, EHiddenAreaMeshType__Enum type));
IL2CPP_REGISTER_METHOD(0x02CEC470, IAsyncResult *, BeginInvoke, (IVRSystem_GetHiddenAreaMesh * __this, EVREye__Enum eEye, EHiddenAreaMeshType__Enum type, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x01C7A680, HiddenAreaMesh_t, EndInvoke, (IVRSystem_GetHiddenAreaMesh * __this, IAsyncResult * result));
}
