#include <interception_macros.h>

namespace app::methods::PetrifiedOwlBossSideScrapeBehaviour {
IL2CPP_REGISTER_METHOD(0x0177E440, void, CopyData, (PetrifiedOwlBossSideScrapeBehaviour * __this, PetrifiedOwlBossBaseBehaviour * other));
IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (PetrifiedOwlBossSideScrapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (PetrifiedOwlBossSideScrapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177E520, void, OnEnter, (PetrifiedOwlBossSideScrapeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x017644B0, BehaviourStatus__Enum, OnExecute, (PetrifiedOwlBossSideScrapeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01765790, void, OnExit, (PetrifiedOwlBossSideScrapeBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0177E640, Enum__Array *, GetEntries, (PetrifiedOwlBossSideScrapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x0177E6E0, Enum, Evaluate, (PetrifiedOwlBossSideScrapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (PetrifiedOwlBossSideScrapeBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x017657C0, void, __ctor, (PetrifiedOwlBossSideScrapeBehaviour * __this));
}
