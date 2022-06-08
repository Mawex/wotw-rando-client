using namespace app;

namespace app::methods::System::Data::XmlToDatasetMap {
IL2CPP_REGISTER_METHOD(0x023F2B30, void, __ctor, (XmlToDatasetMap * __this, DataSet * dataSet, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHOD(0x023F2B40, void, __ctor, (XmlToDatasetMap * __this, XmlNameTable * nameTable, DataSet * dataSet));
IL2CPP_REGISTER_METHOD(0x023F2B50, void, __ctor, (XmlToDatasetMap * __this, DataTable * dataTable, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHOD(0x023F2B60, void, __ctor, (XmlToDatasetMap * __this, XmlNameTable * nameTable, DataTable * dataTable));
IL2CPP_REGISTER_METHOD(0x023F2B70, bool, IsMappedColumn, (DataColumn * c));
IL2CPP_REGISTER_METHOD(0x023F2BA0, XmlToDatasetMap_TableSchemaInfo *, AddTableSchema, (XmlToDatasetMap * __this, DataTable * table, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHOD(0x023F2E60, XmlToDatasetMap_TableSchemaInfo *, AddTableSchema, (XmlToDatasetMap * __this, XmlNameTable * nameTable, DataTable * table));
IL2CPP_REGISTER_METHOD(0x023F3180, bool, AddColumnSchema, (XmlToDatasetMap * __this, DataColumn * col, XmlNameTable * nameTable, XmlToDatasetMap_XmlNodeIdHashtable * columns));
IL2CPP_REGISTER_METHOD(0x023F3470, bool, AddColumnSchema, (XmlToDatasetMap * __this, XmlNameTable * nameTable, DataColumn * col, XmlToDatasetMap_XmlNodeIdHashtable * columns));
IL2CPP_REGISTER_METHOD(0x023F37F0, void, BuildIdentityMap, (XmlToDatasetMap * __this, DataSet * dataSet, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHOD(0x023F3CC0, void, BuildIdentityMap, (XmlToDatasetMap * __this, XmlNameTable * nameTable, DataSet * dataSet));
IL2CPP_REGISTER_METHOD(0x023F45B0, void, BuildIdentityMap, (XmlToDatasetMap * __this, DataTable * dataTable, XmlNameTable * nameTable));
IL2CPP_REGISTER_METHOD(0x023F4950, void, BuildIdentityMap, (XmlToDatasetMap * __this, XmlNameTable * nameTable, DataTable * dataTable));
IL2CPP_REGISTER_METHOD(0x023F51E0, ArrayList *, GetSelfAndDescendants, (XmlToDatasetMap * __this, DataTable * dt));
IL2CPP_REGISTER_METHOD(0x023F5600, Object *, GetColumnSchema, (XmlToDatasetMap * __this, XmlNode * node, bool fIgnoreNamespace));
IL2CPP_REGISTER_METHOD(0x023F58A0, Object *, GetColumnSchema, (XmlToDatasetMap * __this, DataTable * table, XmlReader * dataReader, bool fIgnoreNamespace));
IL2CPP_REGISTER_METHOD(0x023F5AC0, Object *, GetSchemaForNode, (XmlToDatasetMap * __this, XmlNode * node, bool fIgnoreNamespace));
IL2CPP_REGISTER_METHOD(0x023F5C10, DataTable *, GetTableForNode, (XmlToDatasetMap * __this, XmlReader * node, bool fIgnoreNamespace));
IL2CPP_REGISTER_METHOD(0x023F5D30, void, HandleSpecialColumn, (XmlToDatasetMap * __this, DataColumn * col, XmlNameTable * nameTable, XmlToDatasetMap_XmlNodeIdHashtable * columns));
}
