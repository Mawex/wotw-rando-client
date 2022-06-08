using namespace app;

namespace app::methods::SpellMessageIcon {
IL2CPP_REGISTER_METHOD(0x00943010, void, SetIcon, (SpellMessageIcon * __this, Texture2D * icon));
IL2CPP_REGISTER_METHOD(0x009430C0, void, SetName, (SpellMessageIcon * __this, MessageProvider * name));
IL2CPP_REGISTER_METHOD(0x00943180, void, SetSubText, (SpellMessageIcon * __this, bool IsPassive));
IL2CPP_REGISTER_METHOD(0x00943250, void, SetDescription, (SpellMessageIcon * __this, MessageProvider * description));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (SpellMessageIcon * __this));
}
