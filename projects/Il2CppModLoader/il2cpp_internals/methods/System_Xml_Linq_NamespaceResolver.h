using namespace app;

namespace app::methods::System::Xml::Linq::NamespaceResolver {
IL2CPP_REGISTER_METHOD(0x00241310, void, PushScope, (NamespaceResolver__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00241320, void, PopScope, (NamespaceResolver__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00241330, void, Add, (NamespaceResolver__Boxed * __this, String * prefix, XNamespace * ns));
IL2CPP_REGISTER_METHOD(0x00241340, void, AddFirst, (NamespaceResolver__Boxed * __this, String * prefix, XNamespace * ns));
IL2CPP_REGISTER_METHOD(0x00241350, String *, GetPrefixOfNamespace, (NamespaceResolver__Boxed * __this, XNamespace * ns, bool allowDefaultNamespace));
}
