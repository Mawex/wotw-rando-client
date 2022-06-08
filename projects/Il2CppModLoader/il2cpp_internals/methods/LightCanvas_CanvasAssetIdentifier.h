using namespace app;

namespace app::methods::LightCanvas_CanvasAssetIdentifier {
IL2CPP_REGISTER_METHOD(0x01143DA0, bool, get_Initialized, (LightCanvas_CanvasAssetIdentifier * __this));
IL2CPP_REGISTER_METHOD(0x01143E40, void, set_GameObjectName, (LightCanvas_CanvasAssetIdentifier * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, SceneMetaData *, get_SceneMeta, (LightCanvas_CanvasAssetIdentifier * __this));
IL2CPP_REGISTER_METHOD(0x01143EA0, void, set_SceneMeta, (LightCanvas_CanvasAssetIdentifier * __this, SceneMetaData * value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Guid, (LightCanvas_CanvasAssetIdentifier * __this));
IL2CPP_REGISTER_METHOD(0x01143F60, void, set_Guid, (LightCanvas_CanvasAssetIdentifier * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_IsDirty, (LightCanvas_CanvasAssetIdentifier * __this));
IL2CPP_REGISTER_METHOD(0x01143F70, String *, get_BakeLightingFolderPath, (LightCanvas_CanvasAssetIdentifier * __this));
IL2CPP_REGISTER_METHOD(0x01143FF0, String *, get_AssetFolderName, (LightCanvas_CanvasAssetIdentifier * __this));
IL2CPP_REGISTER_METHOD(0x011440A0, String *, GetFullPathFromAssetsFolderForState, (LightCanvas_CanvasAssetIdentifier * __this, int32_t stateGuid));
IL2CPP_REGISTER_METHOD(0x01144170, String *, GetFullPathFromAssetsFolderDefault, (LightCanvas_CanvasAssetIdentifier * __this));
IL2CPP_REGISTER_METHOD(0x011443F0, String *, GetAssetNameDefault, (LightCanvas_CanvasAssetIdentifier * __this));
IL2CPP_REGISTER_METHOD(0x011444F0, String *, GetAssetNameForState, (LightCanvas_CanvasAssetIdentifier * __this, int32_t stateGuid));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, SetGuidWithoutSettingToDirty, (LightCanvas_CanvasAssetIdentifier * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x007EC410, void, SetDirty, (LightCanvas_CanvasAssetIdentifier * __this, bool dirty));
IL2CPP_REGISTER_METHOD(0x01144800, void, RegisterGuid, (LightCanvas_CanvasAssetIdentifier * __this));
IL2CPP_REGISTER_METHOD(0x01144950, void, __ctor, (LightCanvas_CanvasAssetIdentifier * __this));
}
