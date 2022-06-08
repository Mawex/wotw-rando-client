using namespace app;

namespace app::methods::UnityEngine::UI::Collections::IndexedSet_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02ACD5F0, int32_t, get_Count, (IndexedSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_IsReadOnly, (IndexedSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ACD8A0, Object *, get_Item, (IndexedSet_1_System_Object_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02ACD8D0, void, set_Item, (IndexedSet_1_System_Object_ * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x02ACD120, void, __ctor, (IndexedSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ACD320, void, Add, (IndexedSet_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02ACD3D0, bool, AddUnique, (IndexedSet_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02ACD4C0, bool, Remove, (IndexedSet_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02ACD540, IEnumerator_1_System_Object_ *, GetEnumerator, (IndexedSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHODINFO(0x04735C80, IndexedSet_1_System_Object__GetEnumerator__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02986CA0, IEnumerator *, IEnumerable_GetEnumerator, (IndexedSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x0271D0C0, void, Clear, (IndexedSet_1_System_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02ACD590, bool, Contains, (IndexedSet_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02ACD5C0, void, CopyTo, (IndexedSet_1_System_Object_ * __this, Object__Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x02ACD620, int32_t, IndexOf, (IndexedSet_1_System_Object_ * __this, Object * item));
IL2CPP_REGISTER_METHOD(0x02ACD660, void, Insert, (IndexedSet_1_System_Object_ * __this, int32_t index, Object * item));
IL2CPP_REGISTER_METHODINFO(0x0476B768, IndexedSet_1_System_Object__Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02ACD6C0, void, RemoveAt, (IndexedSet_1_System_Object_ * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02ACD9C0, void, RemoveAll, (IndexedSet_1_System_Object_ * __this, Predicate_1_Object_ * match));
IL2CPP_REGISTER_METHOD(0x02ACDAD0, void, Sort, (IndexedSet_1_System_Object_ * __this, Comparison_1_Object_ * sortLayoutFunction));
}
