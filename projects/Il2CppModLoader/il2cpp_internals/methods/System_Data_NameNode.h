#include <interception_macros.h>

namespace app::methods::System::Data::NameNode {
IL2CPP_REGISTER_METHOD(0x01E44480, void, __ctor, (NameNode * __this, DataTable * table, Char__Array * text, int32_t start, int32_t pos));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (NameNode * __this, DataTable * table, String * name));
IL2CPP_REGISTER_METHOD(0x01E444B0, bool, get_IsSqlColumn, (NameNode * __this));
IL2CPP_REGISTER_METHOD(0x01E444D0, void, Bind, (NameNode * __this, DataTable * table, List_1_System_Data_DataColumn_ * list));
IL2CPP_REGISTER_METHODINFO(0x0470F3E0, NameNode_Bind__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E446C0, Object *, Eval, (NameNode * __this));
IL2CPP_REGISTER_METHODINFO(0x047338C0, NameNode_Eval__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E44700, Object *, Eval, (NameNode * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHODINFO(0x0473B598, NameNode_Eval_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E44880, Object *, Eval, (NameNode * __this, Int32__Array * records));
IL2CPP_REGISTER_METHODINFO(0x0476BD68, NameNode_Eval_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00417870, bool, IsConstant, (NameNode * __this));
IL2CPP_REGISTER_METHOD(0x01E448D0, bool, IsTableConstant, (NameNode * __this));
IL2CPP_REGISTER_METHOD(0x01E44900, bool, HasLocalAggregate, (NameNode * __this));
IL2CPP_REGISTER_METHOD(0x01E44930, bool, HasRemoteAggregate, (NameNode * __this));
IL2CPP_REGISTER_METHOD(0x01E44960, bool, DependsOn, (NameNode * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x004C50A0, ExpressionNode *, Optimize, (NameNode * __this));
IL2CPP_REGISTER_METHOD(0x01E449C0, String *, ParseName, (Char__Array * text, int32_t start, int32_t pos));
IL2CPP_REGISTER_METHODINFO(0x047650D0, NameNode_ParseName__MethodInfo);
}
