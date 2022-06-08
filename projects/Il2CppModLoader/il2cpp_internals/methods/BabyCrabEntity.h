using namespace app;

namespace app::methods::BabyCrabEntity {
IL2CPP_REGISTER_METHOD(0x002FB9B0, CrabPlaceholderGroup *, get_Group, (BabyCrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Group, (BabyCrabEntity * __this, CrabPlaceholderGroup * value));
IL2CPP_REGISTER_METHOD(0x0085F420, IBlackboard *, get_BlackBoard, (BabyCrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, CrabEntity *, get_Entity, (BabyCrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Entity, (BabyCrabEntity * __this, CrabEntity * value));
IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsRunningAway, (BabyCrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsRunningAway, (BabyCrabEntity * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0085F450, Vector3, get_RunPosition, (BabyCrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x0085F470, void, set_RunPosition, (BabyCrabEntity * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0085F480, void, Awake, (BabyCrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x0085F520, void, Update, (BabyCrabEntity * __this));
IL2CPP_REGISTER_METHOD(0x0085FEA0, void, __ctor, (BabyCrabEntity * __this));
}
