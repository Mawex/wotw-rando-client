#include <interception_macros.h>

namespace app::methods::UnityEngine::Rendering::AsyncGPUReadbackRequest {
IL2CPP_REGISTER_METHOD(0x00218250, bool, get_done, (AsyncGPUReadbackRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002182B0, bool, get_hasError, (AsyncGPUReadbackRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00218310, int32_t, get_layerCount, (AsyncGPUReadbackRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00218370, int32_t, get_layerDataSize, (AsyncGPUReadbackRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00218250, bool, IsDone, (AsyncGPUReadbackRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002182B0, bool, HasError, (AsyncGPUReadbackRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00218310, int32_t, GetLayerCount, (AsyncGPUReadbackRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00218370, int32_t, GetLayerDataSize, (AsyncGPUReadbackRequest__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x002183D0, void, SetScriptingCallback, (AsyncGPUReadbackRequest__Boxed * __this, Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ * callback));
IL2CPP_REGISTER_METHOD(0x002183E0, void *, GetDataRaw, (AsyncGPUReadbackRequest__Boxed * __this, int32_t layer));
IL2CPP_REGISTER_METHOD(0x02973BE0, bool, IsDone_Injected, (AsyncGPUReadbackRequest * _unity_self));
IL2CPP_REGISTER_METHOD(0x02973C30, bool, HasError_Injected, (AsyncGPUReadbackRequest * _unity_self));
IL2CPP_REGISTER_METHOD(0x02973A80, int32_t, GetLayerCount_Injected, (AsyncGPUReadbackRequest * _unity_self));
IL2CPP_REGISTER_METHOD(0x02973AD0, int32_t, GetLayerDataSize_Injected, (AsyncGPUReadbackRequest * _unity_self));
IL2CPP_REGISTER_METHOD(0x02973B20, void, SetScriptingCallback_Injected, (AsyncGPUReadbackRequest * _unity_self, Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_ * callback));
IL2CPP_REGISTER_METHOD(0x02973B80, void *, GetDataRaw_Injected, (AsyncGPUReadbackRequest * _unity_self, int32_t layer));
IL2CPP_REGISTER_METHOD(0x002406C0, NativeArray_1_System_Byte_, GetData, (AsyncGPUReadbackRequest__Boxed * __this, int32_t layer));
IL2CPP_REGISTER_METHODINFO(0x04758858, AsyncGPUReadbackRequest_GetData__MethodInfo);
}
