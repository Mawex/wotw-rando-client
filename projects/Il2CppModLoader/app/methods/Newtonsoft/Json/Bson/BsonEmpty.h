#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Bson::BsonEmpty {
    IL2CPP_REGISTER_METHOD(0x0052A040, void, ctor, (app::BsonEmpty * this_ptr, app::BsonType__Enum type))
    IL2CPP_REGISTER_METHOD(0x0052A030, app::BsonType__Enum, get_Type, (app::BsonEmpty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A4A1E0, void, cctor, ())
}
