#include <interception_macros.h>

namespace app::methods::CollectablePlaceholder {
IL2CPP_REGISTER_METHOD(0x012CBAF0, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSuspended, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_IsSuspended, (CollectablePlaceholder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x005065F0, SuspendableMask__Enum, get_Mask, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CBBC0, void, set_Mask, (CollectablePlaceholder * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x012CBC80, bool, get_Collected, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CBCC0, void, set_Collected, (CollectablePlaceholder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x012CBD90, bool, get_IsCurrentlyRevealed, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CBDD0, bool, get_ShouldUseLegacySerialization, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CBE70, void, Awake, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CC140, void, OnEnable, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CC1F0, void, OnDisable, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CC2A0, void, OnDestroy, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CC3B0, void, OnCollect, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHODINFO(0x04745F48, CollectablePlaceholder_OnCollect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012CC530, bool, CanCreateCheckpoint, ());
IL2CPP_REGISTER_METHOD(0x012CC5C0, void, SubscribeToCharacterLandEvent, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CC790, void, UnsubscribeFromCharacterLandEvent, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CC990, void, FixedUpdate, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CCF60, void, DespawnInstance, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CD080, void, Instantiate, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CD590, void, OnInstantiate, (CollectablePlaceholder * __this, GameObject * instance));
IL2CPP_REGISTER_METHOD(0x012CD7B0, void, Serialize, (CollectablePlaceholder * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x012CD810, void, CreateCheckpointWithOffset, (CollectablePlaceholder * __this, CollectableCheckpointSettings * settings));
IL2CPP_REGISTER_METHOD(0x012CDA90, void, OnCharacterLand, (CollectablePlaceholder * __this, Vector3 normal, Collider * collider));
IL2CPP_REGISTER_METHODINFO(0x0470B810, CollectablePlaceholder_OnCharacterLand__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CDB70, void, Apply, (CollectablePlaceholder * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x00BFB3D0, IUberState__Array *, get_AffectingUberStates, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, List_1_UnityEngine_GameObject_ *, get_AllTargets, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CDD20, void, __ctor, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x012CDFE0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x012CE130, void, _Instantiate_b__41_0, (CollectablePlaceholder * __this));
IL2CPP_REGISTER_METHODINFO(0x04779070, CollectablePlaceholder__Instantiate_b__41_0__MethodInfo);
}
