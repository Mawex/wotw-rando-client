#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::ForeignKeyConstraintEnumerator {
    IL2CPP_REGISTER_METHOD(0x01E327F0, void, ctor, (app::ForeignKeyConstraintEnumerator * this_ptr, app::DataSet* data_set))
    IL2CPP_REGISTER_METHOD(0x01E32840, bool, IsValidCandidate, (app::ForeignKeyConstraintEnumerator * this_ptr, app::Constraint_1* constraint))
    IL2CPP_REGISTER_METHOD(0x01E32900, app::ForeignKeyConstraint*, GetForeignKeyConstraint, (app::ForeignKeyConstraintEnumerator * this_ptr))
} // namespace app::classes::System::Data::ForeignKeyConstraintEnumerator
