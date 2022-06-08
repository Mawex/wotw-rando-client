using namespace app;

namespace app::methods::CheatsHandler {
IL2CPP_REGISTER_METHOD(0x0131C6E0, bool, CanUseCheats, (CheatsHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x047716A0, CheatsHandler_CanUseCheats__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0131C7F0, bool, IsInsideRainbowZone, (CheatsHandler * __this));
IL2CPP_REGISTER_METHOD(0x0131C880, void, ChangeCharacterColor, (CheatsHandler * __this));
IL2CPP_REGISTER_METHOD(0x0131CAF0, void, MakeDashRainbow, (CheatsHandler * __this));
IL2CPP_REGISTER_METHOD(0x0131CB90, void, TeleportOri, (CheatsHandler * __this));
IL2CPP_REGISTER_METHOD(0x0131CE30, bool, CanActivateInfiniteDoubleJumps, (CheatsHandler * __this));
IL2CPP_REGISTER_METHOD(0x0131CF10, void, Awake, (CheatsHandler * __this));
IL2CPP_REGISTER_METHOD(0x0131E2C0, IEnumerator *, InitDebugMenu, (CheatsHandler * __this));
IL2CPP_REGISTER_METHOD(0x0131E400, void, OnDestroy, (CheatsHandler * __this));
IL2CPP_REGISTER_METHOD(0x0131E590, void, OnGameReset, (CheatsHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x04717BA0, CheatsHandler_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0131E670, void, Update, (CheatsHandler * __this));
IL2CPP_REGISTER_METHOD(0x0131EA70, void, ActivateDebug, (CheatsHandler * __this));
IL2CPP_REGISTER_METHOD(0x0131EB40, void, ActivateDebugMenu, (CheatsHandler * __this));
IL2CPP_REGISTER_METHODINFO(0x04794618, CheatsHandler_ActivateDebugMenu__MethodInfo);
IL2CPP_REGISTER_METHOD(0x012CBAC0, void, Serialize, (CheatsHandler * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0131EC00, void, __ctor, (CheatsHandler * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
