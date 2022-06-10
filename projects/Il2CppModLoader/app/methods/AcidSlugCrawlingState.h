#pragma once
#include <interception_macros.h>

namespace app::methods::AcidSlugCrawlingState {
    IL2CPP_REGISTER_METHOD(0x004C1F10, void, ctor, (app::AcidSlugCrawlingState * this_ptr, app::AcidSlugEnemy * slug, app::SoundSource * sound, app::SoundSource * move_sound))
    IL2CPP_REGISTER_METHOD(0x004C1F30, void, UpdateState, (app::AcidSlugCrawlingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C2140, void, OnExit, (app::AcidSlugCrawlingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C22D0, void, OnEnter, (app::AcidSlugCrawlingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C23A0, void, UpdateAcidDrop, (app::AcidSlugCrawlingState * this_ptr))
}
