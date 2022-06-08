#include <interception_macros.h>

namespace app::methods::Moon::JsonParser_Slot {
IL2CPP_REGISTER_METHOD(0x002459D0, void, __ctor, (JsonParser_Slot__Boxed * __this, JsonParser * parser));
IL2CPP_REGISTER_METHODINFO(0x0471A6C0, JsonParser_Slot__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002459E0, void, Validate, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04785FA0, JsonParser_Slot_Validate__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002459F0, JsonToken__Enum, Peek, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04764BE0, JsonParser_Slot_Peek__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00245A00, String *, ReadOptString, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00245A10, String *, ReadString, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00245A20, String *, ReadStringCommon, (JsonParser_Slot__Boxed * __this, JsonToken__Enum token));
IL2CPP_REGISTER_METHODINFO(0x047685B8, JsonParser_Slot_ReadStringCommon__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00245A30, Nullable_1_Double_, ReadOptF64, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00245A60, double, ReadF64, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00245A70, double, ReadF64Common, (JsonParser_Slot__Boxed * __this, JsonToken__Enum token, double number));
IL2CPP_REGISTER_METHODINFO(0x0478E700, JsonParser_Slot_ReadF64Common__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00245A80, Nullable_1_Boolean_, ReadOptBool, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0477AD18, JsonParser_Slot_ReadOptBool__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00245C10, bool, ReadBool, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x0472AA60, JsonParser_Slot_ReadBool__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00245C20, Nullable_1_Moon_JsonParser_Object_, ReadOptObject, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00245C50, JsonParser_Object, ReadObject, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00245CE0, JsonParser_Object, ReadObjectCommon, (JsonParser_Slot__Boxed * __this, JsonToken__Enum token));
IL2CPP_REGISTER_METHODINFO(0x0471D1A8, JsonParser_Slot_ReadObjectCommon__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00245D10, Nullable_1_Moon_JsonParser_Array_, ReadOptArray, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00245D40, JsonParser_Array, ReadArray, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x00245DD0, JsonParser_Array, ReadArrayCommon, (JsonParser_Slot__Boxed * __this, JsonToken__Enum token));
IL2CPP_REGISTER_METHODINFO(0x04790A78, JsonParser_Slot_ReadArrayCommon__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00245E00, void, Discard, (JsonParser_Slot__Boxed * __this));
IL2CPP_REGISTER_METHODINFO(0x04778898, JsonParser_Slot_Discard__MethodInfo);
}
