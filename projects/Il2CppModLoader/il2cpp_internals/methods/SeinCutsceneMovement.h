#include <interception_macros.h>

namespace app::methods::SeinCutsceneMovement {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (SeinCutsceneMovement * __this));
IL2CPP_REGISTER_METHOD(0x005D06C0, PlatformMovement *, get_PlatformMovement, (SeinCutsceneMovement * __this));
IL2CPP_REGISTER_METHOD(0x006E3D20, void, FixedUpdate, (SeinCutsceneMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (SeinCutsceneMovement * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (SeinCutsceneMovement * __this));
IL2CPP_REGISTER_METHOD(0x005C9550, void, __ctor, (SeinCutsceneMovement * __this));
}
