using namespace app;

namespace app::methods::System::Globalization::CultureNotFoundException {
IL2CPP_REGISTER_METHOD(0x025FC0F0, void, __ctor, (CultureNotFoundException * __this));
IL2CPP_REGISTER_METHOD(0x025FC180, void, __ctor, (CultureNotFoundException * __this, String * paramName, String * message));
IL2CPP_REGISTER_METHOD(0x025FC1C0, void, __ctor, (CultureNotFoundException * __this, String * paramName, String * invalidCultureName, String * message));
IL2CPP_REGISTER_METHOD(0x025FC210, void, __ctor, (CultureNotFoundException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHOD(0x025FC390, void, GetObjectData, (CultureNotFoundException * __this, SerializationInfo * info, StreamingContext context));
IL2CPP_REGISTER_METHODINFO(0x0477FC70, CultureNotFoundException_GetObjectData__MethodInfo);
IL2CPP_REGISTER_METHOD(0x002FBC60, Nullable_1_Int32_, get_InvalidCultureId, (CultureNotFoundException * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, String *, get_InvalidCultureName, (CultureNotFoundException * __this));
IL2CPP_REGISTER_METHOD(0x025FC520, String *, get_DefaultMessage, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x025FC5A0, String *, get_FormatedInvalidCultureId, (CultureNotFoundException * __this));
IL2CPP_REGISTER_METHOD(0x025FC7B0, String *, get_Message, (CultureNotFoundException * __this));
}
