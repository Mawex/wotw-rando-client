using namespace app;

namespace app::methods::Moon::Rendering::MoonRenderPipelineView_Samplers {
IL2CPP_REGISTER_METHOD(0x00EAEA20, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00EAFC60, SrpSampler, root, (MoonRenderPipelineViewType__Enum viewType, bool appendFrameNumber));
IL2CPP_REGISTER_METHOD(0x00EAFD60, SrpSampler, post, (IRenderPostprocessor * post));
IL2CPP_REGISTER_METHOD(0x00EAFFF0, String *, releaseRT, (RenderTarget * rt));
IL2CPP_REGISTER_METHOD(0x00EB01F0, void, initSlices, (int32_t sliceCount));
IL2CPP_REGISTER_METHOD(0x00EB05D0, SrpSampler, slice, (int32_t index));
IL2CPP_REGISTER_METHOD(0x00EB06D0, SrpSampler, slice, (int32_t index, Int2 size));
}
