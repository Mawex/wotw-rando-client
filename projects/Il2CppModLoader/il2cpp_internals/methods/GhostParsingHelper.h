#include <interception_macros.h>

namespace app::methods::GhostParsingHelper {
IL2CPP_REGISTER_METHOD(0x007DB4E0, GameObject *, CreatePlaybackInstance, (GameObject * prefab, Vector3 position, Quaternion rotation, Transform * parent));
IL2CPP_REGISTER_METHOD(0x007DB720, float, FrameToSeconds, (int32_t frame));
IL2CPP_REGISTER_METHOD(0x007DB730, float, FrameToSecondsGlobal, (int32_t frame, List_1_System_Single_ * timePerFrame));
IL2CPP_REGISTER_METHOD(0x007DB820, float, FrameToSecondsLocal, (int32_t frame, List_1_System_Single_ * timePerFrame, int32_t globalStartFrame));
IL2CPP_REGISTER_METHOD(0x007DB900, float, SnapTimeToFrameTime, (float time));
IL2CPP_REGISTER_METHOD(0x007DBA10, void, AddTimelineEntity, (MoonTimeline * parent, ITimelineEntity * child, float startTime, float duration));
IL2CPP_REGISTER_METHOD(0x007DBDC0, void, RemoveTimelineEntity, (MoonTimeline * parent, EntityId childID));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GhostParsingHelper * __this));
IL2CPP_REGISTER_METHOD(0x007DBDE0, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x015E9D90, Object *, CreateAnimator, (Transform * parent, String * name));
IL2CPP_REGISTER_METHOD(0x015E9FA0, Object *, GetOrCreateAnimator, (Transform * parent, String * name, int32_t ID, Dictionary_2_System_Int32_UnityEngine_Component_ * parsingGroupsCache));
IL2CPP_REGISTER_METHOD(0x015E9C30, Object *, AddTimelineChildren, (MoonTimeline * parent, float startTime, float duration));
}
