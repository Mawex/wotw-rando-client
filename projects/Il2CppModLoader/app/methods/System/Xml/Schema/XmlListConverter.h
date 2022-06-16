#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlListConverter {
    IL2CPP_REGISTER_METHOD(0x0224A020, void, ctor_1, (app::XmlListConverter * this_ptr, app::XmlBaseConverter * atomic_converter))
    IL2CPP_REGISTER_METHOD(0x0224A110, void, ctor_2, (app::XmlListConverter * this_ptr, app::XmlBaseConverter * atomic_converter, app::Type * clr_type_default))
    IL2CPP_REGISTER_METHOD(0x0224A1E0, void, ctor_3, (app::XmlListConverter * this_ptr, app::XmlSchemaType * schema_type))
    IL2CPP_REGISTER_METHOD(0x0224A290, app::XmlValueConverter *, Create, (app::XmlValueConverter * atomic_converter))
    IL2CPP_REGISTER_METHOD(0x0224A530, app::Object *, ChangeType, (app::XmlListConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0471C1B8, XmlListConverter_ChangeType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0224A680, app::Object *, ChangeListType, (app::XmlListConverter * this_ptr, app::Object * value, app::Type * destination_type, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x047088B0, XmlListConverter_ChangeListType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0224B530, bool, IsListType, (app::XmlListConverter * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0224B750, app::IList *, ToList, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHOD(0x0224BB80, app::List_1_System_String_ *, StringAsList, (app::XmlListConverter * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x0224BD00, app::String *, ListAsString, (app::XmlListConverter * this_ptr, app::IEnumerable * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHOD(0x0224C070, app::Exception *, CreateInvalidClrMappingException, (app::XmlListConverter * this_ptr, app::Type * source_type, app::Type * destination_type))
    IL2CPP_REGISTER_METHOD(0x0158A190, app::Object__Array *, ToArray_1, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0472DA48, XmlListConverter_ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01587370, app::Boolean__Array *, ToArray_2, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0475B048, XmlListConverter_ToArray_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01587890, app::Byte__Array *, ToArray_3, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04797C48, XmlListConverter_ToArray_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158A190, app::Byte__Array__Array *, ToArray_4, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0472D7C0, XmlListConverter_ToArray_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01587DB0, app::DateTime__Array *, ToArray_5, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04779438, XmlListConverter_ToArray_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015882D0, app::DateTimeOffset__Array *, ToArray_6, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04715318, XmlListConverter_ToArray_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015887F0, app::Decimal__Array *, ToArray_7, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x047877F8, XmlListConverter_ToArray_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01588D10, app::Double__Array *, ToArray_8, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0471C518, XmlListConverter_ToArray_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01589230, app::Int16__Array *, ToArray_9, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04738FF8, XmlListConverter_ToArray_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01589750, app::Int32__Array *, ToArray_10, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0471ED28, XmlListConverter_ToArray_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01589C70, app::Int64__Array *, ToArray_11, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04791A68, XmlListConverter_ToArray_10__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158A670, app::SByte__Array *, ToArray_12, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x047160D8, XmlListConverter_ToArray_11__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158AB90, app::Single__Array *, ToArray_13, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0478E9D8, XmlListConverter_ToArray_12__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158A190, app::String__Array *, ToArray_14, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0473F1F8, XmlListConverter_ToArray_13__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158B0B0, app::TimeSpan__Array *, ToArray_15, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04736E68, XmlListConverter_ToArray_14__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158B5D0, app::UInt16__Array *, ToArray_16, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04727FF8, XmlListConverter_ToArray_15__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158BAF0, app::UInt32__Array *, ToArray_17, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0470EA90, XmlListConverter_ToArray_16__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158C010, app::UInt64__Array *, ToArray_18, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04730610, XmlListConverter_ToArray_17__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158A190, app::Uri__Array *, ToArray_19, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0474BE28, XmlListConverter_ToArray_18__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158A190, app::XmlAtomicValue__Array *, ToArray_20, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04786FB0, XmlListConverter_ToArray_19__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158A190, app::XmlQualifiedName__Array *, ToArray_21, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0478B018, XmlListConverter_ToArray_20__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158A190, app::XPathItem__Array *, ToArray_22, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x0473E5A0, XmlListConverter_ToArray_21__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0158A190, app::XPathNavigator__Array *, ToArray_23, (app::XmlListConverter * this_ptr, app::Object * list, app::IXmlNamespaceResolver * ns_resolver))
    IL2CPP_REGISTER_METHODINFO(0x04799CF8, XmlListConverter_ToArray_22__MethodInfo)
}
