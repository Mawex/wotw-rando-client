#include <interception_macros.h>

namespace app::methods::NegativeScaleFixer_TransformAndWorldMatrix {
IL2CPP_REGISTER_METHOD(0x002FA280, Transform *, get_Transform, (NegativeScaleFixer_TransformAndWorldMatrix * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Transform, (NegativeScaleFixer_TransformAndWorldMatrix * __this, Transform * value));
IL2CPP_REGISTER_METHOD(0x0088C880, void, __ctor, (NegativeScaleFixer_TransformAndWorldMatrix * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x0088C970, void, ReApplyWorldTransform, (NegativeScaleFixer_TransformAndWorldMatrix * __this));
}
