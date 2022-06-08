#include <interception_macros.h>

namespace app::methods::SpikeSlugFallReactionBehaviour {
IL2CPP_REGISTER_METHOD(0x011CCD70, SpikeSlugLocomotion *, get_Locomotion, (SpikeSlugFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011CCE30, void, OnInitializeTask, (SpikeSlugFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011CCFD0, void, OnEnterTask, (SpikeSlugFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011CD150, void, OnExitTask, (SpikeSlugFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011CD200, BehaviourStatus__Enum, OnExecuteTask, (SpikeSlugFallReactionBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011CD390, void, OnEnterLand, (SpikeSlugFallReactionBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011CD460, void, __ctor, (SpikeSlugFallReactionBehaviour * __this));
}
