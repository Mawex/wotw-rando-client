#include <interception_macros.h>

namespace app::methods::System::Collections::BitArray {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (BitArray * __this));
IL2CPP_REGISTER_METHOD(0x0201D5A0, void, __ctor, (BitArray * __this, int32_t length));
IL2CPP_REGISTER_METHOD(0x0201D5B0, void, __ctor, (BitArray * __this, int32_t length, bool defaultValue));
IL2CPP_REGISTER_METHODINFO(0x04730858, BitArray__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201D720, void, __ctor, (BitArray * __this, Int32__Array * values));
IL2CPP_REGISTER_METHODINFO(0x04718450, BitArray__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201D8C0, bool, get_Item, (BitArray * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x0201D8D0, void, set_Item, (BitArray * __this, int32_t index, bool value));
IL2CPP_REGISTER_METHOD(0x0201D8E0, bool, Get, (BitArray * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0473FA08, BitArray_Get__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201DA00, void, Set, (BitArray * __this, int32_t index, bool value));
IL2CPP_REGISTER_METHODINFO(0x0472B7A0, BitArray_Set__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Length, (BitArray * __this));
IL2CPP_REGISTER_METHOD(0x0201DB90, void, set_Length, (BitArray * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x047385A8, BitArray_set_Length__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0201DDA0, void, CopyTo, (BitArray * __this, Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x047861E0, BitArray_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (BitArray * __this));
IL2CPP_REGISTER_METHOD(0x0201E200, Object *, Clone, (BitArray * __this));
IL2CPP_REGISTER_METHOD(0x0201E4C0, Object *, get_SyncRoot, (BitArray * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (BitArray * __this));
IL2CPP_REGISTER_METHOD(0x0201E620, IEnumerator *, GetEnumerator, (BitArray * __this));
IL2CPP_REGISTER_METHOD(0x0201E780, int32_t, GetArrayLength, (int32_t n, int32_t div));
}
