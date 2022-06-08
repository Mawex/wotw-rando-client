using namespace app;

namespace app::methods::System::ValueTuple {
IL2CPP_REGISTER_METHOD(0x00249B10, bool, Equals, (ValueTuple__Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x00221FF0, bool, Equals, (ValueTuple__Boxed * __this, ValueTuple other));
IL2CPP_REGISTER_METHOD(0x00249BB0, bool, IStructuralEquatable_Equals, (ValueTuple__Boxed * __this, Object * other, IEqualityComparer * comparer));
IL2CPP_REGISTER_METHOD(0x00249C50, int32_t, IComparable_CompareTo, (ValueTuple__Boxed * __this, Object * other));
IL2CPP_REGISTER_METHODINFO(0x04729B88, ValueTuple_System_IComparable_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0013BB70, int32_t, CompareTo, (ValueTuple__Boxed * __this, ValueTuple other));
IL2CPP_REGISTER_METHOD(0x00249D80, int32_t, IStructuralComparable_CompareTo, (ValueTuple__Boxed * __this, Object * other, IComparer * comparer));
IL2CPP_REGISTER_METHODINFO(0x04747D10, ValueTuple_System_Collections_IStructuralComparable_CompareTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0013BB70, int32_t, GetHashCode, (ValueTuple__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0013BB70, int32_t, IStructuralEquatable_GetHashCode, (ValueTuple__Boxed * __this, IEqualityComparer * comparer));
IL2CPP_REGISTER_METHOD(0x00249EB0, String *, ToString, (ValueTuple__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0314ADC0, int32_t, CombineHashCodes, (int32_t h1, int32_t h2));
IL2CPP_REGISTER_METHOD(0x0314AE90, int32_t, CombineHashCodes, (int32_t h1, int32_t h2, int32_t h3));
IL2CPP_REGISTER_METHOD(0x0314AF60, int32_t, CombineHashCodes, (int32_t h1, int32_t h2, int32_t h3, int32_t h4));
}
