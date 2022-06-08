#include <interception_macros.h>

namespace app::methods::System::Runtime::Remoting::Contexts::Context {
IL2CPP_REGISTER_METHOD(0x0173D7D0, void, RegisterContext, (Context * ctx));
IL2CPP_REGISTER_METHOD(0x0173D7D0, void, ReleaseContext, (Context * ctx));
IL2CPP_REGISTER_METHOD(0x023020D0, void, __ctor, (Context * __this));
IL2CPP_REGISTER_METHOD(0x023021B0, void, Finalize, (Context * __this));
IL2CPP_REGISTER_METHOD(0x0228D860, Context *, get_DefaultContext, ());
IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_ContextID, (Context * __this));
IL2CPP_REGISTER_METHOD(0x02302270, IContextProperty__Array *, get_ContextProperties, (Context * __this));
IL2CPP_REGISTER_METHOD(0x02302310, bool, get_IsDefaultContext, (Context * __this));
IL2CPP_REGISTER_METHOD(0x02302320, bool, get_NeedsContextSink, (Context * __this));
IL2CPP_REGISTER_METHOD(0x02302460, bool, RegisterDynamicProperty, (IDynamicProperty * prop, ContextBoundObject * obj, Context * ctx));
IL2CPP_REGISTER_METHOD(0x02302530, bool, UnregisterDynamicProperty, (String * name, ContextBoundObject * obj, Context * ctx));
IL2CPP_REGISTER_METHOD(0x02302600, DynamicPropertyCollection *, GetDynamicPropertyCollection, (ContextBoundObject * obj, Context * ctx));
IL2CPP_REGISTER_METHODINFO(0x0470D570, Context_GetDynamicPropertyCollection__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02302940, void, NotifyGlobalDynamicSinks, (bool start, IMessage * req_msg, bool client_site, bool async));
IL2CPP_REGISTER_METHOD(0x02302AD0, bool, get_HasGlobalDynamicSinks, ());
IL2CPP_REGISTER_METHOD(0x02302BD0, void, NotifyDynamicSinks, (Context * __this, bool start, IMessage * req_msg, bool client_site, bool async));
IL2CPP_REGISTER_METHOD(0x02302C70, bool, get_HasDynamicSinks, (Context * __this));
IL2CPP_REGISTER_METHOD(0x02302CB0, bool, get_HasExitSinks, (Context * __this));
IL2CPP_REGISTER_METHOD(0x02302DE0, IContextProperty *, GetProperty, (Context * __this, String * name));
IL2CPP_REGISTER_METHOD(0x02302FB0, void, SetProperty, (Context * __this, IContextProperty * prop));
IL2CPP_REGISTER_METHODINFO(0x047884A8, Context_SetProperty__MethodInfo);
IL2CPP_REGISTER_METHOD(0x023031F0, void, Freeze, (Context * __this));
IL2CPP_REGISTER_METHOD(0x023033A0, String *, ToString, (Context * __this));
IL2CPP_REGISTER_METHOD(0x02303440, IMessageSink *, GetServerContextSinkChain, (Context * __this));
IL2CPP_REGISTER_METHOD(0x023036A0, IMessageSink *, GetClientContextSinkChain, (Context * __this));
IL2CPP_REGISTER_METHOD(0x023038F0, IMessageSink *, CreateServerObjectSinkChain, (Context * __this, MarshalByRefObject * obj, bool forceInternalExecute));
IL2CPP_REGISTER_METHOD(0x02303CE0, IMessageSink *, CreateEnvoySink, (Context * __this, MarshalByRefObject * serverObject));
IL2CPP_REGISTER_METHOD(0x02303EA0, Context *, SwitchToContext, (Context * newContext));
IL2CPP_REGISTER_METHOD(0x02303EB0, Context *, CreateNewContext, (IConstructionCallMessage * msg));
IL2CPP_REGISTER_METHODINFO(0x047269F0, Context_CreateNewContext__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02303F10, void, DoCallBack, (Context * __this, CrossContextDelegate * deleg));
IL2CPP_REGISTER_METHOD(0x02304070, LocalDataStore *, get_MyLocalStore, (Context * __this));
IL2CPP_REGISTER_METHOD(0x02304270, LocalDataStoreSlot *, AllocateDataSlot, ());
IL2CPP_REGISTER_METHOD(0x02304320, LocalDataStoreSlot *, AllocateNamedDataSlot, (String * name));
IL2CPP_REGISTER_METHOD(0x023043E0, void, FreeNamedDataSlot, (String * name));
IL2CPP_REGISTER_METHOD(0x023044A0, LocalDataStoreSlot *, GetNamedDataSlot, (String * name));
IL2CPP_REGISTER_METHOD(0x02304560, Object *, GetData, (LocalDataStoreSlot * slot));
IL2CPP_REGISTER_METHOD(0x02304700, void, SetData, (LocalDataStoreSlot * slot, Object * data));
IL2CPP_REGISTER_METHOD(0x02304780, void, __cctor, ());
}
