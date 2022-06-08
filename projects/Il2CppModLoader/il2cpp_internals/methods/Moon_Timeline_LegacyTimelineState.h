using namespace app;

namespace app::methods::Moon::Timeline::LegacyTimelineState {
IL2CPP_REGISTER_METHOD(0x00773A10, bool, get_InPreviewMode, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00773AB0, void, set_InPreviewMode, (bool value));
IL2CPP_REGISTER_METHOD(0x00773B60, bool, get_IsOriAnimatorDrivingOri, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00773C00, void, set_IsOriAnimatorDrivingOri, (bool value));
IL2CPP_REGISTER_METHOD(0x00773CB0, bool, get_ShouldTimelineAnimateCamera, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00773D50, void, set_ShouldTimelineAnimateCamera, (bool value));
IL2CPP_REGISTER_METHOD(0x00773E00, float, get_CurrentTime, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00773EA0, void, set_CurrentTime, (float value));
IL2CPP_REGISTER_METHOD(0x00773F50, bool, get_IsPlaying, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00773FF0, void, set_IsPlaying, (bool value));
IL2CPP_REGISTER_METHOD(0x007740A0, void, add_OnPreviewablesSampledCallback, (Action_1_Single_ * value));
IL2CPP_REGISTER_METHOD(0x007741E0, void, remove_OnPreviewablesSampledCallback, (Action_1_Single_ * value));
IL2CPP_REGISTER_METHOD(0x00774320, void, add_OnTimelineStateChangeCallback, (Action * value));
IL2CPP_REGISTER_METHOD(0x00774460, void, remove_OnTimelineStateChangeCallback, (Action * value));
IL2CPP_REGISTER_METHOD(0x007745A0, void, AddObserver, (ILegacyTimelineStateObserver * observer));
IL2CPP_REGISTER_METHOD(0x007747C0, void, RemoveObserver, (ILegacyTimelineStateObserver * observer));
IL2CPP_REGISTER_METHOD(0x00774880, void, OnPreviewablesSampled, (float time));
IL2CPP_REGISTER_METHOD(0x00774A20, void, OnTimelineStateChange, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00774B00, GameObject *, GetOrCreateEditorOri, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00774BA0, GameObject *, GetEditorOri, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00774C40, Animator *, GetOriAnimator, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00774E30, void, DestroyOri, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00774F90, void, CreatePuppets, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00775260, void, DestroyPuppets, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00775490, GenericPuppet *, GetPuppet, (int32_t puppetId, int32_t recordingId));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (LegacyTimelineState * __this));
IL2CPP_REGISTER_METHOD(0x00775780, void, __cctor, (MethodInfo * method));
}
