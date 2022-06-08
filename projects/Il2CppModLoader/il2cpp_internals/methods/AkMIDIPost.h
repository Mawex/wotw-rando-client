#include <interception_macros.h>

namespace app::methods::AkMIDIPost {
IL2CPP_REGISTER_METHOD(0x026F76A0, void, __ctor, (AkMIDIPost * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026F7760, void *, getCPtr, (AkMIDIPost * obj));
IL2CPP_REGISTER_METHOD(0x026F77F0, void, setCPtr, (AkMIDIPost * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026F78C0, void, Finalize, (AkMIDIPost * __this));
IL2CPP_REGISTER_METHOD(0x026F7960, void, Dispose, (AkMIDIPost * __this));
IL2CPP_REGISTER_METHOD(0x026F7B80, void, set_uOffset, (AkMIDIPost * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x026F7CB0, uint32_t, get_uOffset, (AkMIDIPost * __this));
IL2CPP_REGISTER_METHOD(0x026F7DD0, AKRESULT__Enum, PostOnEvent, (AkMIDIPost * __this, uint32_t in_eventID, GameObject * in_gameObjectID, uint32_t in_uNumPosts));
IL2CPP_REGISTER_METHOD(0x026F7EE0, void, Clone, (AkMIDIPost * __this, AkMIDIPost * other));
IL2CPP_REGISTER_METHOD(0x026F8000, int32_t, GetSizeOf, ());
IL2CPP_REGISTER_METHOD(0x026F8090, void, __ctor, (AkMIDIPost * __this));
}
