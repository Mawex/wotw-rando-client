#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LightDirectionNormalsModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyMultipliers, (app::LightDirectionNormalsModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x0114CD80, void, SetProperties, (app::LightDirectionNormalsModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0114CE70, void, ctor, (app::LightDirectionNormalsModifier * this_ptr))
}
