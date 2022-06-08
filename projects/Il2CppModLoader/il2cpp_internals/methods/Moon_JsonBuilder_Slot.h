using namespace app;

namespace app::methods::Moon::JsonBuilder_Slot {
IL2CPP_REGISTER_METHOD(0x0013C010, void, __ctor, (JsonBuilder_Slot__Boxed * __this, int32_t ident, JsonBuilder * builder));
IL2CPP_REGISTER_METHOD(0x002454B0, void, Validate, (JsonBuilder_Slot__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0476DFF8, JsonBuilder_Slot_Validate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002454C0, void, WriteRawUnsafe, (JsonBuilder_Slot__Boxed * __this, String * jsonValueString));
IL2CPP_REGISTER_METHOD(0x00245510, void, WriteNull, (JsonBuilder_Slot__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00245520, void, Write, (JsonBuilder_Slot__Boxed * __this, String * value));
IL2CPP_REGISTER_METHOD(0x00245530, void, Write, (JsonBuilder_Slot__Boxed * __this, String * value, int32_t start, int32_t length));
IL2CPP_REGISTER_METHOD(0x00245690, void, Write, (JsonBuilder_Slot__Boxed * __this, DateTime value));
IL2CPP_REGISTER_METHOD(0x002456D0, void, Write, (JsonBuilder_Slot__Boxed * __this, Guid value));
IL2CPP_REGISTER_METHOD(0x002456F0, void, Write, (JsonBuilder_Slot__Boxed * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00245700, void, Write, (JsonBuilder_Slot__Boxed * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x00245710, void, Write, (JsonBuilder_Slot__Boxed * __this, uint32_t value));
IL2CPP_REGISTER_METHOD(0x00245750, void, Write, (JsonBuilder_Slot__Boxed * __this, int64_t value));
IL2CPP_REGISTER_METHOD(0x00245760, void, Write, (JsonBuilder_Slot__Boxed * __this, uint64_t value));
IL2CPP_REGISTER_METHOD(0x002457B0, void, Write, (JsonBuilder_Slot__Boxed * __this, float value));
IL2CPP_REGISTER_METHOD(0x002457C0, void, Write, (JsonBuilder_Slot__Boxed * __this, double value));
IL2CPP_REGISTER_METHOD(0x002457D0, JsonBuilder_Object, BuildObject, (JsonBuilder_Slot__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00245830, JsonBuilder_Array, BuildArray, (JsonBuilder_Slot__Boxed * __this));
}
