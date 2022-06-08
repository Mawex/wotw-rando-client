using namespace app;

namespace app::methods::ReflectionHelper {
IL2CPP_REGISTER_METHOD(0x008FC270, Object *, DoInvoke, (Type * type, String * methodName, Object__Array * parameters));
IL2CPP_REGISTER_METHOD(0x008FC540, Object *, DoInvoke2, (Type * type, MethodInfo_1 * method_1, Object__Array * parameters));
IL2CPP_REGISTER_METHOD(0x008FC6C0, MethodInfo_1 *, GetMethod, (Type * type, String * methodName, Object__Array * parameters));
IL2CPP_REGISTER_METHOD(0x008FC860, bool, IsConcreteType, (Type * type));
IL2CPP_REGISTER_METHOD(0x01547100, Type__Array *, GetAllTypesAssignableFrom, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01546B30, Type__Array *, GetAllConcreteTypesAssignableFrom, (MethodInfo * method));
}
