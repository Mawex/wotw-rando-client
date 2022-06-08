#include <interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::JSONNode {
IL2CPP_REGISTER_METHOD(0x01DE23D0, JSONNode *, Parse, (String * json));
IL2CPP_REGISTER_METHOD(0x01DE25D0, void, __ctor, (JSONNode * __this, JSONNode_NodeType__Enum type));
IL2CPP_REGISTER_METHOD(0x01DE2830, void, __ctor, (JSONNode * __this, String * value));
IL2CPP_REGISTER_METHOD(0x01DE2840, void, __ctor, (JSONNode * __this, double value));
IL2CPP_REGISTER_METHOD(0x01DE2850, void, __ctor, (JSONNode * __this, Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * value));
IL2CPP_REGISTER_METHOD(0x01DE2860, void, __ctor, (JSONNode * __this, List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * value));
IL2CPP_REGISTER_METHOD(0x01DE2870, void, __ctor, (JSONNode * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FC6D0, JSONNode_NodeType__Enum, get_Type, (JSONNode * __this));
IL2CPP_REGISTER_METHOD(0x01B67070, bool, get_IsValid, (JSONNode * __this));
IL2CPP_REGISTER_METHOD(0x01DE2880, JSONNode *, Check, (JSONNode * __this));
IL2CPP_REGISTER_METHODINFO(0x0473D530, JSONNode_Check__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE2930, String *, operator_, (JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE2960, JSONNode *, operator_, (String * v));
IL2CPP_REGISTER_METHOD(0x01DE2AB0, int32_t, operator_, (JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE2AE0, JSONNode *, operator_, (int32_t v));
IL2CPP_REGISTER_METHOD(0x01DE2C30, float, operator_, (JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE2C60, JSONNode *, operator_, (float v));
IL2CPP_REGISTER_METHOD(0x01DE2DC0, double, operator_, (JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE2DF0, JSONNode *, operator_, (double v));
IL2CPP_REGISTER_METHOD(0x01DE2F40, JSONNode *, get_Item, (JSONNode * __this, String * k));
IL2CPP_REGISTER_METHOD(0x01DE3070, void, set_Item, (JSONNode * __this, String * k, JSONNode * value));
IL2CPP_REGISTER_METHODINFO(0x0478F9B8, JSONNode_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE31A0, Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ *, operator_, (JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE31D0, JSONNode *, get_Item, (JSONNode * __this, int32_t idx));
IL2CPP_REGISTER_METHOD(0x01DE32D0, void, set_Item, (JSONNode * __this, int32_t idx, JSONNode * value));
IL2CPP_REGISTER_METHODINFO(0x0473DEA0, JSONNode_set_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE3490, List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ *, operator_, (JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE34C0, void, Add, (JSONNode * __this, JSONNode * item));
IL2CPP_REGISTER_METHODINFO(0x04761570, JSONNode_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE3590, int32_t, get_Count, (JSONNode * __this));
IL2CPP_REGISTER_METHOD(0x01DE3650, bool, get_IsNull, (JSONNode * __this));
IL2CPP_REGISTER_METHOD(0x01DE3660, bool, operator_, (JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE3690, JSONNode *, operator_, (bool v));
IL2CPP_REGISTER_METHOD(0x01DE37E0, Object *, get_Value, (JSONNode * __this));
IL2CPP_REGISTER_METHODINFO(0x047365B8, JSONNode_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE3930, String *, get_AsJSON, (JSONNode * __this));
IL2CPP_REGISTER_METHOD(0x01DE39D0, void, __cctor, ());
}
