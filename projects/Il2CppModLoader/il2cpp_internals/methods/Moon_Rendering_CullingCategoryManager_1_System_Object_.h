#include <interception_macros.h>

namespace app::methods::Moon::Rendering::CullingCategoryManager_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x02904890, String *, get_typeName, ());
IL2CPP_REGISTER_METHOD(0x02904370, void, __ctor, (CullingCategoryManager_1_System_Object_ * __this, CullingCategory__Enum mask, bool perSlice));
IL2CPP_REGISTER_METHOD(0x029044B0, void, Register, (CullingCategoryManager_1_System_Object_ * __this, Renderer * renderer, Object * item, Component_1 * logContext));
IL2CPP_REGISTER_METHOD(0x02904670, void, Unregister, (CullingCategoryManager_1_System_Object_ * __this, Renderer * renderer, Component_1 * logContext));
IL2CPP_REGISTER_METHOD(0x02904830, CullingCategoryManager_1_T_Enumerator_System_Object_, Resolve, (CullingCategoryManager_1_System_Object_ * __this, RendererCullingCategoryResults results));
IL2CPP_REGISTER_METHOD(0x02904980, void, LogRegistrationError, (String * error, Component_1 * logContext));
}
