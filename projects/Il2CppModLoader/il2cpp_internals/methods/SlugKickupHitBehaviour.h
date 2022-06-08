using namespace app;

namespace app::methods::SlugKickupHitBehaviour {
IL2CPP_REGISTER_METHOD(0x006C6090, void, OnCacheSerializedComponents, (SlugKickupHitBehaviour * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x006C6140, void, OnInitializeTask, (SlugKickupHitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006C6370, void, SetFeetAngle, (SlugKickupHitBehaviour * __this, float feetAngle));
IL2CPP_REGISTER_METHOD(0x006C6420, void, SetRotationAngle, (SlugKickupHitBehaviour * __this, float rotAngle));
IL2CPP_REGISTER_METHOD(0x006C6480, void, OnEnterTask, (SlugKickupHitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006C6B50, void, SpawnOrbs, (SlugKickupHitBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0476FEF8, SlugKickupHitBehaviour_SpawnOrbs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006C6CC0, void, HandleRotations, (SlugKickupHitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006C7130, void, ResetFeetAngle, (SlugKickupHitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006C7140, void, MoveToNeutralStep, (SlugKickupHitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006C7430, bool, Finished, (SlugKickupHitBehaviour * __this, LegacyTimelineSequence * seq));
IL2CPP_REGISTER_METHOD(0x006C7490, bool, BounceRoutine, (SlugKickupHitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006C7DB0, BehaviourStatus__Enum, OnExecuteTask, (SlugKickupHitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x006C7FD0, void, ChangeState, (SlugKickupHitBehaviour * __this, SlugKickupHitBehaviour_KickupState__Enum state));
IL2CPP_REGISTER_METHOD(0x006C8440, void, OnExitTask, (SlugKickupHitBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (SlugKickupHitBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x006C8710, void, __ctor, (SlugKickupHitBehaviour * __this));
}
