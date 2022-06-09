#include <interception_macros.h>

namespace app::methods::System_Data::ConstNode {
IL2CPP_REGISTER_METHOD(0x0286A6F0, void, __ctor_1, (app::ConstNode * this_ptr, app::DataTable * table, app::ValueType__Enum type, app::Object * constant));
IL2CPP_REGISTER_METHOD(0x0286A710, void, __ctor_2, (app::ConstNode * this_ptr, app::DataTable * table, app::ValueType__Enum type, app::Object * constant, bool f_parse_quotes));
IL2CPP_REGISTER_METHOD(0x002FA490, void, Bind, (app::ConstNode * this_ptr, app::DataTable * table, app::List_1_System_Data_DataColumn_ * list));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, Eval_1, (app::ConstNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x015A1590, Object *, Eval_2, (app::ConstNode * this_ptr, app::DataRow * row, app::DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x015A1590, Object *, Eval_3, (app::ConstNode * this_ptr, app::Int32__Array * record_nos));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsConstant, (app::ConstNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsTableConstant, (app::ConstNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, HasLocalAggregate, (app::ConstNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x00417870, bool, HasRemoteAggregate, (app::ConstNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x004C50A0, ExpressionNode *, Optimize, (app::ConstNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x0286AA30, Object *, SmallestDecimal, (app::ConstNode * this_ptr, app::Object * constant));
IL2CPP_REGISTER_METHOD(0x0286ACC0, Object *, SmallestNumeric, (app::ConstNode * this_ptr, app::Object * constant));
}
