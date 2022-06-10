#pragma once
#include <interception_macros.h>

namespace app::methods::System::Linq::OrderedEnumerable_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x025497D0, app::IEnumerator_1_System_Object_ *, GetEnumerator, (app::OrderedEnumerable_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, app::IEnumerator *, IEnumerable_GetEnumerator, (app::OrderedEnumerable_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0153D080, app::IOrderedEnumerable_1_System_Object_ *, System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable_1, (app::OrderedEnumerable_1_System_Object_ * this_ptr, app::Func_2_Object_Object_ * key_selector, app::IComparer_1_System_Object_ * comparer, bool descending))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::OrderedEnumerable_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0153D080, app::IOrderedEnumerable_1_System_Object_ *, System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable_2, (app::OrderedEnumerable_1_System_Object_ * this_ptr, app::Func_2_Object_Int32_ * key_selector, app::IComparer_1_System_Int32_ * comparer, bool descending))
}
