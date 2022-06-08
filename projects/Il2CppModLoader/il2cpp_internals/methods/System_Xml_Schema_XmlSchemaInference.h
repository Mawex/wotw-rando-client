#include <interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaInference {
IL2CPP_REGISTER_METHOD(0x008F7CD0, void, set_Occurrence, (XmlSchemaInference * __this, XmlSchemaInference_InferenceOption__Enum value));
IL2CPP_REGISTER_METHOD(0x006410F0, XmlSchemaInference_InferenceOption__Enum, get_Occurrence, (XmlSchemaInference * __this));
IL2CPP_REGISTER_METHOD(0x00843E80, void, set_TypeInference, (XmlSchemaInference * __this, XmlSchemaInference_InferenceOption__Enum value));
IL2CPP_REGISTER_METHOD(0x01CA9680, void, __ctor, (XmlSchemaInference * __this));
IL2CPP_REGISTER_METHOD(0x01CA9990, XmlSchemaSet *, InferSchema, (XmlSchemaInference * __this, XmlReader * instanceDocument));
IL2CPP_REGISTER_METHOD(0x01CA9B00, XmlSchemaSet *, InferSchema1, (XmlSchemaInference * __this, XmlReader * instanceDocument, XmlSchemaSet * schemas));
IL2CPP_REGISTER_METHODINFO(0x04756D90, XmlSchemaInference_InferSchema1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CAA2E0, XmlSchemaAttribute *, AddAttribute, (XmlSchemaInference * __this, String * localName, String * prefix, String * childURI, String * attrValue, bool bCreatingNewType, XmlSchema * parentSchema, XmlSchemaObjectCollection * addLocation, XmlSchemaObjectTable * compiledAttributes));
IL2CPP_REGISTER_METHODINFO(0x0471F058, XmlSchemaInference_AddAttribute__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CAB1E0, XmlSchema *, CreateXmlSchema, (XmlSchemaInference * __this, String * targetNS));
IL2CPP_REGISTER_METHOD(0x01CAB370, XmlSchemaElement *, AddElement, (XmlSchemaInference * __this, String * localName, String * prefix, String * childURI, XmlSchema * parentSchema, XmlSchemaObjectCollection * addLocation, int32_t positionWithinCollection));
IL2CPP_REGISTER_METHODINFO(0x04793FF8, XmlSchemaInference_AddElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CABE90, void, InferElement, (XmlSchemaInference * __this, XmlSchemaElement * xse, bool bCreatingNewType, XmlSchema * parentSchema));
IL2CPP_REGISTER_METHODINFO(0x04743878, XmlSchemaInference_InferElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CAD8F0, XmlSchemaSimpleContentExtension *, CheckSimpleContentExtension, (XmlSchemaInference * __this, XmlSchemaComplexType * ct));
IL2CPP_REGISTER_METHODINFO(0x0477B928, XmlSchemaInference_CheckSimpleContentExtension__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CADAA0, XmlSchemaType *, GetEffectiveSchemaType, (XmlSchemaInference * __this, XmlSchemaElement * elem, bool bCreatingNewType));
IL2CPP_REGISTER_METHOD(0x01CADD50, XmlSchemaElement *, FindMatchingElement, (XmlSchemaInference * __this, bool bCreatingNewType, XmlReader * xtr, XmlSchemaComplexType * ct, int32_t * lastUsedSeqItem, bool * bParticleChanged, XmlSchema * parentSchema, bool setMaxoccurs));
IL2CPP_REGISTER_METHODINFO(0x047495F0, XmlSchemaInference_FindMatchingElement__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CAF160, void, ProcessAttributes, (XmlSchemaInference * __this, XmlSchemaElement * * xse, XmlSchemaType * effectiveSchemaType, bool bCreatingNewType, XmlSchema * parentSchema));
IL2CPP_REGISTER_METHODINFO(0x047729F8, XmlSchemaInference_ProcessAttributes__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CAFE50, void, MoveAttributes, (XmlSchemaInference * __this, XmlSchemaSimpleContentExtension * scExtension, XmlSchemaComplexType * ct));
IL2CPP_REGISTER_METHOD(0x01CAFF30, void, MoveAttributes, (XmlSchemaInference * __this, XmlSchemaComplexType * ct, XmlSchemaSimpleContentExtension * simpleContentExtension, bool bCreatingNewType));
IL2CPP_REGISTER_METHOD(0x01CB02A0, XmlSchemaAttribute *, FindAttribute, (XmlSchemaInference * __this, ICollection * attributes, String * attrName));
IL2CPP_REGISTER_METHOD(0x01CB0530, XmlSchemaElement *, FindGlobalElement, (XmlSchemaInference * __this, String * namespaceURI, String * localName, XmlSchema * * parentSchema));
IL2CPP_REGISTER_METHOD(0x01CB07A0, XmlSchemaElement *, FindElement, (XmlSchemaInference * __this, XmlSchemaObjectCollection * elements, String * elementName));
IL2CPP_REGISTER_METHOD(0x01CB0950, XmlSchemaAttribute *, FindAttributeRef, (XmlSchemaInference * __this, ICollection * attributes, String * attributeName, String * nsURI));
IL2CPP_REGISTER_METHOD(0x01CB0C50, XmlSchemaElement *, FindElementRef, (XmlSchemaInference * __this, XmlSchemaObjectCollection * elements, String * elementName, String * nsURI));
IL2CPP_REGISTER_METHOD(0x01CB0E50, void, MakeExistingAttributesOptional, (XmlSchemaInference * __this, XmlSchemaComplexType * ct, XmlSchemaObjectCollection * attributesInInstance));
IL2CPP_REGISTER_METHODINFO(0x047040A0, XmlSchemaInference_MakeExistingAttributesOptional__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CB0F70, void, SwitchUseToOptional, (XmlSchemaInference * __this, XmlSchemaObjectCollection * attributes, XmlSchemaObjectCollection * attributesInInstance));
IL2CPP_REGISTER_METHOD(0x01CB1120, XmlQualifiedName *, RefineSimpleType, (XmlSchemaInference * __this, String * s, int32_t * iTypeFlags));
IL2CPP_REGISTER_METHOD(0x01CB20B0, int32_t, InferSimpleType, (String * s, bool * bNeedsRangeCheck));
IL2CPP_REGISTER_METHOD(0x01CB3160, int32_t, DateTime, (String * s, bool bDate, bool bTime));
IL2CPP_REGISTER_METHOD(0x01CB32F0, XmlSchemaElement *, CreateNewElementforChoice, (XmlSchemaInference * __this, XmlSchemaElement * copyElement));
IL2CPP_REGISTER_METHOD(0x01CB3630, int32_t, GetSchemaType, (XmlQualifiedName * qname));
IL2CPP_REGISTER_METHODINFO(0x04726AD0, XmlSchemaInference_GetSchemaType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01CB4410, void, SetMinMaxOccurs, (XmlSchemaInference * __this, XmlSchemaElement * el, bool setMaxOccurs));
IL2CPP_REGISTER_METHOD(0x01CB46A0, void, __cctor, ());
}
