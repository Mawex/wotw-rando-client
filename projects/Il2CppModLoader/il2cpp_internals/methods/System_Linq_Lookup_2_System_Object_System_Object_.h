#include <interception_macros.h>

namespace app::methods::System::Linq::Lookup_2_System::Object_System::Object_ {
IL2CPP_REGISTER_METHOD(0x0153DB70, Lookup_2_System_Object_System_Object_ *, Create, (IEnumerable_1_System_Object_ * source, Func_2_Object_Object_ * keySelector, Func_2_Object_Object_ * elementSelector, IEqualityComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHODINFO(0x04790440, Lookup_2_System_Object_System_Object__Create__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025481F0, void, __ctor, (Lookup_2_System_Object_System_Object_ * __this, IEqualityComparer_1_System_Object_ * comparer));
IL2CPP_REGISTER_METHOD(0x02548270, IEnumerator_1_System_Linq_IGrouping_2_ *, GetEnumerator, (Lookup_2_System_Object_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x019D9BE0, IEnumerator *, IEnumerable_GetEnumerator, (Lookup_2_System_Object_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02548390, int32_t, InternalGetHashCode, (Lookup_2_System_Object_System_Object_ * __this, Object * key));
IL2CPP_REGISTER_METHOD(0x02548410, Lookup_2_TKey_TElement_Grouping_System_Object_System_Object_ *, GetGrouping, (Lookup_2_System_Object_System_Object_ * __this, Object * key, bool create));
IL2CPP_REGISTER_METHOD(0x02548970, void, Resize, (Lookup_2_System_Object_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04797E08, Lookup_2_System_Object_System_Object__Resize__MethodInfo);
}
