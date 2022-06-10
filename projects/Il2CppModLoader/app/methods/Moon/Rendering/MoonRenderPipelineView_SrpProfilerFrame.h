#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::Rendering::MoonRenderPipelineView_SrpProfilerFrame {
    IL2CPP_REGISTER_METHOD(0x00EB09D0, app::MoonRenderPipelineView_SrpProfilerFrame, op_Addition, (app::MoonRenderPipelineView_SrpProfilerFrame a, app::MoonRenderPipelineView_SrpProfilerFrame b))
    IL2CPP_REGISTER_METHOD(0x00EB0B60, app::MoonRenderPipelineView_SrpProfilerFrame, op_Division, (app::MoonRenderPipelineView_SrpProfilerFrame a, int32_t b))
    app::MoonRenderPipelineView_SrpProfilerFrame operator + (app::MoonRenderPipelineView_SrpProfilerFrame a, app::MoonRenderPipelineView_SrpProfilerFrame b) {
        return op_Addition(a, b);
    }
    app::MoonRenderPipelineView_SrpProfilerFrame operator / (app::MoonRenderPipelineView_SrpProfilerFrame a, int32_t b) {
        return op_Division(a, b);
    }
}
