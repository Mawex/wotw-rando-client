#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::Expression3_1_System_Object_ {
IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ParameterCount, (app::Expression3_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02543800, void, __ctor, (app::Expression3_1_System_Object_ * this_ptr, app::Expression * body, app::ParameterExpression * par0, app::ParameterExpression * par1, app::ParameterExpression * par2));
IL2CPP_REGISTER_METHOD(0x02543860, ParameterExpression *, GetParameter, (app::Expression3_1_System_Object_ * this_ptr, int32_t index));
IL2CPP_REGISTER_METHODINFO(0x0473C300, Expression3_1_System_Object__GetParameter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025433C0, ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ *, GetOrMakeParameters, (app::Expression3_1_System_Object_ * this_ptr));
IL2CPP_REGISTER_METHOD(0x02543940, Expression_1_System_Object_ *, Rewrite, (app::Expression3_1_System_Object_ * this_ptr, app::Expression * body, app::ParameterExpression__Array * parameters));
}
