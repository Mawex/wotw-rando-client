using namespace app;

namespace app::methods::DynamicInstantiationDescriptor {
IL2CPP_REGISTER_METHOD(0x030DC4B0, void, __ctor, (DynamicInstantiationDescriptor * __this, GameObject * prefab, int32_t count, Nullable_1_Single_ highPriorityPrewarmRatio));
IL2CPP_REGISTER_METHOD(0x030DC4C0, bool, Equals, (DynamicInstantiationDescriptor * __this, DynamicInstantiationDescriptor * other));
IL2CPP_REGISTER_METHOD(0x030DC670, bool, Equals, (DynamicInstantiationDescriptor * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x030DC760, int32_t, GetHashCode, (DynamicInstantiationDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x030DC880, bool, operator___, (DynamicInstantiationDescriptor * left, DynamicInstantiationDescriptor * right));
IL2CPP_REGISTER_METHOD(0x030DC8A0, bool, operator___, (DynamicInstantiationDescriptor * left, DynamicInstantiationDescriptor * right));
IL2CPP_REGISTER_METHOD(0x030DC980, String *, ToString, (DynamicInstantiationDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x030DCA90, Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_ *, get_ReflectionCache, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x030DCC60, void, ClearCache, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x030DCD80, List_1_DynamicInstantiationDescriptor_ReflectionInfo_ *, GetReflectionInfo, (Type * componentType));
IL2CPP_REGISTER_METHOD(0x030DD290, Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo_, GetInfoForDynamicInstantiationProvider, (Type * componentType, FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x030DD550, MethodInfo_1 *, GetMethodInfoForDynamicInstantiationProvider, (Type * componentType, FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x030DD7C0, Nullable_1_DynamicInstantiationDescriptor_ReflectionInfo_, GetInfoForDynamicInstantiation, (Type * componentType, FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x030DDA90, DynamicInstantiationDescriptor_CountGetter *, GetConstantCountGetter, (int32_t constant));
IL2CPP_REGISTER_METHOD(0x030DDCB0, DynamicInstantiationDescriptor_CountGetter *, CreateCountGetter, (Type * componentType, FieldInfo_1 * field, bool isArrayOrList, DynamicInstantiationAttribute * attribute));
IL2CPP_REGISTER_METHOD(0x030DEAC0, String *, GetObjectNameSafe, (GameObject * obj));
IL2CPP_REGISTER_METHOD(0x030DEB70, List_1_DynamicInstantiationDescriptor_ *, FromMonoBehaviourOld, (MonoBehaviour * component));
IL2CPP_REGISTER_METHODINFO(0x047148F0, DynamicInstantiationDescriptor_FromMonoBehaviourOld__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030DFFF0, List_1_DynamicInstantiationDescriptor_ *, FromMonoBehaviour, (MonoBehaviour * component));
IL2CPP_REGISTER_METHOD(0x030E01D0, void, __cctor, (MethodInfo * method));
}
