#include <interception_macros.h>

namespace app::methods::System::ComponentModel::PropertyDescriptor {
IL2CPP_REGISTER_METHOD(0x01FE9DF0, void, __ctor, (PropertyDescriptor * __this, String * name, Attribute__Array * attrs));
IL2CPP_REGISTER_METHOD(0x01FE9E00, void, __ctor, (PropertyDescriptor * __this, MemberDescriptor * descr));
IL2CPP_REGISTER_METHOD(0x01FE9E10, void, __ctor, (PropertyDescriptor * __this, MemberDescriptor * descr, Attribute__Array * attrs));
IL2CPP_REGISTER_METHOD(0x029925E0, TypeConverter *, get_Converter, (PropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02992820, bool, get_IsLocalizable, (PropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02992960, DesignerSerializationVisibility__Enum, get_SerializationVisibility, (PropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02992A70, void, AddValueChanged, (PropertyDescriptor * __this, Object * component, EventHandler * handler));
IL2CPP_REGISTER_METHODINFO(0x0473AE10, PropertyDescriptor_AddValueChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02992CF0, bool, Equals, (PropertyDescriptor * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x02992EC0, Object *, CreateInstance, (PropertyDescriptor * __this, Type * type));
IL2CPP_REGISTER_METHOD(0x02993140, void, FillAttributes, (PropertyDescriptor * __this, IList * attributeList));
IL2CPP_REGISTER_METHOD(0x02993160, PropertyDescriptorCollection *, GetChildProperties, (PropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x02993180, PropertyDescriptorCollection *, GetChildProperties, (PropertyDescriptor * __this, Attribute__Array * filter));
IL2CPP_REGISTER_METHOD(0x029931A0, PropertyDescriptorCollection *, GetChildProperties, (PropertyDescriptor * __this, Object * instance));
IL2CPP_REGISTER_METHOD(0x029931C0, PropertyDescriptorCollection *, GetChildProperties, (PropertyDescriptor * __this, Object * instance, Attribute__Array * filter));
IL2CPP_REGISTER_METHOD(0x029932D0, Object *, GetEditor, (PropertyDescriptor * __this, Type * editorBaseType));
IL2CPP_REGISTER_METHOD(0x02993840, int32_t, GetHashCode, (PropertyDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x029938A0, Object *, GetInvocationTarget, (PropertyDescriptor * __this, Type * type, Object * instance));
IL2CPP_REGISTER_METHOD(0x02993A70, Type *, GetTypeFromName, (PropertyDescriptor * __this, String * typeName));
IL2CPP_REGISTER_METHOD(0x02993D00, void, OnValueChanged, (PropertyDescriptor * __this, Object * component, EventArgs * e));
IL2CPP_REGISTER_METHOD(0x02993DF0, void, RemoveValueChanged, (PropertyDescriptor * __this, Object * component, EventHandler * handler));
IL2CPP_REGISTER_METHODINFO(0x04757380, PropertyDescriptor_RemoveValueChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02993FC0, EventHandler *, GetValueChangedHandler, (PropertyDescriptor * __this, Object * component));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SupportsChangeEvents, (PropertyDescriptor * __this));
}
