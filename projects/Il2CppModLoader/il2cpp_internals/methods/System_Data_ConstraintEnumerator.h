#include <interception_macros.h>

namespace app::methods::System::Data::ConstraintEnumerator {
IL2CPP_REGISTER_METHOD(0x01E327F0, void, __ctor, (ConstraintEnumerator * __this, DataSet * dataSet));
IL2CPP_REGISTER_METHOD(0x023921A0, bool, GetNext, (ConstraintEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, Constraint_1 *, GetConstraint, (ConstraintEnumerator * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IsValidCandidate, (ConstraintEnumerator * __this, Constraint_1 * constraint));
IL2CPP_REGISTER_METHOD(0x002FB950, Constraint_1 *, get_CurrentObject, (ConstraintEnumerator * __this));
}
