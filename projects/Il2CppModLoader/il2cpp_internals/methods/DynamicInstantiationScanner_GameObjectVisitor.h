#include <interception_macros.h>

namespace app::methods::DynamicInstantiationScanner_GameObjectVisitor {
IL2CPP_REGISTER_METHOD(0x030E5C50, void, __ctor, (DynamicInstantiationScanner_GameObjectVisitor * __this, bool isMoonReference, FieldInfo_1 * field, DynamicInstantiationAttribute * attribute));
IL2CPP_REGISTER_METHOD(0x030E5D50, Expression *, Visit, (DynamicInstantiationScanner_GameObjectVisitor * __this, DynamicInstantiationScanner_VisitorCtx * visitorCtx));
IL2CPP_REGISTER_METHOD(0x030E6E60, void, Evaluate, (FieldInfo_1 * field, DynamicInstantiationScanner_EvaluationCtx * * evaluationCtx, GameObject * go, int32_t count, bool nullable));
IL2CPP_REGISTER_METHOD(0x030E7150, void, EvaluateMoonReference, (FieldInfo_1 * field, DynamicInstantiationScanner_EvaluationCtx * * evaluationCtx, MoonReference_1_UnityEngine_GameObject_ * moonReference, int32_t count, bool nullable));
IL2CPP_REGISTER_METHOD(0x030E7280, void, __cctor, ());
}
