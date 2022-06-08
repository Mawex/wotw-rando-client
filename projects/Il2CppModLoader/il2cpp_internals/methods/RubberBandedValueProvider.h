using namespace app;

namespace app::methods::RubberBandedValueProvider {
IL2CPP_REGISTER_METHOD(0x004358D0, bool, IsAffectedByGameModeDifficulty, (RubberBandedValueProvider * __this));
IL2CPP_REGISTER_METHOD(0x01371F70, bool, DoesOverrideEasyMultiplier, (RubberBandedValueProvider * __this));
IL2CPP_REGISTER_METHOD(0x01371F80, bool, DoesOverrideNormalMultiplier, (RubberBandedValueProvider * __this));
IL2CPP_REGISTER_METHOD(0x01371F90, bool, DoesOverrideHardMultiplier, (RubberBandedValueProvider * __this));
IL2CPP_REGISTER_METHOD(0x01371FA0, float, GetValue, (RubberBandedValueProvider * __this, Vector3 origin, Vector3 target));
IL2CPP_REGISTER_METHOD(0x01372450, float, GetDifficultyMultiplier, (RubberBandedValueProvider * __this));
IL2CPP_REGISTER_METHOD(0x013725D0, float, GetDistance, (RubberBandedValueProvider * __this, Vector2 origin, Vector2 target));
IL2CPP_REGISTER_METHOD(0x01372760, void, __ctor, (RubberBandedValueProvider * __this));
}
