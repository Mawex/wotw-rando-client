#include <interception_macros.h>

namespace app::methods::System::Data::UnaryNode {
IL2CPP_REGISTER_METHOD(0x0199E410, void, __ctor, (UnaryNode * __this, DataTable * table, int32_t op, ExpressionNode * right));
IL2CPP_REGISTER_METHOD(0x022BE950, void, Bind, (UnaryNode * __this, DataTable * table, List_1_System_Data_DataColumn_ * list));
IL2CPP_REGISTER_METHOD(0x01E34480, Object *, Eval, (UnaryNode * __this));
IL2CPP_REGISTER_METHOD(0x022BE980, Object *, Eval, (UnaryNode * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x022BE9D0, Object *, Eval, (UnaryNode * __this, Int32__Array * recordNos));
IL2CPP_REGISTER_METHOD(0x022BEA00, Object *, EvalUnaryOp, (UnaryNode * __this, int32_t op, Object * vl));
IL2CPP_REGISTER_METHODINFO(0x0475ADC0, UnaryNode_EvalUnaryOp__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022BF7B0, bool, IsConstant, (UnaryNode * __this));
IL2CPP_REGISTER_METHOD(0x022BF7E0, bool, IsTableConstant, (UnaryNode * __this));
IL2CPP_REGISTER_METHOD(0x022BF810, bool, HasLocalAggregate, (UnaryNode * __this));
IL2CPP_REGISTER_METHOD(0x022BF840, bool, HasRemoteAggregate, (UnaryNode * __this));
IL2CPP_REGISTER_METHOD(0x022BF870, bool, DependsOn, (UnaryNode * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x022BF8A0, ExpressionNode *, Optimize, (UnaryNode * __this));
}
