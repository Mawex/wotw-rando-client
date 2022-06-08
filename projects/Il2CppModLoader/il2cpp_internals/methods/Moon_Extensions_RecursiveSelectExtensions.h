#include <interception_macros.h>

namespace app::methods::Moon::Extensions::RecursiveSelectExtensions {
IL2CPP_REGISTER_METHOD(0x00E7D2A0, IEnumerable_1_System_Object_ *, RecursiveSelect, (IEnumerable_1_System_Object_ * source, Func_2_Object_System_Collections_Generic_IEnumerable_1_ * childSelector));
IL2CPP_REGISTER_METHOD(0x00E77800, IEnumerable_1_System_Object_ *, RecursiveSelect, (IEnumerable_1_System_Object_ * source, Func_2_Object_System_Collections_Generic_IEnumerable_1_ * childSelector, Func_2_Object_Object_ * selector));
IL2CPP_REGISTER_METHOD(0x00E77800, IEnumerable_1_System_Object_ *, RecursiveSelect, (IEnumerable_1_System_Object_ * source, Func_2_Object_System_Collections_Generic_IEnumerable_1_ * childSelector, Func_3_Object_Int32_Object_ * selector));
IL2CPP_REGISTER_METHOD(0x00E77A20, IEnumerable_1_System_Object_ *, RecursiveSelect, (IEnumerable_1_System_Object_ * source, Func_2_Object_System_Collections_Generic_IEnumerable_1_ * childSelector, Func_4_Object_Int32_Int32_Object_ * selector));
IL2CPP_REGISTER_METHOD(0x00E77A40, IEnumerable_1_System_Object_ *, RecursiveSelect, (IEnumerable_1_System_Object_ * source, Func_2_Object_System_Collections_Generic_IEnumerable_1_ * childSelector, Func_4_Object_Int32_Int32_Object_ * selector, int32_t depth));
}
