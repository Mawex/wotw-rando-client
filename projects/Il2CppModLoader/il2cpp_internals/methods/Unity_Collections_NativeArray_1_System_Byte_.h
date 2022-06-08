#include <interception_macros.h>

namespace app::methods::Unity::Collections::NativeArray_1_System::Byte_ {
IL2CPP_REGISTER_METHOD(0x001DFA50, Byte__Array *, ToArray, (NativeArray_1_System_Byte___Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04721B58, NativeArray_1_System_Byte__ToArray__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001DF770, void, __ctor, (NativeArray_1_System_Byte___Boxed * __this, int32_t length, Allocator__Enum allocator, NativeArrayOptions__Enum options));
IL2CPP_REGISTER_METHODINFO(0x04736840, NativeArray_1_System_Byte___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D9B60, bool, get_IsCreated, (NativeArray_1_System_Byte___Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04709978, NativeArray_1_System_Byte__get_IsCreated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001DF8B0, void, Dispose, (NativeArray_1_System_Byte___Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04742AC0, NativeArray_1_System_Byte__Dispose__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022647E0, void, Allocate, (int32_t length, Allocator__Enum allocator, NativeArray_1_System_Byte_ * array));
IL2CPP_REGISTER_METHOD(0x001DF780, int32_t, get_Length, (NativeArray_1_System_Byte___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DF790, uint8_t, get_Item, (NativeArray_1_System_Byte___Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x001DF820, void, set_Item, (NativeArray_1_System_Byte___Boxed * __this, int32_t index, uint8_t value));
IL2CPP_REGISTER_METHOD(0x001DF930, void, CopyFrom, (NativeArray_1_System_Byte___Boxed * __this, Byte__Array * array));
IL2CPP_REGISTER_METHOD(0x001DF9C0, void, CopyTo, (NativeArray_1_System_Byte___Boxed * __this, Byte__Array * array));
IL2CPP_REGISTER_METHOD(0x001DFB30, NativeArray_1_T_Enumerator_System_Byte_, GetEnumerator, (NativeArray_1_System_Byte___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFB90, IEnumerator_1_System_Byte_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (NativeArray_1_System_Byte___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFC30, IEnumerator *, IEnumerable_GetEnumerator, (NativeArray_1_System_Byte___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFCF0, bool, Equals, (NativeArray_1_System_Byte___Boxed * __this, NativeArray_1_System_Byte_ other));
IL2CPP_REGISTER_METHOD(0x001DFD30, bool, Equals, (NativeArray_1_System_Byte___Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001DFE40, int32_t, GetHashCode, (NativeArray_1_System_Byte___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02264910, void, Copy, (Byte__Array * src, NativeArray_1_System_Byte_ dst));
IL2CPP_REGISTER_METHOD(0x022649C0, void, Copy, (NativeArray_1_System_Byte_ src, Byte__Array * dst));
IL2CPP_REGISTER_METHOD(0x02264A70, void, Copy, (Byte__Array * src, NativeArray_1_System_Byte_ dst, int32_t length));
IL2CPP_REGISTER_METHOD(0x02264B20, void, Copy, (NativeArray_1_System_Byte_ src, Byte__Array * dst, int32_t length));
IL2CPP_REGISTER_METHOD(0x02264BD0, void, Copy, (Byte__Array * src, int32_t srcIndex, NativeArray_1_System_Byte_ dst, int32_t dstIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x02264D40, void, Copy, (NativeArray_1_System_Byte_ src, int32_t srcIndex, Byte__Array * dst, int32_t dstIndex, int32_t length));
}
