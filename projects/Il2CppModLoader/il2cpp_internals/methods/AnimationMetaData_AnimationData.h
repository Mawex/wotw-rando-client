#include <interception_macros.h>

namespace app::methods::AnimationMetaData_AnimationData {
IL2CPP_REGISTER_METHOD(0x004FDAA0, Vector3, GetPositionAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time));
IL2CPP_REGISTER_METHOD(0x004FDB50, Vector3, GetPositionAtFrame, (app::AnimationMetaData_AnimationData * this_ptr, int32_t frame));
IL2CPP_REGISTER_METHOD(0x004FDBF0, Vector3, GetRawPositionAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time));
IL2CPP_REGISTER_METHOD(0x004FDCA0, Vector3, GetRawPositionAtFrame, (app::AnimationMetaData_AnimationData * this_ptr, int32_t frame));
IL2CPP_REGISTER_METHOD(0x004FDD40, Vector2, GetSpeedAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time));
IL2CPP_REGISTER_METHOD(0x004FDEA0, Vector2, GetRawSpeedAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time));
IL2CPP_REGISTER_METHOD(0x004FE000, Vector3, GetDeltaPositionAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time));
IL2CPP_REGISTER_METHOD(0x004FE240, Vector3, GetRawDeltaPositionAtTime, (app::AnimationMetaData_AnimationData * this_ptr, float time));
IL2CPP_REGISTER_METHOD(0x004FE480, void, __ctor, (app::AnimationMetaData_AnimationData * this_ptr));
}
