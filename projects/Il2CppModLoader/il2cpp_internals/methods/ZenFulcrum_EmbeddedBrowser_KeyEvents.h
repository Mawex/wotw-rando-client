#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::KeyEvents {
IL2CPP_REGISTER_METHOD(0x002FB930, List_1_UnityEngine_Event_ *, get_Events, (KeyEvents * __this));
IL2CPP_REGISTER_METHOD(0x01DE6FF0, void, InputUpdate, (KeyEvents * __this));
IL2CPP_REGISTER_METHOD(0x01DE74E0, void, Feed, (KeyEvents * __this, Event * ev));
IL2CPP_REGISTER_METHOD(0x01DE7700, void, Press, (KeyEvents * __this, KeyCode__Enum key));
IL2CPP_REGISTER_METHOD(0x01DE7940, void, Release, (KeyEvents * __this, KeyCode__Enum key));
IL2CPP_REGISTER_METHOD(0x01DE7B80, void, Type, (KeyEvents * __this, String * text));
IL2CPP_REGISTER_METHOD(0x01DE7E60, void, __ctor, (KeyEvents * __this));
IL2CPP_REGISTER_METHOD(0x01DE8080, void, __cctor, ());
}
