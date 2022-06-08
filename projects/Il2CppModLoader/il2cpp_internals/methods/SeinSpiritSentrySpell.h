#include <interception_macros.h>

namespace app::methods::SeinSpiritSentrySpell {
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (SeinSpiritSentrySpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6A2A0, void, SpawnSpiritSentry, (SeinSpiritSentrySpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6A680, void, OnSetReferenceToSein, (SeinSpiritSentrySpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6A6B0, void, Start, (SeinSpiritSentrySpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6A770, void, OnDestroy, (SeinSpiritSentrySpell * __this));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatePerforming, (SeinSpiritSentrySpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6A7B0, void, UpdateCharacterState, (SeinSpiritSentrySpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6ABB0, IEnumerator *, HandleSpawningSentries, (SeinSpiritSentrySpell * __this));
IL2CPP_REGISTER_METHOD(0x00A6AD00, void, __ctor, (SeinSpiritSentrySpell * __this));
}
