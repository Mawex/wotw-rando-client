using namespace app;

namespace app::methods::SlugState {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (SlugState * __this, SlugEnemy * slug));
IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (SlugState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (SlugState * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (SlugState * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (SlugState * __this));
}
