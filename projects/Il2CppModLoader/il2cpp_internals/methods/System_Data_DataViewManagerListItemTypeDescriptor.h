#include <interception_macros.h>

namespace app::methods::System_Data::DataViewManagerListItemTypeDescriptor {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::DataViewManager * data_view_manager));
IL2CPP_REGISTER_METHOD(0x01F4B330, DataView *, GetDataView, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::DataTable * table));
IL2CPP_REGISTER_METHOD(0x01F4B4A0, AttributeCollection *, ICustomTypeDescriptor_GetAttributes, (app::DataViewManagerListItemTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, ICustomTypeDescriptor_GetClassName, (app::DataViewManagerListItemTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, ICustomTypeDescriptor_GetComponentName, (app::DataViewManagerListItemTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, TypeConverter *, ICustomTypeDescriptor_GetConverter, (app::DataViewManagerListItemTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, EventDescriptor_1 *, ICustomTypeDescriptor_GetDefaultEvent, (app::DataViewManagerListItemTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, PropertyDescriptor *, ICustomTypeDescriptor_GetDefaultProperty, (app::DataViewManagerListItemTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, ICustomTypeDescriptor_GetEditor, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::Type * editor_base_type));
IL2CPP_REGISTER_METHOD(0x01F4B5E0, EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents_1, (app::DataViewManagerListItemTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F4B720, EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents_2, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x01F4B870, PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties_1, (app::DataViewManagerListItemTypeDescriptor * this_ptr));
IL2CPP_REGISTER_METHOD(0x01F4B8F0, PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties_2, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, ICustomTypeDescriptor_GetPropertyOwner, (app::DataViewManagerListItemTypeDescriptor * this_ptr, app::PropertyDescriptor * pd));
}
