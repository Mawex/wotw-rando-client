#include <interception_macros.h>

namespace app::methods::System_ComponentModel::RefreshEventArgs {
IL2CPP_REGISTER_METHOD(0x029ABBD0, void, __ctor_1, (app::RefreshEventArgs * this_ptr, app::Object * component_changed));
IL2CPP_REGISTER_METHOD(0x029ABC90, void, __ctor_2, (app::RefreshEventArgs * this_ptr, app::Type * type_changed));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_ComponentChanged, (app::RefreshEventArgs * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Type *, get_TypeChanged, (app::RefreshEventArgs * this_ptr));
}
