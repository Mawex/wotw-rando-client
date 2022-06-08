#include <interception_macros.h>

namespace app::methods::UnityEngine::BoxCollider {
IL2CPP_REGISTER_METHOD(0x0309DC80, Vector3, get_center, (BoxCollider * __this));
IL2CPP_REGISTER_METHOD(0x0309DD00, void, set_center, (BoxCollider * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0309DD60, Vector3, get_size, (BoxCollider * __this));
IL2CPP_REGISTER_METHOD(0x0309DDE0, void, set_size, (BoxCollider * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x0309DE40, void, get_center_Injected, (BoxCollider * __this, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x0309DEA0, void, set_center_Injected, (BoxCollider * __this, Vector3 * value));
IL2CPP_REGISTER_METHOD(0x0309DF00, void, get_size_Injected, (BoxCollider * __this, Vector3 * ret));
IL2CPP_REGISTER_METHOD(0x0309DF60, void, set_size_Injected, (BoxCollider * __this, Vector3 * value));
}
