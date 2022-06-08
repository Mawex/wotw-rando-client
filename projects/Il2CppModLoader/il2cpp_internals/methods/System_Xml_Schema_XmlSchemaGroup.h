using namespace app;

namespace app::methods::System::Xml::Schema::XmlSchemaGroup {
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_Name, (XmlSchemaGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Name, (XmlSchemaGroup * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB60, XmlSchemaGroupBase *, get_Particle, (XmlSchemaGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Particle, (XmlSchemaGroup * __this, XmlSchemaGroupBase * value));
IL2CPP_REGISTER_METHOD(0x002FBBA0, XmlQualifiedName *, get_QualifiedName, (XmlSchemaGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FBB80, XmlSchemaParticle *, get_CanonicalParticle, (XmlSchemaGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_CanonicalParticle, (XmlSchemaGroup * __this, XmlSchemaParticle * value));
IL2CPP_REGISTER_METHOD(0x002FBBC0, XmlSchemaGroup *, get_Redefined, (XmlSchemaGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_Redefined, (XmlSchemaGroup * __this, XmlSchemaGroup * value));
IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_SelfReferenceCount, (XmlSchemaGroup * __this));
IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_SelfReferenceCount, (XmlSchemaGroup * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_NameAttribute, (XmlSchemaGroup * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_NameAttribute, (XmlSchemaGroup * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetQualifiedName, (XmlSchemaGroup * __this, XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x01CA8F60, XmlSchemaObject *, Clone, (XmlSchemaGroup * __this));
IL2CPP_REGISTER_METHOD(0x01CA8F70, XmlSchemaObject *, Clone, (XmlSchemaGroup * __this, XmlSchema * parentSchema));
IL2CPP_REGISTER_METHOD(0x01CA91D0, void, __ctor, (XmlSchemaGroup * __this));
}
