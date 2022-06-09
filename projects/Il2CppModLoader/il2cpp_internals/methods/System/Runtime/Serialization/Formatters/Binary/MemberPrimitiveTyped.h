#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::MemberPrimitiveTyped * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, Set, (app::MemberPrimitiveTyped * this_ptr, app::InternalPrimitiveTypeE__Enum primitive_type_enum, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x01D93040, void, Write, (app::MemberPrimitiveTyped * this_ptr, app::_BinaryWriter * sout));
    IL2CPP_REGISTER_METHOD(0x01D930C0, void, Read, (app::MemberPrimitiveTyped * this_ptr, app::_BinaryParser * input));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dump, (app::MemberPrimitiveTyped * this_ptr));
}
