using namespace app;

namespace app::methods::System::Text::RegularExpressions::MatchCollection {
IL2CPP_REGISTER_METHOD(0x02583680, void, __ctor, (MatchCollection * __this, Regex * regex, String * input, int32_t beginning, int32_t length, int32_t startat));
IL2CPP_REGISTER_METHODINFO(0x047230B8, MatchCollection__ctor__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02583870, Match *, GetMatch, (MatchCollection * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x02583A30, int32_t, get_Count, (MatchCollection * __this));
IL2CPP_REGISTER_METHOD(0x004C50A0, Object *, get_SyncRoot, (MatchCollection * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (MatchCollection * __this));
IL2CPP_REGISTER_METHOD(0x02583B20, Match *, get_Item, (MatchCollection * __this, int32_t i));
IL2CPP_REGISTER_METHODINFO(0x0475EAF8, MatchCollection_get_Item__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02583BF0, void, CopyTo, (MatchCollection * __this, Array * array, int32_t arrayIndex));
IL2CPP_REGISTER_METHODINFO(0x04710BE0, MatchCollection_CopyTo__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02583D50, IEnumerator *, GetEnumerator, (MatchCollection * __this));
IL2CPP_REGISTER_METHOD(0x02583E90, void, __cctor, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x02583F10, void, __ctor, (MatchCollection * __this));
IL2CPP_REGISTER_METHODINFO(0x04752018, MatchCollection__ctor_1__MethodInfo);
}
