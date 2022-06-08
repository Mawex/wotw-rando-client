using namespace app;

namespace app::methods::KwolokBossTongueAttackBehaviour {
IL2CPP_REGISTER_METHOD(0x012F0DF0, Transform *, get_TongueRoot, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012F0EA0, Vector3, get_TongueRootPosition, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012F0FD0, Transform *, get_TongueTip, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012F1080, Vector3, get_TongueTipPosition, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x012E0B60, void, InitializeCancellableController, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012F11B0, void, OnEnter, (KwolokBossTongueAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012F1720, BehaviourStatus__Enum, OnExecute, (KwolokBossTongueAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012F1890, void, OnExit, (KwolokBossTongueAttackBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x012F1E10, float, ComputeUtility, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00965980, void, InitializeHitReactionController, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012F2340, void, ModifyAcceleration, (KwolokBossTongueAttackBehaviour * __this, float * acceleration, float * deceleration));
IL2CPP_REGISTER_METHODINFO(0x04730888, KwolokBossTongueAttackBehaviour_ModifyAcceleration__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012F2370, void, UpdateSounds, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012F2560, void, UpdateTongueHitEffect, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x012F2A20, void, OnTargetLockEvent, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04797AC8, KwolokBossTongueAttackBehaviour_OnTargetLockEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012F3500, void, OnMouthHeightLockEvent, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0470E818, KwolokBossTongueAttackBehaviour_OnMouthHeightLockEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnMaxExtenReached, (KwolokBossTongueAttackBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0473F7B0, KwolokBossTongueAttackBehaviour_OnMaxExtenReached__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012F3630, void, __ctor, (KwolokBossTongueAttackBehaviour * __this));
}
