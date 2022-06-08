#include <interception_macros.h>

namespace app::methods::GhostAnimationParameterPlugin_FloatParamenterTracker {
IL2CPP_REGISTER_METHOD(0x002FA280, FloatAnimationParameter *, get_Parameter, (GhostAnimationParameterPlugin_FloatParamenterTracker * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Parameter, (GhostAnimationParameterPlugin_FloatParamenterTracker * __this, FloatAnimationParameter * value));
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_LastValue, (GhostAnimationParameterPlugin_FloatParamenterTracker * __this));
IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_LastValue, (GhostAnimationParameterPlugin_FloatParamenterTracker * __this, float value));
IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_ValueChanged, (GhostAnimationParameterPlugin_FloatParamenterTracker * __this));
IL2CPP_REGISTER_METHOD(0x007EC6C0, void, set_ValueChanged, (GhostAnimationParameterPlugin_FloatParamenterTracker * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00E14010, String *, get_GUID, (GhostAnimationParameterPlugin_FloatParamenterTracker * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (GhostAnimationParameterPlugin_FloatParamenterTracker * __this, FloatAnimationParameter * parameter));
IL2CPP_REGISTER_METHOD(0x00E14090, float, CurrentValue, (GhostAnimationParameterPlugin_FloatParamenterTracker * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00E140D0, void, Refresh, (GhostAnimationParameterPlugin_FloatParamenterTracker * __this, MoonAnimator * animator, bool forceRecording));
}
