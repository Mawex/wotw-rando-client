using namespace app;

namespace app::methods::SanityResult {
IL2CPP_REGISTER_METHOD(0x00C2ACA0, void, __ctor, (SanityResult * __this, String * summary, String * details, bool passed, GameObject * gameObject, Func_2_UnityEngine_GameObject_Boolean__1 * fixFunction));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Summary, (SanityResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, String *, get_Details, (SanityResult * __this));
IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Passed, (SanityResult * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, GameObject *, get_GameObject, (SanityResult * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Func_2_UnityEngine_GameObject_Boolean__1 *, get_FixFunction, (SanityResult * __this));
}
