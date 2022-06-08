#include <interception_macros.h>

namespace app::methods::DatadogRegularEvent {
IL2CPP_REGISTER_METHOD(0x02E91080, String *, get_Url, (DatadogRegularEvent * __this));
IL2CPP_REGISTER_METHOD(0x02E91170, void, __ctor, (DatadogRegularEvent * __this, String * key, String * title, String * text));
IL2CPP_REGISTER_METHOD(0x01950620, int32_t, get_UniqueHash, (DatadogRegularEvent * __this));
IL2CPP_REGISTER_METHOD(0x02E91370, DatadogRegularEvent *, AddTag, (DatadogRegularEvent * __this, String * key, String * value));
}
