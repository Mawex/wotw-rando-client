#include <interception_macros.h>

namespace app::methods::PerspectiveRotationAdjustment {
IL2CPP_REGISTER_METHOD(0x00446960, float, get_Weight, (PerspectiveRotationAdjustment * __this));
IL2CPP_REGISTER_METHOD(0x00499420, Transform *, get_TargetTransform, (PerspectiveRotationAdjustment * __this));
IL2CPP_REGISTER_METHOD(0x004994E0, float, get_DefaultWeight, (PerspectiveRotationAdjustment * __this));
IL2CPP_REGISTER_METHOD(0x004994F0, void, Start, (PerspectiveRotationAdjustment * __this));
IL2CPP_REGISTER_METHOD(0x00499680, void, OnEnable, (PerspectiveRotationAdjustment * __this));
IL2CPP_REGISTER_METHOD(0x00499690, void, OnDisable, (PerspectiveRotationAdjustment * __this));
IL2CPP_REGISTER_METHOD(0x004996A0, void, OnDestroy, (PerspectiveRotationAdjustment * __this));
IL2CPP_REGISTER_METHOD(0x004997D0, void, Update, (PerspectiveRotationAdjustment * __this));
IL2CPP_REGISTER_METHOD(0x00499940, void, SetForward, (PerspectiveRotationAdjustment * __this, Vector3 forward));
IL2CPP_REGISTER_METHOD(0x00499D20, void, SetWeight, (PerspectiveRotationAdjustment * __this, float weight));
IL2CPP_REGISTER_METHOD(0x00499DF0, void, SetWeightOvertime, (PerspectiveRotationAdjustment * __this, float weight, float time));
IL2CPP_REGISTER_METHOD(0x00499ED0, void, __ctor, (PerspectiveRotationAdjustment * __this));
}
