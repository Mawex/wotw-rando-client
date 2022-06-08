using namespace app;

namespace app::methods::AkExternalSourceInfo {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkExternalSourceInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026E46F0, void *, getCPtr, (AkExternalSourceInfo * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkExternalSourceInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026E4780, void, Finalize, (AkExternalSourceInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E4800, void, Dispose, (AkExternalSourceInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E4A10, void, __ctor, (AkExternalSourceInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E4B30, void, __ctor, (AkExternalSourceInfo * __this, void * in_pInMemory, uint32_t in_uiMemorySize, uint32_t in_iExternalSrcCookie, uint32_t in_idCodec));
IL2CPP_REGISTER_METHOD(0x026E4C90, void, __ctor, (AkExternalSourceInfo * __this, String * in_pszFileName, uint32_t in_iExternalSrcCookie, uint32_t in_idCodec));
IL2CPP_REGISTER_METHOD(0x026E4DF0, void, __ctor, (AkExternalSourceInfo * __this, uint32_t in_idFile, uint32_t in_iExternalSrcCookie, uint32_t in_idCodec));
IL2CPP_REGISTER_METHOD(0x026E4F40, void, Clear, (AkExternalSourceInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E4FE0, void, Clone, (AkExternalSourceInfo * __this, AkExternalSourceInfo * other));
IL2CPP_REGISTER_METHOD(0x026E5100, int32_t, GetSizeOf, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x026E5190, void, set_iExternalSrcCookie, (AkExternalSourceInfo * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E52C0, uint32_t, get_iExternalSrcCookie, (AkExternalSourceInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E53E0, void, set_idCodec, (AkExternalSourceInfo * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E5510, uint32_t, get_idCodec, (AkExternalSourceInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E5630, void, set_szFile, (AkExternalSourceInfo * __this, String * value));
IL2CPP_REGISTER_METHOD(0x026E56E0, String *, get_szFile, (AkExternalSourceInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E5830, void, set_pInMemory, (AkExternalSourceInfo * __this, void * value));
IL2CPP_REGISTER_METHOD(0x026E5960, void *, get_pInMemory, (AkExternalSourceInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E5A80, void, set_uiMemorySize, (AkExternalSourceInfo * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E5BB0, uint32_t, get_uiMemorySize, (AkExternalSourceInfo * __this));
IL2CPP_REGISTER_METHOD(0x026E5CD0, void, set_idFile, (AkExternalSourceInfo * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026E5E00, uint32_t, get_idFile, (AkExternalSourceInfo * __this));
}
