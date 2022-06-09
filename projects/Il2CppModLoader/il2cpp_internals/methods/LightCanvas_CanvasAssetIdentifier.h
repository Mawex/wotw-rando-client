#include <interception_macros.h>

namespace app::methods::LightCanvas_CanvasAssetIdentifier {
IL2CPP_REGISTER_METHOD(0x01143DA0, bool, get_Initialized, (app::LightCanvas_CanvasAssetIdentifier * this_ptr));
IL2CPP_REGISTER_METHOD(0x01143E40, void, set_GameObjectName, (app::LightCanvas_CanvasAssetIdentifier * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, SceneMetaData *, get_SceneMeta, (app::LightCanvas_CanvasAssetIdentifier * this_ptr));
IL2CPP_REGISTER_METHOD(0x01143EA0, void, set_SceneMeta, (app::LightCanvas_CanvasAssetIdentifier * this_ptr, app::SceneMetaData * value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Guid, (app::LightCanvas_CanvasAssetIdentifier * this_ptr));
IL2CPP_REGISTER_METHOD(0x01143F60, void, set_Guid, (app::LightCanvas_CanvasAssetIdentifier * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_IsDirty, (app::LightCanvas_CanvasAssetIdentifier * this_ptr));
IL2CPP_REGISTER_METHOD(0x01143F70, String *, get_BakeLightingFolderPath, (app::LightCanvas_CanvasAssetIdentifier * this_ptr));
IL2CPP_REGISTER_METHOD(0x01143FF0, String *, get_AssetFolderName, (app::LightCanvas_CanvasAssetIdentifier * this_ptr));
IL2CPP_REGISTER_METHOD(0x011440A0, String *, GetFullPathFromAssetsFolderForState, (app::LightCanvas_CanvasAssetIdentifier * this_ptr, int32_t state_guid));
IL2CPP_REGISTER_METHOD(0x01144170, String *, GetFullPathFromAssetsFolderDefault, (app::LightCanvas_CanvasAssetIdentifier * this_ptr));
IL2CPP_REGISTER_METHOD(0x011443F0, String *, GetAssetNameDefault, (app::LightCanvas_CanvasAssetIdentifier * this_ptr));
IL2CPP_REGISTER_METHOD(0x011444F0, String *, GetAssetNameForState, (app::LightCanvas_CanvasAssetIdentifier * this_ptr, int32_t state_guid));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, SetGuidWithoutSettingToDirty, (app::LightCanvas_CanvasAssetIdentifier * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x007EC410, void, SetDirty, (app::LightCanvas_CanvasAssetIdentifier * this_ptr, bool dirty));
IL2CPP_REGISTER_METHOD(0x01144800, void, RegisterGuid, (app::LightCanvas_CanvasAssetIdentifier * this_ptr));
IL2CPP_REGISTER_METHOD(0x01144950, void, __ctor, (app::LightCanvas_CanvasAssetIdentifier * this_ptr));
}
