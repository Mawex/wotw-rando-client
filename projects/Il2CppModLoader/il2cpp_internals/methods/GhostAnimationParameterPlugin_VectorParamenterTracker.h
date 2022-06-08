using namespace app;

namespace app::methods::GhostAnimationParameterPlugin_VectorParamenterTracker {
IL2CPP_REGISTER_METHOD(0x002FA280, VectorAnimationParameter *, get_Parameter, (GhostAnimationParameterPlugin_VectorParamenterTracker * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Parameter, (GhostAnimationParameterPlugin_VectorParamenterTracker * __this, VectorAnimationParameter * value));
IL2CPP_REGISTER_METHOD(0x0064EB90, Vector3, get_LastValue, (GhostAnimationParameterPlugin_VectorParamenterTracker * __this));
IL2CPP_REGISTER_METHOD(0x00E15170, void, set_LastValue, (GhostAnimationParameterPlugin_VectorParamenterTracker * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_ValueChanged, (GhostAnimationParameterPlugin_VectorParamenterTracker * __this));
IL2CPP_REGISTER_METHOD(0x007EC410, void, set_ValueChanged, (GhostAnimationParameterPlugin_VectorParamenterTracker * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00E15180, String *, get_GUID, (GhostAnimationParameterPlugin_VectorParamenterTracker * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (GhostAnimationParameterPlugin_VectorParamenterTracker * __this, VectorAnimationParameter * parameter));
IL2CPP_REGISTER_METHOD(0x00E15200, Vector3, CurrentValue, (GhostAnimationParameterPlugin_VectorParamenterTracker * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00E15260, void, Refresh, (GhostAnimationParameterPlugin_VectorParamenterTracker * __this, MoonAnimator * animator, bool forceRecording));
}
