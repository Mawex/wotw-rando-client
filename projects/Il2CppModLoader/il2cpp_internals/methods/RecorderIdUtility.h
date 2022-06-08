#include <interception_macros.h>

namespace app::methods::RecorderIdUtility {
IL2CPP_REGISTER_METHOD(0x008F0F70, String *, GetAssetGuid, (Object_1 * asset));
IL2CPP_REGISTER_METHOD(0x008F0FF0, String *, GetPath, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x008F1290, int32_t, GetChildIndex, (Transform * transform));
IL2CPP_REGISTER_METHOD(0x008F14F0, int64_t, GetFileId, (Component_1 * instance, GameObject * instanceRoot, GameObject * prefabRoot));
IL2CPP_REGISTER_METHOD(0x008F15D0, int64_t, GetFileId, (IRecordable * recordableInstance, GameObject * instanceRoot, GameObject * prefabRoot));
IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, GetObjectLocalIdInFile, (Object_1 * unityObj));
IL2CPP_REGISTER_METHOD(0x008F16D0, int64_t, SearchForChildRecordableFileId, (IRecordable * recordable, Transform * instanceCurrent, Transform * prefabCurrent));
IL2CPP_REGISTER_METHOD(0x008F1710, int64_t, SearchForChildRecordableFileId, (Component_1 * recordable, Transform * instanceCurrent, Transform * prefabCurrent));
IL2CPP_REGISTER_METHOD(0x008F19E0, int64_t, MergeIds, (int64_t idA, int64_t idB));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (RecorderIdUtility * __this));
}
