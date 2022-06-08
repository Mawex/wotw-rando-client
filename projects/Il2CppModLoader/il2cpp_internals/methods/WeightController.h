using namespace app;

namespace app::methods::WeightController {
IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_Weight, (WeightController * __this));
IL2CPP_REGISTER_METHOD(0x00573170, float, get_Timer, (WeightController * __this));
IL2CPP_REGISTER_METHOD(0x00573180, void, set_Timer, (WeightController * __this, float value));
IL2CPP_REGISTER_METHOD(0x00573260, void, __ctor, (WeightController * __this, float speedForward, float speedBackward, float initialTimerValue, Ease_Easing__Enum easing));
IL2CPP_REGISTER_METHOD(0x00573280, void, __ctor, (WeightController * __this, float speed, float initialTimerValue, Ease_Easing__Enum easing));
IL2CPP_REGISTER_METHOD(0x005732A0, void, MoveWeightUp, (WeightController * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x005732D0, void, MoveWeightDown, (WeightController * __this, float deltaTime));
}
