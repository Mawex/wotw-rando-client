#pragma once
#include <interception_macros.h>

namespace app::methods::UnityEngine::UI::MaskUtilities {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MaskUtilities * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0265FF20, void, Notify2DMaskStateChanged, (app::Component_1 * mask))
    IL2CPP_REGISTER_METHOD(0x02660170, void, NotifyStencilStateChanged, (app::Component_1 * mask))
    IL2CPP_REGISTER_METHOD(0x026603B0, app::Transform *, FindRootSortOverrideCanvas, (app::Transform * start))
    IL2CPP_REGISTER_METHOD(0x026605B0, int32_t, GetStencilDepth, (app::Transform * transform, app::Transform * stop_after))
    IL2CPP_REGISTER_METHOD(0x026608F0, bool, IsDescendantOrSelf, (app::Transform * father, app::Transform * child))
    IL2CPP_REGISTER_METHOD(0x02660AE0, app::RectMask2D *, GetRectMaskForClippable, (app::IClippable * clippable))
    IL2CPP_REGISTER_METHOD(0x02660E30, void, GetRectMasksForClip, (app::RectMask2D * clipper, app::List_1_UnityEngine_UI_RectMask2D_ * masks))
}
