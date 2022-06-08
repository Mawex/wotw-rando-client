#include <interception_macros.h>

namespace app::methods::Moon::UberStateVisualization::NavigableOnGUI {
IL2CPP_REGISTER_METHOD(0x01B73260, bool, get_isSelected, (NavigableOnGUI * __this));
IL2CPP_REGISTER_METHOD(0x01B73280, void, __ctor, (NavigableOnGUI * __this));
IL2CPP_REGISTER_METHOD(0x01B732A0, void, SetSelectedIndex, (NavigableOnGUI * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01B732B0, void, UpdateInput, (NavigableOnGUI * __this));
IL2CPP_REGISTER_METHOD(0x01B73C80, void, ClearInput, (NavigableOnGUI * __this));
IL2CPP_REGISTER_METHOD(0x01B73C90, void, BeginOnGUI, (NavigableOnGUI * __this));
IL2CPP_REGISTER_METHOD(0x01B73CB0, void, EndOnGUI, (NavigableOnGUI * __this));
IL2CPP_REGISTER_METHOD(0x01B73CD0, void, BeginControl, (NavigableOnGUI * __this));
IL2CPP_REGISTER_METHOD(0x01B73EF0, void, EndControl, (NavigableOnGUI * __this));
IL2CPP_REGISTER_METHOD(0x01B740C0, bool, Button, (NavigableOnGUI * __this, String * label, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x01B741D0, bool, Toggle, (NavigableOnGUI * __this, bool value, String * label, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x01B742E0, bool, Foldout, (NavigableOnGUI * __this, bool value, String * label, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x01B74480, float, HorizontalSlider, (NavigableOnGUI * __this, float value, float min, float max, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x01B74650, float, FloatInput, (NavigableOnGUI * __this, float value, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x00888E60, int32_t, IntInput, (NavigableOnGUI * __this, int32_t value, GUILayoutOption__Array * options));
IL2CPP_REGISTER_METHOD(0x01B74770, void, BeginField, (NavigableOnGUI * __this, String * label));
IL2CPP_REGISTER_METHOD(0x01B74940, void, EndField, (NavigableOnGUI * __this));
IL2CPP_REGISTER_METHOD(0x01B74A70, NavigableOnGUI_Field, GetField, (NavigableOnGUI * __this, String * label));
IL2CPP_REGISTER_METHOD(0x01B74AA0, bool, ButtonField, (NavigableOnGUI * __this, String * label));
IL2CPP_REGISTER_METHOD(0x01B74C00, bool, FoldoutField, (NavigableOnGUI * __this, String * label, bool value));
IL2CPP_REGISTER_METHOD(0x01B74D50, bool, ToggleField, (NavigableOnGUI * __this, String * label, bool value));
IL2CPP_REGISTER_METHOD(0x01B74EA0, float, SliderField, (NavigableOnGUI * __this, String * label, float value, float min, float max));
IL2CPP_REGISTER_METHOD(0x01B750B0, int32_t, SliderField, (NavigableOnGUI * __this, String * label, int32_t value, int32_t min, int32_t max));
IL2CPP_REGISTER_METHOD(0x01B752A0, float, FloatField, (NavigableOnGUI * __this, String * label, float value));
IL2CPP_REGISTER_METHOD(0x01B75400, int32_t, IntField, (NavigableOnGUI * __this, String * label, int32_t value));
IL2CPP_REGISTER_METHOD(0x01B75540, void, LabelField, (NavigableOnGUI * __this, String * label, String * value));
IL2CPP_REGISTER_METHOD(0x01B75640, void, __cctor, ());
}
