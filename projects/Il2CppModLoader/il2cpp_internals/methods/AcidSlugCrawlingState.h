using namespace app;

namespace app::methods::AcidSlugCrawlingState {
IL2CPP_REGISTER_METHOD(0x004C1F10, void, __ctor, (AcidSlugCrawlingState * __this, AcidSlugEnemy * slug, SoundSource * sound, SoundSource * moveSound));
IL2CPP_REGISTER_METHOD(0x004C1F30, void, UpdateState, (AcidSlugCrawlingState * __this));
IL2CPP_REGISTER_METHOD(0x004C2140, void, OnExit, (AcidSlugCrawlingState * __this));
IL2CPP_REGISTER_METHOD(0x004C22D0, void, OnEnter, (AcidSlugCrawlingState * __this));
IL2CPP_REGISTER_METHOD(0x004C23A0, void, UpdateAcidDrop, (AcidSlugCrawlingState * __this));
}
