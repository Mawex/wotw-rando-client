#include <interception_macros.h>

namespace app::methods::Moon::UberStateVisualization::UberStateDataView {
IL2CPP_REGISTER_METHOD(0x030C2840, void, UpdateWithModel, (UberStateDataView * __this, UberStateData stateData));
IL2CPP_REGISTER_METHOD(0x030C2920, void, OnGui, (UberStateDataView * __this, Rect rect));
IL2CPP_REGISTER_METHOD(0x030C3120, void, Layout, (UberStateDataView * __this, Rect viewRect));
IL2CPP_REGISTER_METHOD(0x030C31A0, void, Render, (UberStateDataView * __this));
IL2CPP_REGISTER_METHOD(0x030C3960, void, HandleInput, (UberStateDataView * __this, ControllerInput * input));
IL2CPP_REGISTER_METHOD(0x030C3AC0, void, Clear, (UberStateDataView * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (UberStateDataView * __this));
}
