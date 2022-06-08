using namespace app;

namespace app::methods::System::Collections::Generic::Stack_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF7A10, Object *, ICollection_get_SyncRoot, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF78E0, void, __ctor, (Stack_1_System_Object_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x047923D0, Stack_1_System_Object___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF7B70, bool, Contains, (Stack_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02CF7BC0, void, ICollection_CopyTo, (Stack_1_System_Object_ * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x04735D50, Stack_1_System_Object__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CF7E60, Stack_1_T_Enumerator_System_Object_, GetEnumerator, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF7EA0, IEnumerator_1_System_Object_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF7EA0, IEnumerator *, IEnumerable_GetEnumerator, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF7F30, Object *, Peek, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF7F90, Object *, Pop, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (Stack_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02CF80F0, Object__Array *, ToArray, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF81D0, void, ThrowForEmptyStack, (Stack_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04710768, Stack_1_System_Object__ThrowForEmptyStack__MethodInfo);
}
