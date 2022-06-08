using namespace app;

namespace app::methods::System::Linq::Expressions::BlockExpressionList {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (BlockExpressionList * __this, BlockExpression * provider, Expression * arg0));
IL2CPP_REGISTER_METHOD(0x01F9F640, int32_t, IndexOf, (BlockExpressionList * __this, Expression * item));
IL2CPP_REGISTER_METHOD(0x01F9F6F0, void, Insert, (BlockExpressionList * __this, int32_t index, Expression * item));
IL2CPP_REGISTER_METHODINFO(0x0472FD30, BlockExpressionList_Insert__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F9F730, void, RemoveAt, (BlockExpressionList * __this, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0478C8F0, BlockExpressionList_RemoveAt__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F9F770, Expression *, get_Item, (BlockExpressionList * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01F9F7B0, void, set_Item, (BlockExpressionList * __this, int32_t index, Expression * value));
IL2CPP_REGISTER_METHODINFO(0x047298E0, BlockExpressionList_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F9F7F0, void, Add, (BlockExpressionList * __this, Expression * item));
IL2CPP_REGISTER_METHODINFO(0x04795928, BlockExpressionList_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F9F830, void, Clear, (BlockExpressionList * __this));
IL2CPP_REGISTER_METHODINFO(0x04770A68, BlockExpressionList_Clear__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F9F870, bool, Contains, (BlockExpressionList * __this, Expression * item));
IL2CPP_REGISTER_METHOD(0x01F9F920, void, CopyTo, (BlockExpressionList * __this, Expression__Array * array, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0474D708, BlockExpressionList_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017170C0, int32_t, get_Count, (BlockExpressionList * __this));
IL2CPP_REGISTER_METHOD(0x01F9FB60, bool, get_IsReadOnly, (BlockExpressionList * __this));
IL2CPP_REGISTER_METHODINFO(0x04781C60, BlockExpressionList_get_IsReadOnly__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F9FBA0, bool, Remove, (BlockExpressionList * __this, Expression * item));
IL2CPP_REGISTER_METHODINFO(0x04792380, BlockExpressionList_Remove__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01F9FBE0, IEnumerator_1_System_Linq_Expressions_Expression_ *, GetEnumerator, (BlockExpressionList * __this));
IL2CPP_REGISTER_METHOD(0x01F9FBE0, IEnumerator *, IEnumerable_GetEnumerator, (BlockExpressionList * __this));
}
