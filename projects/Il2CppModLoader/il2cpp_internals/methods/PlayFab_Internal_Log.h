#include <interception_macros.h>

namespace app::methods::PlayFab::Internal::Log {
IL2CPP_REGISTER_METHOD(0x01835C20, void, Debug, (String * text, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01835D60, void, Info, (String * text, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01835EA0, void, Warning, (String * text, Object__Array * args));
IL2CPP_REGISTER_METHOD(0x01835FE0, void, Error, (String * text, Object__Array * args));
}
