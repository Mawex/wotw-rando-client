using namespace app;

namespace app::methods::System::Collections::Generic::Stack_1_UnityEngine::Vector3_ {
IL2CPP_REGISTER_METHOD(0x0243CB70, void, __ctor, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04748A00, Stack_1_UnityEngine_Vector3___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CFA150, void, Push, (Stack_1_UnityEngine_Vector3_ * __this, Vector3 item));
IL2CPP_REGISTER_METHODINFO(0x0471C590, Stack_1_UnityEngine_Vector3__Push__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CFA230, Vector3__Array *, ToArray, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04771F20, Stack_1_UnityEngine_Vector3__ToArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CFA0C0, Vector3, Pop, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHODINFO(0x047129F0, Stack_1_UnityEngine_Vector3__Pop__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CF99E0, void, __ctor, (Stack_1_UnityEngine_Vector3_ * __this, int32_t capacity));
IL2CPP_REGISTER_METHODINFO(0x04769138, Stack_1_UnityEngine_Vector3___ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF9B10, Object *, ICollection_get_SyncRoot, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF6CB0, void, Clear, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF9C70, bool, Contains, (Stack_1_UnityEngine_Vector3_ * __this, Vector3 item));
IL2CPP_REGISTER_METHOD(0x02CF9CD0, void, ICollection_CopyTo, (Stack_1_UnityEngine_Vector3_ * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x0473AA80, Stack_1_UnityEngine_Vector3__System_Collections_ICollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02CF9F70, Stack_1_T_Enumerator_UnityEngine_Vector3_, GetEnumerator, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF9FB0, IEnumerator_1_UnityEngine_Vector3_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x02CF9FB0, IEnumerator *, IEnumerable_GetEnumerator, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x02CFA040, Vector3, Peek, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHOD(0x02CFA340, void, ThrowForEmptyStack, (Stack_1_UnityEngine_Vector3_ * __this));
IL2CPP_REGISTER_METHODINFO(0x0476F8E8, Stack_1_UnityEngine_Vector3__ThrowForEmptyStack__MethodInfo);
}
