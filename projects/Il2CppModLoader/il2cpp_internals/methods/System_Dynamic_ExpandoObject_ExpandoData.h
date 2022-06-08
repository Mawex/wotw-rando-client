#include <interception_macros.h>

namespace app::methods::System::Dynamic::ExpandoObject_ExpandoData {
IL2CPP_REGISTER_METHOD(0x01A92420, Object *, get_Item, (ExpandoObject_ExpandoData * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x01F8F6D0, void, set_Item, (ExpandoObject_ExpandoData * __this, int32_t index, Object * value));
IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Version, (ExpandoObject_ExpandoData * __this));
IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_Length, (ExpandoObject_ExpandoData * __this));
IL2CPP_REGISTER_METHOD(0x01F8F750, void, __ctor, (ExpandoObject_ExpandoData * __this));
IL2CPP_REGISTER_METHOD(0x00E332C0, void, __ctor, (ExpandoObject_ExpandoData * __this, ExpandoClass * klass, Object__Array * data, int32_t version));
IL2CPP_REGISTER_METHOD(0x01F8F810, ExpandoObject_ExpandoData *, UpdateClass, (ExpandoObject_ExpandoData * __this, ExpandoClass * newClass));
IL2CPP_REGISTER_METHOD(0x01F8FBB0, int32_t, GetAlignedSize, (int32_t len));
IL2CPP_REGISTER_METHOD(0x01F8FBC0, void, __cctor, ());
}
