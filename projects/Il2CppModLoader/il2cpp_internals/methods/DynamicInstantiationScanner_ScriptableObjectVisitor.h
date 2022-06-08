#include <interception_macros.h>

namespace app::methods::DynamicInstantiationScanner_ScriptableObjectVisitor {
IL2CPP_REGISTER_METHOD(0x030E7390, void, __ctor, (DynamicInstantiationScanner_ScriptableObjectVisitor * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x030E73A0, Expression *, Visit, (DynamicInstantiationScanner_ScriptableObjectVisitor * __this, DynamicInstantiationScanner_VisitorCtx * visitorCtx));
IL2CPP_REGISTER_METHOD(0x030E7520, void, Evaluate, (DynamicInstantiationScanner * scanner, DynamicInstantiationScanner_EvaluationCtx * * evaluationCtx, ScriptableObject * so));
IL2CPP_REGISTER_METHOD(0x030E8110, void, __cctor, ());
}
