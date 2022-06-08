using namespace app;

namespace app::methods::System::Collections::Generic::Stack_1_System::Single_ {
IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047706E0, Stack_1_System_Single___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04789B10, Stack_1_System_Single__get_Count__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CF87A0, float, Peek, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04789DF8, Stack_1_System_Single__Peek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CF8230, void, __ctor, (Stack_1_System_Single_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x04755600, Stack_1_System_Single___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF8360, Object *, ICollection_get_SyncRoot, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF6CB0, void, Clear, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF84C0, bool, Contains, (Stack_1_System_Single_ * __this, float item));
IL2CPP_REGISTER_METHOD(0x02CF8500, void, ICollection_CopyTo, (Stack_1_System_Single_ * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x0477DC38, Stack_1_System_Single__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CF6FB0, Stack_1_T_Enumerator_System_Single_, GetEnumerator, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF6FF0, IEnumerator_1_System_Single_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF6FF0, IEnumerator *, IEnumerable_GetEnumerator, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF8800, float, Pop, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF8870, void, Push, (Stack_1_System_Single_ * __this, float item));
IL2CPP_REGISTER_METHOD(0x02CF7210, Single__Array *, ToArray, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF8930, void, ThrowForEmptyStack, (Stack_1_System_Single_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04714C80, Stack_1_System_Single__ThrowForEmptyStack__MethodInfo);
}
