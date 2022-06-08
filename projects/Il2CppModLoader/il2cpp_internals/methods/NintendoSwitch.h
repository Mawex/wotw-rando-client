#include <interception_macros.h>

namespace app::methods::NintendoSwitch {
IL2CPP_REGISTER_METHOD(0x031132F0, NintendoSwitch *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x03113370, void, set_Instance, (NintendoSwitch * value));
IL2CPP_REGISTER_METHOD(0x03113400, bool, get_InvalidMountSetup, ());
IL2CPP_REGISTER_METHOD(0x03113480, void, set_InvalidMountSetup, (bool value));
IL2CPP_REGISTER_METHOD(0x03113510, String *, GetSaveDataFilePath, (NintendoSwitch * __this, String * fileName));
IL2CPP_REGISTER_METHOD(0x03113590, String *, GetOutputPath, ());
IL2CPP_REGISTER_METHOD(0x03113610, String *, GetHostOutputPath, ());
IL2CPP_REGISTER_METHOD(0x03113690, void, Initialize, (NintendoSwitch * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, InitializeHostSetup, (NintendoSwitch * __this));
IL2CPP_REGISTER_METHOD(0x03113720, String *, FixWithProfanityCheck, (String * toCheck));
IL2CPP_REGISTER_METHOD(0x00417870, bool, HasProfanity, (String * toCheck));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NintendoSwitch * __this));
}
