#include <interception_macros.h>

namespace app::methods::AkAuxSendArray {
IL2CPP_REGISTER_METHOD(0x026CA1A0, void, __ctor, (AkAuxSendArray * __this));
IL2CPP_REGISTER_METHOD(0x026CA3D0, AkAuxSendValue *, get_Item, (AkAuxSendArray * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047714F0, AkAuxSendArray_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026CA560, bool, get_isFull, (AkAuxSendArray * __this));
IL2CPP_REGISTER_METHOD(0x026CA5F0, void, Dispose, (AkAuxSendArray * __this));
IL2CPP_REGISTER_METHOD(0x026CA6B0, void, Finalize, (AkAuxSendArray * __this));
IL2CPP_REGISTER_METHOD(0x026CA740, void, Reset, (AkAuxSendArray * __this));
IL2CPP_REGISTER_METHOD(0x026CA7E0, bool, Add, (AkAuxSendArray * __this, GameObject * in_listenerGameObj, uint32_t in_AuxBusID, float in_fValue));
IL2CPP_REGISTER_METHOD(0x026CA940, bool, Add, (AkAuxSendArray * __this, uint32_t in_AuxBusID, float in_fValue));
IL2CPP_REGISTER_METHOD(0x026CAA60, bool, Contains, (AkAuxSendArray * __this, GameObject * in_listenerGameObj, uint32_t in_AuxBusID));
IL2CPP_REGISTER_METHOD(0x026CAB90, bool, Contains, (AkAuxSendArray * __this, uint32_t in_AuxBusID));
IL2CPP_REGISTER_METHOD(0x026CAC80, AKRESULT__Enum, SetValues, (AkAuxSendArray * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x026CAD70, AKRESULT__Enum, GetValues, (AkAuxSendArray * __this, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x002FB930, void *, GetBuffer, (AkAuxSendArray * __this));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, Count, (AkAuxSendArray * __this));
IL2CPP_REGISTER_METHOD(0x026CAE90, void *, GetObjectPtr, (AkAuxSendArray * __this, int32_t index));
}
