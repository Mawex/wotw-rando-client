#include <interception_macros.h>

namespace app::methods::SeekerSlugShootingState {
IL2CPP_REGISTER_METHOD(0x0106C6F0, void, __ctor, (SeekerSlugShootingState * __this, SlugEnemy * slug, SlugDirectionalAnimation * animation, GameObject * spikePrefab, SoundSource * shootingSound));
IL2CPP_REGISTER_METHOD(0x0106C860, void, SetSettings, (SeekerSlugShootingState * __this, float projectileSpeed, float numberOfShots, float delayBetweenShots));
IL2CPP_REGISTER_METHOD(0x0106C870, void, OnEnter, (SeekerSlugShootingState * __this));
IL2CPP_REGISTER_METHOD(0x0106C950, void, UpdateState, (SeekerSlugShootingState * __this));
IL2CPP_REGISTER_METHOD(0x0106CA00, void, Shoot, (SeekerSlugShootingState * __this));
}
