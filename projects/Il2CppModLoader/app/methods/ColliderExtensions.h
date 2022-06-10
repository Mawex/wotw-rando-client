#pragma once
#include <interception_macros.h>

namespace app::methods::ColliderExtensions {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetAsColliderWithRigidbody, (app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x012CF610, bool, IsColliderWithRigidbody, (app::Collider * collider))
}
