using namespace app;

namespace app::methods::AttachToRope {
IL2CPP_REGISTER_METHOD(0x002FBB60, ConfigurableJoint *, get_GeneratedConfigurableJoint, (AttachToRope * __this));
IL2CPP_REGISTER_METHOD(0x0084F8B0, bool, IsAttached, (AttachToRope * __this));
IL2CPP_REGISTER_METHOD(0x0084F950, void, Awake, (AttachToRope * __this));
IL2CPP_REGISTER_METHOD(0x0084FBF0, void, OnEnable, (AttachToRope * __this));
IL2CPP_REGISTER_METHOD(0x0084FD40, void, PerformAttachment, (AttachToRope * __this));
IL2CPP_REGISTER_METHOD(0x008507D0, void, BreakAttachment, (AttachToRope * __this));
IL2CPP_REGISTER_METHOD(0x00850890, void, Start, (AttachToRope * __this));
IL2CPP_REGISTER_METHOD(0x008509A0, void, RemoveAllJoints, (AttachToRope * __this));
IL2CPP_REGISTER_METHOD(0x00850A90, void, OnDestroy, (AttachToRope * __this));
IL2CPP_REGISTER_METHOD(0x00850D40, void, OnGameSerializeLoad, (AttachToRope * __this));
IL2CPP_REGISTER_METHODINFO(0x04794CE0, AttachToRope_OnGameSerializeLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00850D90, void, OnSceneStartLateAfterSerialize, (AttachToRope * __this, SceneRoot * root));
IL2CPP_REGISTER_METHODINFO(0x04740748, AttachToRope_OnSceneStartLateAfterSerialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00850D40, void, OnSerializationLoad, (AttachToRope * __this));
IL2CPP_REGISTER_METHOD(0x00850F10, void, __ctor, (AttachToRope * __this));
}
