#include <interception_macros.h>

namespace app::methods::System_Runtime_Serialization::ObjectHolderListEnumerator {
IL2CPP_REGISTER_METHOD(0x01ED7120, void, __ctor, (app::ObjectHolderListEnumerator * this_ptr, app::ObjectHolderList * list, bool is_fixup_enumerator));
IL2CPP_REGISTER_METHOD(0x01ED7150, bool, MoveNext, (app::ObjectHolderListEnumerator * this_ptr));
IL2CPP_REGISTER_METHOD(0x01ED7230, ObjectHolder *, get_Current, (app::ObjectHolderListEnumerator * this_ptr));
}
