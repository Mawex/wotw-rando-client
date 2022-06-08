#include <interception_macros.h>

namespace app::methods::Objective {
IL2CPP_REGISTER_METHOD(0x0060FCD0, void, AddObjective, (Objective * __this));
IL2CPP_REGISTER_METHOD(0x0060FCE0, void, CompleteObjective, (Objective * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, Transform *, get_AreaMapTransform, (Objective * __this));
IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_AreaMapTransform, (Objective * __this, Transform * value));
IL2CPP_REGISTER_METHOD(0x002FB990, Transform *, get_WorldMapTransform, (Objective * __this));
IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_WorldMapTransform, (Objective * __this, Transform * value));
IL2CPP_REGISTER_METHOD(0x0060FCF0, RuntimeGameWorldArea *, get_Area, (Objective * __this));
IL2CPP_REGISTER_METHOD(0x0060FD00, void, Show, (Objective * __this));
IL2CPP_REGISTER_METHOD(0x006100A0, void, Update, (Objective * __this));
IL2CPP_REGISTER_METHOD(0x00610500, void, Hide, (Objective * __this));
IL2CPP_REGISTER_METHOD(0x00610670, void, Complete, (Objective * __this));
IL2CPP_REGISTER_METHOD(0x00610680, void, SpawnAppearEffect, (Objective * __this));
IL2CPP_REGISTER_METHOD(0x004140E0, void, __ctor, (Objective * __this));
}
