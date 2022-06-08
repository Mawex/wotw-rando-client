#include <interception_macros.h>

namespace app::methods::TimelineParentOwnerUtils {
IL2CPP_REGISTER_METHOD(0x01E947F0, void, AddChildrenTimelines, (GameObject * source, VirtualClipsBuilder * builder, bool addStateRequirements));
IL2CPP_REGISTER_METHOD(0x01E94CF0, void, AddGenericGameObjectClipsFromChildren, (GameObject * source, VirtualClipsBuilder * builder));
IL2CPP_REGISTER_METHOD(0x01E959C0, bool, IsRootTimeline, (GameObject * timeline));
IL2CPP_REGISTER_METHOD(0x01E95CC0, int32_t, CountChildren, (Transform * root));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (TimelineParentOwnerUtils * __this));
IL2CPP_REGISTER_METHOD(0x01E95E60, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x015E3070, void, CollectComponentsInChildren, (Transform * source, List_1_System_Object_ * result, Func_2_Object_Boolean_ * condition));
IL2CPP_REGISTER_METHOD(0x015E2CC0, void, AddGameobjectClipsFromChildren, (GameObject * source, VirtualClipsBuilder * builder, bool nameByType));
IL2CPP_REGISTER_METHOD(0x015E2790, void, AddExternalGroup, (VirtualTimelineRepresentationGroup__Enum group, GameObject * source, VirtualClipsBuilder * builder, bool expandByDefault, int32_t blockSize));
IL2CPP_REGISTER_METHOD(0x015E2280, void, AddExternalGroup, (String * name, GameObject * source, VirtualClipsBuilder * builder, bool expandByDefault));
IL2CPP_REGISTER_METHOD(0x015E3070, void, CollectComponentsInChildren, (Transform * source, List_1_Moon_Timeline_MoonTimeline_ * result, Func_2_Moon_Timeline_MoonTimeline_Boolean_ * condition));
IL2CPP_REGISTER_METHODINFO(0x0473F3C8, TimelineParentOwnerUtils_CollectComponentsInChildren_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E3070, void, CollectComponentsInChildren, (Transform * source, List_1_IVirtualTimelineGameObject_ * result, Func_2_IVirtualTimelineGameObject_Boolean_ * condition));
IL2CPP_REGISTER_METHODINFO(0x04701D70, TimelineParentOwnerUtils_CollectComponentsInChildren_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015E2790, void, AddExternalGroup, (VirtualTimelineRepresentationGroup__Enum group, GameObject * source, VirtualClipsBuilder * builder, bool expandByDefault, int32_t blockSize));
IL2CPP_REGISTER_METHODINFO(0x0476E2E0, TimelineParentOwnerUtils_AddExternalGroup_2__MethodInfo);
}
