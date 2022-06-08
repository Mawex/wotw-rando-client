using namespace app;

namespace app::methods::System::Tuple_2_Guid_Object_ {
IL2CPP_REGISTER_METHOD(0x01349560, Guid, get_Item1, (Tuple_2_Guid_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Object *, get_Item2, (Tuple_2_Guid_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A63920, void, __ctor, (Tuple_2_Guid_Object_ * __this, Guid item1, Object * item2));
IL2CPP_REGISTER_METHOD(0x02A63940, bool, Equals, (Tuple_2_Guid_Object_ * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02A63A20, bool, IStructuralEquatable_Equals, (Tuple_2_Guid_Object_ * __this, Object * other, IEqualityComparer * comparer));
IL2CPP_REGISTER_METHOD(0x02A63BC0, int32_t, IComparable_CompareTo, (Tuple_2_Guid_Object_ * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02A63CA0, int32_t, IStructuralComparable_CompareTo, (Tuple_2_Guid_Object_ * __this, Object * other, IComparer * comparer));
IL2CPP_REGISTER_METHODINFO(0x04749C20, Tuple_2_Guid_Object__System_Collections_IStructuralComparable_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A63EC0, int32_t, GetHashCode, (Tuple_2_Guid_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A63F90, int32_t, IStructuralEquatable_GetHashCode, (Tuple_2_Guid_Object_ * __this, IEqualityComparer * comparer));
IL2CPP_REGISTER_METHOD(0x02A64090, String *, ToString, (Tuple_2_Guid_Object_ * __this));
IL2CPP_REGISTER_METHOD(0x02A64210, String *, ITupleInternal_ToString, (Tuple_2_Guid_Object_ * __this, StringBuilder * sb));
}
