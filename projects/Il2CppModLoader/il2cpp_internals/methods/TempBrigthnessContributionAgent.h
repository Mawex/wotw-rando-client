#include <interception_macros.h>

namespace app::methods::TempBrigthnessContributionAgent {
IL2CPP_REGISTER_METHOD(0x0011DCE0, void, __ctor, (TempBrigthnessContributionAgent__Boxed * __this, IBrigthnessContributionAgent * agent, Ease_Easing__Enum easing, float speed, float timer));
IL2CPP_REGISTER_METHOD(0x0011DCF0, void, __ctor, (TempBrigthnessContributionAgent__Boxed * __this, IBrigthnessContributionAgent * agent, WeightController * weightController));
IL2CPP_REGISTER_METHOD(0x0010E170, GlobalBrightnessController_BrigthnessContributionOrder__Enum, get_BrightnessInfluceOrder, (TempBrigthnessContributionAgent__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_BrightnessInfluceOrder, (TempBrigthnessContributionAgent__Boxed * __this, GlobalBrightnessController_BrigthnessContributionOrder__Enum value));
IL2CPP_REGISTER_METHOD(0x0010FDE0, float, get_BrightnessInfluceAdditive, (TempBrigthnessContributionAgent__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001155C0, void, set_BrightnessInfluceAdditive, (TempBrigthnessContributionAgent__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x00111970, float, get_BrightnessInfluceMultiplicative, (TempBrigthnessContributionAgent__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115B30, void, set_BrightnessInfluceMultiplicative, (TempBrigthnessContributionAgent__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x0011DD00, bool, get_ContributeToAdditive, (TempBrigthnessContributionAgent__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011DD10, void, set_ContributeToAdditive, (TempBrigthnessContributionAgent__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0011DD20, bool, get_ContributeToMultiplicative, (TempBrigthnessContributionAgent__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011DD30, void, set_ContributeToMultiplicative, (TempBrigthnessContributionAgent__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0011DD40, float, get_BrightnessInfluceWeight, (TempBrigthnessContributionAgent__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011DD60, void, UpdateBrigthnessInfluence, (TempBrigthnessContributionAgent__Boxed * __this, float deltaTime));
}
