#include <interception_macros.h>

namespace app::methods::System::Data::DataViewManagerListItemTypeDescriptor {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (DataViewManagerListItemTypeDescriptor * __this, DataViewManager * dataViewManager));
IL2CPP_REGISTER_METHOD(0x01F4B330, DataView *, GetDataView, (DataViewManagerListItemTypeDescriptor * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01F4B4A0, AttributeCollection *, ICustomTypeDescriptor_GetAttributes, (DataViewManagerListItemTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, ICustomTypeDescriptor_GetClassName, (DataViewManagerListItemTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, ICustomTypeDescriptor_GetComponentName, (DataViewManagerListItemTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, TypeConverter *, ICustomTypeDescriptor_GetConverter, (DataViewManagerListItemTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, EventDescriptor_1 *, ICustomTypeDescriptor_GetDefaultEvent, (DataViewManagerListItemTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, PropertyDescriptor *, ICustomTypeDescriptor_GetDefaultProperty, (DataViewManagerListItemTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, ICustomTypeDescriptor_GetEditor, (DataViewManagerListItemTypeDescriptor * __this, Type * editorBaseType));
IL2CPP_REGISTER_METHOD(0x01F4B5E0, EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents, (DataViewManagerListItemTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01F4B720, EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents, (DataViewManagerListItemTypeDescriptor * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x01F4B870, PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties, (DataViewManagerListItemTypeDescriptor * __this));
IL2CPP_REGISTER_METHOD(0x01F4B8F0, PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties, (DataViewManagerListItemTypeDescriptor * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, ICustomTypeDescriptor_GetPropertyOwner, (DataViewManagerListItemTypeDescriptor * __this, PropertyDescriptor * pd));
}
