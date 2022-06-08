#include <interception_macros.h>

namespace app::methods::GhostGenericEventsPlugin_Data {
IL2CPP_REGISTER_METHOD(0x0011F5D0, void, __ctor, (GhostGenericEventsPlugin_Data__Boxed * __this, int32_t recordingID, int32_t propertyId));
IL2CPP_REGISTER_METHOD(0x0011F5F0, GhostFrame_FrameDataTypes__Enum, get_FrameType, (GhostGenericEventsPlugin_Data__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011F600, int32_t, GetDataSize, (GhostGenericEventsPlugin_Data__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0010FB00, bool, get_Executed, (GhostGenericEventsPlugin_Data__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00115B00, void, set_Executed, (GhostGenericEventsPlugin_Data__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0011F620, void, Load, (GhostGenericEventsPlugin_Data__Boxed * __this, BinaryReader * binaryReader));
IL2CPP_REGISTER_METHODINFO(0x047519E0, GhostGenericEventsPlugin_Data_Load__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0011F630, void, Save, (GhostGenericEventsPlugin_Data__Boxed * __this, BinaryWriter * binaryWriter));
}
