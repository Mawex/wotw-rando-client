using namespace app;

namespace app::methods::GoToSequenceMenuItem {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (GoToSequenceMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x00800000, void, __ctor, (GoToSequenceMenuItem * __this, String * path, GoToSequenceData * goToSequenceData));
IL2CPP_REGISTER_METHOD(0x00800030, bool, Draw, (GoToSequenceMenuItem * __this, Rect rect, bool selected));
IL2CPP_REGISTER_METHOD(0x008001B0, void, OnSelected, (GoToSequenceMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectedUpdate, (GoToSequenceMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x008001C0, void, OnSelectedFixedUpdate, (GoToSequenceMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Func_1_String_ *, get_DynamicText, (GoToSequenceMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_DynamicText, (GoToSequenceMenuItem * __this, Func_1_String_ * value));
IL2CPP_REGISTER_METHOD(0x008002F0, void, Action, (GoToSequenceMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Text, (GoToSequenceMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Text, (GoToSequenceMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_HelpText, (GoToSequenceMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_HelpText, (GoToSequenceMenuItem * __this, String * value));
IL2CPP_REGISTER_METHOD(0x002FB9B0, String *, get_Path, (GoToSequenceMenuItem * __this));
IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Path, (GoToSequenceMenuItem * __this, String * value));
}
