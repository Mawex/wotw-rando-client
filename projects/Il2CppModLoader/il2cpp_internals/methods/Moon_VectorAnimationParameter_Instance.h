using namespace app;

namespace app::methods::Moon::VectorAnimationParameter_Instance {
IL2CPP_REGISTER_METHOD(0x0064EB90, Vector3, get_TargetValue, (VectorAnimationParameter_Instance * __this));
IL2CPP_REGISTER_METHOD(0x02125970, void, set_TargetValue, (VectorAnimationParameter_Instance * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x00446940, Vector3, get_CurrentValue, (VectorAnimationParameter_Instance * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_PreviewMode, (VectorAnimationParameter_Instance * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_PreviewMode, (VectorAnimationParameter_Instance * __this, bool value));
IL2CPP_REGISTER_METHOD(0x021259C0, void, __ctor, (VectorAnimationParameter_Instance * __this, VectorAnimationParameter * parameter));
IL2CPP_REGISTER_METHOD(0x02125A00, void, Update, (VectorAnimationParameter_Instance * __this, float dt));
}
