#include <interception_macros.h>

namespace app::methods::System::Net::NetworkInformation::Win32IPGlobalProperties {
IL2CPP_REGISTER_METHOD(0x01BC98A0, void, FillTcpTable, (Win32IPGlobalProperties * __this, List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW_ * * tab4, List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_ * * tab6));
IL2CPP_REGISTER_METHOD(0x01BCA1F0, bool, IsListenerState, (Win32IPGlobalProperties * __this, TcpState__Enum state));
IL2CPP_REGISTER_METHOD(0x01BCA210, IPEndPoint__Array *, GetActiveTcpListeners, (Win32IPGlobalProperties * __this));
IL2CPP_REGISTER_METHOD(0x01BCA550, String *, get_DomainName, (Win32IPGlobalProperties * __this));
IL2CPP_REGISTER_METHOD(0x01BCA600, int32_t, GetTcpTable, (Byte__Array * pTcpTable, int32_t * pdwSize, bool bOrder));
IL2CPP_REGISTER_METHOD(0x01BCA6D0, int32_t, GetTcp6Table, (Byte__Array * TcpTable, int32_t * SizePointer, bool Order));
IL2CPP_REGISTER_METHOD(0x01BCA7A0, uint16_t, ntohs, (uint16_t netshort));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (Win32IPGlobalProperties * __this));
}
