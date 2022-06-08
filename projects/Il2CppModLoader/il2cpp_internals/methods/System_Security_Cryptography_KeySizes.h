using namespace app;

namespace app::methods::System::Security::Cryptography::KeySizes {
IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_MinSize, (KeySizes * __this));
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_MaxSize, (KeySizes * __this));
IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_SkipSize, (KeySizes * __this));
IL2CPP_REGISTER_METHOD(0x0133CEF0, void, __ctor, (KeySizes * __this, int32_t minSize, int32_t maxSize, int32_t skipSize));
IL2CPP_REGISTER_METHOD(0x020DBE90, bool, IsLegal, (KeySizes * __this, int32_t keySize));
IL2CPP_REGISTER_METHOD(0x020DBEC0, bool, IsLegalKeySize, (KeySizes__Array * legalKeys, int32_t size));
}
