#include <interception_macros.h>

namespace app::methods::CutsceneState {
IL2CPP_REGISTER_METHOD(0x00DBECE0, void, OnUpdate, (CutsceneState * __this));
IL2CPP_REGISTER_METHOD(0x00DBEE50, void, RegisterTransition, (CutsceneState * __this, CutsceneTransition * transition));
IL2CPP_REGISTER_METHOD(0x00DBEF00, void, UnregisterTransition, (CutsceneState * __this, CutsceneTransition * transition));
IL2CPP_REGISTER_METHOD(0x00DBEFA0, void, __ctor, (CutsceneState * __this));
}
