using namespace app;

namespace app::methods::GhostAnimationParameterPlugin_AnimationParameterData {
IL2CPP_REGISTER_METHOD(0x00E13490, void, SetEntry, (GhostAnimationParameterPlugin_AnimationParameterData * __this, GhostAnimationParameterPlugin_RecordableAnimatorEntry * entry));
IL2CPP_REGISTER_METHOD(0x00E134E0, void, Save, (GhostAnimationParameterPlugin_AnimationParameterData * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00E13860, void, Load, (GhostAnimationParameterPlugin_AnimationParameterData * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHOD(0x00E13DE0, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostAnimationParameterPlugin_AnimationParameterData * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetDataSize, (GhostAnimationParameterPlugin_AnimationParameterData * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_Executed, (GhostAnimationParameterPlugin_AnimationParameterData * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_Executed, (GhostAnimationParameterPlugin_AnimationParameterData * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00E13DF0, void, __ctor, (GhostAnimationParameterPlugin_AnimationParameterData * __this));
}
