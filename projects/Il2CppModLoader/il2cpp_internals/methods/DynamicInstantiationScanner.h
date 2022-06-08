#include <interception_macros.h>

namespace app::methods::DynamicInstantiationScanner {
IL2CPP_REGISTER_METHOD(0x030E0670, void, EmitException, (Exception * ex, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x030E0720, void, EmitError, (String * message, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x002FA000, void, EmitWarning, (String * message, Object_1 * obj));
IL2CPP_REGISTER_METHOD(0x030E07E0, bool, IsSerializable, (FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x030E08B0, bool, IsIncludedField, (FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x030E0AC0, bool, IsIncludedType, (Type * type));
IL2CPP_REGISTER_METHOD(0x030E0E30, Type *, GetListElementType, (Type * type));
IL2CPP_REGISTER_METHOD(0x030E0F90, String *, GetFieldPath, (FieldInfo_1 * field));
IL2CPP_REGISTER_METHOD(0x030E1080, String *, GetMethodPath, (MethodInfo_1 * method_1));
IL2CPP_REGISTER_METHOD(0x030E1170, String *, GetGameObjectName, (GameObject * go));
IL2CPP_REGISTER_METHOD(0x030E1240, String *, GetGameObjectName, (MonoBehaviour * component));
IL2CPP_REGISTER_METHOD(0x030E1340, void, __ctor, (DynamicInstantiationScanner * __this, bool findGameObjectsWithoutAttribute));
IL2CPP_REGISTER_METHOD(0x030E15C0, DynamicInstantiationScanner_Visitor *, GetVisitor, (DynamicInstantiationScanner * __this, Type * type, FieldInfo_1 * declaringField));
IL2CPP_REGISTER_METHOD(0x030E20A0, void, EvaluateComponentOrScriptableObject, (DynamicInstantiationScanner * __this, Object_1 * obj, DynamicInstantiationScanner_EvaluationCtx * * evaluationCtx));
IL2CPP_REGISTER_METHOD(0x030E2940, List_1_DynamicInstantiationDescriptor_ *, FromMonoBehaviour, (DynamicInstantiationScanner * __this, MonoBehaviour * component));
IL2CPP_REGISTER_METHOD(0x030E2AD0, void, __cctor, ());
}
