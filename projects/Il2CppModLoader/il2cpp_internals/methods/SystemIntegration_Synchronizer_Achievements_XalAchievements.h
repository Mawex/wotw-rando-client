#include <interception_macros.h>

namespace app::methods::SystemIntegration::Synchronizer::Achievements::XalAchievements {
IL2CPP_REGISTER_METHOD(0x0052F860, String *, get_Name, (XalAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsSynchronising, (XalAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052C650, void, set_IsSynchronising, (XalAchievements * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_HasSynchronised, (XalAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052C660, void, set_HasSynchronised, (XalAchievements * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0052F8E0, bool, get_Disable, ());
IL2CPP_REGISTER_METHOD(0x0052F960, void, set_Disable, (bool value));
IL2CPP_REGISTER_METHOD(0x002FB930, CacheData__Array *, AwardedOnServer, (XalAchievements * __this));
IL2CPP_REGISTER_METHOD(0x0052F9F0, void, AwardOnServer, (XalAchievements * __this, CacheData * data));
IL2CPP_REGISTER_METHOD(0x00530520, void, AchievementSetComplete, (XalAchievements * __this, String * json, CacheData * data));
IL2CPP_REGISTER_METHOD(0x00530790, void, UpdateFromServer, (XalAchievements * __this));
IL2CPP_REGISTER_METHOD(0x00530CF0, void, AchievementGetComplete, (XalAchievements * __this, String * json));
IL2CPP_REGISTER_METHODINFO(0x047257F8, XalAchievements_AchievementGetComplete__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00531180, void, HeaderAndArgsForGetAchievements, (String * fullAddress, String * method_1, String * body, List_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * * headers, XalUserGetTokenAndSignatureArgs * args));
IL2CPP_REGISTER_METHOD(0x00531660, void, OnError, (XalAchievements * __this, Object * error));
IL2CPP_REGISTER_METHODINFO(0x0475E280, XalAchievements_OnError__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00531670, void, CallMethodWith, (String * fullAddress, HttpMethod * method_1, String * body, IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * headers, String * signature, String * token, Action_1_String_ * onComplete, Action_1_String_ * onError));
IL2CPP_REGISTER_METHODINFO(0x04705590, XalAchievements_CallMethodWith__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00531C80, void, Perform, (UnityWebRequest * request, IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * headers, String * signature, String * token, Action_1_String_ * onComplete, Action_1_String_ * onError));
IL2CPP_REGISTER_METHOD(0x005320A0, IEnumerator *, RunRequest, (UnityWebRequest * webRequest, Action * onComplete));
IL2CPP_REGISTER_METHOD(0x00532200, void, AddToClient, (UnityWebRequest * form, IEnumerable_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * headers));
IL2CPP_REGISTER_METHOD(0x00532410, void, Clear, (XalAchievements * __this));
IL2CPP_REGISTER_METHOD(0x005324A0, void, __ctor, (XalAchievements * __this));
}
