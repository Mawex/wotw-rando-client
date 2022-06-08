#include <interception_macros.h>

namespace app::methods::System::Net::Configuration::SmtpSection {
IL2CPP_REGISTER_METHOD(0x01E99080, void, __ctor, (SmtpSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04780160, SmtpSection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E990B0, SmtpDeliveryFormat__Enum, get_DeliveryFormat, (SmtpSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04759158, SmtpSection_get_DeliveryFormat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E990E0, void, set_DeliveryFormat, (SmtpSection * __this, SmtpDeliveryFormat__Enum value));
IL2CPP_REGISTER_METHODINFO(0x047796B0, SmtpSection_set_DeliveryFormat__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99110, SmtpDeliveryMethod__Enum, get_DeliveryMethod, (SmtpSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04766588, SmtpSection_get_DeliveryMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99140, void, set_DeliveryMethod, (SmtpSection * __this, SmtpDeliveryMethod__Enum value));
IL2CPP_REGISTER_METHODINFO(0x04719B50, SmtpSection_set_DeliveryMethod__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99170, String *, get_From, (SmtpSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04726B68, SmtpSection_get_From__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E991A0, void, set_From, (SmtpSection * __this, String * value));
IL2CPP_REGISTER_METHODINFO(0x04708428, SmtpSection_set_From__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E991D0, SmtpNetworkElement *, get_Network, (SmtpSection * __this));
IL2CPP_REGISTER_METHODINFO(0x0470AC60, SmtpSection_get_Network__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99200, ConfigurationPropertyCollection *, get_Properties, (SmtpSection * __this));
IL2CPP_REGISTER_METHODINFO(0x047506C0, SmtpSection_get_Properties__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01E99230, SmtpSpecifiedPickupDirectoryElement *, get_SpecifiedPickupDirectory, (SmtpSection * __this));
IL2CPP_REGISTER_METHODINFO(0x04720F28, SmtpSection_get_SpecifiedPickupDirectory__MethodInfo);
}
