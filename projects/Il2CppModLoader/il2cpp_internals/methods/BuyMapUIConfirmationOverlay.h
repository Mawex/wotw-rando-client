using namespace app;

namespace app::methods::BuyMapUIConfirmationOverlay {
IL2CPP_REGISTER_METHOD(0x008223B0, void, FixedUpdate, (BuyMapUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x008225B0, void, Initialize, (BuyMapUIConfirmationOverlay * __this, int32_t xpCost));
IL2CPP_REGISTER_METHOD(0x00822910, void, SetTitle, (BuyMapUIConfirmationOverlay * __this, String * message));
IL2CPP_REGISTER_METHOD(0x00822A70, void, SetDescription, (BuyMapUIConfirmationOverlay * __this, String * message));
IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (BuyMapUIConfirmationOverlay * __this, bool change));
IL2CPP_REGISTER_METHOD(0x002FA000, void, HideImmediate, (BuyMapUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00822BD0, void, Show, (BuyMapUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowImmediate, (BuyMapUIConfirmationOverlay * __this));
IL2CPP_REGISTER_METHOD(0x00822DA0, void, __ctor, (BuyMapUIConfirmationOverlay * __this));
}
