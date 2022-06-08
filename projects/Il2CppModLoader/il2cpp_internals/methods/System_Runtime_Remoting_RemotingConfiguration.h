using namespace app;

namespace app::methods::System::Runtime::Remoting::RemotingConfiguration {
IL2CPP_REGISTER_METHOD(0x02320D70, String *, get_ApplicationName, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02320E10, void, set_ApplicationName, (String * value));
IL2CPP_REGISTER_METHOD(0x02320EC0, String *, get_ProcessId, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02321080, void, LoadDefaultDelayedChannels, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x023215C0, bool, IsActivationAllowed, (Type * svrType));
IL2CPP_REGISTER_METHOD(0x023217A0, ActivatedClientTypeEntry *, IsRemotelyActivatedClientType, (Type * svrType));
IL2CPP_REGISTER_METHOD(0x023219C0, WellKnownClientTypeEntry *, IsWellKnownClientType, (Type * svrType));
IL2CPP_REGISTER_METHOD(0x02321BE0, void, RegisterActivatedClientType, (ActivatedClientTypeEntry * entry));
IL2CPP_REGISTER_METHODINFO(0x04764180, RemotingConfiguration_RegisterActivatedClientType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02321EC0, void, RegisterActivatedServiceType, (ActivatedServiceTypeEntry * entry));
IL2CPP_REGISTER_METHOD(0x02322080, void, RegisterWellKnownClientType, (WellKnownClientTypeEntry * entry));
IL2CPP_REGISTER_METHODINFO(0x047054B0, RemotingConfiguration_RegisterWellKnownClientType__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02322360, void, RegisterWellKnownServiceType, (WellKnownServiceTypeEntry * entry));
IL2CPP_REGISTER_METHOD(0x02322580, void, RegisterChannelTemplate, (ChannelData * channel));
IL2CPP_REGISTER_METHOD(0x02322660, void, RegisterClientProviderTemplate, (ProviderData * prov));
IL2CPP_REGISTER_METHOD(0x02322740, void, RegisterServerProviderTemplate, (ProviderData * prov));
IL2CPP_REGISTER_METHOD(0x02322820, void, RegisterChannels, (ArrayList * channels, bool onlyDelayed));
IL2CPP_REGISTER_METHODINFO(0x04741950, RemotingConfiguration_RegisterChannels__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02323000, void, RegisterTypes, (ArrayList * types));
IL2CPP_REGISTER_METHOD(0x02323480, bool, CustomErrorsEnabled, (bool isLocalRequest));
IL2CPP_REGISTER_METHOD(0x023235D0, void, SetCustomErrorsMode, (String * mode));
IL2CPP_REGISTER_METHODINFO(0x047343F0, RemotingConfiguration_SetCustomErrorsMode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02323790, void, __cctor, (MethodInfo * method));
}
