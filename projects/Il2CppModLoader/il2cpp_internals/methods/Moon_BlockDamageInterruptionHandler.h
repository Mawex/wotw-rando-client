#include <interception_macros.h>

namespace app::methods::Moon::BlockDamageInterruptionHandler {
IL2CPP_REGISTER_METHOD(0x00CBB980, void, __ctor, (BlockDamageInterruptionHandler * __this));
IL2CPP_REGISTER_METHOD(0x00CBBB50, void, Reset, (BlockDamageInterruptionHandler * __this));
IL2CPP_REGISTER_METHOD(0x00CBBBC0, void, CacheSerializedComponents, (BlockDamageInterruptionHandler * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00CBBCA0, void, InitializeTimeline, (BlockDamageInterruptionHandler * __this, MoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x00CBC140, void, OnDamageBlockingStart, (BlockDamageInterruptionHandler * __this, DamageWeightMask__Enum damageWeightMask));
IL2CPP_REGISTER_METHOD(0x00CBC260, void, OnDamageBlockingEnd, (BlockDamageInterruptionHandler * __this, DamageWeightMask__Enum damageWeightMask));
IL2CPP_REGISTER_METHOD(0x00CBC380, bool, CanBeInterruptedBy, (BlockDamageInterruptionHandler * __this, DamageWeight__Enum weight));
IL2CPP_REGISTER_METHOD(0x00CBC3C0, bool, IsBlockingInterruption, (BlockDamageInterruptionHandler * __this, EntityDamageEvent * damageEvent, EntityReactionBehaviour_ReasonWhyReactionWontInterrupt * reason));
}
