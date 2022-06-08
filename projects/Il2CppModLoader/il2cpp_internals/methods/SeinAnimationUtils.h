#include <interception_macros.h>

namespace app::methods::SeinAnimationUtils {
IL2CPP_REGISTER_METHOD(0x00D84B90, void, Play, (String * name, Action * onStopPlaying, Func_1_Boolean_ * condition));
IL2CPP_REGISTER_METHOD(0x00D84CB0, ActiveAnimationHandle, Play, (MoonAnimation * animation, Action * onStopPlaying, Func_1_Boolean_ * condition, int32_t layer));
IL2CPP_REGISTER_METHOD(0x00D84E00, void, AddPostprocess, (AnimationPostprocess * postprocess, float blendInTime));
IL2CPP_REGISTER_METHOD(0x00D84F00, void, RemovePostprocess, (AnimationPostprocess * postprocess, float blendOutTime));
IL2CPP_REGISTER_METHOD(0x00D85000, void, SetParameter, (FloatAnimationParameter * animationParameter, float value));
IL2CPP_REGISTER_METHOD(0x00D85100, void, PlayLoop, (String * name, Func_1_Boolean_ * condition, Action * onStopPlaying));
}
