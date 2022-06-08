using namespace app;

namespace app::methods::Moon::Rendering::CullingCategoryManager {
IL2CPP_REGISTER_METHOD(0x00C53A00, void, __ctor, (CullingCategoryManager * __this, CullingCategory__Enum mask, bool needsList, bool perSlice));
IL2CPP_REGISTER_METHOD(0x002FA280, RendererCullingCategoryParameters, ICullingCategoryManager_get_Parameters, (CullingCategoryManager * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD30, RendererCullingCategoryResults, get_lastResults, (CullingCategoryManager * __this));
IL2CPP_REGISTER_METHOD(0x00C3DD40, void, set_lastResults, (CullingCategoryManager * __this, RendererCullingCategoryResults value));
IL2CPP_REGISTER_METHOD(0x00C53A30, void, ICullingCategoryManager_OnPreCull, (CullingCategoryManager * __this, MoonRenderPipelineView * view));
IL2CPP_REGISTER_METHOD(0x00C53A50, void, OnPreCull, (CullingCategoryManager * __this, MoonRenderPipelineView * view));
IL2CPP_REGISTER_METHOD(0x00C53A70, void, ICullingCategoryManager_OnResultsReady, (CullingCategoryManager * __this, MoonRenderPipelineView * view, RendererCullingCategoryResults results));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResultsReady, (CullingCategoryManager * __this, MoonRenderPipelineView * view, RendererCullingCategoryResults results));
IL2CPP_REGISTER_METHOD(0x00C53AA0, void, ICullingCategoryManager_OnPostCull, (CullingCategoryManager * __this, MoonRenderPipelineView * view, RendererCullingCategoryResults results));
IL2CPP_REGISTER_METHOD(0x00C53AD0, void, OnPostCull, (CullingCategoryManager * __this, MoonRenderPipelineView * view, RendererCullingCategoryResults results));
IL2CPP_REGISTER_METHOD(0x00C53AE0, bool, SliceHasContent, (CullingCategoryManager * __this, int32_t sliceIndex));
IL2CPP_REGISTER_METHOD(0x00C53B30, int32_t, Count, (CullingCategoryManager * __this, int32_t sliceIndex));
}
