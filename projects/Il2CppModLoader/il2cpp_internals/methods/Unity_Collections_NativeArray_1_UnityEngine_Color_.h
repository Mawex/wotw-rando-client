using namespace app;

namespace app::methods::Unity::Collections::NativeArray_1_UnityEngine::Color_ {
IL2CPP_REGISTER_METHOD(0x001DF770, void, __ctor, (NativeArray_1_UnityEngine_Color___Boxed * __this, int32_t length, Allocator__Enum allocator, NativeArrayOptions__Enum options));
IL2CPP_REGISTER_METHODINFO(0x04798AE0, NativeArray_1_UnityEngine_Color___ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001DF8B0, void, Dispose, (NativeArray_1_UnityEngine_Color___Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04762828, NativeArray_1_UnityEngine_Color__Dispose__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001DF930, void, CopyFrom, (NativeArray_1_UnityEngine_Color___Boxed * __this, Color__Array * array));
IL2CPP_REGISTER_METHODINFO(0x04746508, NativeArray_1_UnityEngine_Color__CopyFrom__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001DF9C0, void, CopyTo, (NativeArray_1_UnityEngine_Color___Boxed * __this, Color__Array * array));
IL2CPP_REGISTER_METHODINFO(0x0474CBA8, NativeArray_1_UnityEngine_Color__CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022647E0, void, Allocate, (int32_t length, Allocator__Enum allocator, NativeArray_1_UnityEngine_Color_ * array));
IL2CPP_REGISTER_METHOD(0x001DF780, int32_t, get_Length, (NativeArray_1_UnityEngine_Color___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001E01B0, Color, get_Item, (NativeArray_1_UnityEngine_Color___Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x001E0250, void, set_Item, (NativeArray_1_UnityEngine_Color___Boxed * __this, int32_t index, Color value));
IL2CPP_REGISTER_METHOD(0x001D9B60, bool, get_IsCreated, (NativeArray_1_UnityEngine_Color___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFA50, Color__Array *, ToArray, (NativeArray_1_UnityEngine_Color___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFB30, NativeArray_1_T_Enumerator_UnityEngine_Color_, GetEnumerator, (NativeArray_1_UnityEngine_Color___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFB90, IEnumerator_1_UnityEngine_Color_ *, System_Collections_Generic_IEnumerable_T__GetEnumerator, (NativeArray_1_UnityEngine_Color___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFC30, IEnumerator *, IEnumerable_GetEnumerator, (NativeArray_1_UnityEngine_Color___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001DFCF0, bool, Equals, (NativeArray_1_UnityEngine_Color___Boxed * __this, NativeArray_1_UnityEngine_Color_ other));
IL2CPP_REGISTER_METHOD(0x001DFD30, bool, Equals, (NativeArray_1_UnityEngine_Color___Boxed * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x001DFE40, int32_t, GetHashCode, (NativeArray_1_UnityEngine_Color___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x02264910, void, Copy, (Color__Array * src, NativeArray_1_UnityEngine_Color_ dst));
IL2CPP_REGISTER_METHOD(0x022649C0, void, Copy, (NativeArray_1_UnityEngine_Color_ src, Color__Array * dst));
IL2CPP_REGISTER_METHOD(0x02264A70, void, Copy, (Color__Array * src, NativeArray_1_UnityEngine_Color_ dst, int32_t length));
IL2CPP_REGISTER_METHOD(0x02264B20, void, Copy, (NativeArray_1_UnityEngine_Color_ src, Color__Array * dst, int32_t length));
IL2CPP_REGISTER_METHOD(0x02264BD0, void, Copy, (Color__Array * src, int32_t srcIndex, NativeArray_1_UnityEngine_Color_ dst, int32_t dstIndex, int32_t length));
IL2CPP_REGISTER_METHOD(0x02264D40, void, Copy, (NativeArray_1_UnityEngine_Color_ src, int32_t srcIndex, Color__Array * dst, int32_t dstIndex, int32_t length));
}
