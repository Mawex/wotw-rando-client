#include <interception_macros.h>

namespace app::methods::System::Collections::Specialized::CompatibleComparer {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (CompatibleComparer_1 * __this, IComparer * comparer, IHashCodeProvider * hashCodeProvider));
IL2CPP_REGISTER_METHOD(0x02492CB0, bool, Equals, (CompatibleComparer_1 * __this, Object * a, Object * b));
IL2CPP_REGISTER_METHOD(0x02492E00, int32_t, GetHashCode, (CompatibleComparer_1 * __this, Object * obj));
IL2CPP_REGISTER_METHODINFO(0x04771EC8, CompatibleComparer_1_GetHashCode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA280, IComparer *, get_Comparer, (CompatibleComparer_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, IHashCodeProvider *, get_HashCodeProvider, (CompatibleComparer_1 * __this));
IL2CPP_REGISTER_METHOD(0x02492EF0, IComparer *, get_DefaultComparer, ());
IL2CPP_REGISTER_METHOD(0x024930B0, IHashCodeProvider *, get_DefaultHashCodeProvider, ());
}
