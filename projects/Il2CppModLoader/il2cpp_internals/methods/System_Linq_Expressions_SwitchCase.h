#include <interception_macros.h>

namespace app::methods::System_Linq_Expressions::SwitchCase {
IL2CPP_REGISTER_METHOD(0x0231B8E0, void, __ctor, (app::SwitchCase * this_ptr, app::Expression * body, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ * test_values));
IL2CPP_REGISTER_METHOD(0x002FA280, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_TestValues, (app::SwitchCase * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Body, (app::SwitchCase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC4ED0, String *, ToString, (app::SwitchCase * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC4EE0, SwitchCase *, Update, (app::SwitchCase * this_ptr, app::IEnumerable_1_System_Linq_Expressions_Expression_ * test_values, app::Expression * body));
}
