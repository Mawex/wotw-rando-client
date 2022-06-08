#include <interception_macros.h>

namespace app::methods::GhostFrame {
IL2CPP_REGISTER_METHOD(0x00E199E0, void, SaveToFile, (GhostFrame * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x00E19C20, IGhostFrameData *, GetFrameDataOfTypeFast, (GhostFrame * __this, GhostFrame_FrameDataTypes__Enum typ));
IL2CPP_REGISTER_METHOD(0x003FC7F0, int32_t, get_FrameDataCacheCount, (GhostFrame * __this));
IL2CPP_REGISTER_METHOD(0x00E19D20, IGhostFrameData__Array *, GetFrameDataFast, (GhostFrame * __this, GhostFrame_FrameDataTypes__Enum typ));
IL2CPP_REGISTER_METHOD(0x00E19F10, List_1_IGhostFrameData_ *, GetFrameDataStructsFast, (GhostFrame * __this, GhostFrame_FrameDataTypes__Enum typ));
IL2CPP_REGISTER_METHOD(0x00E1A160, void, LoadFromFile, (GhostFrame * __this, BinaryReader * binaryReader, int32_t version));
IL2CPP_REGISTER_METHODINFO(0x047765E8, GhostFrame_LoadFromFile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00E1B280, void, __ctor, (GhostFrame * __this));
IL2CPP_REGISTER_METHOD(0x015E9B60, Object *, GetFrameDataOfType, (GhostFrame * __this));
IL2CPP_REGISTER_METHOD(0x01EB8580, List_1_System_Object_ *, GetFrameData, (GhostFrame * __this));
}
