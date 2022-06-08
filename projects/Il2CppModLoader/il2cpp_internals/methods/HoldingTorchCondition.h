#include <interception_macros.h>

namespace app::methods::HoldingTorchCondition {
IL2CPP_REGISTER_METHOD(0x00B5B010, bool, Validate, (HoldingTorchCondition * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00B5B030, bool, IsHoldingTorch, (IContext * context, bool isHolding));
IL2CPP_REGISTER_METHOD(0x00597BB0, void, __ctor, (HoldingTorchCondition * __this));
}
