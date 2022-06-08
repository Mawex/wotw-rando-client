using namespace app;

namespace app::methods::LightCanvasShadingZone {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_LightCanvasShadingZoneSelected, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00B91440, int32_t, get_ShadingZoneId, (LightCanvasShadingZone * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsDirtyEditor, (LightCanvasShadingZone * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsDirtyEditor, (LightCanvasShadingZone * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01148460, bool, get_IsActive, (LightCanvasShadingZone * __this));
IL2CPP_REGISTER_METHOD(0x011485E0, void, OnValidate, (LightCanvasShadingZone * __this));
IL2CPP_REGISTER_METHOD(0x011485F0, void, OnEnable, (LightCanvasShadingZone * __this));
IL2CPP_REGISTER_METHOD(0x01148870, void, OnDisable, (LightCanvasShadingZone * __this));
IL2CPP_REGISTER_METHOD(0x01148910, void, GetCanvases, (LightCanvasShadingZone * __this));
IL2CPP_REGISTER_METHOD(0x011489B0, void, RefreshBounds, (LightCanvasShadingZone * __this));
IL2CPP_REGISTER_METHOD(0x01148AF0, bool, ContainsPoint, (LightCanvasShadingZone * __this, Vector3 point));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (LightCanvasShadingZone * __this));
IL2CPP_REGISTER_METHOD(0x01148B80, void, OnTargetEnter, (LightCanvasShadingZone * __this, IMoonShadingZoneTarget * target));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTargetStay, (LightCanvasShadingZone * __this, IMoonShadingZoneTarget * target, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01148DE0, void, OnTargetExit, (LightCanvasShadingZone * __this, IMoonShadingZoneTarget * target));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEditorUpdate, (LightCanvasShadingZone * __this));
IL2CPP_REGISTER_METHOD(0x01148F60, void, __ctor, (LightCanvasShadingZone * __this));
}
