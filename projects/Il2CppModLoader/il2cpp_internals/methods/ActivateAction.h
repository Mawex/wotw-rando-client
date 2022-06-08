using namespace app;

namespace app::methods::ActivateAction {
IL2CPP_REGISTER_METHOD(0x004C6F90, void, OnValidate, (ActivateAction * __this));
IL2CPP_REGISTER_METHOD(0x004C7090, void, Perform, (ActivateAction * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x004C73A0, void, Serialize, (ActivateAction * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x004C7520, String *, get_TargetName, (ActivateAction * __this));
IL2CPP_REGISTER_METHOD(0x004C7600, String *, GetNiceName, (ActivateAction * __this));
IL2CPP_REGISTER_METHOD(0x002FB9B0, GameObject *, GetDynamicGraphicTarget, (ActivateAction * __this));
IL2CPP_REGISTER_METHOD(0x004C7750, void, __ctor, (ActivateAction * __this));
}
