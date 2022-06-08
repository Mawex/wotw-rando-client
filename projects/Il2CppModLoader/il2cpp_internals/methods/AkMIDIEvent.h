#include <interception_macros.h>

namespace app::methods::AkMIDIEvent {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkMIDIEvent * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026EEE00, void *, getCPtr, (AkMIDIEvent * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkMIDIEvent * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026EEE90, void, Finalize, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026EEF10, void, Dispose, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026EF120, void, set_byChan, (AkMIDIEvent * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026EF250, uint8_t, get_byChan, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026EF370, void, set_Gen, (AkMIDIEvent * __this, AkMIDIEvent_tGen * value));
IL2CPP_REGISTER_METHOD(0x026EF500, AkMIDIEvent_tGen *, get_Gen, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026EF710, void, set_Cc, (AkMIDIEvent * __this, AkMIDIEvent_tCc * value));
IL2CPP_REGISTER_METHOD(0x026EF8A0, AkMIDIEvent_tCc *, get_Cc, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026EFAB0, void, set_NoteOnOff, (AkMIDIEvent * __this, AkMIDIEvent_tNoteOnOff * value));
IL2CPP_REGISTER_METHOD(0x026EFC40, AkMIDIEvent_tNoteOnOff *, get_NoteOnOff, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026EFE50, void, set_PitchBend, (AkMIDIEvent * __this, AkMIDIEvent_tPitchBend * value));
IL2CPP_REGISTER_METHOD(0x026EFFE0, AkMIDIEvent_tPitchBend *, get_PitchBend, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F01F0, void, set_NoteAftertouch, (AkMIDIEvent * __this, AkMIDIEvent_tNoteAftertouch * value));
IL2CPP_REGISTER_METHOD(0x026F0380, AkMIDIEvent_tNoteAftertouch *, get_NoteAftertouch, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F0590, void, set_ChanAftertouch, (AkMIDIEvent * __this, AkMIDIEvent_tChanAftertouch * value));
IL2CPP_REGISTER_METHOD(0x026F0720, AkMIDIEvent_tChanAftertouch *, get_ChanAftertouch, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F0930, void, set_ProgramChange, (AkMIDIEvent * __this, AkMIDIEvent_tProgramChange * value));
IL2CPP_REGISTER_METHOD(0x026F0AC0, AkMIDIEvent_tProgramChange *, get_ProgramChange, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F0CD0, void, set_byType, (AkMIDIEvent * __this, AkMIDIEventTypes__Enum value));
IL2CPP_REGISTER_METHOD(0x026F0E00, AkMIDIEventTypes__Enum, get_byType, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F0F20, void, set_byOnOffNote, (AkMIDIEvent * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026F1050, uint8_t, get_byOnOffNote, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F1170, void, set_byVelocity, (AkMIDIEvent * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026F12A0, uint8_t, get_byVelocity, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F13C0, void, set_byCc, (AkMIDIEvent * __this, AkMIDICcTypes__Enum value));
IL2CPP_REGISTER_METHOD(0x026F14F0, AkMIDICcTypes__Enum, get_byCc, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F1610, void, set_byCcValue, (AkMIDIEvent * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026F1740, uint8_t, get_byCcValue, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F1860, void, set_byValueLsb, (AkMIDIEvent * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026F1990, uint8_t, get_byValueLsb, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F1AB0, void, set_byValueMsb, (AkMIDIEvent * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026F1BE0, uint8_t, get_byValueMsb, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F1D00, void, set_byAftertouchNote, (AkMIDIEvent * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026F1E30, uint8_t, get_byAftertouchNote, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F1F50, void, set_byNoteAftertouchValue, (AkMIDIEvent * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026F2080, uint8_t, get_byNoteAftertouchValue, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F21A0, void, set_byChanAftertouchValue, (AkMIDIEvent * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026F22D0, uint8_t, get_byChanAftertouchValue, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F23F0, void, set_byProgramNum, (AkMIDIEvent * __this, uint8_t value));
IL2CPP_REGISTER_METHOD(0x026F2520, uint8_t, get_byProgramNum, (AkMIDIEvent * __this));
IL2CPP_REGISTER_METHOD(0x026F2640, void, __ctor, (AkMIDIEvent * __this));
}
