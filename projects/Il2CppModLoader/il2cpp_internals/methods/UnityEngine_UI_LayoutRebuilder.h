using namespace app;

namespace app::methods::UnityEngine::UI::LayoutRebuilder {
IL2CPP_REGISTER_METHOD(0x0265B9B0, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LayoutRebuilder * __this));
IL2CPP_REGISTER_METHOD(0x0265BDB0, void, Initialize, (LayoutRebuilder * __this, RectTransform * controller));
IL2CPP_REGISTER_METHOD(0x0098AB30, void, Clear, (LayoutRebuilder * __this));
IL2CPP_REGISTER_METHOD(0x0265BDF0, void, ReapplyDrivenProperties, (RectTransform * driven));
IL2CPP_REGISTER_METHODINFO(0x04725C20, LayoutRebuilder_ReapplyDrivenProperties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F2AB40, Transform *, get_transform, (LayoutRebuilder * __this));
IL2CPP_REGISTER_METHOD(0x0265BE90, bool, IsDestroyed, (LayoutRebuilder * __this));
IL2CPP_REGISTER_METHOD(0x0265BF30, void, StripDisabledBehavioursFromList, (List_1_UnityEngine_Component_ * components));
IL2CPP_REGISTER_METHOD(0x0265C140, void, ForceRebuildLayoutImmediate, (RectTransform * layoutRoot));
IL2CPP_REGISTER_METHOD(0x0265C280, void, Rebuild, (LayoutRebuilder * __this, CanvasUpdate__Enum executing));
IL2CPP_REGISTER_METHOD(0x0265C8D0, void, PerformLayoutControl, (LayoutRebuilder * __this, RectTransform * rect, UnityAction_1_UnityEngine_Component_ * action));
IL2CPP_REGISTER_METHOD(0x0265CC60, void, PerformLayoutCalculation, (LayoutRebuilder * __this, RectTransform * rect, UnityAction_1_UnityEngine_Component_ * action));
IL2CPP_REGISTER_METHOD(0x0265CFB0, void, MarkLayoutForRebuild, (RectTransform * rect));
IL2CPP_REGISTER_METHOD(0x0265D3D0, bool, ValidController, (RectTransform * layoutRoot, List_1_UnityEngine_Component_ * comps));
IL2CPP_REGISTER_METHOD(0x0265D5E0, void, MarkLayoutRootForRebuild, (RectTransform * controller));
IL2CPP_REGISTER_METHOD(0x0265D830, void, LayoutComplete, (LayoutRebuilder * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, (LayoutRebuilder * __this));
IL2CPP_REGISTER_METHOD(0x024AD170, int32_t, GetHashCode, (LayoutRebuilder * __this));
IL2CPP_REGISTER_METHOD(0x0265D8F0, bool, Equals, (LayoutRebuilder * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x0265D950, String *, ToString, (LayoutRebuilder * __this));
IL2CPP_REGISTER_METHOD(0x0265D9E0, void, _s_Rebuilders_m__0, (LayoutRebuilder * x));
IL2CPP_REGISTER_METHODINFO(0x047878B0, LayoutRebuilder__s_Rebuilders_m__0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0265DA00, bool, _StripDisabledBehavioursFromList_m__1, (Component_1 * e));
IL2CPP_REGISTER_METHODINFO(0x04703630, LayoutRebuilder__StripDisabledBehavioursFromList_m__1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0265DB90, void, _Rebuild_m__2, (Component_1 * e));
IL2CPP_REGISTER_METHODINFO(0x04788E20, LayoutRebuilder__Rebuild_m__2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0265DC40, void, _Rebuild_m__3, (Component_1 * e));
IL2CPP_REGISTER_METHODINFO(0x04794000, LayoutRebuilder__Rebuild_m__3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0265DCF0, void, _Rebuild_m__4, (Component_1 * e));
IL2CPP_REGISTER_METHODINFO(0x04797D58, LayoutRebuilder__Rebuild_m__4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0265DDA0, void, _Rebuild_m__5, (Component_1 * e));
IL2CPP_REGISTER_METHODINFO(0x04745B78, LayoutRebuilder__Rebuild_m__5__MethodInfo);
}
