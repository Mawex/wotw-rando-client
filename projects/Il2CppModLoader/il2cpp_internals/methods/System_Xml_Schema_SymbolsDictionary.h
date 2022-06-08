using namespace app;

namespace app::methods::System::Xml::Schema::SymbolsDictionary {
IL2CPP_REGISTER_METHOD(0x01ABB750, void, __ctor, (SymbolsDictionary * __this));
IL2CPP_REGISTER_METHOD(0x01ABB970, int32_t, get_Count, (SymbolsDictionary * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsUpaEnforced, (SymbolsDictionary * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsUpaEnforced, (SymbolsDictionary * __this, bool value));
IL2CPP_REGISTER_METHOD(0x01ABB980, int32_t, AddName, (SymbolsDictionary * __this, XmlQualifiedName * name, Object * particle));
IL2CPP_REGISTER_METHOD(0x01ABBB10, void, AddNamespaceList, (SymbolsDictionary * __this, NamespaceList * list, Object * particle, bool allowLocal));
IL2CPP_REGISTER_METHOD(0x01ABBDB0, void, AddWildcard, (SymbolsDictionary * __this, String * wildcard, Object * particle));
IL2CPP_REGISTER_METHOD(0x01ABC010, ICollection *, GetNamespaceListSymbols, (SymbolsDictionary * __this, NamespaceList * list));
IL2CPP_REGISTER_METHOD(0x01ABC600, int32_t, get_Item, (SymbolsDictionary * __this, XmlQualifiedName * name));
IL2CPP_REGISTER_METHOD(0x01ABC740, bool, Exists, (SymbolsDictionary * __this, XmlQualifiedName * name));
IL2CPP_REGISTER_METHOD(0x01ABC770, Object *, GetParticle, (SymbolsDictionary * __this, int32_t symbol));
IL2CPP_REGISTER_METHOD(0x01ABC7B0, String *, NameOf, (SymbolsDictionary * __this, int32_t symbol));
}
