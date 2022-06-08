using namespace app;

namespace app::methods::System::Data::LookupNode {
IL2CPP_REGISTER_METHOD(0x01E40A50, void, __ctor, (LookupNode * __this, DataTable * table, String * columnName, String * relationName));
IL2CPP_REGISTER_METHOD(0x01E40A60, void, Bind, (LookupNode * __this, DataTable * table, List_1_System_Data_DataColumn_ * list));
IL2CPP_REGISTER_METHODINFO(0x0475B050, LookupNode_Bind__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E40D10, Object *, Eval, (LookupNode * __this));
IL2CPP_REGISTER_METHODINFO(0x047789E8, LookupNode_Eval__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E40D50, Object *, Eval, (LookupNode * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHODINFO(0x04721408, LookupNode_Eval_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E40EB0, Object *, Eval, (LookupNode * __this, Int32__Array * recordNos));
IL2CPP_REGISTER_METHODINFO(0x04715178, LookupNode_Eval_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsConstant, (LookupNode * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsTableConstant, (LookupNode * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, HasLocalAggregate, (LookupNode * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, HasRemoteAggregate, (LookupNode * __this));
IL2CPP_REGISTER_METHOD(0x01E40F00, bool, DependsOn, (LookupNode * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x004C50A0, ExpressionNode *, Optimize, (LookupNode * __this));
}
