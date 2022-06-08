#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::SwitchCase {
IL2CPP_REGISTER_METHOD(0x0231B8E0, void, __ctor, (SwitchCase * __this, Expression * body, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ * testValues));
IL2CPP_REGISTER_METHOD(0x002FA280, ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_TestValues, (SwitchCase * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, Expression *, get_Body, (SwitchCase * __this));
IL2CPP_REGISTER_METHOD(0x02FC4ED0, String *, ToString, (SwitchCase * __this));
IL2CPP_REGISTER_METHOD(0x02FC4EE0, SwitchCase *, Update, (SwitchCase * __this, IEnumerable_1_System_Linq_Expressions_Expression_ * testValues, Expression * body));
}
