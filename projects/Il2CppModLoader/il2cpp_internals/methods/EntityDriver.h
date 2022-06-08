#include <interception_macros.h>

namespace app::methods::EntityDriver {
IL2CPP_REGISTER_METHOD(0x00C90B40, EntityDriver *, GetInstance, ());
IL2CPP_REGISTER_METHOD(0x00C90D10, void, ResetStatics2, ());
IL2CPP_REGISTER_METHOD(0x00C90E60, void, RegisterEntity, (Entity * entity));
IL2CPP_REGISTER_METHOD(0x00C90E90, void, UnRegisterEntity, (Entity * entity));
IL2CPP_REGISTER_METHOD(0x00C90EC0, void, OnDestroy, (EntityDriver * __this));
IL2CPP_REGISTER_METHOD(0x00C90F40, void, __ctor, (EntityDriver * __this));
}
