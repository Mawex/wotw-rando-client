#include <interception_macros.h>

namespace app::methods::Moon::Rendering::RenderScopeExtensions {
IL2CPP_REGISTER_METHOD(0x00EB1A50, bool, match, (RenderScope__Enum scope, MoonRenderPipelineViewType__Enum type));
IL2CPP_REGISTER_METHODINFO(0x04787590, RenderScopeExtensions_match__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00EB1B80, bool, hasFlag, (RenderScope__Enum value, RenderScope__Enum flag));
IL2CPP_REGISTER_METHOD(0x00EB1B90, RenderScope__Enum, setFlag, (RenderScope__Enum scope, RenderScope__Enum flag, bool on));
}
