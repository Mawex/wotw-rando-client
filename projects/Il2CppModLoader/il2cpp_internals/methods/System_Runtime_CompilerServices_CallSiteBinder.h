#include <interception_macros.h>

namespace app::methods::System_Runtime_CompilerServices::CallSiteBinder {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::CallSiteBinder * this_ptr));
IL2CPP_REGISTER_METHOD(0x02FC7FE0, LabelTarget *, get_UpdateLabel, ());
IL2CPP_REGISTER_METHOD(0x02FC8080, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, BindDelegate, (app::CallSiteBinder * this_ptr, app::CallSite_1_System_Object_ * site, app::Object__Array * args));
IL2CPP_REGISTER_METHOD(0x0157A5E0, Object *, BindCore, (app::CallSiteBinder * this_ptr, app::CallSite_1_System_Object_ * site, app::Object__Array * args));
IL2CPP_REGISTER_METHODINFO(0x04708B88, CallSiteBinder_BindCore__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E1400, void, CacheTarget, (app::CallSiteBinder * this_ptr, app::Object * target));
IL2CPP_REGISTER_METHOD(0x0153C550, Expression_1_System_Object_ *, Stitch, (app::Expression * binding, app::CallSiteBinder_LambdaSignature_1_System_Object_ * signature));
IL2CPP_REGISTER_METHOD(0x0153E330, RuleCache_1_System_Object_ *, GetRuleCache, (app::CallSiteBinder * this_ptr));
}
