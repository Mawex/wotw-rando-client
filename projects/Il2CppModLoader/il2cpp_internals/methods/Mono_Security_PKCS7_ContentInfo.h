using namespace app;

namespace app::methods::Mono::Security::PKCS7_ContentInfo {
IL2CPP_REGISTER_METHOD(0x025D9D10, void, __ctor, (PKCS7_ContentInfo * __this));
IL2CPP_REGISTER_METHOD(0x025D9E60, void, __ctor, (PKCS7_ContentInfo * __this, String * oid));
IL2CPP_REGISTER_METHOD(0x025D9E90, void, __ctor, (PKCS7_ContentInfo * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x025D9FF0, void, __ctor, (PKCS7_ContentInfo * __this, ASN1 * asn1));
IL2CPP_REGISTER_METHODINFO(0x0471C288, PKCS7_ContentInfo__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x025DA200, ASN1 *, get_ASN1, (PKCS7_ContentInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ASN1 *, get_Content, (PKCS7_ContentInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Content, (PKCS7_ContentInfo * __this, ASN1 * value));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_ContentType, (PKCS7_ContentInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ContentType, (PKCS7_ContentInfo * __this, String * value));
IL2CPP_REGISTER_METHOD(0x025DA210, ASN1 *, GetASN1, (PKCS7_ContentInfo * __this));
IL2CPP_REGISTER_METHOD(0x02A47660, void, __ctor, (PKCS7_ContentInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x02A477B0, void, __ctor, (PKCS7_ContentInfo_1 * __this, String * oid));
IL2CPP_REGISTER_METHOD(0x02A477E0, void, __ctor, (PKCS7_ContentInfo_1 * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x02A47940, void, __ctor, (PKCS7_ContentInfo_1 * __this, ASN1_1 * asn1));
IL2CPP_REGISTER_METHODINFO(0x04797C10, PKCS7_ContentInfo_1__ctor_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A47B50, ASN1_1 *, get_ASN1, (PKCS7_ContentInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FB930, ASN1_1 *, get_Content, (PKCS7_ContentInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Content, (PKCS7_ContentInfo_1 * __this, ASN1_1 * value));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_ContentType, (PKCS7_ContentInfo_1 * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ContentType, (PKCS7_ContentInfo_1 * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02A47B60, ASN1_1 *, GetASN1, (PKCS7_ContentInfo_1 * __this));
}
