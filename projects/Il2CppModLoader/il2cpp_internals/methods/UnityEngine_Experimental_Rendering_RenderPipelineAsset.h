#include <interception_macros.h>

namespace app::methods::UnityEngine_Experimental_Rendering::RenderPipelineAsset {
IL2CPP_REGISTER_METHOD(0x024349E0, void, __ctor, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x02434B40, void, DestroyCreatedInstances, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x02434D40, IRenderPipeline *, CreatePipeline, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, String__Array *, GetRenderingLayerMaskNames, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, String__Array *, GetCullingCategoryNames, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultMaterial, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Shader *, GetAutodeskInteractiveShader, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Shader *, GetAutodeskInteractiveTransparentShader, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Shader *, GetAutodeskInteractiveMaskedShader, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultParticleMaterial, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultLineMaterial, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultTerrainMaterial, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultUIMaterial, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultUIOverdrawMaterial, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefaultUIETC1SupportedMaterial, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Material *, GetDefault2DMaterial, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F1B660, Shader *, GetDefaultShader, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F25880, IEnumerable_1_UnityEngine_Experimental_Rendering_IRenderPipeline_ *, CreatedInstances, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x02434E00, void, OnValidate, (app::RenderPipelineAsset * this_ptr));
IL2CPP_REGISTER_METHOD(0x02434E00, void, OnDisable, (app::RenderPipelineAsset * this_ptr));
}
