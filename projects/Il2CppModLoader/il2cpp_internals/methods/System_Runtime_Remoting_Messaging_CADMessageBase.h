#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Messaging::CADMessageBase {
IL2CPP_REGISTER_METHOD(0x0230A5E0, void, __ctor, (CADMessageBase * __this, IMethodMessage * msg));
IL2CPP_REGISTER_METHOD(0x0230A760, MethodBase *, GetMethod, (CADMessageBase * __this));
IL2CPP_REGISTER_METHOD(0x0230A880, Type__Array *, GetSignature, (MethodBase * methodBase, bool load));
IL2CPP_REGISTER_METHOD(0x0230AB00, int32_t, MarshalProperties, (IDictionary * dict, ArrayList * * args));
IL2CPP_REGISTER_METHOD(0x0230B170, void, UnmarshalProperties, (IDictionary * dict, int32_t count, ArrayList * args));
IL2CPP_REGISTER_METHOD(0x0230B320, bool, IsPossibleToIgnoreMarshal, (Object * obj));
IL2CPP_REGISTER_METHOD(0x0230B4F0, Object *, MarshalArgument, (CADMessageBase * __this, Object * arg, ArrayList * * args));
IL2CPP_REGISTER_METHOD(0x0230B7F0, Object *, UnmarshalArgument, (CADMessageBase * __this, Object * arg, ArrayList * args));
IL2CPP_REGISTER_METHODINFO(0x0474FA98, CADMessageBase_UnmarshalArgument__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0230C0D0, Object__Array *, MarshalArguments, (CADMessageBase * __this, Object__Array * arguments, ArrayList * * args));
IL2CPP_REGISTER_METHOD(0x0230C230, Object__Array *, UnmarshalArguments, (CADMessageBase * __this, Object__Array * arguments, ArrayList * args));
IL2CPP_REGISTER_METHOD(0x0230C390, void, SaveLogicalCallContext, (CADMessageBase * __this, IMethodMessage * msg, ArrayList * * serializeList));
IL2CPP_REGISTER_METHOD(0x0230C6A0, LogicalCallContext *, GetLogicalCallContext, (CADMessageBase * __this, ArrayList * args));
}
