#include <interception_macros.h>

namespace app::methods::MinerFallReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x014497D0, void, StartTimeline, (MinerFallReactionBehaviour * __this, MoonTimeline * timeline, Action * OnStop));
IL2CPP_REGISTER_METHOD(0x01449A40, void, ResetTimeline, (MinerFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01449CA0, void, EndBehaviour, (MinerFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01449CC0, void, OnInitializeTask, (MinerFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterTask, (MinerFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01449D90, BehaviourStatus__Enum, OnExecuteTask, (MinerFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01449DF0, void, OnExitTask, (MinerFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01449E00, void, __ctor, (MinerFallReactionBehaviour * __this));
}
