using namespace app;

namespace app::methods::System::Collections::CompatibleComparer {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (CompatibleComparer * __this, IComparer * comparer, IHashCodeProvider * hashCodeProvider));
IL2CPP_REGISTER_METHOD(0x02020AA0, int32_t, Compare, (CompatibleComparer * __this, Object * a, Object * b));
IL2CPP_REGISTER_METHODINFO(0x047915A8, CompatibleComparer_Compare__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02020C20, bool, Equals, (CompatibleComparer * __this, Object * a, Object * b));
IL2CPP_REGISTER_METHOD(0x02020D60, int32_t, GetHashCode, (CompatibleComparer * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x0471F5A8, CompatibleComparer_GetHashCode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, IComparer *, get_Comparer, (CompatibleComparer * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, IHashCodeProvider *, get_HashCodeProvider, (CompatibleComparer * __this));
}
