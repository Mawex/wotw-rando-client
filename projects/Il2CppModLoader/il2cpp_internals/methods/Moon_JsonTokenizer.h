#include <interception_macros.h>

namespace app::methods::Moon::JsonTokenizer {
IL2CPP_REGISTER_METHOD(0x030F0670, JsonToken__Enum, Next, (String * json, Substr span, Substr * remainder, StringBuilder * buffer, double * number));
IL2CPP_REGISTER_METHODINFO(0x0475DA10, JsonTokenizer_Next__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030F0AD0, void, ParseString, (String * json, Substr * remainder, StringBuilder * buffer));
IL2CPP_REGISTER_METHODINFO(0x04786F88, JsonTokenizer_ParseString__MethodInfo);
IL2CPP_REGISTER_METHOD(0x030F0EA0, double, ParseNumber, (String * json, Substr span, Substr * remainder));
IL2CPP_REGISTER_METHODINFO(0x0478B8D8, JsonTokenizer_ParseNumber__MethodInfo);
}
