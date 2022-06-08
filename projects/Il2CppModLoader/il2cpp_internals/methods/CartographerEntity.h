using namespace app;

namespace app::methods::CartographerEntity {
IL2CPP_REGISTER_METHOD(0x00B405E0, String *, get_DialogActorName, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B40660, String *, get_InteractionActorName, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B406E0, CartographerEntity *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00B40760, void, set_Instance, (CartographerEntity * value));
IL2CPP_REGISTER_METHOD(0x00B407F0, void, Awake, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B40810, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00B40820, void, OnUpdate, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B40920, void, UpdateAnimParameter, (CartographerEntity * __this, MoonAnimator * characterAnimator));
IL2CPP_REGISTER_METHOD(0x00B40B80, GameWorldArea *, get_CurrentArea, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B40CF0, MessageProvider *, get_IntroMessageProvider, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B40F30, MessageProvider *, get_NoSaleMessage, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B40F60, MessageProvider *, get_SalesPitchMessage, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B40F90, MessageProvider *, get_InsufficientFundsMessage, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B40FC0, MessageProvider *, get_ThanksMessage, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B40FF0, int32_t, get_MapCost, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B41100, MoonAnimation *, get_PurchaseAnimation, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B41170, bool, get_CanInteractWithOri, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B41230, MoonAnimation *, get_IdleBreakupAnimation, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B412C0, bool, get_CanEffectivelyStartInteraction, (CartographerEntity * __this));
IL2CPP_REGISTER_METHOD(0x00B41380, void, __ctor, (CartographerEntity * __this));
}
