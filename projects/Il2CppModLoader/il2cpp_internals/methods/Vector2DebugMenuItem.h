#include <interception_macros.h>

namespace app::methods::Vector2DebugMenuItem {
IL2CPP_REGISTER_METHOD(0x00F28570, Vector2, get_Value, (app::Vector2DebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x010655B0, void, set_Value, (app::Vector2DebugMenuItem * this_ptr, app::Vector2 value));
IL2CPP_REGISTER_METHOD(0x013BAA00, void, __ctor_1, (app::Vector2DebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x013BAA90, void, __ctor_2, (app::Vector2DebugMenuItem * this_ptr, app::String * path, app::String * str));
IL2CPP_REGISTER_METHOD(0x013BAB40, bool, Draw, (app::Vector2DebugMenuItem * this_ptr, app::Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Text, (app::Vector2DebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Text, (app::Vector2DebugMenuItem * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelected, (app::Vector2DebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (app::Vector2DebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedFixedUpdate, (app::Vector2DebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, Func_1_String_ *, get_DynamicText, (app::Vector2DebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB960, void, set_DynamicText, (app::Vector2DebugMenuItem * this_ptr, app::Func_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x002FBB00, String *, get_HelpText, (app::Vector2DebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_HelpText, (app::Vector2DebugMenuItem * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Path, (app::Vector2DebugMenuItem * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Path, (app::Vector2DebugMenuItem * this_ptr, app::String * value));
}
