#include <interception_macros.h>

namespace app::methods::Moon::FlutteringTakeOffBehaviour {
IL2CPP_REGISTER_METHOD(0x014862D0, void, OnEntityInitialized, (FlutteringTakeOffBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01486BB0, void, OnEnter, (FlutteringTakeOffBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01486E20, BehaviourStatus__Enum, OnExecute, (FlutteringTakeOffBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01486EE0, void, OnExit, (FlutteringTakeOffBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01487070, void, PlayTimeline, (FlutteringTakeOffBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x014870A0, void, ResetTimeline, (FlutteringTakeOffBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x014872C0, float, GetLookDirection, (FlutteringTakeOffBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014873A0, float, GetDirectionToTarget, (FlutteringTakeOffBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014874C0, void, SpawnTakeOffSlamEffect, (FlutteringTakeOffBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x0475E210, FlutteringTakeOffBehaviour_SpawnTakeOffSlamEffect__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01487600, void, OnTurnFlipEvent, (FlutteringTakeOffBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x04798D40, FlutteringTakeOffBehaviour_OnTurnFlipEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x014876E0, void, Stop, (FlutteringTakeOffBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x014877F0, void, __ctor, (FlutteringTakeOffBehaviour * __this));
}
