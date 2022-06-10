#pragma once
#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Rendering::RenderQueueRange {
    IL2CPP_REGISTER_METHOD(0x02523CE0, app::RenderQueueRange, get_all, ())
    IL2CPP_REGISTER_METHOD(0x02523D00, app::RenderQueueRange, get_opaque, ())
    IL2CPP_REGISTER_METHOD(0x02523D20, app::RenderQueueRange, get_transparent, ())
}
