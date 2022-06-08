#include <interception_macros.h>

namespace app::methods::VectorSerializer {
IL2CPP_REGISTER_METHOD(0x013BB290, List_1_UnityEngine_Vector2_ *, Ser2ToVector2List, (List_1_Vector2Ser_ * serList));
IL2CPP_REGISTER_METHOD(0x013BB590, List_1_Vector2Ser_ *, Vector2ToSer2List, (List_1_UnityEngine_Vector2_ * vecList));
IL2CPP_REGISTER_METHOD(0x013BB890, List_1_UnityEngine_Vector3_ *, Ser3ToVector3List, (List_1_Vector3Ser_ * serList));
IL2CPP_REGISTER_METHOD(0x013BBBB0, Vector3__Array *, Ser3ToVector3Array, (List_1_Vector3Ser_ * serList));
IL2CPP_REGISTER_METHOD(0x013BBCF0, List_1_Vector3Ser_ *, Vector3ToSer3List, (List_1_UnityEngine_Vector3_ * vecList));
IL2CPP_REGISTER_METHOD(0x013BBFF0, List_1_Vector3Ser_ *, Vector3ToSer3List, (Vector3__Array * vecList));
IL2CPP_REGISTER_METHOD(0x013BC2F0, List_1_UnityEngine_Vector4_ *, Ser4ToVector4List, (List_1_Vector4Ser_ * serList));
IL2CPP_REGISTER_METHOD(0x013BC5E0, List_1_Vector4Ser_ *, Vector4ToSer4List, (List_1_UnityEngine_Vector4_ * vecList));
IL2CPP_REGISTER_METHOD(0x013BC8C0, List_1_UnityEngine_Quaternion_ *, Ser4ToQuartenionList, (List_1_Vector4Ser_ * serList));
IL2CPP_REGISTER_METHOD(0x013BCBB0, List_1_Vector4Ser_ *, QuartenionToSer4List, (List_1_UnityEngine_Quaternion_ * vecList));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (VectorSerializer * __this));
}
