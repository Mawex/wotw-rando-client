#include <interception_macros.h>

namespace app::methods::MixerSnapshot {
IL2CPP_REGISTER_METHOD(0x0132EB50, float, get_Weight, (MixerSnapshot * __this));
IL2CPP_REGISTER_METHOD(0x006515B0, MixerSnapshot_MixerSnapshotState__Enum, get_State, (MixerSnapshot * __this));
IL2CPP_REGISTER_METHOD(0x0132EBA0, void, FadeIn, (MixerSnapshot * __this));
IL2CPP_REGISTER_METHOD(0x0132ED40, void, FadeOut, (MixerSnapshot * __this));
IL2CPP_REGISTER_METHOD(0x0132ED90, void, UpdateMixerSnapshotState, (MixerSnapshot * __this, float timeDelta));
IL2CPP_REGISTER_METHOD(0x0132EE40, void, __ctor, (MixerSnapshot * __this));
}
