#include <interception_macros.h>

namespace app::methods::System::Xml::Serialization::EnumMap {
IL2CPP_REGISTER_METHOD(0x01C8D8C0, void, __ctor, (EnumMap * __this, EnumMap_EnumMapMember__Array * members, bool isFlags));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_IsFlags, (EnumMap * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String__Array *, get_EnumNames, (EnumMap * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, String__Array *, get_XmlNames, (EnumMap * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, Int64__Array *, get_Values, (EnumMap * __this));
IL2CPP_REGISTER_METHOD(0x01C8DB40, String *, GetXmlName, (EnumMap * __this, String * typeName, Object * enumValue));
IL2CPP_REGISTER_METHODINFO(0x0475DDB0, EnumMap_GetXmlName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01C8DEA0, String *, GetEnumName, (EnumMap * __this, String * typeName, String * xmlName));
IL2CPP_REGISTER_METHODINFO(0x0470D6A8, EnumMap_GetEnumName__MethodInfo);
}
