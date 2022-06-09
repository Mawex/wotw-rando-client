#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (app::ReadObjectInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ObjectEnd, (app::ReadObjectInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00B1D780, void, PrepareForReuse, (app::ReadObjectInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D9EBD0, app::ReadObjectInfo *, Create_1, (app::Type * object_type, app::ISurrogateSelector * surrogate_selector, app::StreamingContext context, app::ObjectManager * object_manager, app::SerObjectInfoInit * ser_object_info_init, app::IFormatterConverter * converter, bool b_simple_assembly));
    IL2CPP_REGISTER_METHOD(0x01D9EC80, void, Init_1, (app::ReadObjectInfo * this_ptr, app::Type * object_type, app::ISurrogateSelector * surrogate_selector, app::StreamingContext context, app::ObjectManager * object_manager, app::SerObjectInfoInit * ser_object_info_init, app::IFormatterConverter * converter, bool b_simple_assembly));
    IL2CPP_REGISTER_METHOD(0x01D9ECE0, app::ReadObjectInfo *, Create_2, (app::Type * object_type, app::String__Array * member_names, app::Type__Array * member_types, app::ISurrogateSelector * surrogate_selector, app::StreamingContext context, app::ObjectManager * object_manager, app::SerObjectInfoInit * ser_object_info_init, app::IFormatterConverter * converter, bool b_simple_assembly));
    IL2CPP_REGISTER_METHOD(0x01D9EDC0, void, Init_2, (app::ReadObjectInfo * this_ptr, app::Type * object_type, app::String__Array * member_names, app::Type__Array * member_types, app::ISurrogateSelector * surrogate_selector, app::StreamingContext context, app::ObjectManager * object_manager, app::SerObjectInfoInit * ser_object_info_init, app::IFormatterConverter * converter, bool b_simple_assembly));
    IL2CPP_REGISTER_METHOD(0x01D9EE50, void, InitReadConstructor, (app::ReadObjectInfo * this_ptr, app::Type * object_type, app::ISurrogateSelector * surrogate_selector, app::StreamingContext context));
    IL2CPP_REGISTER_METHOD(0x01D9F180, void, InitSiRead, (app::ReadObjectInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D9F310, void, InitNoMembers, (app::ReadObjectInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D9F460, void, InitMemberInfo, (app::ReadObjectInfo * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01D9F820, app::MemberInfo_1 *, GetMemberInfo, (app::ReadObjectInfo * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHODINFO(0x04745218, ReadObjectInfo_GetMemberInfo__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D9FA70, app::Type *, GetType, (app::ReadObjectInfo * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHODINFO(0x0472E0D0, ReadObjectInfo_GetType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01D9FC30, void, AddValue, (app::ReadObjectInfo * this_ptr, app::String * name, app::Object * value, app::SerializationInfo * * si, app::Object__Array * * member_data));
    IL2CPP_REGISTER_METHOD(0x01D9FCE0, void, InitDataStore, (app::ReadObjectInfo * this_ptr, app::SerializationInfo * * si, app::Object__Array * * member_data));
    IL2CPP_REGISTER_METHOD(0x01D9FEB0, void, RecordFixup, (app::ReadObjectInfo * this_ptr, int64_t object_id, app::String * name, int64_t id_ref));
    IL2CPP_REGISTER_METHOD(0x01D9FFA0, void, PopulateObjectMembers, (app::ReadObjectInfo * this_ptr, app::Object * obj, app::Object__Array * member_data));
    IL2CPP_REGISTER_METHOD(0x01DA0080, int32_t, Position, (app::ReadObjectInfo * this_ptr, app::String * name));
    IL2CPP_REGISTER_METHOD(0x01DA02C0, app::Type__Array *, GetMemberTypes, (app::ReadObjectInfo * this_ptr, app::String__Array * in_member_names, app::Type * object_type));
    IL2CPP_REGISTER_METHODINFO(0x04700D50, ReadObjectInfo_GetMemberTypes__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DA0A60, app::Type *, GetMemberType, (app::ReadObjectInfo * this_ptr, app::MemberInfo_1 * obj_member));
    IL2CPP_REGISTER_METHODINFO(0x04753258, ReadObjectInfo_GetMemberType__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01DA0CE0, app::ReadObjectInfo *, GetObjectInfo, (app::SerObjectInfoInit * ser_object_info_init));
}
