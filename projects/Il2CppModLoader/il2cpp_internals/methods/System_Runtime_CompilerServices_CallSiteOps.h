using namespace app;

namespace app::methods::System::Runtime::CompilerServices::CallSiteOps {
IL2CPP_REGISTER_METHOD(0x02FC81E0, bool, SetNotMatched, (CallSite * site));
IL2CPP_REGISTER_METHOD(0x00C3D1F0, bool, GetMatch, (CallSite * site));
IL2CPP_REGISTER_METHOD(0x02FC8200, void, ClearMatch, (CallSite * site));
IL2CPP_REGISTER_METHOD(0x0153E300, CallSite_1_System_Object_ *, CreateMatchmaker, (CallSite_1_System_Object_ * site));
IL2CPP_REGISTER_METHOD(0x01548530, void, AddRule, (CallSite_1_System_Object_ * site, Object * rule));
IL2CPP_REGISTER_METHOD(0x015E1490, void, UpdateRules, (CallSite_1_System_Object_ * this_1, int32_t matched));
IL2CPP_REGISTER_METHOD(0x01587350, Object__Array *, GetRules, (CallSite_1_System_Object_ * site));
IL2CPP_REGISTER_METHOD(0x0153E7B0, RuleCache_1_System_Object_ *, GetRuleCache, (CallSite_1_System_Object_ * site));
IL2CPP_REGISTER_METHOD(0x015E1460, void, MoveRule, (RuleCache_1_System_Object_ * cache, Object * rule, int32_t i));
IL2CPP_REGISTER_METHOD(0x01587330, Object__Array *, GetCachedRules, (RuleCache_1_System_Object_ * cache));
IL2CPP_REGISTER_METHOD(0x01548550, Object *, Bind, (CallSiteBinder * binder, CallSite_1_System_Object_ * site, Object__Array * args));
}
