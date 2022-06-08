#include <interception_macros.h>

namespace app::methods::Moon::Flammable {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (Flammable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC830, SuspendableMask__Enum, get_Mask, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x01224010, void, set_Mask, (Flammable * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x012240C0, Flammable_FlameState__Enum, get_State, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x012241B0, void, set_State, (Flammable * __this, Flammable_FlameState__Enum value));
IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x012242A0, void, SetState, (Flammable * __this, Flammable_FlameState__Enum state));
IL2CPP_REGISTER_METHOD(0x012243E0, void, SetFlameEnabled, (Flammable * __this, bool enabled));
IL2CPP_REGISTER_METHOD(0x012244E0, void, PlayTimeline, (Flammable * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01224530, void, StopAllTimelines, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x01224570, void, OnTriggerEnter, (Flammable * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x01224750, void, OnFlameEnter, (Flammable * __this, Flammable * flammable));
IL2CPP_REGISTER_METHOD(0x01224930, void, DestroyFlammableProjectile, (Flammable * __this, Flammable * flammable));
IL2CPP_REGISTER_METHOD(0x01224A80, void, FixedUpdate, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x01224AF0, void, OnEnable, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x01224D60, void, OnDisable, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x01224530, void, OnCheckpointRestore, (Flammable * __this));
IL2CPP_REGISTER_METHODINFO(0x047071D8, Flammable_OnCheckpointRestore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01224F50, void, Apply, (Flammable * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x01225030, IUberState__Array *, get_AffectingUberStates, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x012250C0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x012252A0, IDesiredUberState *, GetRequirementsForTimeline, (Flammable * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01225610, void, OnRecieveDamage, (Flammable * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x01225660, bool, IsRestrictedByTimelineCondition, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x01225790, bool, IsAnyTransitionTimelinePlaying, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_InvalidateParentTimelineCache, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_InvalidateParentTimelineCache, (Flammable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012258C0, void, __ctor, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, IDamageReciever_get_gameObject, (Flammable * __this));
IL2CPP_REGISTER_METHOD(0x00506170, Transform *, IDamageReciever_get_transform, (Flammable * __this));
}
