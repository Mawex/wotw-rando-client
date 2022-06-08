using namespace app;

namespace app::methods::System::Linq::Expressions::MethodCallExpressionN {
IL2CPP_REGISTER_METHOD(0x022D0440, void, __ctor, (MethodCallExpressionN * __this, MethodInfo_1 * method_1, IReadOnlyList_1_System_Linq_Expressions_Expression_ * args));
IL2CPP_REGISTER_METHOD(0x02FBCF10, Expression *, GetArgument, (MethodCallExpressionN * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02FBCFB0, int32_t, get_ArgumentCount, (MethodCallExpressionN * __this));
IL2CPP_REGISTER_METHOD(0x02FBD040, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (MethodCallExpressionN * __this));
IL2CPP_REGISTER_METHOD(0x02FBD0C0, MethodCallExpression *, Rewrite, (MethodCallExpressionN * __this, Expression * instance, IReadOnlyList_1_System_Linq_Expressions_Expression_ * args));
}
