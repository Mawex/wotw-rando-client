#include <interception_macros.h>

namespace app::methods::Core::Ambience_Layer {
IL2CPP_REGISTER_METHOD(0x011F7960, int32_t, Sort, (Ambience_Layer * layerA, Ambience_Layer * layerB));
IL2CPP_REGISTER_METHODINFO(0x0477CA38, Ambience_Layer_Sort__MethodInfo);
IL2CPP_REGISTER_METHOD(0x011F79A0, void, __ctor, (Ambience_Layer * __this, SoundProvider * soundProvider, float fadeInDuration, float fadeOutDuration, int32_t priority, AmbienceZone * ambienceZone, AkCurveInterpolation__Enum fadeType));
IL2CPP_REGISTER_METHOD(0x011F7C20, void, Enter, (Ambience_Layer * __this));
IL2CPP_REGISTER_METHOD(0x011F7E70, void, Exit, (Ambience_Layer * __this));
}
