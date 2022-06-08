using namespace app;

namespace app::methods::Microsoft::Applications::Events::DataModels::Receipts {
IL2CPP_REGISTER_METHOD(0x002FA280, int64_t, get_originalTime, (Receipts * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_originalTime, (Receipts * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FB930, int64_t, get_uploadTime, (Receipts * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_uploadTime, (Receipts * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x002FD3B0, void, __ctor, (Receipts * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Receipts * __this, String * fullName, String * name));
}
