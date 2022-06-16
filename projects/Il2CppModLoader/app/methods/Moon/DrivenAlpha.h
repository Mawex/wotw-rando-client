#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::DrivenAlpha {
    IL2CPP_REGISTER_METHOD(0x01201D70, app::ITweenLerpInputProvider *, get_ResolvedInputProvider, (app::DrivenAlpha * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01201E30, app::Renderer *, get_EffectiveRenderer, (app::DrivenAlpha * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Awake, (app::DrivenAlpha * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01201F40, void, Update, (app::DrivenAlpha * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012021B0, void, ctor, (app::DrivenAlpha * this_ptr))
}
