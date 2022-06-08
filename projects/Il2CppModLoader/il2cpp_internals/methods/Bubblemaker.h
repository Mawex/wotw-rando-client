using namespace app;

namespace app::methods::Bubblemaker {
IL2CPP_REGISTER_METHOD(0x00654950, SuspendableMask__Enum, get_Mask, (Bubblemaker * __this));
IL2CPP_REGISTER_METHOD(0x00804400, void, set_Mask, (Bubblemaker * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x008044B0, void, set_TimelineToPlay, (Bubblemaker * __this, MoonTimeline * value));
IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, (Bubblemaker * __this));
IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, (Bubblemaker * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00804590, void, Awake, (Bubblemaker * __this));
IL2CPP_REGISTER_METHOD(0x008046B0, void, Start, (Bubblemaker * __this));
IL2CPP_REGISTER_METHOD(0x00804990, void, OnDestroy, (Bubblemaker * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRestoreCheckpoint, (Bubblemaker * __this));
IL2CPP_REGISTER_METHOD(0x00804B40, void, OnEnable, (Bubblemaker * __this));
IL2CPP_REGISTER_METHOD(0x00804BE0, void, OnDisable, (Bubblemaker * __this));
IL2CPP_REGISTER_METHOD(0x00804C80, void, FixedUpdate, (Bubblemaker * __this));
IL2CPP_REGISTER_METHOD(0x00804E30, void, SpawnBubble, (Bubblemaker * __this));
IL2CPP_REGISTER_METHODINFO(0x0478FB90, Bubblemaker_SpawnBubble__MethodInfo);
IL2CPP_REGISTER_METHOD(0x008052A0, void, OnRaceStart, (Bubblemaker * __this));
IL2CPP_REGISTER_METHOD(0x00805380, void, OnSyncRaceTimer, (Bubblemaker * __this, float time));
IL2CPP_REGISTER_METHOD(0x00805420, void, __ctor, (Bubblemaker * __this));
}
