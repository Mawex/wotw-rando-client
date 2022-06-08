#include <interception_macros.h>

namespace app::methods::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate {
IL2CPP_REGISTER_METHOD(0x00611810, void, __ctor, (XmlQualifiedName_HashCodeOfStringDelegate * __this, Object * object, void * method_1));
IL2CPP_REGISTER_METHOD(0x01700900, int32_t, Invoke, (XmlQualifiedName_HashCodeOfStringDelegate * __this, String * s, int32_t sLen, int64_t additionalEntropy));
IL2CPP_REGISTER_METHOD(0x01700E80, IAsyncResult *, BeginInvoke, (XmlQualifiedName_HashCodeOfStringDelegate * __this, String * s, int32_t sLen, int64_t additionalEntropy, AsyncCallback * callback, Object * object));
IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (XmlQualifiedName_HashCodeOfStringDelegate * __this, IAsyncResult * result));
}
