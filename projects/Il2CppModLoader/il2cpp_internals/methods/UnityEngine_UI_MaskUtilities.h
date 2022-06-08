using namespace app;

namespace app::methods::UnityEngine::UI::MaskUtilities {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (MaskUtilities * __this));
IL2CPP_REGISTER_METHOD(0x0265FF20, void, Notify2DMaskStateChanged, (Component_1 * mask));
IL2CPP_REGISTER_METHOD(0x02660170, void, NotifyStencilStateChanged, (Component_1 * mask));
IL2CPP_REGISTER_METHOD(0x026603B0, Transform *, FindRootSortOverrideCanvas, (Transform * start));
IL2CPP_REGISTER_METHOD(0x026605B0, int32_t, GetStencilDepth, (Transform * transform, Transform * stopAfter));
IL2CPP_REGISTER_METHOD(0x026608F0, bool, IsDescendantOrSelf, (Transform * father, Transform * child));
IL2CPP_REGISTER_METHOD(0x02660AE0, RectMask2D *, GetRectMaskForClippable, (IClippable * clippable));
IL2CPP_REGISTER_METHOD(0x02660E30, void, GetRectMasksForClip, (RectMask2D * clipper, List_1_UnityEngine_UI_RectMask2D_ * masks));
}
