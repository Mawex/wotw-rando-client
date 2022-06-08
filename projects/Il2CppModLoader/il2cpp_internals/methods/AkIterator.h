using namespace app;

namespace app::methods::AkIterator {
IL2CPP_REGISTER_METHOD(0x01880BB0, void, __ctor, (AkIterator * __this, void * cPtr, bool cMemoryOwn));
IL2CPP_REGISTER_METHOD(0x026ED4C0, void *, getCPtr, (AkIterator * obj));
IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (AkIterator * __this, void * cPtr));
IL2CPP_REGISTER_METHOD(0x026ED550, void, Finalize, (AkIterator * __this));
IL2CPP_REGISTER_METHOD(0x026ED5D0, void, Dispose, (AkIterator * __this));
IL2CPP_REGISTER_METHOD(0x026ED7E0, void, set_pItem, (AkIterator * __this, AkPlaylistItem * value));
IL2CPP_REGISTER_METHOD(0x026ED920, AkPlaylistItem *, get_pItem, (AkIterator * __this));
IL2CPP_REGISTER_METHOD(0x026EDB30, AkIterator *, NextIter, (AkIterator * __this));
IL2CPP_REGISTER_METHOD(0x026EDD30, AkIterator *, PrevIter, (AkIterator * __this));
IL2CPP_REGISTER_METHOD(0x026EDF30, AkPlaylistItem *, GetItem, (AkIterator * __this));
IL2CPP_REGISTER_METHOD(0x026EE130, bool, IsEqualTo, (AkIterator * __this, AkIterator * in_rOp));
IL2CPP_REGISTER_METHOD(0x026EE2D0, bool, IsDifferentFrom, (AkIterator * __this, AkIterator * in_rOp));
IL2CPP_REGISTER_METHOD(0x026EE470, void, __ctor, (AkIterator * __this));
}
