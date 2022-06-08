#include <interception_macros.h>

namespace app::methods::FieldOfViewOffsetAnimator {
IL2CPP_REGISTER_METHOD(0x01255970, void, OnUpdateEntity, (FieldOfViewOffsetAnimator * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01255A00, void, OnStartPlayback, (FieldOfViewOffsetAnimator * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x01255AC0, void, OnStopPlayback, (FieldOfViewOffsetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01255AC0, void, OnDisable, (FieldOfViewOffsetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01255AD0, void, UpdateWithTime, (FieldOfViewOffsetAnimator * __this, float time));
IL2CPP_REGISTER_METHOD(0x01255B50, bool, get_FOVInfluencerIsValid, (FieldOfViewOffsetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01255C00, float, get_FOVInfluencerTargetZ, (FieldOfViewOffsetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FC020, float, get_FOVInfluencerWeight, (FieldOfViewOffsetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x003FC030, void, set_FOVInfluencerWeight, (FieldOfViewOffsetAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B32900, float, get_FOVInfluencerOffset, (FieldOfViewOffsetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01255D30, void, OnStartWhenPlaybackOrPreview, (FieldOfViewOffsetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01255DD0, void, OnStopWhenPlaybackOrPreview, (FieldOfViewOffsetAnimator * __this));
IL2CPP_REGISTER_METHOD(0x01255E70, void, __ctor, (FieldOfViewOffsetAnimator * __this));
}
