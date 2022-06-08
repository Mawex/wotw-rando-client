using namespace app;

namespace app::methods::UnityEngine::Experimental::Rendering::ScriptableRenderContext {
IL2CPP_REGISTER_METHOD(0x0010FD20, void, __ctor, (ScriptableRenderContext__Boxed * __this, void * ptr));
IL2CPP_REGISTER_METHOD(0x001F1CA0, void, Submit_Internal, (ScriptableRenderContext__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F1D00, void, PrepareDrawRenderers_Internal, (ScriptableRenderContext__Boxed * __this, FilterResults renderers, DrawRendererSettings * drawSettings, FilterRenderersSettings filterSettings));
IL2CPP_REGISTER_METHOD(0x001F1DA0, void, DrawRenderers_Internal, (ScriptableRenderContext__Boxed * __this, FilterResults renderers, DrawRendererSettings * drawSettings, FilterRenderersSettings filterSettings));
IL2CPP_REGISTER_METHOD(0x001F1E40, void, DrawRenderers_StateBlock_Internal, (ScriptableRenderContext__Boxed * __this, FilterResults renderers, DrawRendererSettings * drawSettings, FilterRenderersSettings filterSettings, RenderStateBlock stateBlock));
IL2CPP_REGISTER_METHOD(0x001F1F40, void, ExecuteCommandBuffer_Internal, (ScriptableRenderContext__Boxed * __this, CommandBuffer * commandBuffer, bool copy));
IL2CPP_REGISTER_METHOD(0x001F1F50, void, SetupCameraProperties_Internal, (ScriptableRenderContext__Boxed * __this, Camera * camera, bool stereoSetup));
IL2CPP_REGISTER_METHOD(0x001F1F60, void, DrawSkybox_Internal, (ScriptableRenderContext__Boxed * __this, Camera * camera));
IL2CPP_REGISTER_METHOD(0x001F1F70, void, Submit, (ScriptableRenderContext__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x001F1FD0, void, DrawRenderers, (ScriptableRenderContext__Boxed * __this, FilterResults renderers, DrawRendererSettings * drawSettings, FilterRenderersSettings filterSettings, bool preWarm));
IL2CPP_REGISTER_METHOD(0x001F2020, void, DrawRenderers, (ScriptableRenderContext__Boxed * __this, FilterResults renderers, DrawRendererSettings * drawSettings, FilterRenderersSettings filterSettings, RenderStateBlock stateBlock));
IL2CPP_REGISTER_METHOD(0x001F20D0, void, ExecuteCommandBuffer, (ScriptableRenderContext__Boxed * __this, CommandBuffer * commandBuffer, bool copy));
IL2CPP_REGISTER_METHODINFO(0x0476DC58, ScriptableRenderContext_ExecuteCommandBuffer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x001F20E0, void, SetupCameraProperties, (ScriptableRenderContext__Boxed * __this, Camera * camera, bool stereoSetup));
IL2CPP_REGISTER_METHOD(0x001F2120, void, DrawSkybox, (ScriptableRenderContext__Boxed * __this, Camera * camera));
IL2CPP_REGISTER_METHOD(0x001F2130, void, CheckValid, (ScriptableRenderContext__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04750CC0, ScriptableRenderContext_CheckValid__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02524AA0, void, Submit_Internal_Injected, (ScriptableRenderContext * _unity_self));
IL2CPP_REGISTER_METHOD(0x02524AF0, void, PrepareDrawRenderers_Internal_Injected, (ScriptableRenderContext * _unity_self, FilterResults * renderers, DrawRendererSettings * drawSettings, FilterRenderersSettings * filterSettings));
IL2CPP_REGISTER_METHOD(0x02524B70, void, DrawRenderers_Internal_Injected, (ScriptableRenderContext * _unity_self, FilterResults * renderers, DrawRendererSettings * drawSettings, FilterRenderersSettings * filterSettings));
IL2CPP_REGISTER_METHOD(0x02524BF0, void, DrawRenderers_StateBlock_Internal_Injected, (ScriptableRenderContext * _unity_self, FilterResults * renderers, DrawRendererSettings * drawSettings, FilterRenderersSettings * filterSettings, RenderStateBlock * stateBlock));
IL2CPP_REGISTER_METHOD(0x02524500, void, ExecuteCommandBuffer_Internal_Injected, (ScriptableRenderContext * _unity_self, CommandBuffer * commandBuffer, bool copy));
IL2CPP_REGISTER_METHOD(0x02524580, void, SetupCameraProperties_Internal_Injected, (ScriptableRenderContext * _unity_self, Camera * camera, bool stereoSetup));
IL2CPP_REGISTER_METHOD(0x02524600, void, DrawSkybox_Internal_Injected, (ScriptableRenderContext * _unity_self, Camera * camera));
}
