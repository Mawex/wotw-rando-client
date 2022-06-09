#include <interception_macros.h>

namespace app::methods::XGamingRuntime::Interop::XblAchievement {
    IL2CPP_REGISTER_METHOD(0x00244C80, app::String__Array *, GetPlatformsAvailableOn, (app::XblAchievement_1__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00240680, app::Object__Array *, GetTitleAssociations_1, (app::XblAchievement_1__Boxed * this_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_Object_ * ctor));
    IL2CPP_REGISTER_METHOD(0x00240640, app::Object__Array *, GetMediaAssets_1, (app::XblAchievement_1__Boxed * this_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_ * ctor));
    IL2CPP_REGISTER_METHOD(0x00240660, app::Object__Array *, GetRewards_1, (app::XblAchievement_1__Boxed * this_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_ * ctor));
    IL2CPP_REGISTER_METHOD(0x00240680, app::XblAchievementTitleAssociation__Array *, GetTitleAssociations_2, (app::XblAchievement_1__Boxed * this_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_XGamingRuntime_XblAchievementTitleAssociation_ * ctor));
    IL2CPP_REGISTER_METHODINFO(0x0477DCA0, XblAchievement_1_GetTitleAssociations_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00240640, app::XblAchievementMediaAsset__Array *, GetMediaAssets_2, (app::XblAchievement_1__Boxed * this_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_XGamingRuntime_XblAchievementMediaAsset_ * ctor));
    IL2CPP_REGISTER_METHODINFO(0x047092D0, XblAchievement_1_GetMediaAssets_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x00240660, app::XblAchievementReward__Array *, GetRewards_2, (app::XblAchievement_1__Boxed * this_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementReward_XGamingRuntime_XblAchievementReward_ * ctor));
    IL2CPP_REGISTER_METHODINFO(0x04751630, XblAchievement_1_GetRewards_1__MethodInfo);
}
