#include <interception_macros.h>

namespace app::methods::Moon::Network::Web::JSONDataWriter {
IL2CPP_REGISTER_METHOD(0x002FA490, void, SetResult, (JSONDataWriter * __this, IRequestCallback * result));
IL2CPP_REGISTER_METHOD(0x02E925A0, void, Parse, (JSONDataWriter * __this, Byte__Array * data));
IL2CPP_REGISTER_METHOD(0x02E92720, void, Parse, (JSONDataWriter * __this, Object * data, Object * * holder));
IL2CPP_REGISTER_METHOD(0x02E928D0, void, Parse, (JSONDataWriter * __this, Dictionary_2_System_String_System_Object_ * data, Object * * holder));
IL2CPP_REGISTER_METHOD(0x02E92B40, Object *, GetValue, (JSONDataWriter * __this, Object * filedValue, Type * type));
IL2CPP_REGISTER_METHOD(0x02E92BF0, FieldInfo_1 *, GetFieldByName, (JSONDataWriter * __this, String * filedName, Object * * holder));
IL2CPP_REGISTER_METHOD(0x02E92E10, Object *, GetDefaultValue, (JSONDataWriter * __this, Type * t));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (JSONDataWriter * __this));
}
