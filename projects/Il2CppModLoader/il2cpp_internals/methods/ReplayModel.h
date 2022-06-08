using namespace app;

namespace app::methods::ReplayModel {
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ReplayModel * __this));
IL2CPP_REGISTER_METHOD(0x02EA24F0, void, __ctor, (ReplayModel * __this, String * player, int32_t duration, String * replay));
IL2CPP_REGISTER_METHOD(0x002FA280, String *, get_Player, (ReplayModel * __this));
IL2CPP_REGISTER_METHOD(0x00863E90, float, get_Duration, (ReplayModel * __this));
IL2CPP_REGISTER_METHOD(0x002FB950, String *, get_ReplayData, (ReplayModel * __this));
}
