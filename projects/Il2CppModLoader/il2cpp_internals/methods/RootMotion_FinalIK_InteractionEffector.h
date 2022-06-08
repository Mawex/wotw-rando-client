#include <interception_macros.h>

namespace app::methods::RootMotion::FinalIK::InteractionEffector {
IL2CPP_REGISTER_METHOD(0x002FC6D0, FullBodyBipedEffector__Enum, get_effectorType, (InteractionEffector * __this));
IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_effectorType, (InteractionEffector * __this, FullBodyBipedEffector__Enum value));
IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_isPaused, (InteractionEffector * __this));
IL2CPP_REGISTER_METHOD(0x007EA280, void, set_isPaused, (InteractionEffector * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB930, InteractionObject *, get_interactionObject, (InteractionEffector * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_interactionObject, (InteractionEffector * __this, InteractionObject * value));
IL2CPP_REGISTER_METHOD(0x02A07140, bool, get_inInteraction, (InteractionEffector * __this));
IL2CPP_REGISTER_METHOD(0x02A071E0, void, __ctor, (InteractionEffector * __this, FullBodyBipedEffector__Enum effectorType));
IL2CPP_REGISTER_METHOD(0x02A073F0, void, Initiate, (InteractionEffector * __this, InteractionSystem * interactionSystem));
IL2CPP_REGISTER_METHOD(0x02A074F0, void, StoreDefaults, (InteractionEffector * __this));
IL2CPP_REGISTER_METHOD(0x02A07730, bool, ResetToDefaults, (InteractionEffector * __this, float speed));
IL2CPP_REGISTER_METHOD(0x02A07D90, bool, Pause, (InteractionEffector * __this));
IL2CPP_REGISTER_METHOD(0x02A08120, bool, Resume, (InteractionEffector * __this));
IL2CPP_REGISTER_METHOD(0x02A08180, bool, Start, (InteractionEffector * __this, InteractionObject * interactionObject, String * tag, float fadeInTime, bool interrupt));
IL2CPP_REGISTER_METHOD(0x02A089E0, void, Update, (InteractionEffector * __this, Transform * root, float speed));
IL2CPP_REGISTER_METHOD(0x02A09720, float, get_progress, (InteractionEffector * __this));
IL2CPP_REGISTER_METHOD(0x02A09760, void, TriggerUntriggeredEvents, (InteractionEffector * __this, bool checkTime, bool * pickUp, bool * pause));
IL2CPP_REGISTER_METHOD(0x02A09B60, void, PickUp, (InteractionEffector * __this, Transform * root));
IL2CPP_REGISTER_METHOD(0x02A09E90, bool, Stop, (InteractionEffector * __this));
IL2CPP_REGISTER_METHOD(0x02A0A160, void, OnPostFBBIK, (InteractionEffector * __this));
}
