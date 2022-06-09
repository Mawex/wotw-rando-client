#include <interception_macros.h>

namespace app::methods::UnityEngine_Experimental_Rendering::RenderStateBlock {
IL2CPP_REGISTER_METHOD(0x001F0DB0, void, __ctor, (app::RenderStateBlock__Boxed * this_ptr, app::RenderStateMask__Enum mask));
IL2CPP_REGISTER_METHOD(0x001F0DC0, BlendState, get_blendState, (app::RenderStateBlock__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001F0DF0, void, set_blendState, (app::RenderStateBlock__Boxed * this_ptr, app::BlendState value));
IL2CPP_REGISTER_METHOD(0x001F0E20, RasterState, get_rasterState, (app::RenderStateBlock__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001F0E30, DepthState, get_depthState, (app::RenderStateBlock__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001F0E40, StencilState, get_stencilState, (app::RenderStateBlock__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001F0E60, int32_t, get_stencilReference, (app::RenderStateBlock__Boxed * this_ptr));
IL2CPP_REGISTER_METHOD(0x001F0E70, RenderStateMask__Enum, get_mask, (app::RenderStateBlock__Boxed * this_ptr));
}
