using namespace app;

namespace app::methods::CameraFovOffsetMixer {
IL2CPP_REGISTER_METHOD(0x01688BB0, int32_t, get_InfluencersCount, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01688C60, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01688D40, void, Register, (IFieldOfViewInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x01688E60, void, Unregister, (IFieldOfViewInfluencer * influencer));
IL2CPP_REGISTER_METHOD(0x01688F20, CameraFovOffsetMixer_OffsetResult, GetOffset, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01689460, void, __cctor, (MethodInfo * method));
}
