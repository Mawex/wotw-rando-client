#include <interception_macros.h>

namespace app::methods::AkAuxSendValue {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkAuxSendValue * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026CAFE0, void *, getCPtr, (AkAuxSendValue * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkAuxSendValue * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026CB070, void, Finalize, (AkAuxSendValue * __this));
IL2CPP_REGISTER_METHOD(0x026CB0F0, void, Dispose, (AkAuxSendValue * __this));
IL2CPP_REGISTER_METHOD(0x026CB300, void, set_listenerID, (AkAuxSendValue * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x026CB430, uint64_t, get_listenerID, (AkAuxSendValue * __this));
IL2CPP_REGISTER_METHOD(0x026CB550, void, set_auxBusID, (AkAuxSendValue * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026CB680, uint32_t, get_auxBusID, (AkAuxSendValue * __this));
IL2CPP_REGISTER_METHOD(0x026CB7A0, void, set_fControlValue, (AkAuxSendValue * __this, float value));
IL2CPP_REGISTER_METHOD(0x026CB8D0, float, get_fControlValue, (AkAuxSendValue * __this));
IL2CPP_REGISTER_METHOD(0x026CB9F0, void, Set, (AkAuxSendValue * __this, GameObject * listener, uint32_t id, float value));
IL2CPP_REGISTER_METHOD(0x026CBB00, bool, IsSame, (AkAuxSendValue * __this, GameObject * listener, uint32_t id));
IL2CPP_REGISTER_METHOD(0x026CBBF0, int32_t, GetSizeOf, ());
}
