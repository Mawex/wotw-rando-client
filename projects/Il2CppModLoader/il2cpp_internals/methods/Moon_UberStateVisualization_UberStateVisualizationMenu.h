using namespace app;

namespace app::methods::Moon::UberStateVisualization::UberStateVisualizationMenu {
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_Active, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_Active, (UberStateVisualizationMenu * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, List_1_List_1_IDebugMenuItem_ *, get_Items, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Items, (UberStateVisualizationMenu * __this, List_1_List_1_IDebugMenuItem_ * value));
IL2CPP_REGISTER_METHOD(0x002FB9D0, String *, get_Path, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Path, (UberStateVisualizationMenu * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9F0, String *, get_Text, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Text, (UberStateVisualizationMenu * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB40, String *, get_HelpText, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_HelpText, (UberStateVisualizationMenu * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FBB60, Func_1_String_ *, get_DynamicText, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_DynamicText, (UberStateVisualizationMenu * __this, Func_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x0118CAB0, void, Awake, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AddMenuItem, (UberStateVisualizationMenu * __this, String * path, IDebugMenuItem * item, int32_t col));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Clear, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x0118CB40, bool, Draw, (UberStateVisualizationMenu * __this, Rect rect, bool b));
IL2CPP_REGISTER_METHOD(0x0118CD50, void, Update, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, GoBackMenu, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x0118CDF0, void, OnSelected, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedFixedUpdate, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x0118CF80, void, Reset, (UberStateVisualizationMenu * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (UberStateVisualizationMenu * __this));
}
