#include <interception_macros.h>

namespace app::methods::RootMotion::Demos::MechSpiderLeg {
IL2CPP_REGISTER_METHOD(0x02225500, bool, get_isStepping, (MechSpiderLeg * __this));
IL2CPP_REGISTER_METHOD(0x02225520, Vector3, get_position, (MechSpiderLeg * __this));
IL2CPP_REGISTER_METHOD(0x02225590, void, set_position, (MechSpiderLeg * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x022255E0, void, Start, (MechSpiderLeg * __this));
IL2CPP_REGISTER_METHOD(0x02225A20, Vector3, GetStepTarget, (MechSpiderLeg * __this, bool * stepFound, float focus, float distance));
IL2CPP_REGISTER_METHOD(0x022261B0, void, Update, (MechSpiderLeg * __this));
IL2CPP_REGISTER_METHOD(0x022266A0, IEnumerator *, Step, (MechSpiderLeg * __this, Vector3 stepStartPosition, Vector3 targetPosition));
IL2CPP_REGISTER_METHOD(0x02226820, void, __ctor, (MechSpiderLeg * __this));
}
