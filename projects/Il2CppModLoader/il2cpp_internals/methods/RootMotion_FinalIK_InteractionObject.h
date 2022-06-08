#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::InteractionObject {
IL2CPP_REGISTER_METHOD(0x02A0B300, void, OpenTutorial1, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0B3C0, void, OpenTutorial2, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0B480, void, OpenTutorial3, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0B540, void, OpenTutorial4, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0B600, void, SupportGroup, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0B6C0, void, ASThread, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_length, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x00724130, void, set_length, (InteractionObject * __this, float value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, InteractionSystem *, get_lastUsedInteractionSystem, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, set_lastUsedInteractionSystem, (InteractionObject * __this, InteractionSystem * value));
IL2CPP_REGISTER_METHOD(0x02A0B780, void, Initiate, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0BB00, Transform *, get_lookAtTarget, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0BBD0, InteractionTarget *, GetTarget, (InteractionObject * __this, FullBodyBipedEffector__Enum effectorType, InteractionSystem * interactionSystem));
IL2CPP_REGISTER_METHOD(0x02A0BE00, bool, CurveUsed, (InteractionObject * __this, InteractionObject_WeightCurve_Type__Enum type));
IL2CPP_REGISTER_METHOD(0x002FBBC0, InteractionTarget__Array *, GetTargets, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0BED0, Transform *, GetTarget, (InteractionObject * __this, FullBodyBipedEffector__Enum effectorType, String * tag));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, OnStartInteraction, (InteractionObject * __this, InteractionSystem * interactionSystem));
IL2CPP_REGISTER_METHOD(0x02A0C170, void, Apply, (InteractionObject * __this, IKSolverFullBodyBiped * solver, FullBodyBipedEffector__Enum effector, InteractionTarget * target, float timer, float weight));
IL2CPP_REGISTER_METHOD(0x02A0C790, float, GetValue, (InteractionObject * __this, InteractionObject_WeightCurve_Type__Enum weightCurveType, InteractionTarget * target, float timer));
IL2CPP_REGISTER_METHOD(0x02A0CAE0, Transform *, get_targetsRoot, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0CBB0, void, Awake, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0CBC0, void, Apply, (InteractionObject * __this, IKSolverFullBodyBiped * solver, FullBodyBipedEffector__Enum effector, InteractionObject_WeightCurve_Type__Enum type, float value, float weight));
IL2CPP_REGISTER_METHOD(0x02A0D320, Transform *, GetTarget, (InteractionObject * __this, FullBodyBipedEffector__Enum effectorType));
IL2CPP_REGISTER_METHOD(0x02A0D3C0, int32_t, GetWeightCurveIndex, (InteractionObject * __this, InteractionObject_WeightCurve_Type__Enum weightCurveType));
IL2CPP_REGISTER_METHOD(0x02A0D430, int32_t, GetMultiplierIndex, (InteractionObject * __this, InteractionObject_WeightCurve_Type__Enum weightCurveType));
IL2CPP_REGISTER_METHOD(0x02A0D4A0, void, OpenUserManual, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0D560, void, OpenScriptReference, (InteractionObject * __this));
IL2CPP_REGISTER_METHOD(0x02A0D620, void, __ctor, (InteractionObject * __this));
}
