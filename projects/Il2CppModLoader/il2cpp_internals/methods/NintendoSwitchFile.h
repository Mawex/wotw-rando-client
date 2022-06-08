#include <interception_macros.h>

namespace app::methods::NintendoSwitchFile {
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Exists, (String * path));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Write, (String * FilePath, Byte__Array * data, bool host, bool append, int32_t size));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteText, (String * path, String * textToWrite, bool host, bool append));
IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteLine, (String * path, String * lineToWrite, bool host, bool append));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (String * path));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (NintendoSwitchFile * __this));
}
