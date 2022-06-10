#pragma once
#include <interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereSelectEnumerableIterator_2_System_Object_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(0x00E776D0, app::IEnumerable_1_System_Boolean_ *, Select_1, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Func_2_UnityEngine_Rect_Boolean_ * selector))
    IL2CPP_REGISTER_METHOD(0x00E776D0, app::IEnumerable_1_System_Single_ *, Select_2, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Func_2_UnityEngine_Rect_Single_ * selector))
    IL2CPP_REGISTER_METHOD(0x02894D90, void, ctor, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Object_UnityEngine_Rect_ * this_ptr, app::IEnumerable_1_System_Object_ * source, app::Func_2_Object_Boolean_ * predicate, app::Func_2_Object_UnityEngine_Rect_ * selector))
    IL2CPP_REGISTER_METHOD(0x02894E00, app::Enumerable_Iterator_1_UnityEngine_Rect_ *, Clone, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02899B00, void, Dispose, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02899BC0, bool, MoveNext, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Object_UnityEngine_Rect_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02896570, app::IEnumerable_1_UnityEngine_Rect_ *, Where, (app::Enumerable_WhereSelectEnumerableIterator_2_System_Object_UnityEngine_Rect_ * this_ptr, app::Func_2_UnityEngine_Rect_Boolean_ * predicate))
}
