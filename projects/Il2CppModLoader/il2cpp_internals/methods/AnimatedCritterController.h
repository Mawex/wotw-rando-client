#include <interception_macros.h>

namespace app::methods::AnimatedCritterController {
IL2CPP_REGISTER_METHOD(0x004FAA70, AnimatedCritter *, get_CurrentCritter, (AnimatedCritterController * __this));
IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_CritterIndex, (AnimatedCritterController * __this));
IL2CPP_REGISTER_METHOD(0x004FAB10, void, set_CritterIndex, (AnimatedCritterController * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (AnimatedCritterController * __this));
IL2CPP_REGISTER_METHOD(0x004FABE0, void, Update, (AnimatedCritterController * __this));
IL2CPP_REGISTER_METHOD(0x004FAEA0, void, UpdateTriggerSize, (AnimatedCritterController * __this));
IL2CPP_REGISTER_METHOD(0x004FB9E0, void, CollectCritters, (AnimatedCritterController * __this));
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_InvalidateParentTimelineCache, (AnimatedCritterController * __this));
IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_InvalidateParentTimelineCache, (AnimatedCritterController * __this, bool value));
IL2CPP_REGISTER_METHOD(0x004FBAE0, void, __ctor, (AnimatedCritterController * __this));
}
