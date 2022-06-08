using namespace app;

namespace app::methods::SystemIntegration::XalUser {
IL2CPP_REGISTER_METHOD(0x00CDE930, uint64_t, get_Id, (XalUser * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Texture2D *, get_Image, (XalUser * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Image, (XalUser * __this, Texture2D * value));
IL2CPP_REGISTER_METHOD(0x00CDE950, String *, get_GamerTag, (XalUser * __this));
IL2CPP_REGISTER_METHOD(0x00CDEA00, String *, get_Uid, (XalUser * __this));
IL2CPP_REGISTER_METHOD(0x00CDEB80, String *, get_SignInPrefix, (XalUser * __this));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (XalUser * __this, XalUser_1 * xalUser, Action * onSignOut));
IL2CPP_REGISTER_METHOD(0x00CDEC00, Task *, GetGamerPicture, (XalUser * __this));
IL2CPP_REGISTER_METHOD(0x00CDEF30, Task_1_System_Boolean_ *, BuildIntoUnityImage, (XalUser * __this, Task_1_System_Byte_ * buffer));
IL2CPP_REGISTER_METHODINFO(0x04797AD0, XalUser_BuildIntoUnityImage__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CDF340, void, GetTokenAndSignatureSilentlyAsync, (XalUser * __this, XalUserGetTokenAndSignatureArgs args, Action_1_Microsoft_Xbox_Services_Xal_XalUserGetTokenAndSignatureData_ * onComplete, Action_1_Int32_ * onError));
IL2CPP_REGISTER_METHOD(0x00CDF390, void, SignOutIfPossible, (XalUser * __this));
IL2CPP_REGISTER_METHOD(0x00CDF5B0, void, _SignOutIfPossible_b__20_0, (XalUser * __this, Task * t));
IL2CPP_REGISTER_METHODINFO(0x04798348, XalUser__SignOutIfPossible_b__20_0__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CDF770, void, _SignOutIfPossible_b__20_1, (XalUser * __this));
IL2CPP_REGISTER_METHODINFO(0x0475DFF8, XalUser__SignOutIfPossible_b__20_1__MethodInfo);
}
