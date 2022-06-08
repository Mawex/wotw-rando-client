using namespace app;

namespace app::methods::SkipCutsceneController {
IL2CPP_REGISTER_METHOD(0x006C3090, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006C3110, void, RegisterCutsceneSkip, (SkipCutsceneController * __this, ISkipCutscene * skip));
IL2CPP_REGISTER_METHOD(0x006C32E0, void, UnregisterCutsceneSkip, (SkipCutsceneController * __this, ISkipCutscene * skip));
IL2CPP_REGISTER_METHOD(0x006C33A0, SceneManagerScene *, get_PrologueMaster, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHOD(0x006C3570, SceneManagerScene *, get_KuFlyAway, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHOD(0x006C36B0, bool, get_SkippingAvailable, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHOD(0x006C38D0, bool, get_HasValidSkip, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_BackingOutAvailable, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHOD(0x006C39D0, void, Awake, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHOD(0x006C3B70, void, OnDestroy, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHOD(0x006C3D50, void, OnGameReset, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHODINFO(0x04760AA8, SkipCutsceneController_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006C3D50, void, Cleanup, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHOD(0x006C3D80, void, SkipPrologue, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHOD(0x006C43E0, bool, ReadyToSkip, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHODINFO(0x04785D40, SkipCutsceneController_ReadyToSkip__MethodInfo);
IL2CPP_REGISTER_METHOD(0x006C4A40, void, SkipCutscene, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHOD(0x006C4E20, void, PrewarmSkip, (SkipCutsceneController * __this));
IL2CPP_REGISTER_METHOD(0x006C4F50, void, __ctor, (SkipCutsceneController * __this));
}
