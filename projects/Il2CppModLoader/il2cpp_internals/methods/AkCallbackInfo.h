using namespace app;

namespace app::methods::AkCallbackInfo {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkCallbackInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026CFCB0, void *, getCPtr, (AkCallbackInfo * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkCallbackInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026CFD40, void, Finalize, (AkCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026CFDC0, void, Dispose, (AkCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026CFFD0, void *, get_pCookie, (AkCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026D00F0, uint64_t, get_gameObjID, (AkCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026D0210, void, __ctor, (AkCallbackInfo * __this));
}
