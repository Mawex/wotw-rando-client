#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ConstraintsMetaData {
IL2CPP_REGISTER_METHOD(0x01BB8230, bool, HasFlags, (ConstraintsMetaData * __this, ConstraintFlag__Enum flags));
IL2CPP_REGISTER_METHOD(0x01BB8240, ConstraintsMetaData *, CopyFor, (ConstraintsMetaData * __this, EntityId entityId, Constraint__Enum type));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ConstraintsMetaData * __this));
}
