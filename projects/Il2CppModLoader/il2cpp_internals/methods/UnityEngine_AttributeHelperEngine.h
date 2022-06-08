using namespace app;

namespace app::methods::UnityEngine::AttributeHelperEngine {
IL2CPP_REGISTER_METHOD(0x0241E7B0, Type *, GetParentTypeDisallowingMultipleInclusion, (Type * type));
IL2CPP_REGISTER_METHOD(0x0241E8F0, Type__Array *, GetRequiredComponents, (Type * klass));
IL2CPP_REGISTER_METHOD(0x0241ED10, int32_t, GetExecuteMode, (Type * klass));
IL2CPP_REGISTER_METHOD(0x0241EE70, int32_t, CheckIsEditorScript, (Type * klass));
IL2CPP_REGISTER_METHOD(0x0241EF90, int32_t, GetDefaultExecutionOrderFor, (Type * klass));
IL2CPP_REGISTER_METHOD(0x0241F050, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0157C0E0, Object *, GetCustomAttributeOfType, (Type * klass));
IL2CPP_REGISTER_METHOD(0x0157C0E0, DefaultExecutionOrder *, GetCustomAttributeOfType, (Type * klass));
IL2CPP_REGISTER_METHODINFO(0x04731950, AttributeHelperEngine_GetCustomAttributeOfType_1__MethodInfo);
}
