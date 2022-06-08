using namespace app;

namespace app::methods::System::Threading::LockQueue {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (LockQueue * __this, ReaderWriterLock * rwlock));
IL2CPP_REGISTER_METHOD(0x027DE3E0, bool, Wait, (LockQueue * __this, int32_t timeout));
IL2CPP_REGISTER_METHOD(0x027DE570, bool, get_IsEmpty, (LockQueue * __this));
IL2CPP_REGISTER_METHOD(0x027DE660, void, Pulse, (LockQueue * __this));
}
