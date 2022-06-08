using namespace app;

namespace app::methods::UnityEngine::Experimental::Rendering::RenderStateBlock {
IL2CPP_REGISTER_METHOD(0x001F0DB0, void, __ctor, (RenderStateBlock__Boxed * __this, RenderStateMask__Enum mask));
IL2CPP_REGISTER_METHOD(0x001F0DC0, BlendState, get_blendState, (RenderStateBlock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F0DF0, void, set_blendState, (RenderStateBlock__Boxed * __this, BlendState value));
IL2CPP_REGISTER_METHOD(0x001F0E20, RasterState, get_rasterState, (RenderStateBlock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F0E30, DepthState, get_depthState, (RenderStateBlock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F0E40, StencilState, get_stencilState, (RenderStateBlock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F0E60, int32_t, get_stencilReference, (RenderStateBlock__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F0E70, RenderStateMask__Enum, get_mask, (RenderStateBlock__Boxed * __this));
}
