using namespace app;

namespace app::methods::GhostAnimationData {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_AnimationName, (GhostAnimationData * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GhostAnimationData * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (GhostAnimationData * __this, String * animationName));
IL2CPP_REGISTER_METHOD(0x008F2640, void, Save, (GhostAnimationData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x008F2670, void, Load, (GhostAnimationData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x00E13080, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostAnimationData * __this));
IL2CPP_REGISTER_METHOD(0x00E13090, int32_t, GetDataSize, (GhostAnimationData * __this));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Executed, (GhostAnimationData * __this));
IL2CPP_REGISTER_METHOD(0x00533150, void, set_Executed, (GhostAnimationData * __this, bool value));
}
