#include <interception_macros.h>

namespace app::methods::Moon::Vitals_DamageProcessHelper {
IL2CPP_REGISTER_METHOD(0x01198760, void, CountDamagesPerID, (Vitals_DamageProcessHelper * __this, DamageReceiver__Array * receivers));
IL2CPP_REGISTER_METHOD(0x01198B30, void, AllocateBucketRanges, (Vitals_DamageProcessHelper * __this));
IL2CPP_REGISTER_METHOD(0x01198F10, void, GatherDamagesPerID, (Vitals_DamageProcessHelper * __this, DamageReceiver__Array * receivers));
IL2CPP_REGISTER_METHOD(0x011992D0, void, ProcessDamagesPerIDSorted, (Vitals_DamageProcessHelper * __this, HashSet_1_System_Int32_ * processedIDs));
IL2CPP_REGISTER_METHOD(0x011995D0, void, ProcessAllDamageSorted, (Vitals_DamageProcessHelper * __this, DamageReceiver__Array * receivers, HashSet_1_System_Int32_ * processedIDs));
IL2CPP_REGISTER_METHOD(0x01199630, void, __ctor, (Vitals_DamageProcessHelper * __this));
}
