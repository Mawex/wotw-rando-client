#include <interception_macros.h>

namespace app::methods::FrogGroup {
IL2CPP_REGISTER_METHOD(0x002FB990, List_1_FrogEntity_ *, get_AliveFrogsInGroup, (FrogGroup * __this));
IL2CPP_REGISTER_METHOD(0x01648F90, void, RegisterAliveFrog, (FrogGroup * __this, FrogEntity * frog));
IL2CPP_REGISTER_METHOD(0x01649030, void, UnregisterFrogFromAlive, (FrogGroup * __this, FrogEntity * frog));
IL2CPP_REGISTER_METHOD(0x016490D0, void, __ctor, (FrogGroup * __this));
}
