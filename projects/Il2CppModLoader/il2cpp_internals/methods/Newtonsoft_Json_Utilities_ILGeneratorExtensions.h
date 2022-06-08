#include <interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::ILGeneratorExtensions {
IL2CPP_REGISTER_METHOD(0x03019000, void, PushInstance, (ILGenerator * generator, Type * type));
IL2CPP_REGISTER_METHOD(0x03019190, void, PushArrayInstance, (ILGenerator * generator, int32_t argsIndex, int32_t arrayIndex));
IL2CPP_REGISTER_METHOD(0x030192D0, void, BoxIfNeeded, (ILGenerator * generator, Type * type));
IL2CPP_REGISTER_METHOD(0x03019420, void, UnboxIfNeeded, (ILGenerator * generator, Type * type));
IL2CPP_REGISTER_METHOD(0x03019570, void, CallMethod, (ILGenerator * generator, MethodInfo_1 * methodInfo));
IL2CPP_REGISTER_METHOD(0x030196E0, void, Return, (ILGenerator * generator));
}
