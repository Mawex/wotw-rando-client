using namespace app;

namespace app::methods::System::Data::DataTable {
IL2CPP_REGISTER_METHOD(0x017F2E00, void, __ctor, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017F39A0, void, __ctor, (DataTable * __this, String * tableName));
IL2CPP_REGISTER_METHOD(0x017F3A50, void, __ctor, (DataTable * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x017F3CA0, void, GetObjectData, (DataTable * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x017F3DD0, void, SerializeDataTable, (DataTable * __this, SerializationInfo * info, StreamingContext context, bool isSingleTable, SerializationFormat__Enum_1 remotingFormat));
IL2CPP_REGISTER_METHOD(0x017F4260, void, DeserializeDataTable, (DataTable * __this, SerializationInfo * info, StreamingContext context, bool isSingleTable, SerializationFormat__Enum_1 remotingFormat));
IL2CPP_REGISTER_METHOD(0x017F4920, void, SerializeTableSchema, (DataTable * __this, SerializationInfo * info, StreamingContext context, bool isSingleTable));
IL2CPP_REGISTER_METHODINFO(0x047970C0, DataTable_SerializeTableSchema__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017F6280, void, DeserializeTableSchema, (DataTable * __this, SerializationInfo * info, StreamingContext context, bool isSingleTable));
IL2CPP_REGISTER_METHOD(0x017F7200, void, SerializeConstraints, (DataTable * __this, SerializationInfo * info, StreamingContext context, int32_t serIndex, bool allConstraints));
IL2CPP_REGISTER_METHOD(0x017F7C80, void, DeserializeConstraints, (DataTable * __this, SerializationInfo * info, StreamingContext context, int32_t serIndex, bool allConstraints));
IL2CPP_REGISTER_METHOD(0x017F87F0, void, SerializeExpressionColumns, (DataTable * __this, SerializationInfo * info, StreamingContext context, int32_t serIndex));
IL2CPP_REGISTER_METHOD(0x017F89A0, void, DeserializeExpressionColumns, (DataTable * __this, SerializationInfo * info, StreamingContext context, int32_t serIndex));
IL2CPP_REGISTER_METHOD(0x017F8B60, void, SerializeTableData, (DataTable * __this, SerializationInfo * info, StreamingContext context, int32_t serIndex));
IL2CPP_REGISTER_METHODINFO(0x047852E0, DataTable_SerializeTableData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017F9B20, void, DeserializeTableData, (DataTable * __this, SerializationInfo * info, StreamingContext context, int32_t serIndex));
IL2CPP_REGISTER_METHOD(0x017FA6A0, DataRowState__Enum, ConvertToRowState, (DataTable * __this, BitArray * bitStates, int32_t bitIndex));
IL2CPP_REGISTER_METHODINFO(0x04774730, DataTable_ConvertToRowState__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017FA7B0, void, GetRowAndColumnErrors, (DataTable * __this, int32_t rowIndex, Hashtable * rowErrors, Hashtable * colErrors));
IL2CPP_REGISTER_METHOD(0x017FAC20, void, ConvertToRowError, (DataTable * __this, int32_t rowIndex, Hashtable * rowErrors, Hashtable * colErrors));
IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_CaseSensitive, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FB020, void, set_CaseSensitive, (DataTable * __this, bool value));
IL2CPP_REGISTER_METHODINFO(0x0473D8A8, DataTable_set_CaseSensitive__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017FB140, bool, get_AreIndexEventsSuspended, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FB150, void, RestoreIndexEvents, (DataTable * __this, bool forceReset));
IL2CPP_REGISTER_METHODINFO(0x0472D2B8, DataTable_RestoreIndexEvents__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017FB480, void, SuspendIndexEvents, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01116B20, bool, get_IsInitialized, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FB550, bool, get_IsTypedDataTable, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FB630, bool, SetCaseSensitiveValue, (DataTable * __this, bool isCaseSensitive, bool userSet, bool resetIndexes));
IL2CPP_REGISTER_METHOD(0x017FB910, bool, ShouldSerializeCaseSensitive, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FB920, bool, get_SelfNested, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FBB80, List_1_System_Data_Index_ *, get_LiveIndexes, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FBC80, SerializationFormat__Enum_1, get_RemotingFormat, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FBC90, void, set_RemotingFormat, (DataTable * __this, SerializationFormat__Enum_1 value));
IL2CPP_REGISTER_METHODINFO(0x04748FA0, DataTable_set_RemotingFormat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017FBD60, int32_t, get_UKColumnPositionForInference, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FBD70, void, set_UKColumnPositionForInference, (DataTable * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x017FBD80, DataRelationCollection *, get_ChildRelations, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x002FB9D0, DataColumnCollection *, get_Columns, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FBEE0, CompareInfo *, get_CompareInfo, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x002FB9F0, ConstraintCollection *, get_Constraints, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FBF30, void, ResetConstraints, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, DataSet *, get_DataSet, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FBF50, void, SetDataSet, (DataTable * __this, DataSet * dataSet));
IL2CPP_REGISTER_METHOD(0x017FC010, DataView *, get_DefaultView, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FC1E0, String *, get_DisplayExpressionInternal, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FC280, bool, get_EnforceConstraints, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FC2B0, void, set_EnforceConstraints, (DataTable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x017FC2F0, bool, get_SuspendEnforceConstraints, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FC300, void, set_SuspendEnforceConstraints, (DataTable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x017FC310, void, EnableConstraints, (DataTable * __this));
IL2CPP_REGISTER_METHODINFO(0x04757E70, DataTable_EnableConstraints__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017FC880, PropertyCollection *, get_ExtendedProperties, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FC9F0, IFormatProvider *, get_FormatProvider, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x002FBCE0, CultureInfo *, get_Locale, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FCAE0, void, set_Locale, (DataTable * __this, CultureInfo * value));
IL2CPP_REGISTER_METHODINFO(0x04792C20, DataTable_set_Locale__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017FCF10, bool, SetLocaleValue, (DataTable * __this, CultureInfo * culture, bool userSet, bool resetIndexes));
IL2CPP_REGISTER_METHOD(0x00601090, bool, ShouldSerializeLocale, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FD430, int32_t, get_MinimumCapacity, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FD450, void, set_MinimumCapacity, (DataTable * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x017FD520, int32_t, get_RecordCapacity, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x002FD490, int32_t, get_ElementColumnCount, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FD540, void, set_ElementColumnCount, (DataTable * __this, int32_t value));
IL2CPP_REGISTER_METHODINFO(0x04723960, DataTable_set_ElementColumnCount__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017FD5F0, DataRelationCollection *, get_ParentRelations, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x0068A390, bool, get_MergingData, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x0068A3A0, void, set_MergingData, (DataTable * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00A5BA40, DataRelation__Array *, get_NestedParentRelations, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FD750, bool, get_SchemaLoading, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FD760, void, CacheNestedParent, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FD780, DataRelation__Array *, FindNestedParentRelations, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FDB40, int32_t, get_NestedParentsCount, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FDDF0, DataColumn__Array *, get_PrimaryKey, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FDEA0, void, set_PrimaryKey, (DataTable * __this, DataColumn__Array * value));
IL2CPP_REGISTER_METHODINFO(0x0478D4B0, DataTable_set_PrimaryKey__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB9B0, DataRowCollection *, get_Rows, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, String *, get_TableName, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FE4B0, void, set_TableName, (DataTable * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04725188, DataTable_set_TableName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017FEA90, String *, get_EncodedTableName, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FEB50, String *, GetInheritedNamespace, (DataTable * __this, List_1_System_Data_DataTable_ * visitedTables));
IL2CPP_REGISTER_METHOD(0x017FEE30, String *, get_Namespace, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FEFA0, void, set_Namespace, (DataTable * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x0474A228, DataTable_set_Namespace__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017FF350, bool, IsNamespaceInherited, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x017FF360, void, CheckCascadingNamespaceConflict, (DataTable * __this, String * realNamespace));
IL2CPP_REGISTER_METHODINFO(0x0475F358, DataTable_CheckCascadingNamespaceConflict__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017FF660, void, CheckNamespaceValidityForNestedRelations, (DataTable * __this, String * realNamespace));
IL2CPP_REGISTER_METHOD(0x017FFB30, void, CheckNamespaceValidityForNestedParentRelations, (DataTable * __this, String * ns, DataTable * parentTable));
IL2CPP_REGISTER_METHODINFO(0x0475AD88, DataTable_CheckNamespaceValidityForNestedParentRelations__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017FFDD0, void, DoRaiseNamespaceChange, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01800300, void, BeginInit, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01800310, void, EndInit, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x002FBC80, String *, get_Prefix, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01800830, void, set_Prefix, (DataTable * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04704D48, DataTable_set_Prefix__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0049F2B0, DataColumn *, get_XmlText, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x018009E0, void, set_XmlText, (DataTable * __this, DataColumn * value));
IL2CPP_REGISTER_METHODINFO(0x04748410, DataTable_set_XmlText__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01800B10, Decimal, get_MaxOccurs, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01800B20, void, set_MaxOccurs, (DataTable * __this, Decimal value));
IL2CPP_REGISTER_METHOD(0x00D7D770, Decimal, get_MinOccurs, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x00D7D780, void, set_MinOccurs, (DataTable * __this, Decimal value));
IL2CPP_REGISTER_METHOD(0x01800B30, void, SetKeyValues, (DataTable * __this, DataKey key, Object__Array * keyValues, int32_t record));
IL2CPP_REGISTER_METHOD(0x01800BE0, DataRow *, FindByIndex, (DataTable * __this, Index * ndx, Object__Array * key));
IL2CPP_REGISTER_METHOD(0x01800D00, DataRow *, FindMergeTarget, (DataTable * __this, DataRow * row, DataKey key, Index * ndx));
IL2CPP_REGISTER_METHOD(0x01800E60, void, SetMergeRecords, (DataTable * __this, DataRow * row, int32_t newRecord, int32_t oldRecord, DataRowAction__Enum action));
IL2CPP_REGISTER_METHOD(0x01800F20, DataRow *, MergeRow, (DataTable * __this, DataRow * row, DataRow * targetRow, bool preserveChanges, Index * idxSearch));
IL2CPP_REGISTER_METHOD(0x01801650, DataTable *, CreateInstance, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01801740, DataTable *, Clone, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01801750, DataTable *, Clone, (DataTable * __this, DataSet * cloneDS));
IL2CPP_REGISTER_METHOD(0x01801990, DataTable *, IncrementalCloneTo, (DataTable * __this, DataTable * sourceTable, DataTable * targetTable));
IL2CPP_REGISTER_METHOD(0x01801C60, DataTable *, CloneHierarchy, (DataTable * __this, DataTable * sourceTable, DataSet * ds, Hashtable * visitedMap));
IL2CPP_REGISTER_METHOD(0x01802230, DataTable *, CloneTo, (DataTable * __this, DataTable * clone, DataSet * cloneDS, bool skipExpressionColumns));
IL2CPP_REGISTER_METHOD(0x01802EB0, void, add_Initialized, (DataTable * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x01802F70, void, remove_Initialized, (DataTable * __this, EventHandler * value));
IL2CPP_REGISTER_METHOD(0x002FA280, ISite *, get_Site, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01803030, void, set_Site, (DataTable * __this, ISite * value));
IL2CPP_REGISTER_METHOD(0x018031C0, void, AddRow, (DataTable * __this, DataRow * row, int32_t proposedID));
IL2CPP_REGISTER_METHOD(0x018031F0, void, InsertRow, (DataTable * __this, DataRow * row, int32_t proposedID, int32_t pos));
IL2CPP_REGISTER_METHOD(0x01803210, void, InsertRow, (DataTable * __this, DataRow * row, int64_t proposedID, int32_t pos, bool fireEvent));
IL2CPP_REGISTER_METHODINFO(0x04764020, DataTable_InsertRow_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018035A0, void, CheckNotModifying, (DataTable * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x018035D0, void, Clear, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x018035E0, void, Clear, (DataTable * __this, bool clearAll));
IL2CPP_REGISTER_METHOD(0x01803FA0, void, CascadeAll, (DataTable * __this, DataRow * row, DataRowAction__Enum action));
IL2CPP_REGISTER_METHOD(0x01804170, void, CommitRow, (DataTable * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x01804210, int32_t, Compare, (DataTable * __this, String * s1, String * s2));
IL2CPP_REGISTER_METHOD(0x01804230, int32_t, Compare, (DataTable * __this, String * s1, String * s2, CompareInfo * comparer));
IL2CPP_REGISTER_METHOD(0x018043B0, int32_t, IndexOf, (DataTable * __this, String * s1, String * s2));
IL2CPP_REGISTER_METHOD(0x01804440, bool, IsSuffix, (DataTable * __this, String * s1, String * s2));
IL2CPP_REGISTER_METHOD(0x00417870, bool, IListSource_get_ContainsListCollection, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x018044D0, void, DeleteRow, (DataTable * __this, DataRow * row));
IL2CPP_REGISTER_METHODINFO(0x0470D868, DataTable_DeleteRow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018045B0, String *, FormatSortString, (DataTable * __this, IndexField__Array * indexDesc));
IL2CPP_REGISTER_METHOD(0x018047D0, void, FreeRecord, (DataTable * __this, int32_t * record));
IL2CPP_REGISTER_METHOD(0x018047F0, Index *, GetIndex, (DataTable * __this, String * sort, DataViewRowState__Enum recordStates, IFilter * rowFilter));
IL2CPP_REGISTER_METHOD(0x01804840, Index *, GetIndex, (DataTable * __this, IndexField__Array * indexDesc, DataViewRowState__Enum recordStates, IFilter * rowFilter));
IL2CPP_REGISTER_METHOD(0x01804B50, IList *, IListSource_GetList, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x006C8770, List_1_System_Data_DataViewListener_ *, GetListeners, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01804B60, int32_t, GetSpecialHashCode, (DataTable * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01804CA0, void, InsertRow, (DataTable * __this, DataRow * row, int64_t proposedID));
IL2CPP_REGISTER_METHODINFO(0x0478ED30, DataTable_InsertRow_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018050E0, int32_t, NewRecord, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x018050F0, int32_t, NewUninitializedRecord, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01805110, int32_t, NewRecord, (DataTable * __this, int32_t sourceRecord));
IL2CPP_REGISTER_METHOD(0x01805240, DataRow *, NewEmptyRow, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x018052B0, DataRow *, NewUninitializedRow, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x018052F0, DataRow *, NewRow, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x018053A0, DataRow *, CreateEmptyRow, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x018056A0, void, NewRowCreated, (DataTable * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x01805890, DataRow *, NewRow, (DataTable * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x01805940, DataRow *, NewRowFromBuilder, (DataTable * __this, DataRowBuilder * builder));
IL2CPP_REGISTER_METHOD(0x01805B30, Type *, GetRowType, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01805BD0, DataRow__Array *, NewRowArray, (DataTable * __this, int32_t size));
IL2CPP_REGISTER_METHOD(0x01805D60, bool, get_NeedColumnChangeEvents, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01805DA0, void, OnColumnChanging, (DataTable * __this, DataColumnChangeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01805EA0, void, OnColumnChanged, (DataTable * __this, DataColumnChangeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01805FA0, void, OnPropertyChanging, (DataTable * __this, PropertyChangedEventArgs * pcevent));
IL2CPP_REGISTER_METHOD(0x0171CA40, void, OnRemoveColumnInternal, (DataTable * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRemoveColumn, (DataTable * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x018060A0, DataRowChangeEventArgs *, OnRowChanged, (DataTable * __this, DataRowChangeEventArgs * args, DataRow * eRow, DataRowAction__Enum eAction));
IL2CPP_REGISTER_METHOD(0x01806240, DataRowChangeEventArgs *, OnRowChanging, (DataTable * __this, DataRowChangeEventArgs * args, DataRow * eRow, DataRowAction__Enum eAction));
IL2CPP_REGISTER_METHOD(0x018063E0, void, OnRowChanged, (DataTable * __this, DataRowChangeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x018064E0, void, OnRowChanging, (DataTable * __this, DataRowChangeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x018065E0, void, OnRowDeleting, (DataTable * __this, DataRowChangeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x018066E0, void, OnRowDeleted, (DataTable * __this, DataRowChangeEventArgs * e));
IL2CPP_REGISTER_METHOD(0x018067E0, void, OnTableCleared, (DataTable * __this, DataTableClearEventArgs * e));
IL2CPP_REGISTER_METHOD(0x018068E0, void, OnTableClearing, (DataTable * __this, DataTableClearEventArgs * e));
IL2CPP_REGISTER_METHOD(0x018069E0, void, OnTableNewRow, (DataTable * __this, DataTableNewRowEventArgs * e));
IL2CPP_REGISTER_METHOD(0x01806AE0, void, OnInitialized, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01806C10, IndexField__Array *, ParseSortString, (DataTable * __this, String * sortString));
IL2CPP_REGISTER_METHODINFO(0x04765050, DataTable_ParseSortString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018071A0, void, RaisePropertyChanging, (DataTable * __this, String * name));
IL2CPP_REGISTER_METHOD(0x01807300, void, RecordChanged, (DataTable * __this, int32_t record));
IL2CPP_REGISTER_METHOD(0x018074C0, void, RecordChanged, (DataTable * __this, Int32__Array * oldIndex, Int32__Array * newIndex));
IL2CPP_REGISTER_METHOD(0x018076D0, void, RecordStateChanged, (DataTable * __this, int32_t record, DataViewRowState__Enum oldState, DataViewRowState__Enum newState));
IL2CPP_REGISTER_METHOD(0x01807890, void, RecordStateChanged, (DataTable * __this, int32_t record1, DataViewRowState__Enum oldState1, DataViewRowState__Enum newState1, int32_t record2, DataViewRowState__Enum oldState2, DataViewRowState__Enum newState2));
IL2CPP_REGISTER_METHOD(0x01807AC0, Int32__Array *, RemoveRecordFromIndexes, (DataTable * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x01807D70, Int32__Array *, InsertRecordToIndexes, (DataTable * __this, DataRow * row, DataRowVersion__Enum version));
IL2CPP_REGISTER_METHOD(0x01807FA0, void, SilentlySetValue, (DataTable * __this, DataRow * dr, DataColumn * dc, DataRowVersion__Enum version, Object * newValue));
IL2CPP_REGISTER_METHOD(0x018081C0, void, RemoveRow, (DataTable * __this, DataRow * row, bool check));
IL2CPP_REGISTER_METHODINFO(0x0474BEF0, DataTable_RemoveRow__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01808670, void, Reset, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01808900, void, ResetIndexes, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01808910, void, ResetInternalIndexes, (DataTable * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x01808B40, void, RollbackRow, (DataTable * __this, DataRow * row));
IL2CPP_REGISTER_METHOD(0x01808BA0, DataRowChangeEventArgs *, RaiseRowChanged, (DataTable * __this, DataRowChangeEventArgs * args, DataRow * eRow, DataRowAction__Enum eAction));
IL2CPP_REGISTER_METHODINFO(0x04772AD0, DataTable_RaiseRowChanged__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01808E60, DataRowChangeEventArgs *, RaiseRowChanging, (DataTable * __this, DataRowChangeEventArgs * args, DataRow * eRow, DataRowAction__Enum eAction));
IL2CPP_REGISTER_METHOD(0x01809190, DataRowChangeEventArgs *, RaiseRowChanging, (DataTable * __this, DataRowChangeEventArgs * args, DataRow * eRow, DataRowAction__Enum eAction, bool fireEvent));
IL2CPP_REGISTER_METHOD(0x01809350, void, SetNewRecord, (DataTable * __this, DataRow * row, int32_t proposedRecord, DataRowAction__Enum action, bool isInMerge, bool fireEvent, bool suppressEnsurePropertyChanged));
IL2CPP_REGISTER_METHODINFO(0x0476E860, DataTable_SetNewRecord__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01809460, void, SetNewRecordWorker, (DataTable * __this, DataRow * row, int32_t proposedRecord, DataRowAction__Enum action, bool isInMerge, bool suppressEnsurePropertyChanged, int32_t position, bool fireEvent, Exception * * deferredException));
IL2CPP_REGISTER_METHODINFO(0x04707898, DataTable_SetNewRecordWorker__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01809E30, void, SetOldRecord, (DataTable * __this, DataRow * row, int32_t proposedRecord));
IL2CPP_REGISTER_METHOD(0x0180A1F0, void, RestoreShadowIndexes, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x0180A210, void, SetShadowIndexes, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x0180A250, void, ShadowIndexCopy, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x0180A3B0, String *, ToString, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x0180A4F0, bool, UpdatingCurrent, (DataTable * __this, DataRow * row, DataRowAction__Enum action));
IL2CPP_REGISTER_METHOD(0x0180A520, DataColumn *, AddUniqueKey, (DataTable * __this, int32_t position));
IL2CPP_REGISTER_METHOD(0x0180A8B0, DataColumn *, AddUniqueKey, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x0180A8C0, DataColumn *, AddForeignKey, (DataTable * __this, DataColumn * parentKey));
IL2CPP_REGISTER_METHOD(0x0180AA70, void, UpdatePropertyDescriptorCollectionCache, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x0180AA80, PropertyDescriptorCollection *, GetPropertyDescriptorCollection, (DataTable * __this, Attribute__Array * attributes));
IL2CPP_REGISTER_METHOD(0x0180B140, XmlQualifiedName *, get_TypeName, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x00D77860, void, set_TypeName, (DataTable * __this, XmlQualifiedName * value));
IL2CPP_REGISTER_METHOD(0x0180B250, void, Merge, (DataTable * __this, DataTable * table));
IL2CPP_REGISTER_METHOD(0x0180B270, void, Merge, (DataTable * __this, DataTable * table, bool preserveChanges, MissingSchemaAction__Enum missingSchemaAction));
IL2CPP_REGISTER_METHODINFO(0x04757D78, DataTable_Merge_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0180B5B0, void, WriteXml, (DataTable * __this, XmlWriter * writer, XmlWriteMode__Enum mode, bool writeHierarchy));
IL2CPP_REGISTER_METHODINFO(0x047559A0, DataTable_WriteXml__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0180BC50, bool, CheckForClosureOnExpressions, (DataTable * __this, DataTable * dt, bool writeHierarchy));
IL2CPP_REGISTER_METHOD(0x0180BDF0, bool, CheckForClosureOnExpressionTables, (DataTable * __this, List_1_System_Data_DataTable_ * tableList));
IL2CPP_REGISTER_METHOD(0x0180C170, void, WriteXmlSchema, (DataTable * __this, XmlWriter * writer, bool writeHierarchy));
IL2CPP_REGISTER_METHODINFO(0x047404D0, DataTable_WriteXmlSchema__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0180C630, void, RestoreConstraint, (DataTable * __this, bool originalEnforceConstraint));
IL2CPP_REGISTER_METHOD(0x0180C690, bool, IsEmptyXml, (DataTable * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x0180C960, XmlReadMode__Enum, ReadXml, (DataTable * __this, XmlReader * reader, XmlReadMode__Enum mode, bool denyResolving));
IL2CPP_REGISTER_METHODINFO(0x0474F380, DataTable_ReadXml__MethodInfo);
IL2CPP_REGISTER_METHOD(0x017EA790, void, ReadEndElement, (DataTable * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x0180DDE0, void, ReadXDRSchema, (DataTable * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x017EA650, bool, MoveToElement, (DataTable * __this, XmlReader * reader, int32_t depth));
IL2CPP_REGISTER_METHOD(0x0180DF50, void, ReadXmlDiffgram, (DataTable * __this, XmlReader * reader));
IL2CPP_REGISTER_METHODINFO(0x04776B00, DataTable_ReadXmlDiffgram__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0180EBB0, void, ReadXSDSchema, (DataTable * __this, XmlReader * reader, bool denyResolving));
IL2CPP_REGISTER_METHOD(0x0180EF00, void, ReadXmlSchema, (DataTable * __this, XmlReader * reader, bool denyResolving));
IL2CPP_REGISTER_METHODINFO(0x0472F338, DataTable_ReadXmlSchema__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01810130, void, CreateTableList, (DataTable * __this, DataTable * currentTable, List_1_System_Data_DataTable_ * tableList));
IL2CPP_REGISTER_METHOD(0x01810410, void, CreateRelationList, (DataTable * __this, List_1_System_Data_DataTable_ * tableList, List_1_System_Data_DataRelation_ * relationList));
IL2CPP_REGISTER_METHOD(0x01810720, XmlSchemaComplexType *, GetDataTableSchema, (XmlSchemaSet * schemaSet));
IL2CPP_REGISTER_METHOD(0x01810C60, XmlSchema *, IXmlSerializable_GetSchema, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01810C80, XmlSchema *, GetSchema, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01811100, void, IXmlSerializable_ReadXml, (DataTable * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x01811210, void, IXmlSerializable_WriteXml, (DataTable * __this, XmlWriter * writer));
IL2CPP_REGISTER_METHOD(0x01811260, void, ReadXmlSerializable, (DataTable * __this, XmlReader * reader));
IL2CPP_REGISTER_METHOD(0x01811280, Hashtable *, get_RowDiffId, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x018113F0, int32_t, get_ObjectID, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01811400, void, AddDependentColumn, (DataTable * __this, DataColumn * expressionColumn));
IL2CPP_REGISTER_METHOD(0x018115B0, void, RemoveDependentColumn, (DataTable * __this, DataColumn * expressionColumn));
IL2CPP_REGISTER_METHOD(0x01811670, void, EvaluateExpressions, (DataTable * __this));
IL2CPP_REGISTER_METHOD(0x01811940, void, EvaluateExpressions, (DataTable * __this, DataRow * row, DataRowAction__Enum action, List_1_System_Data_DataRow_ * cachedRows));
IL2CPP_REGISTER_METHOD(0x01811EF0, void, EvaluateExpressions, (DataTable * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x018121C0, void, EvaluateDependentExpressions, (DataTable * __this, DataColumn * column));
IL2CPP_REGISTER_METHOD(0x01812330, void, EvaluateDependentExpressions, (DataTable * __this, List_1_System_Data_DataColumn_ * columns, DataRow * row, DataRowVersion__Enum version, List_1_System_Data_DataRow_ * cachedRows));
}
