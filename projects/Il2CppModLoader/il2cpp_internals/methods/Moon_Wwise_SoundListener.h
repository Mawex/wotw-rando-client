#include <interception_macros.h>

namespace app::methods::Moon::Wwise::SoundListener {
IL2CPP_REGISTER_METHOD(0x010790F0, Vector3, get_PositionOffset, (SoundListener * __this));
IL2CPP_REGISTER_METHOD(0x0270CB90, void, Reregister, (SoundListener * __this));
IL2CPP_REGISTER_METHOD(0x0270CC90, Vector3, get_Position, (SoundListener * __this));
IL2CPP_REGISTER_METHOD(0x0270CDF0, void, OnEnable, (SoundListener * __this));
IL2CPP_REGISTER_METHOD(0x0270CF60, void, ResetTracking, ());
IL2CPP_REGISTER_METHOD(0x0270D060, void, OnDrawGizmos, (SoundListener * __this));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (SoundListener * __this));
}
