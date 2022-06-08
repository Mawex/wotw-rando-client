#include <interception_macros.h>

namespace app::methods::AkMarkerCallbackInfo {
IL2CPP_REGISTER_METHOD(0x026F88A0, void, __ctor, (AkMarkerCallbackInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026F8970, void *, getCPtr, (AkMarkerCallbackInfo * obj));
IL2CPP_REGISTER_METHOD(0x026F8A00, void, setCPtr, (AkMarkerCallbackInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026F8AC0, void, Finalize, (AkMarkerCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F8B60, void, Dispose, (AkMarkerCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F8D80, uint32_t, get_uIdentifier, (AkMarkerCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F8EA0, uint32_t, get_uPosition, (AkMarkerCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F8FC0, String *, get_strLabel, (AkMarkerCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F9110, void, __ctor, (AkMarkerCallbackInfo * __this));
}
