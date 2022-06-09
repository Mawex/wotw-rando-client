#include <interception_macros.h>

namespace app::methods::Game::UI_Hints {
    IL2CPP_REGISTER_METHOD(0x00686040, void, ResetStatics, ());
    IL2CPP_REGISTER_METHOD(0x006860F0, Vector3, get_HintPosition, ());
    IL2CPP_REGISTER_METHOD(0x00686120, void, HideExistingHint, ());
    IL2CPP_REGISTER_METHOD(0x00686260, bool, LayerShouldShow, (app::HintLayer__Enum layer));
    IL2CPP_REGISTER_METHOD(0x00686380, MessageBox*, Show, (app::MessageProvider * message_provider, app::HintLayer__Enum layer, float duration, app::Vector3 hint_offset));
    IL2CPP_REGISTER_METHOD(0x00686720, MessageBox*, ShowFromTimeline, (app::MessageProvider * message_provider, app::HintLayer__Enum layer, float duration, app::Vector3 hint_offset));
    IL2CPP_REGISTER_METHOD(0x00686820, void, ShowFromTimelineEnd, ());
    IL2CPP_REGISTER_METHOD(0x006868C0, bool, get_IsTimelineShowingHint, ());
    IL2CPP_REGISTER_METHOD(0x00686960, MessageBox*, ShowAchievement, (app::MessageProvider * message_provider, app::Texture* icon, app::HintLayer__Enum layer, float duration));
    IL2CPP_REGISTER_METHOD(0x00686B70, bool, get_IsShowingHint, ());
    IL2CPP_REGISTER_METHOD(0x00686C40, MessageBox*, ShowAndPersist, (app::ManagedHintConfiguration config));
    IL2CPP_REGISTER_METHODINFO(0x04796C18, UI_Hints_ShowAndPersist__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
} // namespace app::methods::Game::UI_Hints
