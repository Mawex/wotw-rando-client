#include <interception_macros.h>

namespace app::methods::System::Diagnostics::ProcessStartInfo {
IL2CPP_REGISTER_METHOD(0x020035C0, void, __ctor, (ProcessStartInfo * __this, Process * parent));
IL2CPP_REGISTER_METHOD(0x02003720, String *, get_Arguments, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Arguments, (ProcessStartInfo * __this, String * value));
IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_CreateNoWindow, (ProcessStartInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x020037B0, StringDictionary *, get_EnvironmentVariables, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_RedirectStandardInput, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x00675C70, void, set_RedirectStandardInput, (ProcessStartInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x008543B0, bool, get_RedirectStandardOutput, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x00DC31D0, void, set_RedirectStandardOutput, (ProcessStartInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0194FC70, bool, get_RedirectStandardError, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBBE0, Encoding *, get_StandardErrorEncoding, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBBC0, Encoding *, get_StandardOutputEncoding, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x00446590, bool, get_UseShellExecute, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x005150D0, void, set_UseShellExecute, (ProcessStartInfo * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02003C60, String *, get_UserName, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FBB60, SecureString *, get_Password, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x02003CF0, String *, get_Domain, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_LoadUserProfile, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x02003D80, String *, get_FileName, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_FileName, (ProcessStartInfo * __this, String * value));
IL2CPP_REGISTER_METHOD(0x02003E10, String *, get_WorkingDirectory, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x02003EA0, void, set_WindowStyle, (ProcessStartInfo * __this, ProcessWindowStyle__Enum value));
IL2CPP_REGISTER_METHODINFO(0x047288F0, ProcessStartInfo_set_WindowStyle__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0107BE90, bool, get_HaveEnvVars, (ProcessStartInfo * __this));
IL2CPP_REGISTER_METHOD(0x02004020, void, __cctor, ());
}
