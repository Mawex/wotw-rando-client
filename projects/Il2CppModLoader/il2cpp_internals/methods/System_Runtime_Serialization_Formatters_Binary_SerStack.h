#include <interception_macros.h>

namespace app::methods::System::Runtime::Serialization::Formatters::Binary::SerStack {
IL2CPP_REGISTER_METHOD(0x01DA1140, void, __ctor, (SerStack * __this, String * stackId));
IL2CPP_REGISTER_METHOD(0x01DA11E0, void, Push, (SerStack * __this, Object * obj));
IL2CPP_REGISTER_METHOD(0x01DA1350, Object *, Pop, (SerStack * __this));
IL2CPP_REGISTER_METHOD(0x01DA13D0, void, IncreaseCapacity, (SerStack * __this));
IL2CPP_REGISTER_METHOD(0x01DA14A0, Object *, Peek, (SerStack * __this));
IL2CPP_REGISTER_METHOD(0x01DA14F0, Object *, PeekPeek, (SerStack * __this));
IL2CPP_REGISTER_METHOD(0x01DA1540, bool, IsEmpty, (SerStack * __this));
}
