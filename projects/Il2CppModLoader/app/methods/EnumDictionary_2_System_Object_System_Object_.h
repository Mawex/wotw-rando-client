#pragma once
#include <interception_macros.h>

namespace app::methods::EnumDictionary_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::EnumDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E5870, void, OnAfterDeserialize, (app::EnumDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E35B0, void, OnValidate, (app::EnumDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E59A0, app::Object *, GetValue, (app::EnumDictionary_2_System_Object_System_Object_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x019E40D0, app::Object *, FindValue, (app::EnumDictionary_2_System_Object_System_Object_ * this_ptr, app::Object * key))
    IL2CPP_REGISTER_METHOD(0x019E5AA0, void, EnsureListMatchesEnum, (app::EnumDictionary_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E4530, void, ctor, (app::EnumDictionary_2_System_Object_System_Object_ * this_ptr))
}
