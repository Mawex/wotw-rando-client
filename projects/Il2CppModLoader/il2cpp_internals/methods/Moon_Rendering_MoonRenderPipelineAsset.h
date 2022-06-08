using namespace app;

namespace app::methods::Moon::Rendering::MoonRenderPipelineAsset {
IL2CPP_REGISTER_METHOD(0x007929C0, IRenderPipeline *, InternalCreatePipeline, (MoonRenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x00792B10, void, CopyImportantProps, (MoonRenderPipelineAsset * __this, MoonRenderPipelineAsset * src));
IL2CPP_REGISTER_METHOD(0x00792C10, Int2, getResolution, (MoonRenderPipelineAsset_XboxResolution__Enum resolution, Camera * camera));
IL2CPP_REGISTER_METHODINFO(0x04756028, MoonRenderPipelineAsset_getResolution__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00792E10, Int2, getSceneResolution, (MoonRenderPipelineAsset * __this, Camera * camera));
IL2CPP_REGISTER_METHOD(0x00792EF0, Int2, getUIResolution, (MoonRenderPipelineAsset * __this, Camera * camera));
IL2CPP_REGISTER_METHOD(0x00792FD0, RenderTextureFormat__Enum, getFrameBufferFormat, (MoonRenderPipelineAsset * __this, Camera * camera));
IL2CPP_REGISTER_METHODINFO(0x0470B2E0, MoonRenderPipelineAsset_getFrameBufferFormat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00793130, Color, getClearColor, (MoonRenderPipelineAsset * __this, MoonRenderPipelineAsset_ClearSceneRT__Enum color, Camera * camera));
IL2CPP_REGISTER_METHODINFO(0x04700920, MoonRenderPipelineAsset_getClearColor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007932D0, Color, getSceneClearColor, (MoonRenderPipelineAsset * __this, Camera * camera));
IL2CPP_REGISTER_METHOD(0x00793310, void, ApplyFxaaQualityLevel, (MoonRenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x00793400, void, setBlurType, (MoonRenderPipelineAsset * __this, MoonRenderPipelineAsset_DofBlurType__Enum type));
IL2CPP_REGISTER_METHOD(0x00793410, void, CopySerializedPropertiesTo, (MoonRenderPipelineAsset * __this, MoonRenderPipelineAsset * target));
IL2CPP_REGISTER_METHOD(0x007935D0, void, __ctor, (MoonRenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x00793F20, void, __cctor, (MethodInfo * method));
}
