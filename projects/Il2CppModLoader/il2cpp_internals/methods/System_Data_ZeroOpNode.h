#include <interception_macros.h>

namespace app::methods::System::Data::ZeroOpNode {
IL2CPP_REGISTER_METHOD(0x030649E0, void, __ctor, (ZeroOpNode * __this, int32_t op));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Bind, (ZeroOpNode * __this, DataTable * table, List_1_System_Data_DataColumn_ * list));
IL2CPP_REGISTER_METHOD(0x030649F0, Object *, Eval, (ZeroOpNode * __this));
IL2CPP_REGISTER_METHOD(0x015A1590, Object *, Eval, (ZeroOpNode * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x015A1590, Object *, Eval, (ZeroOpNode * __this, Int32__Array * recordNos));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsConstant, (ZeroOpNode * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsTableConstant, (ZeroOpNode * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, HasLocalAggregate, (ZeroOpNode * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, HasRemoteAggregate, (ZeroOpNode * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, ExpressionNode *, Optimize, (ZeroOpNode * __this));
}
