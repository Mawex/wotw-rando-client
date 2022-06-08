#include <interception_macros.h>

namespace app::methods::System::Collections::Generic::LargeArrayBuilder_1_System::Object_ {
IL2CPP_REGISTER_METHOD(0x00152230, void, __ctor, (LargeArrayBuilder_1_System_Object___Boxed * __this, bool initialize));
IL2CPP_REGISTER_METHOD(0x001522F0, void, __ctor, (LargeArrayBuilder_1_System_Object___Boxed * __this, int32_t maxCapacity));
IL2CPP_REGISTER_METHOD(0x001523A0, void, AddRange, (LargeArrayBuilder_1_System_Object___Boxed * __this, IEnumerable_1_System_Object_ * items));
IL2CPP_REGISTER_METHOD(0x001523B0, void, CopyTo, (LargeArrayBuilder_1_System_Object___Boxed * __this, Object__Array * array, int32_t arrayIndex, int32_t count));
IL2CPP_REGISTER_METHOD(0x001523C0, Object__Array *, GetBuffer, (LargeArrayBuilder_1_System_Object___Boxed * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x00152470, Object__Array *, ToArray, (LargeArrayBuilder_1_System_Object___Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00152550, bool, TryMove, (LargeArrayBuilder_1_System_Object___Boxed * __this, Object__Array * * array));
IL2CPP_REGISTER_METHOD(0x00152580, void, AllocateBuffer, (LargeArrayBuilder_1_System_Object___Boxed * __this));
}
