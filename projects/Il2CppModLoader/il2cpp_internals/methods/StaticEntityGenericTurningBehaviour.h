#include <interception_macros.h>

namespace app::methods::StaticEntityGenericTurningBehaviour {
IL2CPP_REGISTER_METHOD(0x003FDD20, float, get_TargetLookDirectionX, (StaticEntityGenericTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x003FDD30, void, set_TargetLookDirectionX, (StaticEntityGenericTurningBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x003FD740, float, get_CurrentTurningDirection, (StaticEntityGenericTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009B65C0, void, OnInitializeTask, (StaticEntityGenericTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B6710, bool, get_IsPlaying, (StaticEntityGenericTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009B67F0, void, OnEnterTask, (StaticEntityGenericTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B6A00, void, PlayAnimation, (StaticEntityGenericTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x009B6C80, void, TurningFinished, (StaticEntityGenericTurningBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04776830, StaticEntityGenericTurningBehaviour_TurningFinished__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008D2CA0, BehaviourStatus__Enum, OnExecuteTask, (StaticEntityGenericTurningBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x009B6E80, bool, ShouldEndBehaviour, (StaticEntityGenericTurningBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x005B3EC0, void, __ctor, (StaticEntityGenericTurningBehaviour * __this));
}
