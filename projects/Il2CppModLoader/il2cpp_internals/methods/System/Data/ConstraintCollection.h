#include <interception_macros.h>

namespace app::methods::System::Data::ConstraintCollection {
    IL2CPP_REGISTER_METHOD(0x0238DC10, void, __ctor, (app::ConstraintCollection * this_ptr, app::DataTable * table));
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ArrayList *, get_List, (app::ConstraintCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0238DD90, app::Constraint_1 *, get_Item_1, (app::ConstraintCollection * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHODINFO(0x04742590, ConstraintCollection_get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA280, app::DataTable *, get_Table, (app::ConstraintCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0238DEB0, app::Constraint_1 *, get_Item_2, (app::ConstraintCollection * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHODINFO(0x0471BBD0, ConstraintCollection_get_Item_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0238DFC0, void, Add_1, (app::ConstraintCollection * this_ptr, app::Constraint_1 * constraint));
    IL2CPP_REGISTER_METHOD(0x0238DFD0, void, Add_2, (app::ConstraintCollection * this_ptr, app::Constraint_1 * constraint, bool add_unique_when_adding_foreign));
    IL2CPP_REGISTER_METHODINFO(0x04725A00, ConstraintCollection_Add_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0238E7E0, app::Constraint_1 *, Add_3, (app::ConstraintCollection * this_ptr, app::String * name, app::DataColumn__Array * columns, bool primary_key));
    IL2CPP_REGISTER_METHOD(0x0238E980, void, AddUniqueConstraint, (app::ConstraintCollection * this_ptr, app::UniqueConstraint * constraint));
    IL2CPP_REGISTER_METHODINFO(0x0472E030, ConstraintCollection_AddUniqueConstraint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0238EB00, void, AddForeignKeyConstraint, (app::ConstraintCollection * this_ptr, app::ForeignKeyConstraint * constraint));
    IL2CPP_REGISTER_METHODINFO(0x04753CE0, ConstraintCollection_AddForeignKeyConstraint__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0238EBD0, bool, AutoGenerated, (app::ConstraintCollection * this_ptr, app::Constraint_1 * constraint));
    IL2CPP_REGISTER_METHOD(0x0238ECF0, void, ArrayAdd, (app::ConstraintCollection * this_ptr, app::Constraint_1 * constraint));
    IL2CPP_REGISTER_METHOD(0x0238ED30, void, ArrayRemove, (app::ConstraintCollection * this_ptr, app::Constraint_1 * constraint));
    IL2CPP_REGISTER_METHOD(0x0238ED70, app::String *, AssignName, (app::ConstraintCollection * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0238ED90, void, BaseAdd, (app::ConstraintCollection * this_ptr, app::Constraint_1 * constraint));
    IL2CPP_REGISTER_METHODINFO(0x0477FF80, ConstraintCollection_BaseAdd__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0238EEC0, void, BaseGroupSwitch, (app::ConstraintCollection * this_ptr, app::Constraint_1__Array * old_array, int32_t old_length, app::Constraint_1__Array * new_array, int32_t new_length));
    IL2CPP_REGISTER_METHOD(0x0238F140, void, BaseRemove, (app::ConstraintCollection * this_ptr, app::Constraint_1 * constraint));
    IL2CPP_REGISTER_METHODINFO(0x047249D0, ConstraintCollection_BaseRemove__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0238F500, bool, CanRemove, (app::ConstraintCollection * this_ptr, app::Constraint_1 * constraint, bool f_throw_exception));
    IL2CPP_REGISTER_METHOD(0x0238F530, void, Clear, (app::ConstraintCollection * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0477BEC8, ConstraintCollection_Clear__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0238FB90, bool, Contains_1, (app::ConstraintCollection * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHOD(0x0238FBB0, bool, Contains_2, (app::ConstraintCollection * this_ptr, app::String * name, bool case_sensitive));
    IL2CPP_REGISTER_METHOD(0x0238FD40, app::Constraint_1 *, FindConstraint, (app::ConstraintCollection * this_ptr, app::Constraint_1 * constraint));
    IL2CPP_REGISTER_METHOD(0x0238FF70, app::UniqueConstraint *, FindKeyConstraint_1, (app::ConstraintCollection * this_ptr, app::DataColumn__Array * columns));
    IL2CPP_REGISTER_METHOD(0x02390100, app::UniqueConstraint *, FindKeyConstraint_2, (app::ConstraintCollection * this_ptr, app::DataColumn * column));
    IL2CPP_REGISTER_METHOD(0x023902A0, app::ForeignKeyConstraint *, FindForeignKeyConstraint, (app::ConstraintCollection * this_ptr, app::DataColumn__Array * parent_columns, app::DataColumn__Array * child_columns));
    IL2CPP_REGISTER_METHOD(0x02390460, bool, CompareArrays, (app::DataColumn__Array * a1, app::DataColumn__Array * a2));
    IL2CPP_REGISTER_METHOD(0x02390510, int32_t, InternalIndexOf, (app::ConstraintCollection * this_ptr, app::String * constraint_name));
    IL2CPP_REGISTER_METHOD(0x023906D0, app::String *, MakeName, (app::ConstraintCollection * this_ptr, int32_t index));
    IL2CPP_REGISTER_METHOD(0x0194A3B0, void, OnCollectionChanged, (app::ConstraintCollection * this_ptr, app::CollectionChangeEventArgs * ccevent));
    IL2CPP_REGISTER_METHOD(0x023907A0, void, RegisterName, (app::ConstraintCollection * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHODINFO(0x0470D9E0, ConstraintCollection_RegisterName__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02390A60, void, Remove, (app::ConstraintCollection * this_ptr, app::Constraint_1 * constraint));
    IL2CPP_REGISTER_METHODINFO(0x04746C10, ConstraintCollection_Remove__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x02390D10, void, UnregisterName, (app::ConstraintCollection * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHOD(0x02390DA0, void, FinishInitConstraints, (app::ConstraintCollection * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04773060, ConstraintCollection_FinishInitConstraints__MethodInfo);
}
