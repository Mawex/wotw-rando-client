#include <interception_macros.h>

namespace app::methods::ColliderEnterExitTrigger {
IL2CPP_REGISTER_METHOD(0x012CF010, void, Start, (ColliderEnterExitTrigger * __this));
IL2CPP_REGISTER_METHOD(0x012CF0A0, bool, ValidObject, (ColliderEnterExitTrigger * __this, GameObject * go));
IL2CPP_REGISTER_METHOD(0x012CF270, void, FixedUpdate, (ColliderEnterExitTrigger * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ColliderEnterExitTrigger * __this));
}
