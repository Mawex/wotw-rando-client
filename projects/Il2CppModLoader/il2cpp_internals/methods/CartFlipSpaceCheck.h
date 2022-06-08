#include <interception_macros.h>

namespace app::methods::CartFlipSpaceCheck {
IL2CPP_REGISTER_METHOD(0x00B38BC0, void, OnDisable, (CartFlipSpaceCheck * __this));
IL2CPP_REGISTER_METHOD(0x00B38BD0, void, Clear, (CartFlipSpaceCheck * __this));
IL2CPP_REGISTER_METHOD(0x00B38CA0, void, OnTriggerEnter, (CartFlipSpaceCheck * __this, Collider * col));
IL2CPP_REGISTER_METHOD(0x00B38D50, void, OnTriggerExit, (CartFlipSpaceCheck * __this, Collider * col));
IL2CPP_REGISTER_METHOD(0x00B38DF0, bool, ValidSpaceToFlip, (CartFlipSpaceCheck * __this, int32_t mask));
IL2CPP_REGISTER_METHOD(0x00B39060, void, __ctor, (CartFlipSpaceCheck * __this));
}
