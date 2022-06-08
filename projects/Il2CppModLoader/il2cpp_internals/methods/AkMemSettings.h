using namespace app;

namespace app::methods::AkMemSettings {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkMemSettings * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x01880BC0, void *, getCPtr, (AkMemSettings * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkMemSettings * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x01880C80, void, Finalize, (AkMemSettings * __this));
IL2CPP_REGISTER_METHOD(0x01880D00, void, Dispose, (AkMemSettings * __this));
IL2CPP_REGISTER_METHOD(0x01880F10, void, __ctor, (AkMemSettings * __this));
IL2CPP_REGISTER_METHOD(0x01881030, void, set_uMaxNumPools, (AkMemSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x01881160, uint32_t, get_uMaxNumPools, (AkMemSettings * __this));
IL2CPP_REGISTER_METHOD(0x01881280, void, set_uDebugFlags, (AkMemSettings * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x018813B0, uint32_t, get_uDebugFlags, (AkMemSettings * __this));
}
