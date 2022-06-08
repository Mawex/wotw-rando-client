using namespace app;

namespace app::methods::System::Xml::Linq::XObject {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x0303AAB0, String *, get_BaseUri, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x0303AB70, XElement *, get_Parent, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x0303AC30, void, AddAnnotation, (XObject * __this, Object * annotation));
IL2CPP_REGISTER_METHODINFO(0x04789A38, XObject_AddAnnotation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303AF10, Object *, Annotation, (XObject * __this, Type * type));
IL2CPP_REGISTER_METHODINFO(0x047277D0, XObject_Annotation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0303B090, void, add_Changed, (XObject * __this, EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0303B250, void, remove_Changed, (XObject * __this, EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0303B350, void, add_Changing, (XObject * __this, EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0303B510, void, remove_Changing, (XObject * __this, EventHandler_1_System_Xml_Linq_XObjectChangeEventArgs_ * value));
IL2CPP_REGISTER_METHOD(0x0303B610, bool, IXmlLineInfo_HasLineInfo, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x0303B6A0, int32_t, IXmlLineInfo_get_LineNumber, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x0303B730, int32_t, IXmlLineInfo_get_LinePosition, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x0303B7C0, bool, get_HasBaseUri, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x0303B850, bool, NotifyChanged, (XObject * __this, Object * sender, XObjectChangeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x0303B940, bool, NotifyChanging, (XObject * __this, Object * sender, XObjectChangeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x0303BA30, void, SetBaseUri, (XObject * __this, String * baseUri));
IL2CPP_REGISTER_METHOD(0x0303BB80, void, SetLineInfo, (XObject * __this, int32_t lineNumber, int32_t linePosition));
IL2CPP_REGISTER_METHOD(0x0303BCF0, bool, SkipNotify, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x0303BEE0, SaveOptions__Enum, GetSaveOptionsFromAnnotations, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x0157ACA0, Object *, Annotation, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x0156C620, IEnumerable_1_System_Object_ *, Annotations, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x015E1D60, void, RemoveAnnotations, (XObject * __this));
IL2CPP_REGISTER_METHOD(0x0157ACA0, BaseUriAnnotation *, Annotation, (XObject * __this));
IL2CPP_REGISTER_METHODINFO(0x04742EC0, XObject_Annotation_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157ACA0, XObjectChangeAnnotation *, Annotation, (XObject * __this));
IL2CPP_REGISTER_METHODINFO(0x0477B160, XObject_Annotation_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E1D60, void, RemoveAnnotations, (XObject * __this));
IL2CPP_REGISTER_METHODINFO(0x0474A540, XObject_RemoveAnnotations_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0157ACA0, LineInfoAnnotation *, Annotation, (XObject * __this));
IL2CPP_REGISTER_METHODINFO(0x0475D088, XObject_Annotation_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0156C620, IEnumerable_1_System_Xml_Linq_XObjectChangeAnnotation_ *, Annotations, (XObject * __this));
IL2CPP_REGISTER_METHODINFO(0x047383F8, XObject_Annotations_1__MethodInfo);
}
