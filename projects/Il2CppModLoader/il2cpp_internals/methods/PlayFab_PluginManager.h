#include <interception_macros.h>

namespace app::methods::PlayFab::PluginManager {
IL2CPP_REGISTER_METHOD(0x01AD03E0, void, __ctor, (PluginManager * __this));
IL2CPP_REGISTER_METHOD(0x01AD0680, void, SetPlugin, (IPlayFabPlugin * plugin, PluginContract__Enum contract, String * instanceName));
IL2CPP_REGISTER_METHOD(0x01AD0850, IPlayFabPlugin *, GetPluginInternal, (PluginManager * __this, PluginContract__Enum contract, String * instanceName));
IL2CPP_REGISTER_METHODINFO(0x0472CA10, PluginManager_GetPluginInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AD0B30, void, SetPluginInternal, (PluginManager * __this, IPlayFabPlugin * plugin, PluginContract__Enum contract, String * instanceName));
IL2CPP_REGISTER_METHODINFO(0x04757520, PluginManager_SetPluginInternal__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01AD0C60, ITransportPlugin *, CreatePlayFabTransportPlugin, (PluginManager * __this));
IL2CPP_REGISTER_METHOD(0x01AD0E90, IOneDSTransportPlugin *, CreateOneDSTransportPlugin, (PluginManager * __this));
IL2CPP_REGISTER_METHOD(0x01AD10C0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x016AA130, Object *, GetPlugin, (PluginContract__Enum contract, String * instanceName));
IL2CPP_REGISTER_METHOD(0x018F0E40, IPlayFabPlugin *, CreatePlugin, (PluginManager * __this));
IL2CPP_REGISTER_METHOD(0x016AA130, ISerializerPlugin *, GetPlugin, (PluginContract__Enum contract, String * instanceName));
IL2CPP_REGISTER_METHODINFO(0x04777258, PluginManager_GetPlugin_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AA130, ITransportPlugin *, GetPlugin, (PluginContract__Enum contract, String * instanceName));
IL2CPP_REGISTER_METHODINFO(0x04709E58, PluginManager_GetPlugin_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AA130, IPlayFabTransportPlugin *, GetPlugin, (PluginContract__Enum contract, String * instanceName));
IL2CPP_REGISTER_METHODINFO(0x0470EC70, PluginManager_GetPlugin_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AA130, IOneDSTransportPlugin *, GetPlugin, (PluginContract__Enum contract, String * instanceName));
IL2CPP_REGISTER_METHODINFO(0x0470DF90, PluginManager_GetPlugin_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x018F0E40, IPlayFabPlugin *, CreatePlugin, (PluginManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0475B9E0, PluginManager_CreatePlugin_1__MethodInfo);
}
