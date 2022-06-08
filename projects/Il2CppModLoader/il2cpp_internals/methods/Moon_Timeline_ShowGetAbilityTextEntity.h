using namespace app;

namespace app::methods::Moon::Timeline::ShowGetAbilityTextEntity {
IL2CPP_REGISTER_METHOD(0x00D01D90, bool, get_ShouldCheckForIfAbilityEquipped, (ShowGetAbilityTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D01DF0, bool, IsAbilityEquipped, (ShowGetAbilityTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D01EF0, void, OnStartPlayback, (ShowGetAbilityTextEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00D02060, void, OnUpdateEntity, (ShowGetAbilityTextEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00D02290, void, SynchronizeData, (ShowGetAbilityTextEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x00D022B0, void, Update, (ShowGetAbilityTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x00D026C0, void, __ctor, (ShowGetAbilityTextEntity * __this));
}
