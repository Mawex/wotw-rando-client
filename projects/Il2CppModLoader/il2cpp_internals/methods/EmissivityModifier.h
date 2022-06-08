#include <interception_macros.h>

namespace app::methods::EmissivityModifier {
IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (EmissivityModifier * __this, float strength, float speed));
IL2CPP_REGISTER_METHOD(0x00BFBD70, void, SetProperties, (EmissivityModifier * __this));
IL2CPP_REGISTER_METHOD(0x00BFBED0, void, __ctor, (EmissivityModifier * __this));
}
