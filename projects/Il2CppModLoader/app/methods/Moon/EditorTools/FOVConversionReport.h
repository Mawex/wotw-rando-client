#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::EditorTools::FOVConversionReport {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanRemoveObject, (app::FOVConversionReport * this_ptr, app::GameObject * target))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::FOVConversionReport * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01207B80, void, ctor, (app::FOVConversionReport * this_ptr))
}
