using namespace app;

namespace app::methods::System::Data::LikeNode {
IL2CPP_REGISTER_METHOD(0x01E3FFB0, void, __ctor, (LikeNode * __this, DataTable * table, int32_t op, ExpressionNode * left, ExpressionNode * right));
IL2CPP_REGISTER_METHOD(0x01E3FFD0, Object *, Eval, (LikeNode * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x01E40680, String *, AnalyzePattern, (LikeNode * __this, String * pat));
IL2CPP_REGISTER_METHODINFO(0x0470C8D0, LikeNode_AnalyzePattern__MethodInfo);
}
