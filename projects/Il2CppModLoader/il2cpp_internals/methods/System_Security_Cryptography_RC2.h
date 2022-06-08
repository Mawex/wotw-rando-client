using namespace app;

namespace app::methods::System::Security::Cryptography::RC2 {
IL2CPP_REGISTER_METHOD(0x028DDDF0, void, __ctor, (RC2 * __this));
IL2CPP_REGISTER_METHOD(0x028DDED0, int32_t, get_EffectiveKeySize, (RC2 * __this));
IL2CPP_REGISTER_METHOD(0x028DDEE0, void, set_EffectiveKeySize, (RC2 * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04758A90, RC2_set_EffectiveKeySize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_KeySize, (RC2 * __this));
IL2CPP_REGISTER_METHOD(0x028DE060, void, set_KeySize, (RC2 * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x0477E2F0, RC2_set_KeySize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x028DE130, RC2 *, Create, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x028DE270, RC2 *, Create, (String * AlgName));
IL2CPP_REGISTER_METHOD(0x028DE350, void, __cctor, (MethodInfo * method));
}
