#include <interception_macros.h>

namespace app::methods::ConditionalFieldAttribute {
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_FieldName, (ConditionalFieldAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_FieldName, (ConditionalFieldAttribute * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB930, Object *, get_Value, (ConditionalFieldAttribute * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Value, (ConditionalFieldAttribute * __this, Object * value));
IL2CPP_REGISTER_METHOD(0x0058DA40, void, __ctor, (ConditionalFieldAttribute * __this, String * fieldName, Object * value));
}
