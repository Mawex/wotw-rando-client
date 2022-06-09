#include <interception_macros.h>

namespace app::methods::System_Data::DataRowView {
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (app::DataRowView * this_ptr, app::DataView * data_view, app::DataRow * row));
IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equals, (app::DataRowView * this_ptr, app::Object * other));
IL2CPP_REGISTER_METHOD(0x017E12D0, int32_t, GetHashCode, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA280, DataView *, get_DataView, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x017E1300, String *, IDataErrorInfo_get_Item, (app::DataRowView * this_ptr, app::String * col_name));
IL2CPP_REGISTER_METHOD(0x017E1340, String *, IDataErrorInfo_get_Error, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x017E1360, DataRowVersion__Enum, get_RowVersionDefault, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x017E13D0, int32_t, GetRecord, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x017E1440, bool, HasRecord, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x017E14B0, Object *, GetColumnValue, (app::DataRowView * this_ptr, app::DataColumn * column));
IL2CPP_REGISTER_METHOD(0x017E1580, void, SetColumnValue, (app::DataRowView * this_ptr, app::DataColumn * column, app::Object * value));
IL2CPP_REGISTER_METHODINFO(0x04781668, DataRowView_SetColumnValue__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017E16B0, DataView *, CreateChildView_1, (app::DataRowView * this_ptr, app::DataRelation * relation, bool follow_parent));
IL2CPP_REGISTER_METHODINFO(0x047888A0, DataRowView_CreateChildView__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017E1C60, DataView *, CreateChildView_2, (app::DataRowView * this_ptr, app::DataRelation * relation));
IL2CPP_REGISTER_METHOD(0x002FB930, DataRow *, get_Row, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x00447ED0, void, BeginEdit, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x017E1C70, void, CancelEdit, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x017E1CD0, void, EndEdit, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x017E1D30, bool, get_IsNew, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x017E1D60, void, add_PropertyChanged, (app::DataRowView * this_ptr, app::PropertyChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x017E1E50, void, remove_PropertyChanged, (app::DataRowView * this_ptr, app::PropertyChangedEventHandler * value));
IL2CPP_REGISTER_METHOD(0x017E1F40, void, RaisePropertyChangedEvent, (app::DataRowView * this_ptr, app::String * prop_name));
IL2CPP_REGISTER_METHOD(0x017E20C0, AttributeCollection *, ICustomTypeDescriptor_GetAttributes, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, ICustomTypeDescriptor_GetClassName, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, String *, ICustomTypeDescriptor_GetComponentName, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, TypeConverter *, ICustomTypeDescriptor_GetConverter, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, EventDescriptor_1 *, ICustomTypeDescriptor_GetDefaultEvent, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, PropertyDescriptor *, ICustomTypeDescriptor_GetDefaultProperty, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x00420EE0, Object *, ICustomTypeDescriptor_GetEditor, (app::DataRowView * this_ptr, app::Type * editor_base_type));
IL2CPP_REGISTER_METHOD(0x017E2200, EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents_1, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x017E2340, EventDescriptorCollection *, ICustomTypeDescriptor_GetEvents_2, (app::DataRowView * this_ptr, app::Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x017E2490, PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties_1, (app::DataRowView * this_ptr));
IL2CPP_REGISTER_METHOD(0x017E2510, PropertyDescriptorCollection *, ICustomTypeDescriptor_GetProperties_2, (app::DataRowView * this_ptr, app::Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, ICustomTypeDescriptor_GetPropertyOwner, (app::DataRowView * this_ptr, app::PropertyDescriptor * pd));
IL2CPP_REGISTER_METHOD(0x017E2600, void, __cctor, ());
}
