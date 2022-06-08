#include <interception_macros.h>

namespace app::methods::OriCellBar {
IL2CPP_REGISTER_METHOD(0x00437A00, void, SetShowCondition, (OriCellBar * __this, Func_1_Boolean_ * shouldShowNow));
IL2CPP_REGISTER_METHOD(0x00437A70, float, get_CurrentValue, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x00437A80, float, get_MaxValue, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x00437A90, float, get_MaxUnshieldedValue, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x00437AA0, void, Awake, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x00438AC0, void, OnDestroy, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x004390A0, void, OnRestoreCheckpoint, (OriCellBar * __this));
IL2CPP_REGISTER_METHODINFO(0x0476A8A8, OriCellBar_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004391C0, void, UpdateFloatProvidersCache, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x00439270, void, RefreshUpdateDataOnCells, (OriCellBar * __this, float currentValue, float maxValue));
IL2CPP_REGISTER_METHOD(0x004392F0, void, OnUpdatedShard, (OriCellBar * __this));
IL2CPP_REGISTER_METHODINFO(0x0471C840, OriCellBar_OnUpdatedShard__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004394A0, void, ForceUpdateBar, (OriCellBar * __this, PlayerUberStateShards_Shard * shard));
IL2CPP_REGISTER_METHODINFO(0x04710ED0, OriCellBar_ForceUpdateBar__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00439510, void, UpdatedRelevantShard, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x00439570, bool, get_ShouldBeShown, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x00439620, void, UpdateValue, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x004397D0, void, FixedUpdate, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x00439C50, bool, get_FreezeTimedOut, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x00439D60, void, DrainCheck, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x0043A7B0, void, DisableDrain1, (OriCellBar * __this));
IL2CPP_REGISTER_METHODINFO(0x04754050, OriCellBar_DisableDrain1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043A8E0, void, DisableDrain2, (OriCellBar * __this));
IL2CPP_REGISTER_METHODINFO(0x0470B090, OriCellBar_DisableDrain2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0043AA10, void, UpdateVisuals, (OriCellBar * __this, bool forceUpdate));
IL2CPP_REGISTER_METHOD(0x0043B3F0, void, PlayShowTimeline, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x0043B600, void, PlayHideTimeline, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x0043B870, void, Show, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x0043B8C0, void, Hide, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x0043B8E0, void, __ctor, (OriCellBar * __this));
IL2CPP_REGISTER_METHOD(0x0043B980, void, _PlayHideTimeline_b__76_0, (OriCellBar * __this));
IL2CPP_REGISTER_METHODINFO(0x04795548, OriCellBar__PlayHideTimeline_b__76_0__MethodInfo);
}
