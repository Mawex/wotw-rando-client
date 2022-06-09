#include <interception_macros.h>

namespace app::methods::CutsceneTransition {
IL2CPP_REGISTER_METHOD(0x00DBF130, void, Awake, (app::CutsceneTransition * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::CutsceneTransition * this_ptr));
IL2CPP_REGISTER_METHOD(0x00DBF1D0, void, OnDestroy, (app::CutsceneTransition * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9B0, CutsceneState *, get_ParentState, (app::CutsceneTransition * this_ptr));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (app::CutsceneTransition * this_ptr));
}
