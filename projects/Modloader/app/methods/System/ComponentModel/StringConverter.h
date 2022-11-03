#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::StringConverter {
    IL2CPP_REGISTER_METHOD(0x029AD260, bool, CanConvertFrom, (app::StringConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type))
    IL2CPP_REGISTER_METHOD(0x029AD340, app::Object*, ConvertFrom, (app::StringConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x029AD440, void, ctor, (app::StringConverter * this_ptr))
} // namespace app::classes::System::ComponentModel::StringConverter
