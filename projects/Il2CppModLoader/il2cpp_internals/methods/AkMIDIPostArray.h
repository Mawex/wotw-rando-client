#include <interception_macros.h>

namespace app::methods::AkMIDIPostArray {
IL2CPP_REGISTER_METHOD(0x026F81B0, void, __ctor, (AkMIDIPostArray * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x026F82A0, AkMIDIPost *, get_Item, (AkMIDIPostArray * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x04725668, AkMIDIPostArray_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026F8440, void, set_Item, (AkMIDIPostArray * __this, int32_t index, AkMIDIPost * value));
IL2CPP_REGISTER_METHODINFO(0x0475B8E8, AkMIDIPostArray_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x026F8550, void, Finalize, (AkMIDIPostArray * __this));
IL2CPP_REGISTER_METHOD(0x026F8650, void, PostOnEvent, (AkMIDIPostArray * __this, uint32_t in_eventID, GameObject * gameObject));
IL2CPP_REGISTER_METHOD(0x026F8750, void, PostOnEvent, (AkMIDIPostArray * __this, uint32_t in_eventID, GameObject * gameObject, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x0477F7F8, AkMIDIPostArray_PostOnEvent_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB930, void *, GetBuffer, (AkMIDIPostArray * __this));
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, Count, (AkMIDIPostArray * __this));
IL2CPP_REGISTER_METHOD(0x026F8890, void *, GetObjectPtr, (AkMIDIPostArray * __this, int32_t index));
}
