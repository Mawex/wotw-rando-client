using namespace app;

namespace app::methods::UnityEngine::Experimental::Rendering::RenderPipelineAsset {
IL2CPP_REGISTER_METHOD(0x024349E0, void, __ctor, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x02434B40, void, DestroyCreatedInstances, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x02434D40, IRenderPipeline *, CreatePipeline, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, String__Array *, GetRenderingLayerMaskNames, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, String__Array *, GetCullingCategoryNames, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultMaterial, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Shader *, GetAutodeskInteractiveShader, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Shader *, GetAutodeskInteractiveTransparentShader, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Shader *, GetAutodeskInteractiveMaskedShader, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultParticleMaterial, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultLineMaterial, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultTerrainMaterial, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultUIMaterial, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultUIOverdrawMaterial, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultUIETC1SupportedMaterial, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefault2DMaterial, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F1B660, Shader *, GetDefaultShader, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x01F25880, IEnumerable_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ *, CreatedInstances, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x02434E00, void, OnValidate, (RenderPipelineAsset * __this));
IL2CPP_REGISTER_METHOD(0x02434E00, void, OnDisable, (RenderPipelineAsset * __this));
}
