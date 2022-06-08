#include <interception_macros.h>

namespace app::methods::AnimationMetaData_AnimationData {
IL2CPP_REGISTER_METHOD(0x004FDAA0, Vector3, GetPositionAtTime, (AnimationMetaData_AnimationData * __this, float time));
IL2CPP_REGISTER_METHOD(0x004FDB50, Vector3, GetPositionAtFrame, (AnimationMetaData_AnimationData * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x004FDBF0, Vector3, GetRawPositionAtTime, (AnimationMetaData_AnimationData * __this, float time));
IL2CPP_REGISTER_METHOD(0x004FDCA0, Vector3, GetRawPositionAtFrame, (AnimationMetaData_AnimationData * __this, int32_t frame));
IL2CPP_REGISTER_METHOD(0x004FDD40, Vector2, GetSpeedAtTime, (AnimationMetaData_AnimationData * __this, float time));
IL2CPP_REGISTER_METHOD(0x004FDEA0, Vector2, GetRawSpeedAtTime, (AnimationMetaData_AnimationData * __this, float time));
IL2CPP_REGISTER_METHOD(0x004FE000, Vector3, GetDeltaPositionAtTime, (AnimationMetaData_AnimationData * __this, float time));
IL2CPP_REGISTER_METHOD(0x004FE240, Vector3, GetRawDeltaPositionAtTime, (AnimationMetaData_AnimationData * __this, float time));
IL2CPP_REGISTER_METHOD(0x004FE480, void, __ctor, (AnimationMetaData_AnimationData * __this));
}
