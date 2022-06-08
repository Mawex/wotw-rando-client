#include <interception_macros.h>

namespace app::methods::System::Data::FunctionNode {
IL2CPP_REGISTER_METHOD(0x01E33B10, void, __ctor, (FunctionNode * __this, DataTable * table, String * name));
IL2CPP_REGISTER_METHODINFO(0x0472D060, FunctionNode__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E33D90, void, AddArgument, (FunctionNode * __this, ExpressionNode * argument));
IL2CPP_REGISTER_METHODINFO(0x047605E0, FunctionNode_AddArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E33FF0, void, Bind, (FunctionNode * __this, DataTable * table, List_1_System_Data_DataColumn_ * list));
IL2CPP_REGISTER_METHODINFO(0x0477C050, FunctionNode_Bind__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E34480, Object *, Eval, (FunctionNode * __this));
IL2CPP_REGISTER_METHOD(0x01E344A0, Object *, Eval, (FunctionNode * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHODINFO(0x04731988, FunctionNode_Eval_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E35240, Object *, Eval, (FunctionNode * __this, Int32__Array * recordNos));
IL2CPP_REGISTER_METHODINFO(0x04709838, FunctionNode_Eval_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E35290, bool, IsConstant, (FunctionNode * __this));
IL2CPP_REGISTER_METHOD(0x01E35310, bool, IsTableConstant, (FunctionNode * __this));
IL2CPP_REGISTER_METHOD(0x01E353A0, bool, HasLocalAggregate, (FunctionNode * __this));
IL2CPP_REGISTER_METHOD(0x01E35430, bool, HasRemoteAggregate, (FunctionNode * __this));
IL2CPP_REGISTER_METHOD(0x01E354C0, bool, DependsOn, (FunctionNode * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x01E35560, ExpressionNode *, Optimize, (FunctionNode * __this));
IL2CPP_REGISTER_METHODINFO(0x04720F40, FunctionNode_Optimize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E358F0, Type *, GetDataType, (FunctionNode * __this, ExpressionNode * node));
IL2CPP_REGISTER_METHODINFO(0x04767888, FunctionNode_GetDataType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E35BC0, Object *, EvalFunction, (FunctionNode * __this, FunctionId__Enum id, Object__Array * argumentValues, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHODINFO(0x04741CB0, FunctionNode_EvalFunction__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E37910, FunctionId__Enum, get_Aggregate, (FunctionNode * __this));
IL2CPP_REGISTER_METHOD(0x01E37A10, bool, get_IsAggregate, (FunctionNode * __this));
IL2CPP_REGISTER_METHOD(0x01E37DC0, void, Check, (FunctionNode * __this));
IL2CPP_REGISTER_METHODINFO(0x0474D160, FunctionNode_Check__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E380F0, void, __cctor, ());
}
