using namespace app;

namespace app::methods::Moon::NPCCameraTransition {
IL2CPP_REGISTER_METHOD(0x011202B0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x011202C0, Transform *, get_NpcTarget, (NPCCameraTransition * __this));
IL2CPP_REGISTER_METHOD(0x011205C0, Transform *, get_OpenStoreTarget, (NPCCameraTransition * __this));
IL2CPP_REGISTER_METHOD(0x011208C0, NPCCameraTransition *, get_ActiveTransiton, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01120940, void, set_ActiveTransiton, (NPCCameraTransition * value));
IL2CPP_REGISTER_METHOD(0x003FDCE0, NPCCameraBlendState__Enum, get_State, (NPCCameraTransition * __this));
IL2CPP_REGISTER_METHOD(0x011209D0, Vector3, Position, (NPCCameraTransition * __this, NPCCameraTargetPositionType__Enum target));
IL2CPP_REGISTER_METHOD(0x01120D40, Vector3, get_TargetPosition, (NPCCameraTransition * __this));
IL2CPP_REGISTER_METHOD(0x01120D80, Vector3, get_CurrentPosition, (NPCCameraTransition * __this));
IL2CPP_REGISTER_METHOD(0x01120F70, void, ChangePosition, (NPCCameraTransition * __this, NPCCameraTargetPositionType__Enum target, float blendTime));
IL2CPP_REGISTER_METHOD(0x01120FD0, float, get_BlendDuration, (NPCCameraTransition * __this));
IL2CPP_REGISTER_METHOD(0x011210D0, float, get_BlendTime, (NPCCameraTransition * __this));
IL2CPP_REGISTER_METHOD(0x01121100, CameraPuppetController *, get_Puppet, (NPCCameraTransition * __this));
IL2CPP_REGISTER_METHOD(0x011211C0, void, Register, (NPCCameraTransition * __this));
IL2CPP_REGISTER_METHOD(0x01121270, void, Unregister, (NPCCameraTransition * __this));
IL2CPP_REGISTER_METHOD(0x01121320, void, ChangeCameraState, (NPCCameraTransition * __this, NPCCameraBlendState__Enum state));
IL2CPP_REGISTER_METHOD(0x00597B10, UpdateType__Enum, get_UpdateType, (NPCCameraTransition * __this));
IL2CPP_REGISTER_METHOD(0x011218C0, void, OnUpdate, (NPCCameraTransition * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x01121D90, void, __ctor, (NPCCameraTransition * __this));
}
