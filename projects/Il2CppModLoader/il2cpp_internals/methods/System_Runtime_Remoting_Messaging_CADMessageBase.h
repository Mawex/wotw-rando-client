#include <interception_macros.h>

namespace app::methods::System_Runtime_Remoting_Messaging::CADMessageBase {
IL2CPP_REGISTER_METHOD(0x0230A5E0, void, __ctor, (app::CADMessageBase * this_ptr, app::IMethodMessage * msg));
IL2CPP_REGISTER_METHOD(0x0230A760, MethodBase *, GetMethod, (app::CADMessageBase * this_ptr));
IL2CPP_REGISTER_METHOD(0x0230A880, Type__Array *, GetSignature, (app::MethodBase * method_base, bool load));
IL2CPP_REGISTER_METHOD(0x0230AB00, int32_t, MarshalProperties, (app::IDictionary * dict, app::ArrayList * * args));
IL2CPP_REGISTER_METHOD(0x0230B170, void, UnmarshalProperties, (app::IDictionary * dict, int32_t count, app::ArrayList * args));
IL2CPP_REGISTER_METHOD(0x0230B320, bool, IsPossibleToIgnoreMarshal, (app::Object * obj));
IL2CPP_REGISTER_METHOD(0x0230B4F0, Object *, MarshalArgument, (app::CADMessageBase * this_ptr, app::Object * arg, app::ArrayList * * args));
IL2CPP_REGISTER_METHOD(0x0230B7F0, Object *, UnmarshalArgument, (app::CADMessageBase * this_ptr, app::Object * arg, app::ArrayList * args));
IL2CPP_REGISTER_METHODINFO(0x0474FA98, CADMessageBase_UnmarshalArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0230C0D0, Object__Array *, MarshalArguments, (app::CADMessageBase * this_ptr, app::Object__Array * arguments, app::ArrayList * * args));
IL2CPP_REGISTER_METHOD(0x0230C230, Object__Array *, UnmarshalArguments, (app::CADMessageBase * this_ptr, app::Object__Array * arguments, app::ArrayList * args));
IL2CPP_REGISTER_METHOD(0x0230C390, void, SaveLogicalCallContext, (app::CADMessageBase * this_ptr, app::IMethodMessage * msg, app::ArrayList * * serialize_list));
IL2CPP_REGISTER_METHOD(0x0230C6A0, LogicalCallContext *, GetLogicalCallContext, (app::CADMessageBase * this_ptr, app::ArrayList * args));
}
