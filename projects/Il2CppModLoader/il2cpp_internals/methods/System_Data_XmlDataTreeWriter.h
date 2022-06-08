#include <interception_macros.h>

namespace app::methods::System::Data::XmlDataTreeWriter {
IL2CPP_REGISTER_METHOD(0x023EEEB0, void, __ctor, (XmlDataTreeWriter * __this, DataSet * ds));
IL2CPP_REGISTER_METHOD(0x023EF200, void, __ctor, (XmlDataTreeWriter * __this, DataTable * dt, bool writeHierarchy));
IL2CPP_REGISTER_METHOD(0x023EF4C0, DataTable__Array *, CreateToplevelTables, (XmlDataTreeWriter * __this));
IL2CPP_REGISTER_METHOD(0x023EF8C0, void, CreateTablesHierarchy, (XmlDataTreeWriter * __this, DataTable * dt));
IL2CPP_REGISTER_METHOD(0x023EFBD0, bool, RowHasErrors, (DataRow * row));
IL2CPP_REGISTER_METHOD(0x023EFCE0, void, SaveDiffgramData, (XmlDataTreeWriter * __this, XmlWriter * xw, Hashtable * rowsOrder));
IL2CPP_REGISTER_METHODINFO(0x0475D2C0, XmlDataTreeWriter_SaveDiffgramData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023F02B0, void, Save, (XmlDataTreeWriter * __this, XmlWriter * xw, bool writeSchema));
IL2CPP_REGISTER_METHODINFO(0x0478C658, XmlDataTreeWriter_Save__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023F0C00, ArrayList *, GetNestedChildRelations, (XmlDataTreeWriter * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x023F0F70, void, XmlDataRowWriter, (XmlDataTreeWriter * __this, DataRow * row, String * encodedTableName));
IL2CPP_REGISTER_METHODINFO(0x04704D88, XmlDataTreeWriter_XmlDataRowWriter__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023F2390, bool, PreserveSpace, (Object * value));
}
