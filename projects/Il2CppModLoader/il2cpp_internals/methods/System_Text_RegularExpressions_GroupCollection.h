#include <interception_macros.h>

namespace app::methods::System::Text::RegularExpressions::GroupCollection {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (GroupCollection * __this, Match * match, Hashtable * caps));
IL2CPP_REGISTER_METHOD(0x002FA280, Object *, get_SyncRoot, (GroupCollection * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (GroupCollection * __this));
IL2CPP_REGISTER_METHOD(0x02581720, int32_t, get_Count, (GroupCollection * __this));
IL2CPP_REGISTER_METHOD(0x02581750, Group *, get_Item, (GroupCollection * __this, int32_t groupnum));
IL2CPP_REGISTER_METHOD(0x02581760, Group *, get_Item, (GroupCollection * __this, String * groupname));
IL2CPP_REGISTER_METHOD(0x02581990, Group *, GetGroup, (GroupCollection * __this, int32_t groupnum));
IL2CPP_REGISTER_METHOD(0x02581B10, Group *, GetGroupImpl, (GroupCollection * __this, int32_t groupnum));
IL2CPP_REGISTER_METHOD(0x02581F90, void, CopyTo, (GroupCollection * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x04792CA0, GroupCollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025820B0, IEnumerator *, GetEnumerator, (GroupCollection * __this));
IL2CPP_REGISTER_METHOD(0x02582200, void, __ctor, (GroupCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x0470DB78, GroupCollection__ctor_1__MethodInfo);
}
