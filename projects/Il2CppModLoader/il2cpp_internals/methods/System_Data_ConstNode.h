using namespace app;

namespace app::methods::System::Data::ConstNode {
IL2CPP_REGISTER_METHOD(0x0286A6F0, void, __ctor, (ConstNode * __this, DataTable * table, ValueType__Enum type, Object * constant));
IL2CPP_REGISTER_METHOD(0x0286A710, void, __ctor, (ConstNode * __this, DataTable * table, ValueType__Enum type, Object * constant, bool fParseQuotes));
IL2CPP_REGISTER_METHOD(0x002FA490, void, Bind, (ConstNode * __this, DataTable * table, List_1_System_Data_DataColumn_ * list));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, Eval, (ConstNode * __this));
IL2CPP_REGISTER_METHOD(0x015A1590, Object *, Eval, (ConstNode * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x015A1590, Object *, Eval, (ConstNode * __this, Int32__Array * recordNos));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsConstant, (ConstNode * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsTableConstant, (ConstNode * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, HasLocalAggregate, (ConstNode * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, HasRemoteAggregate, (ConstNode * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, ExpressionNode *, Optimize, (ConstNode * __this));
IL2CPP_REGISTER_METHOD(0x0286AA30, Object *, SmallestDecimal, (ConstNode * __this, Object * constant));
IL2CPP_REGISTER_METHOD(0x0286ACC0, Object *, SmallestNumeric, (ConstNode * __this, Object * constant));
}
