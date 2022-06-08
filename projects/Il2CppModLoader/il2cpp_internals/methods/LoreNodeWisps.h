using namespace app;

namespace app::methods::LoreNodeWisps {
IL2CPP_REGISTER_METHOD(0x009ED350, bool, get_IsActive, (LoreNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x009ED360, void, OnEnter, (LoreNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x009ED4F0, void, UpdateState, (LoreNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x009ED530, LoreNodeWisps_LoreStep *, get_CurrentStep, (LoreNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x009ED700, MessageProvider *, get_CurrentLine, (LoreNodeWisps * __this));
IL2CPP_REGISTER_METHOD(0x0056FAC0, void, __ctor, (LoreNodeWisps * __this));
}
