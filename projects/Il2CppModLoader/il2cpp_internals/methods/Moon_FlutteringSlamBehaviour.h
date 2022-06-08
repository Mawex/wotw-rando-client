#include <interception_macros.h>

namespace app::methods::Moon::FlutteringSlamBehaviour {
IL2CPP_REGISTER_METHOD(0x014843E0, void, OnEntityInitialized, (FlutteringSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01484740, void, OnEnter, (FlutteringSlamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01484780, BehaviourStatus__Enum, OnExecute, (FlutteringSlamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01484840, void, OnExit, (FlutteringSlamBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01484950, void, PlayTimeline, (FlutteringSlamBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01484A50, void, ResetTimeline, (FlutteringSlamBehaviour * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01484840, void, Stop, (FlutteringSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01484C70, void, SpawnSlamChargeEffect, (FlutteringSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01484DB0, void, OnCollidedWithGround, (FlutteringSlamBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01484F00, void, __ctor, (FlutteringSlamBehaviour * __this));
}
