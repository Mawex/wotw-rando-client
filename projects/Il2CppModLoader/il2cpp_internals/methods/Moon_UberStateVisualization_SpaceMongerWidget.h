#include <interception_macros.h>

namespace app::methods::Moon::UberStateVisualization::SpaceMongerWidget {
IL2CPP_REGISTER_METHOD(0x030BED70, void, add_OnSelectionChanged, (SpaceMongerWidget * __this, Action_1_Moon_UberStateVisualization_UberStateData_ * value));
IL2CPP_REGISTER_METHOD(0x030BEE60, void, remove_OnSelectionChanged, (SpaceMongerWidget * __this, Action_1_Moon_UberStateVisualization_UberStateData_ * value));
IL2CPP_REGISTER_METHOD(0x030BEF50, void, __ctor, (SpaceMongerWidget * __this));
IL2CPP_REGISTER_METHOD(0x030BF130, void, SetSelection, (SpaceMongerWidget * __this, UberStateData uberState));
IL2CPP_REGISTER_METHOD(0x030BF220, int32_t, GetStateIndex, (SpaceMongerWidget * __this, UberStateData uberState));
IL2CPP_REGISTER_METHOD(0x030BF340, void, TrySelectPreviousState, (SpaceMongerWidget * __this));
IL2CPP_REGISTER_METHOD(0x030BF490, void, TrySelectNextState, (SpaceMongerWidget * __this));
IL2CPP_REGISTER_METHOD(0x030BF5F0, void, UpdateWithModel, (SpaceMongerWidget * __this, List_1_Moon_UberStateVisualization_UberStateGroupData_ * stateGroupDatas));
IL2CPP_REGISTER_METHOD(0x030BFB00, void, Layout, (SpaceMongerWidget * __this, Rect viewRect));
IL2CPP_REGISTER_METHOD(0x002FA000, void, HandleInput, (SpaceMongerWidget * __this, ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x030C0470, void, Render, (SpaceMongerWidget * __this));
IL2CPP_REGISTER_METHOD(0x030C1800, void, Clear, (SpaceMongerWidget * __this));
IL2CPP_REGISTER_METHOD(0x030C1810, void, TryChangeUberStateSelection, (SpaceMongerWidget * __this, UberStateData uberState));
IL2CPP_REGISTER_METHOD(0x030C19F0, bool, IsStateHighlighted, (SpaceMongerWidget * __this, UberStateData uberState));
IL2CPP_REGISTER_METHOD(0x030C1AC0, bool, IsStateSelected, (SpaceMongerWidget * __this, UberStateData uberState));
IL2CPP_REGISTER_METHOD(0x030C1B90, void, CalculateGroupDataLayout, (SpaceMongerWidget * __this, UberStateGroupData * groupData, Rect rect));
}
