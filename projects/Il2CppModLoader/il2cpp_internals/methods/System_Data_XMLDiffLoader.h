using namespace app;

namespace app::methods::System::Data::XMLDiffLoader {
IL2CPP_REGISTER_METHOD(0x023D0AD0, void, LoadDiffGram, (XMLDiffLoader * __this, DataSet * ds, XmlReader * dataTextReader));
IL2CPP_REGISTER_METHOD(0x023D0E80, void, CreateTablesHierarchy, (XMLDiffLoader * __this, DataTable * dt));
IL2CPP_REGISTER_METHOD(0x023D1190, void, LoadDiffGram, (XMLDiffLoader * __this, DataTable * dt, XmlReader * dataTextReader));
IL2CPP_REGISTER_METHOD(0x023D1650, void, ProcessDiffs, (XMLDiffLoader * __this, DataSet * ds, XmlReader * ssync));
IL2CPP_REGISTER_METHODINFO(0x0478DBA0, XMLDiffLoader_ProcessDiffs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023D19B0, void, ProcessDiffs, (XMLDiffLoader * __this, ArrayList * tableList, XmlReader * ssync));
IL2CPP_REGISTER_METHODINFO(0x04788960, XMLDiffLoader_ProcessDiffs_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023D1CC0, void, ProcessErrors, (XMLDiffLoader * __this, DataSet * ds, XmlReader * ssync));
IL2CPP_REGISTER_METHODINFO(0x04733080, XMLDiffLoader_ProcessErrors__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023D20A0, void, ProcessErrors, (XMLDiffLoader * __this, ArrayList * dt, XmlReader * ssync));
IL2CPP_REGISTER_METHODINFO(0x04761160, XMLDiffLoader_ProcessErrors_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023D2570, DataTable *, GetTable, (XMLDiffLoader * __this, String * tableName, String * ns));
IL2CPP_REGISTER_METHOD(0x023D2850, int32_t, ReadOldRowData, (XMLDiffLoader * __this, DataSet * ds, DataTable * * table, int32_t * pos, XmlReader * row));
IL2CPP_REGISTER_METHODINFO(0x04759B28, XMLDiffLoader_ReadOldRowData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023D3690, void, SkipWhitespaces, (XMLDiffLoader * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (XMLDiffLoader * __this));
}
