#include <interception_macros.h>

namespace app::methods::ZenFulcrum_EmbeddedBrowser::JSONNode {
IL2CPP_REGISTER_METHOD(0x01DE23D0, JSONNode *, Parse, (app::String * json));
IL2CPP_REGISTER_METHOD(0x01DE25D0, void, __ctor_1, (app::JSONNode * this_ptr, app::JSONNode_NodeType__Enum type));
IL2CPP_REGISTER_METHOD(0x01DE2830, void, __ctor_2, (app::JSONNode * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x01DE2840, void, __ctor_3, (app::JSONNode * this_ptr, double value));
IL2CPP_REGISTER_METHOD(0x01DE2850, void, __ctor_4, (app::JSONNode * this_ptr, app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * value));
IL2CPP_REGISTER_METHOD(0x01DE2860, void, __ctor_5, (app::JSONNode * this_ptr, app::List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * value));
IL2CPP_REGISTER_METHOD(0x01DE2870, void, __ctor_6, (app::JSONNode * this_ptr, bool value));
IL2CPP_REGISTER_METHOD(0x002FC6D0, JSONNode_NodeType__Enum, get_Type, (app::JSONNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01B67070, bool, get_IsValid, (app::JSONNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DE2880, JSONNode *, Check, (app::JSONNode * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x0473D530, JSONNode_Check__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE2930, String *, operator__1, (app::JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE2960, JSONNode *, operator__2, (app::String * v));
IL2CPP_REGISTER_METHOD(0x01DE2AB0, int32_t, operator__3, (app::JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE2AE0, JSONNode *, operator__4, (int32_t v));
IL2CPP_REGISTER_METHOD(0x01DE2C30, float, operator__5, (app::JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE2C60, JSONNode *, operator__6, (float v));
IL2CPP_REGISTER_METHOD(0x01DE2DC0, double, operator__7, (app::JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE2DF0, JSONNode *, operator__8, (double v));
IL2CPP_REGISTER_METHOD(0x01DE2F40, JSONNode *, get_Item_1, (app::JSONNode * this_ptr, app::String * k));
IL2CPP_REGISTER_METHOD(0x01DE3070, void, set_Item_1, (app::JSONNode * this_ptr, app::String * k, app::JSONNode * value));
IL2CPP_REGISTER_METHODINFO(0x0478F9B8, JSONNode_set_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE31A0, Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ *, operator__9, (app::JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE31D0, JSONNode *, get_Item_2, (app::JSONNode * this_ptr, int32_t idx));
IL2CPP_REGISTER_METHOD(0x01DE32D0, void, set_Item_2, (app::JSONNode * this_ptr, int32_t idx, app::JSONNode * value));
IL2CPP_REGISTER_METHODINFO(0x0473DEA0, JSONNode_set_Item_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE3490, List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ *, operator__10, (app::JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE34C0, void, Add, (app::JSONNode * this_ptr, app::JSONNode * item));
IL2CPP_REGISTER_METHODINFO(0x04761570, JSONNode_Add__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE3590, int32_t, get_Count, (app::JSONNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DE3650, bool, get_IsNull, (app::JSONNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DE3660, bool, operator__11, (app::JSONNode * n));
IL2CPP_REGISTER_METHOD(0x01DE3690, JSONNode *, operator__12, (bool v));
IL2CPP_REGISTER_METHOD(0x01DE37E0, Object *, get_Value, (app::JSONNode * this_ptr));
IL2CPP_REGISTER_METHODINFO(0x047365B8, JSONNode_get_Value__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01DE3930, String *, get_AsJSON, (app::JSONNode * this_ptr));
IL2CPP_REGISTER_METHOD(0x01DE39D0, void, __cctor, ());
}
