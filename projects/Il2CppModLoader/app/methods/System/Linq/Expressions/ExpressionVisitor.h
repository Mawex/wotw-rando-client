#pragma once
#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::ExpressionVisitor {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ExpressionVisitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022CCC60, app::Expression *, Visit_1, (app::ExpressionVisitor * this_ptr, app::Expression * node))
    IL2CPP_REGISTER_METHOD(0x022CCC90, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, Visit_2, (app::ExpressionVisitor * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ * nodes))
    IL2CPP_REGISTER_METHOD(0x022CCFE0, app::Expression__Array *, VisitArguments, (app::ExpressionVisitor * this_ptr, app::IArgumentProvider * nodes))
    IL2CPP_REGISTER_METHOD(0x022CCFF0, app::ParameterExpression__Array *, VisitParameters, (app::ExpressionVisitor * this_ptr, app::IParameterProvider * nodes, app::String * caller_name))
    IL2CPP_REGISTER_METHOD(0x022CD000, app::Expression *, VisitBinary, (app::ExpressionVisitor * this_ptr, app::BinaryExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CD130, app::Expression *, VisitBlock, (app::ExpressionVisitor * this_ptr, app::BlockExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CD250, app::Expression *, VisitConditional, (app::ExpressionVisitor * this_ptr, app::ConditionalExpression * node))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Expression *, VisitConstant, (app::ExpressionVisitor * this_ptr, app::ConstantExpression * node))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Expression *, VisitDebugInfo, (app::ExpressionVisitor * this_ptr, app::DebugInfoExpression * node))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Expression *, VisitDefault, (app::ExpressionVisitor * this_ptr, app::DefaultExpression * node))
    IL2CPP_REGISTER_METHOD(0x01FA38D0, app::Expression *, VisitExtension, (app::ExpressionVisitor * this_ptr, app::Expression * node))
    IL2CPP_REGISTER_METHOD(0x022CD3E0, app::Expression *, VisitGoto, (app::ExpressionVisitor * this_ptr, app::GotoExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CD520, app::Expression *, VisitInvocation, (app::ExpressionVisitor * this_ptr, app::InvocationExpression * node))
    IL2CPP_REGISTER_METHOD(0x00502220, app::LabelTarget *, VisitLabelTarget, (app::ExpressionVisitor * this_ptr, app::LabelTarget * node))
    IL2CPP_REGISTER_METHOD(0x022CD5B0, app::Expression *, VisitLabel, (app::ExpressionVisitor * this_ptr, app::LabelExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CD6C0, app::Expression *, VisitLoop, (app::ExpressionVisitor * this_ptr, app::LoopExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CD800, app::Expression *, VisitMember, (app::ExpressionVisitor * this_ptr, app::MemberExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CD900, app::Expression *, VisitIndex, (app::ExpressionVisitor * this_ptr, app::IndexExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CDA20, app::Expression *, VisitMethodCall, (app::ExpressionVisitor * this_ptr, app::MethodCallExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CDAE0, app::Expression *, VisitNewArray, (app::ExpressionVisitor * this_ptr, app::NewArrayExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CDB20, app::Expression *, VisitNew, (app::ExpressionVisitor * this_ptr, app::NewExpression * node))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Expression *, VisitParameter, (app::ExpressionVisitor * this_ptr, app::ParameterExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CDC60, app::Expression *, VisitRuntimeVariables, (app::ExpressionVisitor * this_ptr, app::RuntimeVariablesExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CDDC0, app::SwitchCase *, VisitSwitchCase, (app::ExpressionVisitor * this_ptr, app::SwitchCase * node))
    IL2CPP_REGISTER_METHOD(0x022CDF00, app::Expression *, VisitSwitch, (app::ExpressionVisitor * this_ptr, app::SwitchExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CE2E0, app::CatchBlock *, VisitCatchBlock, (app::ExpressionVisitor * this_ptr, app::CatchBlock * node))
    IL2CPP_REGISTER_METHOD(0x022CE490, app::Expression *, VisitTry, (app::ExpressionVisitor * this_ptr, app::TryExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CE780, app::Expression *, VisitTypeBinary, (app::ExpressionVisitor * this_ptr, app::TypeBinaryExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CE8B0, app::Expression *, VisitUnary, (app::ExpressionVisitor * this_ptr, app::UnaryExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CE9F0, app::Expression *, VisitMemberInit, (app::ExpressionVisitor * this_ptr, app::MemberInitExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CEC80, app::Expression *, VisitListInit, (app::ExpressionVisitor * this_ptr, app::ListInitExpression * node))
    IL2CPP_REGISTER_METHOD(0x022CEF10, app::ElementInit *, VisitElementInit, (app::ExpressionVisitor * this_ptr, app::ElementInit * node))
    IL2CPP_REGISTER_METHOD(0x022CEFF0, app::MemberBinding *, VisitMemberBinding, (app::ExpressionVisitor * this_ptr, app::MemberBinding * node))
    IL2CPP_REGISTER_METHODINFO(0x04758BB8, ExpressionVisitor_VisitMemberBinding__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022CF1A0, app::MemberAssignment *, VisitMemberAssignment, (app::ExpressionVisitor * this_ptr, app::MemberAssignment * node))
    IL2CPP_REGISTER_METHOD(0x022CF280, app::MemberMemberBinding *, VisitMemberMemberBinding, (app::ExpressionVisitor * this_ptr, app::MemberMemberBinding * node))
    IL2CPP_REGISTER_METHOD(0x022CF4E0, app::MemberListBinding *, VisitMemberListBinding, (app::ExpressionVisitor * this_ptr, app::MemberListBinding * node))
    IL2CPP_REGISTER_METHOD(0x022CF740, app::UnaryExpression *, ValidateUnary, (app::UnaryExpression * before, app::UnaryExpression * after))
    IL2CPP_REGISTER_METHODINFO(0x04760BD0, ExpressionVisitor_ValidateUnary__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022CF8F0, app::BinaryExpression *, ValidateBinary, (app::BinaryExpression * before, app::BinaryExpression * after))
    IL2CPP_REGISTER_METHODINFO(0x04710178, ExpressionVisitor_ValidateBinary__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022CFB40, app::SwitchExpression *, ValidateSwitch, (app::SwitchExpression * before, app::SwitchExpression * after))
    IL2CPP_REGISTER_METHODINFO(0x04784B80, ExpressionVisitor_ValidateSwitch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022CFC90, void, ValidateChildType, (app::Type * before, app::Type * after, app::String * method_name))
    IL2CPP_REGISTER_METHODINFO(0x047287D0, ExpressionVisitor_ValidateChildType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EBBAC0, app::ReadOnlyCollection_1_System_Object_ *, Visit_3, (app::ReadOnlyCollection_1_System_Object_ * nodes, app::Func_2_Object_Object_ * element_visitor))
    IL2CPP_REGISTER_METHOD(0x01579F40, app::Object *, VisitAndConvert_1, (app::ExpressionVisitor * this_ptr, app::Object * node, app::String * caller_name))
    IL2CPP_REGISTER_METHODINFO(0x0477C138, ExpressionVisitor_VisitAndConvert__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EBBDE0, app::ReadOnlyCollection_1_System_Object_ *, VisitAndConvert_2, (app::ExpressionVisitor * this_ptr, app::ReadOnlyCollection_1_System_Object_ * nodes, app::String * caller_name))
    IL2CPP_REGISTER_METHODINFO(0x0478AF48, ExpressionVisitor_VisitAndConvert_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0153BF50, app::Expression *, VisitLambda, (app::ExpressionVisitor * this_ptr, app::Expression_1_System_Object_ * node))
    IL2CPP_REGISTER_METHOD(0x01579F40, app::ParameterExpression *, VisitAndConvert_3, (app::ExpressionVisitor * this_ptr, app::ParameterExpression * node, app::String * caller_name))
    IL2CPP_REGISTER_METHODINFO(0x04770478, ExpressionVisitor_VisitAndConvert_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EBBAC0, app::ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_ *, Visit_4, (app::ReadOnlyCollection_1_System_Linq_Expressions_SwitchCase_ * nodes, app::Func_2_System_Linq_Expressions_SwitchCase_System_Linq_Expressions_SwitchCase_ * element_visitor))
    IL2CPP_REGISTER_METHODINFO(0x047239F0, ExpressionVisitor_Visit_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EBBAC0, app::ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_ *, Visit_5, (app::ReadOnlyCollection_1_System_Linq_Expressions_CatchBlock_ * nodes, app::Func_2_System_Linq_Expressions_CatchBlock_System_Linq_Expressions_CatchBlock_ * element_visitor))
    IL2CPP_REGISTER_METHODINFO(0x0471A090, ExpressionVisitor_Visit_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01579F40, app::LambdaExpression *, VisitAndConvert_4, (app::ExpressionVisitor * this_ptr, app::LambdaExpression * node, app::String * caller_name))
    IL2CPP_REGISTER_METHODINFO(0x0472AC10, ExpressionVisitor_VisitAndConvert_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EBBDE0, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, VisitAndConvert_5, (app::ExpressionVisitor * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * nodes, app::String * caller_name))
    IL2CPP_REGISTER_METHODINFO(0x04796300, ExpressionVisitor_VisitAndConvert_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01579F40, app::NewExpression *, VisitAndConvert_6, (app::ExpressionVisitor * this_ptr, app::NewExpression * node, app::String * caller_name))
    IL2CPP_REGISTER_METHODINFO(0x04773440, ExpressionVisitor_VisitAndConvert_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EBBAC0, app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ *, Visit_6, (app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ * nodes, app::Func_2_System_Linq_Expressions_MemberBinding_System_Linq_Expressions_MemberBinding_ * element_visitor))
    IL2CPP_REGISTER_METHODINFO(0x0478CE60, ExpressionVisitor_Visit_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EBBAC0, app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ *, Visit_7, (app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ * nodes, app::Func_2_System_Linq_Expressions_ElementInit_System_Linq_Expressions_ElementInit_ * element_visitor))
    IL2CPP_REGISTER_METHODINFO(0x047389A8, ExpressionVisitor_Visit_6__MethodInfo)
}
