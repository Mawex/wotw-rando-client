#include <interception_macros.h>

namespace app::methods::Moon_Rendering::MoonRenderPipelineView_Samplers {
IL2CPP_REGISTER_METHOD(0x00EAEA20, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x00EAFC60, SrpSampler, root, (app::MoonRenderPipelineViewType__Enum view_type, bool append_frame_number));
IL2CPP_REGISTER_METHOD(0x00EAFD60, SrpSampler, post, (app::IRenderPostprocessor * post));
IL2CPP_REGISTER_METHOD(0x00EAFFF0, String *, releaseRT, (app::RenderTarget * rt));
IL2CPP_REGISTER_METHOD(0x00EB01F0, void, initSlices, (int32_t slice_count));
IL2CPP_REGISTER_METHOD(0x00EB05D0, SrpSampler, slice_1, (int32_t index));
IL2CPP_REGISTER_METHOD(0x00EB06D0, SrpSampler, slice_2, (int32_t index, app::Int2 size));
}
