#include <interception_macros.h>

namespace app::methods::AkMIDIEventCallbackInfo {
IL2CPP_REGISTER_METHOD(0x026F60E0, void, __ctor, (AkMIDIEventCallbackInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026F61B0, void *, getCPtr, (AkMIDIEventCallbackInfo * obj));
IL2CPP_REGISTER_METHOD(0x026F6240, void, setCPtr, (AkMIDIEventCallbackInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026F6300, void, Finalize, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F63A0, void, Dispose, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F65C0, uint8_t, get_byChan, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F66E0, uint8_t, get_byParam1, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F6800, uint8_t, get_byParam2, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F6920, AkMIDIEventTypes__Enum, get_byType, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F6A40, uint8_t, get_byOnOffNote, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F6B60, uint8_t, get_byVelocity, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F6C80, AkMIDICcTypes__Enum, get_byCc, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F6DA0, uint8_t, get_byCcValue, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F6EC0, uint8_t, get_byValueLsb, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F6FE0, uint8_t, get_byValueMsb, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F7100, uint8_t, get_byAftertouchNote, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F7220, uint8_t, get_byNoteAftertouchValue, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F7340, uint8_t, get_byChanAftertouchValue, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F7460, uint8_t, get_byProgramNum, (AkMIDIEventCallbackInfo * __this));
IL2CPP_REGISTER_METHOD(0x026F7580, void, __ctor, (AkMIDIEventCallbackInfo * __this));
}
