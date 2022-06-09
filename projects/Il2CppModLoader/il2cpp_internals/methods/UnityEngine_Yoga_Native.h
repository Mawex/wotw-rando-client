#include <interception_macros.h>

namespace app::methods::UnityEngine_Yoga::Native {
IL2CPP_REGISTER_METHOD(0x031BE3F0, void, YGNodeFree, (app::void * yg_node));
IL2CPP_REGISTER_METHOD(0x031BE4B0, void, YGNodeFreeInternal, (app::void * yg_node));
IL2CPP_REGISTER_METHOD(0x031BE500, void, YGNodeMeasureInvoke, (app::YogaNode * node, float width, app::YogaMeasureMode__Enum width_mode, float height, app::YogaMeasureMode__Enum height_mode, app::void * return_value_address));
IL2CPP_REGISTER_METHOD(0x031BE640, void, YGNodeBaselineInvoke, (app::YogaNode * node, float width, float height, app::void * return_value_address));
}
