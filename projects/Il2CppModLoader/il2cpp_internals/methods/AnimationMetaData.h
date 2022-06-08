using namespace app;

namespace app::methods::AnimationMetaData {
IL2CPP_REGISTER_METHOD(0x004FCA50, int32_t, get_FrameCount, (AnimationMetaData * __this));
IL2CPP_REGISTER_METHOD(0x004FCA60, void, set_FrameCount, (AnimationMetaData * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x004FCA70, void, Mirror, (AnimationMetaData * __this));
IL2CPP_REGISTER_METHOD(0x004FCEE0, AnimationMetaData_AnimationData *, FindData, (AnimationMetaData * __this, String * name));
IL2CPP_REGISTER_METHOD(0x004FD130, void, Process, (AnimationMetaData * __this, GameObject * model));
IL2CPP_REGISTER_METHOD(0x004FD740, void, __ctor, (AnimationMetaData * __this));
}
