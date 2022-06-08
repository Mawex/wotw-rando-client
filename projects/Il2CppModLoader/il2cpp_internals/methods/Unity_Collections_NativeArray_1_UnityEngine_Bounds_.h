#include <interception_macros.h>

namespace app::methods::Unity::Collections::NativeArray_1_UnityEngine::Bounds_ {
IL2CPP_REGISTER_METHOD(0x001DF770, void, __ctor, (NativeArray_1_UnityEngine_Bounds___Boxed * __this, int32_t length, Allocator__Enum allocator, NativeArrayOptions__Enum options));
IL2CPP_REGISTER_METHODINFO(0x04786D70, NativeArray_1_UnityEngine_Bounds___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001D9B60, bool, get_IsCreated, (NativeArray_1_UnityEngine_Bounds___Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0474AB10, NativeArray_1_UnityEngine_Bounds__get_IsCreated__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001DF8B0, void, Dispose, (NativeArray_1_UnityEngine_Bounds___Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x047231A8, NativeArray_1_UnityEngine_Bounds__Dispose__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022647E0, void, Allocate, (int32_t length, Allocator__Enum allocator, NativeArray_1_UnityEngine_Bounds_ * array));
IL2CPP_REGISTER_METHOD(0x001DF780, int32_t, get_Length, (NativeArray_1_UnityEngine_Bounds___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFEF0, Bounds, get_Item, (NativeArray_1_UnityEngine_Bounds___Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x001DFFA0, void, set_Item, (NativeArray_1_UnityEngine_Bounds___Boxed * __this, int32_t index, Bounds value));
IL2CPP_REGISTER_METHOD(0x001DF930, void, CopyFrom, (NativeArray_1_UnityEngine_Bounds___Boxed * __this, Bounds__Array * array));
IL2CPP_REGISTER_METHOD(0x001DF9C0, void, CopyTo, (NativeArray_1_UnityEngine_Bounds___Boxed * __this, Bounds__Array * array));
IL2CPP_REGISTER_METHOD(0x001DFA50, Bounds__Array *, ToArray, (NativeArray_1_UnityEngine_Bounds___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFB30, NativeArray_1_T_Enumerator_UnityEngine_Bounds_, GetEnumerator, (NativeArray_1_UnityEngine_Bounds___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFB90, IEnumerator_1_UnityEngine_Bounds_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (NativeArray_1_UnityEngine_Bounds___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFC30, IEnumerator *, IEnumerable_GetEnumerator, (NativeArray_1_UnityEngine_Bounds___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFCF0, bool, Equals, (NativeArray_1_UnityEngine_Bounds___Boxed * __this, NativeArray_1_UnityEngine_Bounds_ other));
IL2CPP_REGISTER_METHOD(0x001DFD30, bool, Equals, (NativeArray_1_UnityEngine_Bounds___Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001DFE40, int32_t, GetHashCode, (NativeArray_1_UnityEngine_Bounds___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02264910, void, Copy, (Bounds__Array * src, NativeArray_1_UnityEngine_Bounds_ dst));
IL2CPP_REGISTER_METHOD(0x022649C0, void, Copy, (NativeArray_1_UnityEngine_Bounds_ src, Bounds__Array * dst));
IL2CPP_REGISTER_METHOD(0x02264A70, void, Copy, (Bounds__Array * src, NativeArray_1_UnityEngine_Bounds_ dst, int32_t length));
IL2CPP_REGISTER_METHOD(0x02264B20, void, Copy, (NativeArray_1_UnityEngine_Bounds_ src, Bounds__Array * dst, int32_t length));
IL2CPP_REGISTER_METHOD(0x02264BD0, void, Copy, (Bounds__Array * src, int32_t srcIndex, NativeArray_1_UnityEngine_Bounds_ dst, int32_t dstIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x02264D40, void, Copy, (NativeArray_1_UnityEngine_Bounds_ src, int32_t srcIndex, Bounds__Array * dst, int32_t dstIndex, int32_t length));
}
