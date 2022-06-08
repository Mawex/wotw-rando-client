using namespace app;

namespace app::methods::VirtualClipsBuilder {
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_AddedChildren, (VirtualClipsBuilder * __this));
IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_AddedChildren, (VirtualClipsBuilder * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x002FBB00, VirtualMoonTimeline *, get_Root, (VirtualClipsBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01E969C0, VirtualClipsBuilder_BuilderScope *, get_CurrentScope, (VirtualClipsBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01E96AA0, float, get_CurrentHorizontalOffset, (VirtualClipsBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01E96AD0, int32_t, get_IndentLevel, (VirtualClipsBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01E96AF0, void, set_IndentLevel, (VirtualClipsBuilder * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x01E96B20, void, __ctor, (VirtualClipsBuilder * __this, VirtualMoonTimeline * root, float baseClipLenght));
IL2CPP_REGISTER_METHOD(0x01E96D90, VirtualClipsBuilder *, SetClipsBaseLenght, (VirtualClipsBuilder * __this, float lenght));
IL2CPP_REGISTER_METHOD(0x01E96DA0, VirtualClipsBuilder *, AddClip, (VirtualClipsBuilder * __this, ITimelineEntity * entity, float lenghtMultiplier, bool registerAsLastClip));
IL2CPP_REGISTER_METHOD(0x01E97120, void, SetupConstraintsVertical, (VirtualClipsBuilder * __this, ITimelineEntity * entity, float lenght));
IL2CPP_REGISTER_METHOD(0x01E972B0, void, SetupConstraintsHorizontal, (VirtualClipsBuilder * __this, EntityId entityId, float lenght));
IL2CPP_REGISTER_METHOD(0x01E97500, void, SetupConstraintsForBlock, (VirtualClipsBuilder * __this, ITimelineEntity * entity, EntityId id, float lenght));
IL2CPP_REGISTER_METHOD(0x01E97740, VirtualClipsBuilder *, StartGroup, (VirtualClipsBuilder * __this, String * groupName, bool expandByDefault, bool shouldHideHeader, bool useHorizontalCollapse));
IL2CPP_REGISTER_METHOD(0x01E978E0, VirtualClipsBuilder *, StartGroup, (VirtualClipsBuilder * __this, VirtualTimelineRepresentationGroup__Enum groupType, bool expandByDefault));
IL2CPP_REGISTER_METHOD(0x01E97B10, VirtualClipsBuilder *, StartGroup, (VirtualClipsBuilder * __this, VirtualMoonTimeline * timeline));
IL2CPP_REGISTER_METHOD(0x01E97CA0, VirtualClipsBuilder *, EndGroup, (VirtualClipsBuilder * __this));
IL2CPP_REGISTER_METHODINFO(0x0478E198, VirtualClipsBuilder_EndGroup__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E97D80, VirtualClipsBuilder *, StartVertical, (VirtualClipsBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01E97DC0, VirtualClipsBuilder *, EndVertical, (VirtualClipsBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01E97E00, VirtualClipsBuilder *, StartHorizontal, (VirtualClipsBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01E97E40, VirtualClipsBuilder *, EndHorizontal, (VirtualClipsBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01E97EB0, VirtualClipsBuilder *, StartBlock, (VirtualClipsBuilder * __this, int32_t blockSize));
IL2CPP_REGISTER_METHOD(0x01E97EF0, VirtualClipsBuilder *, EndBlock, (VirtualClipsBuilder * __this));
IL2CPP_REGISTER_METHOD(0x01E97F30, VirtualClipsBuilder *, Attach, (VirtualClipsBuilder * __this, ITimelineEntity * attached, ITimelineEntity * holder));
IL2CPP_REGISTER_METHODINFO(0x0470DEF0, VirtualClipsBuilder_Attach__MethodInfo);
}
