using namespace app;

namespace app::methods::TentacleDeath {
IL2CPP_REGISTER_METHOD(0x00CED840, void, OnCacheSerializedComponents, (TentacleDeath * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x00CED900, void, OnInitializeTask, (TentacleDeath * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Hide, (TentacleDeath * __this));
IL2CPP_REGISTER_METHODINFO(0x0477ABF0, TentacleDeath_Hide__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CEDB60, void, ModifyDeathKickbackForce, (TentacleDeath * __this, Damage * damage, float minBoost, float minMagntiude, float minUpDirection));
IL2CPP_REGISTER_METHOD(0x00CEDE40, void, OnEnterTask, (TentacleDeath * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CEE140, void, EndReaction, (TentacleDeath * __this));
IL2CPP_REGISTER_METHODINFO(0x04718D98, TentacleDeath_EndReaction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CEE190, BehaviourStatus__Enum, OnExecuteTask, (TentacleDeath * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CEE780, void, OnExitTask, (TentacleDeath * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00CEE7E0, void, __ctor, (TentacleDeath * __this));
}
