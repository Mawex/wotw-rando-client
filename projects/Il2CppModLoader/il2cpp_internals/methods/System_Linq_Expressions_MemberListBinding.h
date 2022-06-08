#include <interception_macros.h>

namespace app::methods::System::Linq::Expressions::MemberListBinding {
IL2CPP_REGISTER_METHOD(0x02FBBD30, void, __ctor, (MemberListBinding * __this, MemberInfo_1 * member, ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ * initializers));
IL2CPP_REGISTER_METHOD(0x002FB950, ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_ *, get_Initializers, (MemberListBinding * __this));
IL2CPP_REGISTER_METHOD(0x02FBBD40, MemberListBinding *, Update, (MemberListBinding * __this, IEnumerable_1_System_Linq_Expressions_ElementInit_ * initializers));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ValidateAsDefinedHere, (MemberListBinding * __this, int32_t index));
}
