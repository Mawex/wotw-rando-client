#include <interception_macros.h>

namespace app::methods::EntityCinematicData {
IL2CPP_REGISTER_METHOD(0x002FB950, MoonAnimation *, get_Animation, (EntityCinematicData * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Animation, (EntityCinematicData * __this, MoonAnimation * value));
IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Scheduled, (EntityCinematicData * __this));
IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_Scheduled, (EntityCinematicData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00C8CD40, bool, get_IsActive, (EntityCinematicData * __this));
IL2CPP_REGISTER_METHOD(0x00C8CE20, void, ScheduleAnimation, (EntityCinematicData * __this, MoonAnimation * animation));
IL2CPP_REGISTER_METHOD(0x00C8CE30, void, Play, (EntityCinematicData * __this, MoonAnimator * animator, MoonAnimation * animation));
IL2CPP_REGISTER_METHOD(0x00C8CE40, void, Play, (EntityCinematicData * __this, MoonAnimator * animator));
IL2CPP_REGISTER_METHOD(0x00C8CF80, void, Stop, (EntityCinematicData * __this));
IL2CPP_REGISTER_METHOD(0x00C8CFB0, void, Clear, (EntityCinematicData * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (EntityCinematicData * __this));
}
