using namespace app;

namespace app::methods::System::Data::RelatedView {
IL2CPP_REGISTER_METHOD(0x01E4AB30, void, __ctor, (RelatedView * __this, DataColumn__Array * columns, Object__Array * values));
IL2CPP_REGISTER_METHODINFO(0x04749280, RelatedView__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E4ACC0, void, __ctor, (RelatedView * __this, DataRowView * parentRowView, DataKey parentKey, DataColumn__Array * childKeyColumns));
IL2CPP_REGISTER_METHOD(0x01E4AE30, Object__Array *, GetParentValues, (RelatedView * __this));
IL2CPP_REGISTER_METHOD(0x01E4B030, bool, Invoke, (RelatedView * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x004C50A0, IFilter *, GetFilter, (RelatedView * __this));
IL2CPP_REGISTER_METHOD(0x01E4B1D0, DataRowView *, AddNew, (RelatedView * __this));
IL2CPP_REGISTER_METHOD(0x01E4B250, void, SetIndex, (RelatedView * __this, String * newSort, DataViewRowState__Enum newRowStates, IFilter * newRowFilter));
}
