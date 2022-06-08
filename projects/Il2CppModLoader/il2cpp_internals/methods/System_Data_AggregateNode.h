#include <interception_macros.h>

namespace app::methods::System::Data::AggregateNode {
IL2CPP_REGISTER_METHOD(0x02148550, void, __ctor, (AggregateNode * __this, DataTable * table, FunctionId__Enum aggregateType, String * columnName));
IL2CPP_REGISTER_METHOD(0x02148570, void, __ctor, (AggregateNode * __this, DataTable * table, FunctionId__Enum aggregateType, String * columnName, bool local, String * relationName));
IL2CPP_REGISTER_METHODINFO(0x04757FB8, AggregateNode__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021486F0, void, Bind, (AggregateNode * __this, DataTable * table, List_1_System_Data_DataColumn_ * list));
IL2CPP_REGISTER_METHODINFO(0x0478D4B8, AggregateNode_Bind__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021489D0, void, Bind, (DataRelation * relation, List_1_System_Data_DataColumn_ * list));
IL2CPP_REGISTER_METHOD(0x01E34480, Object *, Eval, (AggregateNode * __this));
IL2CPP_REGISTER_METHOD(0x02148B70, Object *, Eval, (AggregateNode * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHODINFO(0x047027D8, AggregateNode_Eval_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02149180, Object *, Eval, (AggregateNode * __this, Int32__Array * records));
IL2CPP_REGISTER_METHODINFO(0x0476C9D0, AggregateNode_Eval_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsConstant, (AggregateNode * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, IsTableConstant, (AggregateNode * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, HasLocalAggregate, (AggregateNode * __this));
IL2CPP_REGISTER_METHOD(0x02149280, bool, HasRemoteAggregate, (AggregateNode * __this));
IL2CPP_REGISTER_METHOD(0x02149290, bool, DependsOn, (AggregateNode * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x004C50A0, ExpressionNode *, Optimize, (AggregateNode * __this));
}
