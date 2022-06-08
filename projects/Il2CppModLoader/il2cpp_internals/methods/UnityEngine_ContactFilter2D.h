#include <interception_macros.h>

namespace app::methods::UnityEngine::ContactFilter2D {
IL2CPP_REGISTER_METHOD(0x0024A790, ContactFilter2D, NoFilter, (ContactFilter2D__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A7E0, void, CheckConsistency, (ContactFilter2D__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0024A7F0, void, SetLayerMask, (ContactFilter2D__Boxed * __this, LayerMask layerMask));
IL2CPP_REGISTER_METHOD(0x0024A800, void, SetDepth, (ContactFilter2D__Boxed * __this, float minDepth, float maxDepth));
IL2CPP_REGISTER_METHOD(0x0316F1C0, ContactFilter2D, CreateLegacyFilter, (int32_t layerMask, float minDepth, float maxDepth));
}
