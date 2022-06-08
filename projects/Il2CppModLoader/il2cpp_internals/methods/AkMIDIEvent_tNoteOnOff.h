#include <interception_macros.h>

namespace app::methods::AkMIDIEvent_tNoteOnOff {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkMIDIEvent_tNoteOnOff * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026F4890, void *, getCPtr, (AkMIDIEvent_tNoteOnOff * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkMIDIEvent_tNoteOnOff * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026F4920, void, Finalize, (AkMIDIEvent_tNoteOnOff * __this));
IL2CPP_REGISTER_METHOD(0x026F49A0, void, Dispose, (AkMIDIEvent_tNoteOnOff * __this));
IL2CPP_REGISTER_METHOD(0x026F4BB0, void, set_byNote, (AkMIDIEvent_tNoteOnOff * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026F4CE0, uint8_t, get_byNote, (AkMIDIEvent_tNoteOnOff * __this));
IL2CPP_REGISTER_METHOD(0x026F4E00, void, set_byVelocity, (AkMIDIEvent_tNoteOnOff * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026F4F30, uint8_t, get_byVelocity, (AkMIDIEvent_tNoteOnOff * __this));
IL2CPP_REGISTER_METHOD(0x026F5050, void, __ctor, (AkMIDIEvent_tNoteOnOff * __this));
}
