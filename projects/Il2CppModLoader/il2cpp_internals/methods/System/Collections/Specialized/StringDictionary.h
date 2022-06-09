#include <interception_macros.h>

namespace app::methods::System::Collections::Specialized::StringDictionary {
    IL2CPP_REGISTER_METHOD(0x0249E610, void, __ctor, (app::StringDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0249E770, app::String *, get_Item, (app::StringDictionary * this_ptr, app::String * key));
    IL2CPP_REGISTER_METHODINFO(0x04780090, StringDictionary_get_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0249E8B0, void, set_Item, (app::StringDictionary * this_ptr, app::String * key, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x0476B940, StringDictionary_set_Item__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0249E9D0, void, Add, (app::StringDictionary * this_ptr, app::String * key, app::String * value));
    IL2CPP_REGISTER_METHODINFO(0x0470FEB8, StringDictionary_Add__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01BCB4B0, void, Clear, (app::StringDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01717450, app::IEnumerator *, GetEnumerator, (app::StringDictionary * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0249EAF0, void, Remove, (app::StringDictionary * this_ptr, app::String * key));
    IL2CPP_REGISTER_METHODINFO(0x0470C520, StringDictionary_Remove__MethodInfo);
}
