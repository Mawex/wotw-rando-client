#include <interception_macros.h>

namespace app::methods::AkSegmentInfo {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkSegmentInfo * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x018965A0, void *, getCPtr, (AkSegmentInfo * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkSegmentInfo * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x01896630, void, Finalize, (AkSegmentInfo * __this));
IL2CPP_REGISTER_METHOD(0x018966B0, void, Dispose, (AkSegmentInfo * __this));
IL2CPP_REGISTER_METHOD(0x018968C0, void, set_iCurrentPosition, (AkSegmentInfo * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x018969F0, int32_t, get_iCurrentPosition, (AkSegmentInfo * __this));
IL2CPP_REGISTER_METHOD(0x01896B10, void, set_iPreEntryDuration, (AkSegmentInfo * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01896C40, int32_t, get_iPreEntryDuration, (AkSegmentInfo * __this));
IL2CPP_REGISTER_METHOD(0x01896D60, void, set_iActiveDuration, (AkSegmentInfo * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01896E90, int32_t, get_iActiveDuration, (AkSegmentInfo * __this));
IL2CPP_REGISTER_METHOD(0x01896FB0, void, set_iPostExitDuration, (AkSegmentInfo * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x018970E0, int32_t, get_iPostExitDuration, (AkSegmentInfo * __this));
IL2CPP_REGISTER_METHOD(0x01897200, void, set_iRemainingLookAheadTime, (AkSegmentInfo * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01897330, int32_t, get_iRemainingLookAheadTime, (AkSegmentInfo * __this));
IL2CPP_REGISTER_METHOD(0x01897450, void, set_fBeatDuration, (AkSegmentInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01897580, float, get_fBeatDuration, (AkSegmentInfo * __this));
IL2CPP_REGISTER_METHOD(0x018976A0, void, set_fBarDuration, (AkSegmentInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x018977D0, float, get_fBarDuration, (AkSegmentInfo * __this));
IL2CPP_REGISTER_METHOD(0x018978F0, void, set_fGridDuration, (AkSegmentInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01897A20, float, get_fGridDuration, (AkSegmentInfo * __this));
IL2CPP_REGISTER_METHOD(0x01897B40, void, set_fGridOffset, (AkSegmentInfo * __this, float value));
IL2CPP_REGISTER_METHOD(0x01897C70, float, get_fGridOffset, (AkSegmentInfo * __this));
IL2CPP_REGISTER_METHOD(0x01897D90, void, __ctor, (AkSegmentInfo * __this));
}
