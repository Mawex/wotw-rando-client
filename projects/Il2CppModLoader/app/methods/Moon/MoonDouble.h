#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::MoonDouble {
    IL2CPP_REGISTER_METHOD(0x02F936F0, bool, get_IsCrossSceneReference, (app::MoonDouble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F937B0, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonDouble * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477E288, MoonDouble_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F938F0, bool, get_IsStaticValue, (app::MoonDouble * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F93990, void, ctor, (app::MoonDouble * this_ptr, double static_value))
    IL2CPP_REGISTER_METHOD(0x02F939B0, double, Resolve, (app::MoonDouble * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x0470DAB0, MoonDouble_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F93BA0, double, SafeResolve, (app::MoonDouble * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04799F60, MoonDouble_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F93E80, bool, CanResolve, (app::MoonDouble * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHOD(0x02F94040, bool, TryResolve, (app::MoonDouble * this_ptr, double * value, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHOD(0x02F940B0, void, SetStaticValue, (app::MoonDouble * this_ptr, double new_value))
    IL2CPP_REGISTER_METHOD(0x02F940C0, void, SetValueInResolver, (app::MoonDouble * this_ptr, double new_value, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04757748, MoonDouble_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::MoonTypeData, GetTypeData, (app::MoonDouble * this_ptr))
}
