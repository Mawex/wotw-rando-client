using namespace app;

namespace app::methods::SmartGUIText {
IL2CPP_REGISTER_METHOD(0x03117D00, void, Initialize, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03117DB0, void, AssertInitialized, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x03117F10, void, AssertEnoughCache, (int32_t n));
IL2CPP_REGISTER_METHOD(0x03118020, void, EnlargeCache, (int32_t n));
IL2CPP_REGISTER_METHOD(0x03118240, int32_t, GetDigitAmount, (int32_t n));
IL2CPP_REGISTER_METHOD(0x03118280, void, Label, (Rect rect, int32_t n));
IL2CPP_REGISTER_METHOD(0x03118390, void, Label, (Rect rect, float f, int32_t digits));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (SmartGUIText * __this));
IL2CPP_REGISTER_METHOD(0x03118650, void, __cctor, (MethodInfo * method));
}
