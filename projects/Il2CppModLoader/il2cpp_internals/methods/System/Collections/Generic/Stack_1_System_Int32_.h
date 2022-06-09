#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Stack_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor_1, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04727598, Stack_1_System_Int32___ctor__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047555B0, Stack_1_System_Int32__get_Count__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CF7080, int32_t, Peek, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x047559B8, Stack_1_System_Int32__Peek__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CF6CB0, void, Clear, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0478AEA8, Stack_1_System_Int32__Clear__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CF7150, void, Push, (app::Stack_1_System_Int32_ * this_ptr, int32_t item));
    IL2CPP_REGISTER_METHODINFO(0x0470B680, Stack_1_System_Int32__Push__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CF70E0, int32_t, Pop, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0476E730, Stack_1_System_Int32__Pop__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CF6A20, void, __ctor_2, (app::Stack_1_System_Int32_ * this_ptr, int32_t capacity));
    IL2CPP_REGISTER_METHODINFO(0x047547F8, Stack_1_System_Int32___ctor_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CF6B50, app::Object *, ICollection_get_SyncRoot, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CF6CC0, bool, Contains, (app::Stack_1_System_Int32_ * this_ptr, int32_t item));
    IL2CPP_REGISTER_METHOD(0x02CF6D10, void, ICollection_CopyTo, (app::Stack_1_System_Int32_ * this_ptr, app::Array * array, int32_t array_index));
    IL2CPP_REGISTER_METHODINFO(0x0474B840, Stack_1_System_Int32__System_Collections_ICollection_CopyTo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02CF6FB0, app::Stack_1_T_Enumerator_System_Int32_, GetEnumerator, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CF6FF0, app::IEnumerator_1_System_Int32_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CF6FF0, app::IEnumerator *, IEnumerable_GetEnumerator, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CF7210, app::Int32__Array *, ToArray, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHOD(0x02CF72F0, void, ThrowForEmptyStack, (app::Stack_1_System_Int32_ * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0470B2C0, Stack_1_System_Int32__ThrowForEmptyStack__MethodInfo);
}
