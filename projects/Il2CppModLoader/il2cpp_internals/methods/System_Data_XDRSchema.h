#include <interception_macros.h>

namespace app::methods::System::Data::XDRSchema {
IL2CPP_REGISTER_METHOD(0x022C1A50, void, __ctor, (XDRSchema * __this, DataSet * ds, bool fInline));
IL2CPP_REGISTER_METHOD(0x022C1B10, void, LoadSchema, (XDRSchema * __this, XmlElement * schemaRoot, DataSet * ds));
IL2CPP_REGISTER_METHOD(0x022C1D70, XmlElement *, FindTypeNode, (XDRSchema * __this, XmlElement * node));
IL2CPP_REGISTER_METHOD(0x022C20D0, bool, IsTextOnlyContent, (XDRSchema * __this, XmlElement * node));
IL2CPP_REGISTER_METHODINFO(0x0478CDB0, XDRSchema_IsTextOnlyContent__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C22D0, bool, IsXDRField, (XDRSchema * __this, XmlElement * node, XmlElement * typeNode));
IL2CPP_REGISTER_METHOD(0x022C2480, DataTable *, HandleTable, (XDRSchema * __this, XmlElement * node));
IL2CPP_REGISTER_METHOD(0x022C2840, XDRSchema_NameType *, FindNameType, (String * name));
IL2CPP_REGISTER_METHODINFO(0x0476ADF0, XDRSchema_FindNameType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C2980, Type *, ParseDataType, (XDRSchema * __this, String * dt, String * dtValues));
IL2CPP_REGISTER_METHODINFO(0x047596A0, XDRSchema_ParseDataType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C2B20, String *, GetInstanceName, (XDRSchema * __this, XmlElement * node));
IL2CPP_REGISTER_METHODINFO(0x04772D18, XDRSchema_GetInstanceName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C2C80, void, HandleColumn, (XDRSchema * __this, XmlElement * node, DataTable * table));
IL2CPP_REGISTER_METHODINFO(0x047602A8, XDRSchema_HandleColumn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C3750, void, GetMinMax, (XDRSchema * __this, XmlElement * elNode, int32_t * minOccurs, int32_t * maxOccurs));
IL2CPP_REGISTER_METHOD(0x022C3780, void, GetMinMax, (XDRSchema * __this, XmlElement * elNode, bool isAttribute, int32_t * minOccurs, int32_t * maxOccurs));
IL2CPP_REGISTER_METHODINFO(0x04723DB8, XDRSchema_GetMinMax_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C3B20, void, HandleTypeNode, (XDRSchema * __this, XmlElement * typeNode, DataTable * table, ArrayList * tableChildren));
IL2CPP_REGISTER_METHOD(0x022C3D50, DataTable *, InstantiateTable, (XDRSchema * __this, DataSet * dataSet, XmlElement * node, XmlElement * typeNode));
IL2CPP_REGISTER_METHODINFO(0x04751B68, XDRSchema_InstantiateTable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C4520, DataTable *, InstantiateSimpleTable, (XDRSchema * __this, DataSet * dataSet, XmlElement * node));
IL2CPP_REGISTER_METHODINFO(0x04779E78, XDRSchema_InstantiateSimpleTable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x022C48B0, void, __cctor, ());
}
