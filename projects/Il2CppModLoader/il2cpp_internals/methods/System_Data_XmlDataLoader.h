#include <interception_macros.h>

namespace app::methods::System::Data::XmlDataLoader {
IL2CPP_REGISTER_METHOD(0x023E8760, void, __ctor, (XmlDataLoader * __this, DataSet * dataset, bool IsXdr, bool ignoreSchema));
IL2CPP_REGISTER_METHOD(0x023E88E0, void, __ctor, (XmlDataLoader * __this, DataSet * dataset, bool IsXdr, XmlElement * topNode, bool ignoreSchema));
IL2CPP_REGISTER_METHOD(0x023E8BA0, void, __ctor, (XmlDataLoader * __this, DataTable * datatable, bool IsXdr, bool ignoreSchema));
IL2CPP_REGISTER_METHOD(0x023E8D20, void, __ctor, (XmlDataLoader * __this, DataTable * datatable, bool IsXdr, XmlElement * topNode, bool ignoreSchema));
IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_FromInference, (XmlDataLoader * __this));
IL2CPP_REGISTER_METHOD(0x00DFE810, void, set_FromInference, (XmlDataLoader * __this, bool value));
IL2CPP_REGISTER_METHOD(0x023E8FE0, void, AttachRows, (XmlDataLoader * __this, DataRow * parentRow, XmlNode * parentElement));
IL2CPP_REGISTER_METHOD(0x023E9180, int32_t, CountNonNSAttributes, (XmlDataLoader * __this, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x023E9380, String *, GetValueForTextOnlyColums, (XmlDataLoader * __this, XmlNode * n));
IL2CPP_REGISTER_METHOD(0x023E96E0, String *, GetInitialTextFromNodes, (XmlDataLoader * __this, XmlNode * * n));
IL2CPP_REGISTER_METHOD(0x023E9AB0, DataColumn *, GetTextOnlyColumn, (XmlDataLoader * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x023E9B80, DataRow *, GetRowFromElement, (XmlDataLoader * __this, XmlElement * e));
IL2CPP_REGISTER_METHOD(0x023E9C80, bool, FColumnElement, (XmlDataLoader * __this, XmlElement * e));
IL2CPP_REGISTER_METHOD(0x023E9DD0, bool, FExcludedNamespace, (XmlDataLoader * __this, String * ns));
IL2CPP_REGISTER_METHOD(0x023E9EB0, bool, FIgnoreNamespace, (XmlDataLoader * __this, XmlNode * node));
IL2CPP_REGISTER_METHOD(0x023EA100, bool, FIgnoreNamespace, (XmlDataLoader * __this, XmlReader * node));
IL2CPP_REGISTER_METHOD(0x023EA2A0, bool, IsTextLikeNode, (XmlDataLoader * __this, XmlNodeType__Enum n));
IL2CPP_REGISTER_METHODINFO(0x04735E88, XmlDataLoader_IsTextLikeNode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023EA350, bool, IsTextOnly, (XmlDataLoader * __this, DataColumn * c));
IL2CPP_REGISTER_METHOD(0x023EA380, void, LoadData, (XmlDataLoader * __this, XmlDocument * xdoc));
IL2CPP_REGISTER_METHOD(0x023EA870, void, LoadRowData, (XmlDataLoader * __this, DataRow * row, XmlElement * rowElement));
IL2CPP_REGISTER_METHOD(0x023EB570, void, LoadRows, (XmlDataLoader * __this, DataRow * parentRow, XmlNode * parentElement));
IL2CPP_REGISTER_METHOD(0x023EB990, void, SetRowValueFromXmlText, (XmlDataLoader * __this, DataRow * row, DataColumn * col, String * xmlText));
IL2CPP_REGISTER_METHOD(0x023EBA10, void, InitNameTable, (XmlDataLoader * __this));
IL2CPP_REGISTER_METHOD(0x023EBC50, void, LoadData, (XmlDataLoader * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x023EC200, void, LoadTopMostTable, (XmlDataLoader * __this, DataTable * table));
IL2CPP_REGISTER_METHODINFO(0x0472BDA8, XmlDataLoader_LoadTopMostTable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023ECC70, void, LoadTable, (XmlDataLoader * __this, DataTable * table, bool isNested));
IL2CPP_REGISTER_METHODINFO(0x0470D698, XmlDataLoader_LoadTable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023EDD20, void, LoadColumn, (XmlDataLoader * __this, DataColumn * column, Object__Array * foundColumns));
IL2CPP_REGISTER_METHODINFO(0x04736A00, XmlDataLoader_LoadColumn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023EEA80, bool, ProcessXsdSchema, (XmlDataLoader * __this));
}
