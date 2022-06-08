#include <interception_macros.h>

namespace app::methods::EntityCinematicTask {
IL2CPP_REGISTER_METHOD(0x002FB9B0, EntityCinematicData *, get_Data, (EntityCinematicTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Data, (EntityCinematicTask * __this, EntityCinematicData * value));
IL2CPP_REGISTER_METHOD(0x002FC6D0, BehaviourStatus__Enum, get_TaskStatus, (EntityCinematicTask * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_TaskStatus, (EntityCinematicTask * __this, BehaviourStatus__Enum value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, Nullable_1_Moon_BehaviourSystem_BehaviourStatus_, get_ForceReturnTaskStatus, (EntityCinematicTask * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_ForceReturnTaskStatus, (EntityCinematicTask * __this, Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ value));
IL2CPP_REGISTER_METHOD(0x00C8CFF0, void, OnEntityInitialization, (EntityCinematicTask * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitializeTask, (EntityCinematicTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C8D030, void, OnEnterTask, (EntityCinematicTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C8D3F0, BehaviourStatus__Enum, OnExecuteTask, (EntityCinematicTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C8D420, void, OnExitTask, (EntityCinematicTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C8D650, void, OnResetTask, (EntityCinematicTask * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00C8D6A0, void, __ctor, (EntityCinematicTask * __this));
}
