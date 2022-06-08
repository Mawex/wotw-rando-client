using namespace app;

namespace app::methods::System::Data::Constraint {
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_ConstraintName, (Constraint_1 * __this));
IL2CPP_REGISTER_METHOD(0x0238D500, void, set_ConstraintName, (Constraint_1 * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04782228, Constraint_1_set_ConstraintName__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238D780, String *, get_SchemaName, (Constraint_1 * __this));
IL2CPP_REGISTER_METHOD(0x0238D7B0, void, set_SchemaName, (Constraint_1 * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_InCollection, (Constraint_1 * __this));
IL2CPP_REGISTER_METHOD(0x0238D7C0, void, set_InCollection, (Constraint_1 * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0238D810, PropertyCollection *, get_ExtendedProperties, (Constraint_1 * __this));
IL2CPP_REGISTER_METHOD(0x0238D980, void, CheckConstraint, (Constraint_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04726A18, Constraint_1_CheckConstraint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0238DA30, void, CheckStateForProperty, (Constraint_1 * __this));
IL2CPP_REGISTER_METHODINFO(0x04780F20, Constraint_1_CheckStateForProperty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FB950, DataSet *, get__DataSet, (Constraint_1 * __this));
IL2CPP_REGISTER_METHOD(0x00980110, String *, ToString, (Constraint_1 * __this));
IL2CPP_REGISTER_METHOD(0x0238DB70, void, __ctor, (Constraint_1 * __this));
}
