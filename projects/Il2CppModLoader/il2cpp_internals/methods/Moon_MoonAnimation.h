#include <interception_macros.h>

namespace app::methods::Moon::MoonAnimation {
IL2CPP_REGISTER_METHOD(0x002FB930, MoonAnimatorDefinition *, IAnimation_get_AnimatorDefinition, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00446960, float, IAnimation_get_AdditiveWeightMultiplier, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B171E0, GameObject *, get_Rig, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CD0, MoonAnimatorLayerName, get_Layer, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x00CB5CE0, void, set_Layer, (MoonAnimation * __this, MoonAnimatorLayerName value));
IL2CPP_REGISTER_METHOD(0x006B5650, float, get_LayerBlendInDuration, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_LayerBlendInDuration, (MoonAnimation * __this, float value));
IL2CPP_REGISTER_METHOD(0x004994E0, float, get_LayerBlendOutDuration, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01045ED0, void, set_LayerBlendOutDuration, (MoonAnimation * __this, float value));
IL2CPP_REGISTER_METHOD(0x008A34C0, float, get_DefaultTransitionInDuration, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x008A34D0, void, set_DefaultTransitionInDuration, (MoonAnimation * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBB60, AnimationPostprocessGroup__Array *, get_DisabledPostprocessGroups, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_DisabledPostprocessGroups, (MoonAnimation * __this, AnimationPostprocessGroup__Array * value));
IL2CPP_REGISTER_METHOD(0x002FBB80, AnimationPostprocessGroupModifier__Array *, get_PostprocessGroupModifiers, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_PostprocessGroupModifiers, (MoonAnimation * __this, AnimationPostprocessGroupModifier__Array * value));
IL2CPP_REGISTER_METHOD(0x00BAB250, String *, get_Name, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_UseDefaultTransitionIn, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, AnimationTransition *, get_DefaultTransitionIn, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B172B0, AnimationTransition *, GetTransition, (MoonAnimation * __this, IAnimation * targetAnimation, float currentNormalizedTime));
IL2CPP_REGISTER_METHOD(0x01B17510, float, GetDuration, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B175D0, float, GetFrameRate, (MoonAnimation * __this));
IL2CPP_REGISTER_METHOD(0x01B17690, void, CollectAnimations, (MoonAnimation * __this, HashSet_1_Moon_MoonAnimation_ * animations));
IL2CPP_REGISTER_METHOD(0x01B17740, void, __ctor, (MoonAnimation * __this));
}
