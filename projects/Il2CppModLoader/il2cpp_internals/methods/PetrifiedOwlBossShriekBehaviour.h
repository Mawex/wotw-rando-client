#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossShriekBehaviour {
IL2CPP_REGISTER_METHOD(0x0177DC50, void, CopyData, (PetrifiedOwlBossShriekBehaviour * __this, PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (PetrifiedOwlBossShriekBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (PetrifiedOwlBossShriekBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177DD50, void, OnEnter, (PetrifiedOwlBossShriekBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x017644B0, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossShriekBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0177E080, void, OnExit, (PetrifiedOwlBossShriekBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0177E260, void, OnShriekSpawnEvent, (PetrifiedOwlBossShriekBehaviour * __this));
IL2CPP_REGISTER_METHODINFO(0x047616F8, PetrifiedOwlBossShriekBehaviour_OnShriekSpawnEvent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0177E300, Enum__Array *, GetEntries, (PetrifiedOwlBossShriekBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177E3A0, Enum, Evaluate, (PetrifiedOwlBossShriekBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (PetrifiedOwlBossShriekBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x017657C0, void, __ctor, (PetrifiedOwlBossShriekBehaviour * __this));
}
