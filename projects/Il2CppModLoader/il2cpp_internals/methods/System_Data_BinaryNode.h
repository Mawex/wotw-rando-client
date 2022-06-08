using namespace app;

namespace app::methods::System::Data::BinaryNode {
IL2CPP_REGISTER_METHOD(0x01E3FFB0, void, __ctor, (BinaryNode * __this, DataTable * table, int32_t op, ExpressionNode * left, ExpressionNode * right));
IL2CPP_REGISTER_METHOD(0x0214A8D0, void, Bind, (BinaryNode * __this, DataTable * table, List_1_System_Data_DataColumn_ * list));
IL2CPP_REGISTER_METHOD(0x01E34480, Object *, Eval, (BinaryNode * __this));
IL2CPP_REGISTER_METHOD(0x0214A940, Object *, Eval, (BinaryNode * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x0214A970, Object *, Eval, (BinaryNode * __this, Int32__Array * recordNos));
IL2CPP_REGISTER_METHOD(0x0214A9B0, bool, IsConstant, (BinaryNode * __this));
IL2CPP_REGISTER_METHOD(0x0214AA10, bool, IsTableConstant, (BinaryNode * __this));
IL2CPP_REGISTER_METHOD(0x0214AA70, bool, HasLocalAggregate, (BinaryNode * __this));
IL2CPP_REGISTER_METHOD(0x0214AAD0, bool, HasRemoteAggregate, (BinaryNode * __this));
IL2CPP_REGISTER_METHOD(0x0214AB30, bool, DependsOn, (BinaryNode * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x0214ABA0, ExpressionNode *, Optimize, (BinaryNode * __this));
IL2CPP_REGISTER_METHODINFO(0x0471F2A0, BinaryNode_Optimize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0214B1A0, void, SetTypeMismatchError, (BinaryNode * __this, int32_t op, Type * left, Type * right));
IL2CPP_REGISTER_METHODINFO(0x0476CD98, BinaryNode_SetTypeMismatchError__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0214B200, Object *, Eval, (ExpressionNode * expr, DataRow * row, DataRowVersion__Enum version, Int32__Array * recordNos));
IL2CPP_REGISTER_METHOD(0x0214B250, int32_t, BinaryCompare, (BinaryNode * __this, Object * vLeft, Object * vRight, StorageType__Enum resultType, int32_t op));
IL2CPP_REGISTER_METHOD(0x0214B280, int32_t, BinaryCompare, (BinaryNode * __this, Object * vLeft, Object * vRight, StorageType__Enum resultType, int32_t op, CompareInfo * comparer));
IL2CPP_REGISTER_METHOD(0x0214BEF0, Object *, EvalBinaryOp, (BinaryNode * __this, int32_t op, ExpressionNode * left, ExpressionNode * right, DataRow * row, DataRowVersion__Enum version, Int32__Array * recordNos));
IL2CPP_REGISTER_METHODINFO(0x0473D6C0, BinaryNode_EvalBinaryOp__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021508E0, BinaryNode_DataTypePrecedence__Enum, GetPrecedence, (BinaryNode * __this, StorageType__Enum storageType));
IL2CPP_REGISTER_METHOD(0x02150A70, StorageType__Enum, GetPrecedenceType, (BinaryNode_DataTypePrecedence__Enum code));
IL2CPP_REGISTER_METHOD(0x02150BE0, bool, IsMixed, (BinaryNode * __this, StorageType__Enum left, StorageType__Enum right));
IL2CPP_REGISTER_METHOD(0x02150C50, bool, IsMixedSql, (BinaryNode * __this, StorageType__Enum left, StorageType__Enum right));
IL2CPP_REGISTER_METHOD(0x02150CE0, StorageType__Enum, ResultType, (BinaryNode * __this, StorageType__Enum left, StorageType__Enum right, bool lc, bool rc, int32_t op));
IL2CPP_REGISTER_METHODINFO(0x0476D558, BinaryNode_ResultType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021510E0, StorageType__Enum, ResultSqlType, (BinaryNode * __this, StorageType__Enum left, StorageType__Enum right, bool lc, bool rc, int32_t op));
IL2CPP_REGISTER_METHODINFO(0x04704340, BinaryNode_ResultSqlType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x021515C0, int32_t, SqlResultType, (BinaryNode * __this, int32_t typeCode));
}
