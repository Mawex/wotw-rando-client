#include <interception_macros.h>

namespace app::methods::System::Data::Merger {
IL2CPP_REGISTER_METHOD(0x01E40FC0, void, __ctor, (Merger * __this, DataSet * dataSet, bool preserveChanges, MissingSchemaAction__Enum missingSchemaAction));
IL2CPP_REGISTER_METHOD(0x01E40FE0, void, __ctor, (Merger * __this, DataTable * dataTable, bool preserveChanges, MissingSchemaAction__Enum missingSchemaAction));
IL2CPP_REGISTER_METHOD(0x01E41000, void, MergeDataSet, (Merger * __this, DataSet * source));
IL2CPP_REGISTER_METHOD(0x01E41D60, void, MergeTable, (Merger * __this, DataTable * src));
IL2CPP_REGISTER_METHODINFO(0x04719068, Merger_MergeTable__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E420B0, void, MergeTable, (Merger * __this, DataTable * src, DataTable * dst));
IL2CPP_REGISTER_METHOD(0x01E425E0, DataTable *, MergeSchema, (Merger * __this, DataTable * table));
IL2CPP_REGISTER_METHODINFO(0x047402B0, Merger_MergeSchema__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E43010, void, MergeTableData, (Merger * __this, DataTable * src));
IL2CPP_REGISTER_METHOD(0x01E430D0, void, MergeConstraints, (Merger * __this, DataSet * source));
IL2CPP_REGISTER_METHOD(0x01E43160, void, MergeConstraints, (Merger * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x01E43510, void, MergeRelation, (Merger * __this, DataRelation * relation));
IL2CPP_REGISTER_METHODINFO(0x04718D10, Merger_MergeRelation__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E440B0, void, MergeExtendedProperties, (Merger * __this, PropertyCollection * src, PropertyCollection * dst));
IL2CPP_REGISTER_METHOD(0x01E442B0, DataKey, GetSrcKey, (Merger * __this, DataTable * src, DataTable * dst));
}
