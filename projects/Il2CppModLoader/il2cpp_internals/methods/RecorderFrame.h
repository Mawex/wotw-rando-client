#include <interception_macros.h>

namespace app::methods::RecorderFrame {
IL2CPP_REGISTER_METHOD(0x008EFBB0, void, SaveToFile, (RecorderFrame * __this, BinaryWriter * binaryWriter));
IL2CPP_REGISTER_METHOD(0x008EFE50, void, LoadFromFile, (RecorderFrame * __this, BinaryReader * binaryReader, int32_t currentVersion));
IL2CPP_REGISTER_METHODINFO(0x04728200, RecorderFrame_LoadFromFile__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008F0E20, void, __ctor, (RecorderFrame * __this));
IL2CPP_REGISTER_METHOD(0x016AA910, Object *, GetFrameDataOfType, (RecorderFrame * __this));
IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_System_Object_ *, GetFrameData, (RecorderFrame * __this));
IL2CPP_REGISTER_METHOD(0x016AA910, CharacterData *, GetFrameDataOfType, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x047412A0, RecorderFrame_GetFrameDataOfType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AA910, CameraData *, GetFrameDataOfType, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x0476B050, RecorderFrame_GetFrameDataOfType_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AA910, CheckpointData *, GetFrameDataOfType, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x04791B00, RecorderFrame_GetFrameDataOfType_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AA910, InputData *, GetFrameDataOfType, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x0476F5E8, RecorderFrame_GetFrameDataOfType_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AA910, AnalogueInputData *, GetFrameDataOfType, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x047314D0, RecorderFrame_GetFrameDataOfType_5__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AA910, DeathsData *, GetFrameDataOfType, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x047939A0, RecorderFrame_GetFrameDataOfType_6__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AA910, EntityData *, GetFrameDataOfType, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x04741018, RecorderFrame_GetFrameDataOfType_7__MethodInfo);
IL2CPP_REGISTER_METHOD(0x016AA910, CursorInputData *, GetFrameDataOfType, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x0476FF90, RecorderFrame_GetFrameDataOfType_8__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_CharacterData_ *, GetFrameData, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x04768758, RecorderFrame_GetFrameData_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_BuildData_ *, GetFrameData, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x04794350, RecorderFrame_GetFrameData_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_CheckpointData_ *, GetFrameData, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x0472BCE0, RecorderFrame_GetFrameData_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_AbilitiesData_ *, GetFrameData, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x0470B768, RecorderFrame_GetFrameData_4__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB9AE0, List_1_InputData_ *, GetFrameData, (RecorderFrame * __this));
IL2CPP_REGISTER_METHODINFO(0x047861C0, RecorderFrame_GetFrameData_5__MethodInfo);
}
