#include <interception_macros.h>

namespace app::methods::System::ComponentModel::CollectionChangeEventArgs {
IL2CPP_REGISTER_METHOD(0x024A84B0, void, __ctor, (CollectionChangeEventArgs * __this, CollectionChangeAction__Enum action, Object * element));
IL2CPP_REGISTER_METHOD(0x002FC6D0, CollectionChangeAction__Enum, get_Action, (CollectionChangeEventArgs * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, get_Element, (CollectionChangeEventArgs * __this));
}
