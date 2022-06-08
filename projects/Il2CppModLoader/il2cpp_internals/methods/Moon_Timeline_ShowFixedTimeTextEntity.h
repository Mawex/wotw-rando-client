#include <interception_macros.h>

namespace app::methods::Moon::Timeline::ShowFixedTimeTextEntity {
IL2CPP_REGISTER_METHOD(0x00785D10, void, ResetStatics, ());
IL2CPP_REGISTER_METHOD(0x00785DB0, void, add_FinishedReading, (ShowFixedTimeTextEntity * __this, Action_1_MessageBox_HideAction_ * value));
IL2CPP_REGISTER_METHOD(0x00785EA0, void, remove_FinishedReading, (ShowFixedTimeTextEntity * __this, Action_1_MessageBox_HideAction_ * value));
IL2CPP_REGISTER_METHOD(0x00785F90, bool, IsTalkInteraction, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x00785FB0, SoundHost *, get_EffectiveSoundHost, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x007860F0, float, get_Duration, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x007862F0, MessageProvider *, get_Message, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x007863B0, MessageControllerB_NpcMessageStyle__Enum, get_Style, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x007863C0, void, OnDestroy, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x007863F0, void, Finalize, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x00786440, void, MoonCleanup, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x00786460, void, OnStartPlayback, (ShowFixedTimeTextEntity * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x00787BD0, MoonTimeline *, get_ParentTimeline, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x00787CA0, void, OnFinishedReading, (ShowFixedTimeTextEntity * __this, MessageBox_HideAction__Enum action));
IL2CPP_REGISTER_METHODINFO(0x047532F0, ShowFixedTimeTextEntity_OnFinishedReading__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00788230, void, OnStopPlayback, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x007882F0, void, ResetMessageTimer, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHODINFO(0x047880B8, ShowFixedTimeTextEntity_ResetMessageTimer__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00788300, void, UpdateFade, (ShowFixedTimeTextEntity * __this, TextBox * text, ShowFixedTimeTextEntity_TextVisuals * visuals, float time, float duration));
IL2CPP_REGISTER_METHOD(0x007886A0, void, ResetWriteOut, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x007887F0, void, OnUpdateEntity, (ShowFixedTimeTextEntity * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x00788D40, void, SynchronizeData, (ShowFixedTimeTextEntity * __this, MoonTimeline * timeline, TimelineEntityRecord * record));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x00788D50, void, __ctor, (ShowFixedTimeTextEntity * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
