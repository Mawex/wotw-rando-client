#include <interception_macros.h>

namespace app::methods::GradientExtensions {
IL2CPP_REGISTER_METHOD(0x02556EB0, Gradient *, MultiplyColor, (app::Gradient * target, app::Color color));
IL2CPP_REGISTER_METHOD(0x02557060, Gradient *, OverrideColor, (app::Gradient * target, app::Color color));
}
