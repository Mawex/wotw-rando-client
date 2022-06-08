#include <interception_macros.h>

namespace app::methods::CartBody {
IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_AddtiveRotation, (CartBody * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B32900, float, get_BodyNormalizedLocalRotation, (CartBody * __this));
IL2CPP_REGISTER_METHOD(0x00B32910, void, Awake, (CartBody * __this));
IL2CPP_REGISTER_METHOD(0x00B32A00, void, OnEnable, (CartBody * __this));
IL2CPP_REGISTER_METHOD(0x00B32B40, void, Update, (CartBody * __this));
IL2CPP_REGISTER_METHOD(0x00B32B60, void, UpdateRotation, (CartBody * __this));
IL2CPP_REGISTER_METHOD(0x00B32CF0, void, ApplyRotation, (CartBody * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (CartBody * __this));
IL2CPP_REGISTER_METHOD(0x00B33000, void, __ctor, (CartBody * __this));
}
