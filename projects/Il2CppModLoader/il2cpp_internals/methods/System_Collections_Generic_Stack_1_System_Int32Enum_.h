#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::Stack_1_System::Int32Enum_ {
IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF7350, void, __ctor, (Stack_1_System_Int32Enum_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x047224F8, Stack_1_System_Int32Enum___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF7480, Object *, ICollection_get_SyncRoot, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF6CB0, void, Clear, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF6CC0, bool, Contains, (Stack_1_System_Int32Enum_ * __this, Int32Enum__Enum item));
IL2CPP_REGISTER_METHOD(0x02CF75E0, void, ICollection_CopyTo, (Stack_1_System_Int32Enum_ * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x0475FB18, Stack_1_System_Int32Enum__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CF6FB0, Stack_1_T_Enumerator_System_Int32Enum_, GetEnumerator, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF6FF0, IEnumerator_1_System_Int32Enum_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF6FF0, IEnumerator *, IEnumerable_GetEnumerator, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF7080, Int32Enum__Enum, Peek, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF70E0, Int32Enum__Enum, Pop, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF7150, void, Push, (Stack_1_System_Int32Enum_ * __this, Int32Enum__Enum item));
IL2CPP_REGISTER_METHOD(0x02CF7210, Int32Enum__Enum__Array *, ToArray, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF7880, void, ThrowForEmptyStack, (Stack_1_System_Int32Enum_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0476E778, Stack_1_System_Int32Enum__ThrowForEmptyStack__MethodInfo);
}
