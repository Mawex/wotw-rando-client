#include <interception_macros.h>

namespace app::methods::PauseGameAction {
IL2CPP_REGISTER_METHOD(0x004494A0, void, Perform, (PauseGameAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x004494B0, void, Stop, (PauseGameAction * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsPerforming, (PauseGameAction * __this));
IL2CPP_REGISTER_METHOD(0x004494C0, void, OnDisable, (PauseGameAction * __this));
IL2CPP_REGISTER_METHOD(0x004494D0, void, Serialize, (PauseGameAction * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00449500, void, ResumeGame, (PauseGameAction * __this));
IL2CPP_REGISTER_METHOD(0x004497B0, void, PauseGame, (PauseGameAction * __this));
IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Duration, (PauseGameAction * __this));
IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Duration, (PauseGameAction * __this, float value));
IL2CPP_REGISTER_METHOD(0x00449EC0, void, FixedUpdate, (PauseGameAction * __this));
IL2CPP_REGISTER_METHOD(0x00449F50, void, __ctor, (PauseGameAction * __this));
}
