#include <interception_macros.h>

namespace app::methods::System::Data::NewDiffgramGen {
IL2CPP_REGISTER_METHOD(0x01E44CB0, void, __ctor, (NewDiffgramGen * __this, DataSet * ds));
IL2CPP_REGISTER_METHOD(0x01E44F60, void, __ctor, (NewDiffgramGen * __this, DataTable * dt, bool writeHierarchy));
IL2CPP_REGISTER_METHOD(0x01E451E0, void, CreateTableHierarchy, (NewDiffgramGen * __this, DataTable * dt));
IL2CPP_REGISTER_METHOD(0x01E454F0, void, DoAssignments, (NewDiffgramGen * __this, ArrayList * tables));
IL2CPP_REGISTER_METHOD(0x01E45940, bool, EmptyData, (NewDiffgramGen * __this));
IL2CPP_REGISTER_METHOD(0x01E45B00, void, Save, (NewDiffgramGen * __this, XmlWriter * xmlw));
IL2CPP_REGISTER_METHOD(0x01E45B10, void, Save, (NewDiffgramGen * __this, XmlWriter * xmlw, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01E461E0, void, GenerateTable, (NewDiffgramGen * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01E46270, void, GenerateTableErrors, (NewDiffgramGen * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01E468E0, void, GenerateRow, (NewDiffgramGen * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x01E47100, void, GenerateColumn, (NewDiffgramGen * __this, DataRow * row, DataColumn * col, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHODINFO(0x04785A18, NewDiffgramGen_GenerateColumn__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E47BA0, String *, QualifiedName, (String * prefix, String * name));
}
