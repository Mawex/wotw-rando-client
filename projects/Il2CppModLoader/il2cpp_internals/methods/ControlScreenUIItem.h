#include <interception_macros.h>

namespace app::methods::ControlScreenUIItem {
IL2CPP_REGISTER_METHOD(0x002FA000, void, SetItemContext, (ControlScreenUIItem * __this, Object * context, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnItemContextDirty, (ControlScreenUIItem * __this, Object * gridContext));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ControlScreenUIItem * __this));
}
