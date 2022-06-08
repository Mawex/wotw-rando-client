#include <interception_macros.h>

namespace app::methods::SpikeSlugDeathBehaviour {
IL2CPP_REGISTER_METHOD(0x011C70A0, void, OnEnterTask, (SpikeSlugDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C7410, void, OnEnterFalling, (SpikeSlugDeathBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C7510, void, OnEnterLand, (SpikeSlugDeathBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x011C7970, void, OnExitTask, (SpikeSlugDeathBehaviour * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x011C7B30, void, __ctor, (SpikeSlugDeathBehaviour * __this));
}
