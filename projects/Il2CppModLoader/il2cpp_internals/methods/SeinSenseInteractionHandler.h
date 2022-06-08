using namespace app;

namespace app::methods::SeinSenseInteractionHandler {
IL2CPP_REGISTER_METHOD(0x005D9710, void, Register, (ISenseInteractable * senseInteractable));
IL2CPP_REGISTER_METHOD(0x005D9840, void, Unregister, (ISenseInteractable * senseInteractable));
IL2CPP_REGISTER_METHOD(0x005D9920, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x005D99F0, void, Update, (SeinSenseInteractionHandler * __this));
IL2CPP_REGISTER_METHOD(0x005D9C10, void, CheckInteractions, (SeinSenseInteractionHandler * __this));
IL2CPP_REGISTER_METHOD(0x005DA070, void, __ctor, (SeinSenseInteractionHandler * __this));
IL2CPP_REGISTER_METHOD(0x005DA080, void, __cctor, (MethodInfo * method));
}
