using namespace app;

namespace app::methods::System::Xml::SecureStringHasher_HashCodeOfStringDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (SecureStringHasher_HashCodeOfStringDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01700900, int32_t, Invoke, (SecureStringHasher_HashCodeOfStringDelegate * __this, String * s, int32_t sLen, int64_t additionalEntropy));
IL2CPP_REGISTER_METHOD(0x01C8AD70, IAsyncResult *, BeginInvoke, (SecureStringHasher_HashCodeOfStringDelegate * __this, String * s, int32_t sLen, int64_t additionalEntropy, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (SecureStringHasher_HashCodeOfStringDelegate * __this, IAsyncResult * result));
}
