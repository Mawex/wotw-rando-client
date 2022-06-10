#pragma once
#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Rendering::RenderStateBlock {
    IL2CPP_REGISTER_METHOD(0x001F0DB0, void, ctor, (app::RenderStateBlock__Boxed * this_ptr, app::RenderStateMask__Enum mask))
    IL2CPP_REGISTER_METHOD(0x001F0DC0, app::BlendState, get_blendState, (app::RenderStateBlock__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F0DF0, void, set_blendState, (app::RenderStateBlock__Boxed * this_ptr, app::BlendState value))
    IL2CPP_REGISTER_METHOD(0x001F0E20, app::RasterState, get_rasterState, (app::RenderStateBlock__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F0E30, app::DepthState, get_depthState, (app::RenderStateBlock__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F0E40, app::StencilState, get_stencilState, (app::RenderStateBlock__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F0E60, int32_t, get_stencilReference, (app::RenderStateBlock__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F0E70, app::RenderStateMask__Enum, get_mask, (app::RenderStateBlock__Boxed * this_ptr))
}
