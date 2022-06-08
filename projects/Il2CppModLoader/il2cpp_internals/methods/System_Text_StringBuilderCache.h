using namespace app;

namespace app::methods::System::Text::StringBuilderCache {
IL2CPP_REGISTER_METHOD(0x027C7470, StringBuilder *, Acquire, (int32_t capacity));
IL2CPP_REGISTER_METHOD(0x027C7680, void, Release, (StringBuilder * sb));
IL2CPP_REGISTER_METHOD(0x027C7770, String *, GetStringAndRelease, (StringBuilder * sb));
}
