using namespace app;

namespace app::methods::DebugPlayerTeleporter {
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_NoClipParamsEnabled, (DebugPlayerTeleporter * __this));
IL2CPP_REGISTER_METHOD(0x00DF9FD0, void, set_NoClipParamsEnabled, (DebugPlayerTeleporter * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00DFA0B0, void, SuspendGameplay, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00DFA1F0, bool, get_DashOrGrenadeEnabled, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00C03C70, DebugPlayerTeleporter_DebugMarkerMode__Enum, get_Mode, (DebugPlayerTeleporter * __this));
IL2CPP_REGISTER_METHOD(0x00DFA410, void, set_Mode, (DebugPlayerTeleporter * __this, DebugPlayerTeleporter_DebugMarkerMode__Enum value));
IL2CPP_REGISTER_METHOD(0x00DFA440, void, ResumeGameplay, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00DFA570, void, PlayerTeleportUpdate, (DebugPlayerTeleporter * __this));
IL2CPP_REGISTER_METHOD(0x00DFB680, void, SelectClosestAgent, (DebugPlayerTeleporter * __this));
IL2CPP_REGISTER_METHOD(0x00DFBB80, void, DeselectEntities, (DebugPlayerTeleporter * __this));
IL2CPP_REGISTER_METHOD(0x00DFBD10, void, UpdateTargets, (DebugPlayerTeleporter * __this));
IL2CPP_REGISTER_METHOD(0x00DFC020, void, LocomotionRequestUpdate, (DebugPlayerTeleporter * __this));
IL2CPP_REGISTER_METHOD(0x00DFD2A0, void, DecreaseNavigationAgentSpeed, (DebugPlayerTeleporter * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00DFD3A0, void, IncreaseNavigationAgentSpeed, (DebugPlayerTeleporter * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00DFD470, void, SwitchNavigationAgentMode, (DebugPlayerTeleporter * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x00DFD480, void, OnGUI, (DebugPlayerTeleporter * __this));
IL2CPP_REGISTER_METHOD(0x00DFD970, void, FixedUpdate, (DebugPlayerTeleporter * __this));
IL2CPP_REGISTER_METHOD(0x00DFDA50, void, __ctor, (DebugPlayerTeleporter * __this));
IL2CPP_REGISTER_METHOD(0x00DFDBB0, void, __cctor, (MethodInfo * method));
}
