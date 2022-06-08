#include <interception_macros.h>

namespace app::methods::AnimatorDriver {
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_IsPlaying, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00504D90, void, set_IsPlaying, (AnimatorDriver * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00504E40, float, get_Duration, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00504E60, bool, get_IsReversed, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00504E70, float, get_CurrentTime, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00504E80, void, set_CurrentTime, (AnimatorDriver * __this, float value));
IL2CPP_REGISTER_METHOD(0x00504E90, float, get_NormalizedCurrentTime, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00504ED0, void, Restart, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00504F70, void, RestartForward, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00504F90, void, RestartBackwards, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00504FB0, void, Stop, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00505130, void, StopDontSample, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00505280, void, Pause, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00505290, void, Resume, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x005052A0, void, Reverse, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x005052C0, void, SetForward, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00505380, void, SetBackwards, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00505440, void, ContinueForward, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00505470, void, ContinueBackwards, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x005054A0, void, GoToStart, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x005054E0, void, GoToEnd, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00505530, void, UpdateTowards, (AnimatorDriver * __this, float time, float deltaTime));
IL2CPP_REGISTER_METHOD(0x005056A0, void, FixedUpdate, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00505860, void, OnPoolSpawned, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x00505870, void, Sample, (AnimatorDriver * __this));
IL2CPP_REGISTER_METHOD(0x005058D0, void, __ctor, (AnimatorDriver * __this));
}
