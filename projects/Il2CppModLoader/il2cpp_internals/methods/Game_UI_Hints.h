using namespace app;

namespace app::methods::Game::UI_Hints {
IL2CPP_REGISTER_METHOD(0x00686040, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006860F0, Vector3, get_HintPosition, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00686120, void, HideExistingHint, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00686260, bool, LayerShouldShow, (HintLayer__Enum layer));
IL2CPP_REGISTER_METHOD(0x00686380, MessageBox *, Show, (MessageProvider * messageProvider, HintLayer__Enum layer, float duration, Vector3 hintOffset));
IL2CPP_REGISTER_METHOD(0x00686720, MessageBox *, ShowFromTimeline, (MessageProvider * messageProvider, HintLayer__Enum layer, float duration, Vector3 hintOffset));
IL2CPP_REGISTER_METHOD(0x00686820, void, ShowFromTimelineEnd, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006868C0, bool, get_IsTimelineShowingHint, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00686960, MessageBox *, ShowAchievement, (MessageProvider * messageProvider, Texture * icon, HintLayer__Enum layer, float duration));
IL2CPP_REGISTER_METHOD(0x00686B70, bool, get_IsShowingHint, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00686C40, MessageBox *, ShowAndPersist, (ManagedHintConfiguration config));
IL2CPP_REGISTER_METHODINFO(0x04796C18, UI_Hints_ShowAndPersist__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
