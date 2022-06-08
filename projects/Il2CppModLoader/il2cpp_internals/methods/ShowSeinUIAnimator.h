#include <interception_macros.h>

namespace app::methods::ShowSeinUIAnimator {
IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (ShowSeinUIAnimator * __this));
IL2CPP_REGISTER_METHOD(0x007373C0, void, SampleValue, (ShowSeinUIAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (ShowSeinUIAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Duration, (ShowSeinUIAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsLooping, (ShowSeinUIAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00737590, void, __ctor, (ShowSeinUIAnimator * __this));
}
