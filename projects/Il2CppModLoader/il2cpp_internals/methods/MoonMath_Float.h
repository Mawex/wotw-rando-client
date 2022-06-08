using namespace app;

namespace app::methods::MoonMath_Float {
IL2CPP_REGISTER_METHOD(0x02574DA0, float, Normalize, (float x));
IL2CPP_REGISTER_METHOD(0x02574E80, float, MoveTowards, (float start, float target, float distance));
IL2CPP_REGISTER_METHOD(0x02574F70, float, ClampedAdd, (float start, float offset, float min, float max));
IL2CPP_REGISTER_METHOD(0x02575090, float, ClampAbs, (float value, float min, float max));
IL2CPP_REGISTER_METHOD(0x025751B0, float, ClampedSubtract, (float start, float offset, float min, float max));
IL2CPP_REGISTER_METHOD(0x025752C0, float, ClampedDecrease, (float start, float amount, float min, float max));
IL2CPP_REGISTER_METHOD(0x025753D0, float, Wrap, (float value, float min, float max));
IL2CPP_REGISTER_METHOD(0x025754B0, float, AbsoluteMax, (float a, float b));
IL2CPP_REGISTER_METHOD(0x025755A0, float, AbsoluteMin, (float a, float b));
IL2CPP_REGISTER_METHOD(0x02575690, float, AbsoluteDifference, (float a, float b));
IL2CPP_REGISTER_METHOD(0x02575750, float, DivideSafe, (float a, float b, float avoidDivisionByZeroResult));
IL2CPP_REGISTER_METHOD(0x02575830, float, Remap, (float value, float sourceRangeMin, float sourceRangeMax, float targetRangeMin, float targetRangeMax));
IL2CPP_REGISTER_METHOD(0x02575850, float, MathMod, (float a, float b));
IL2CPP_REGISTER_METHOD(0x02575910, bool, IsBetween, (float val, float a, float b));
}
