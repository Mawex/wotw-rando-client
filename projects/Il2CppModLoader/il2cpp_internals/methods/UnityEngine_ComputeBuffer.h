#include <interception_macros.h>

namespace app::methods::UnityEngine::ComputeBuffer {
IL2CPP_REGISTER_METHOD(0x024296E0, void, __ctor, (ComputeBuffer * __this, int32_t count, int32_t stride));
IL2CPP_REGISTER_METHOD(0x02429710, void, __ctor, (ComputeBuffer * __this, int32_t count, int32_t stride, ComputeBufferType__Enum type));
IL2CPP_REGISTER_METHOD(0x02429730, void, __ctor, (ComputeBuffer * __this, int32_t count, int32_t stride, ComputeBufferType__Enum type, int32_t stackDepth));
IL2CPP_REGISTER_METHODINFO(0x0474EEF0, ComputeBuffer__ctor_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02429890, void, Finalize, (ComputeBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02429920, void, Dispose, (ComputeBuffer * __this));
IL2CPP_REGISTER_METHOD(0x024299D0, void, Dispose, (ComputeBuffer * __this, bool disposing));
IL2CPP_REGISTER_METHOD(0x02429AE0, void *, InitBuffer, (int32_t count, int32_t stride, ComputeBufferType__Enum type));
IL2CPP_REGISTER_METHOD(0x02429B50, void, DestroyBuffer, (ComputeBuffer * buf));
IL2CPP_REGISTER_METHOD(0x02429BA0, void, Release, (ComputeBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02429BB0, bool, IsValid, (ComputeBuffer * __this));
IL2CPP_REGISTER_METHOD(0x02429C30, void, SetData, (ComputeBuffer * __this, Array * data));
IL2CPP_REGISTER_METHODINFO(0x0478ABB8, ComputeBuffer_SetData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02429E30, void, SetData, (ComputeBuffer * __this, Array * data, int32_t managedBufferStartIndex, int32_t computeBufferStartIndex, int32_t count));
IL2CPP_REGISTER_METHODINFO(0x04775048, ComputeBuffer_SetData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0242A1C0, void, InternalSetData, (ComputeBuffer * __this, Array * data, int32_t managedBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize));
IL2CPP_REGISTER_METHOD(0x0242A250, void, GetData, (ComputeBuffer * __this, Array * data));
IL2CPP_REGISTER_METHODINFO(0x0472CA00, ComputeBuffer_GetData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0242A550, void, InternalGetData, (ComputeBuffer * __this, Array * data, int32_t managedBufferStartIndex, int32_t computeBufferStartIndex, int32_t count, int32_t elemSize));
IL2CPP_REGISTER_METHOD(0x0242A5E0, void, SetCounterValue, (ComputeBuffer * __this, uint32_t counterValue));
IL2CPP_REGISTER_METHOD(0x0242A640, void, CopyCount, (ComputeBuffer * src, ComputeBuffer * dst, int32_t dstOffsetBytes));
IL2CPP_REGISTER_METHOD(0x015E4290, void, SetData, (ComputeBuffer * __this, List_1_MeshTrail_MeshTrailEmitter_ * data));
IL2CPP_REGISTER_METHODINFO(0x04755FA0, ComputeBuffer_SetData_2__MethodInfo);
}
