#include <interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::CVRRenderModels {
IL2CPP_REGISTER_METHOD(0x0167A3B0, void, __ctor, (CVRRenderModels * __this, void * pInterface));
IL2CPP_REGISTER_METHOD(0x0167A510, EVRRenderModelError__Enum, LoadRenderModel_Async, (CVRRenderModels * __this, String * pchRenderModelName, void * * ppRenderModel));
IL2CPP_REGISTER_METHOD(0x0167A530, void, FreeRenderModel, (CVRRenderModels * __this, void * pRenderModel));
IL2CPP_REGISTER_METHOD(0x0167A550, EVRRenderModelError__Enum, LoadTexture_Async, (CVRRenderModels * __this, int32_t textureId, void * * ppTexture));
IL2CPP_REGISTER_METHOD(0x0167A570, void, FreeTexture, (CVRRenderModels * __this, void * pTexture));
IL2CPP_REGISTER_METHOD(0x01677EA0, EVRRenderModelError__Enum, LoadTextureD3D11_Async, (CVRRenderModels * __this, int32_t textureId, void * pD3D11Device, void * * ppD3D11Texture2D));
IL2CPP_REGISTER_METHOD(0x0167A590, EVRRenderModelError__Enum, LoadIntoTextureD3D11_Async, (CVRRenderModels * __this, int32_t textureId, void * pDstTexture));
IL2CPP_REGISTER_METHOD(0x0167A5B0, void, FreeTextureD3D11, (CVRRenderModels * __this, void * pD3D11Texture2D));
IL2CPP_REGISTER_METHOD(0x0167A5D0, uint32_t, GetRenderModelName, (CVRRenderModels * __this, uint32_t unRenderModelIndex, StringBuilder * pchRenderModelName, uint32_t unRenderModelNameLen));
IL2CPP_REGISTER_METHOD(0x0167A600, uint32_t, GetRenderModelCount, (CVRRenderModels * __this));
IL2CPP_REGISTER_METHOD(0x01676D30, uint32_t, GetComponentCount, (CVRRenderModels * __this, String * pchRenderModelName));
IL2CPP_REGISTER_METHOD(0x0167A620, uint32_t, GetComponentName, (CVRRenderModels * __this, String * pchRenderModelName, uint32_t unComponentIndex, StringBuilder * pchComponentName, uint32_t unComponentNameLen));
IL2CPP_REGISTER_METHOD(0x0167A650, uint64_t, GetComponentButtonMask, (CVRRenderModels * __this, String * pchRenderModelName, String * pchComponentName));
IL2CPP_REGISTER_METHOD(0x0167A670, uint32_t, GetComponentRenderModelName, (CVRRenderModels * __this, String * pchRenderModelName, String * pchComponentName, StringBuilder * pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen));
IL2CPP_REGISTER_METHOD(0x0167A6A0, bool, GetComponentState, (CVRRenderModels * __this, String * pchRenderModelName, String * pchComponentName, VRControllerState_t * pControllerState, RenderModel_ControllerMode_State_t * pState, RenderModel_ComponentState_t * pComponentState));
IL2CPP_REGISTER_METHOD(0x0167A880, bool, RenderModelHasComponent, (CVRRenderModels * __this, String * pchRenderModelName, String * pchComponentName));
IL2CPP_REGISTER_METHOD(0x0167A8B0, uint32_t, GetRenderModelThumbnailURL, (CVRRenderModels * __this, String * pchRenderModelName, StringBuilder * pchThumbnailURL, uint32_t unThumbnailURLLen, EVRRenderModelError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167A8E0, uint32_t, GetRenderModelOriginalPath, (CVRRenderModels * __this, String * pchRenderModelName, StringBuilder * pchOriginalPath, uint32_t unOriginalPathLen, EVRRenderModelError__Enum * peError));
IL2CPP_REGISTER_METHOD(0x0167A910, String *, GetRenderModelErrorNameFromEnum, (CVRRenderModels * __this, EVRRenderModelError__Enum error));
}
