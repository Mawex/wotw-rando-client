using namespace app;

namespace app::methods::WeaponMasterIdle {
IL2CPP_REGISTER_METHOD(0x008E86A0, WeaponMasterEntity *, get_m_weaponMaster, (WeaponMasterIdle * __this));
IL2CPP_REGISTER_METHOD(0x008E8780, void, OnEnable, (WeaponMasterIdle * __this));
IL2CPP_REGISTER_METHOD(0x008E89F0, void, OnDisable, (WeaponMasterIdle * __this));
IL2CPP_REGISTER_METHOD(0x008E8C60, void, LeftTree, (WeaponMasterIdle * __this));
IL2CPP_REGISTER_METHODINFO(0x04795258, WeaponMasterIdle_LeftTree__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00420EE0, BehaviourStatus__Enum, OnExecuteTask, (WeaponMasterIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (WeaponMasterIdle * __this));
IL2CPP_REGISTER_METHOD(0x008E8C90, void, PlayTimeline, (WeaponMasterIdle * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x008E8C60, void, OnEnterTask, (WeaponMasterIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008E8EF0, void, OnExitTask, (WeaponMasterIdle * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x008E9130, MoonTimeline *, GetIdleTimeline, (WeaponMasterIdle * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (WeaponMasterIdle * __this));
}
