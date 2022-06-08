#include <interception_macros.h>

namespace app::methods::SimpleFPS {
IL2CPP_REGISTER_METHOD(0x0073ECE0, Color, _getColorForLightCount, (SimpleFPS * __this, int32_t lights));
IL2CPP_REGISTER_METHOD(0x0073ED40, Color, _getColorForReflectionCount, (SimpleFPS * __this, int32_t lights));
IL2CPP_REGISTER_METHOD(0x0073ED40, Color, _getColorForGodrayCount, (SimpleFPS * __this, int32_t lights));
IL2CPP_REGISTER_METHOD(0x0073EDA0, int32_t, get_WorstHistoryAverage, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x0073EDB0, void, Awake, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x0073F250, void, Reset, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x0073F9F0, void, OnDestroy, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x0073FB10, void, InitFromHistory, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x0073FD50, void, OnEnable, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x00740060, void, OnDisable, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x007402D0, void, OnEndOfFrame, (SimpleFPS * __this));
IL2CPP_REGISTER_METHODINFO(0x0475EEB8, SimpleFPS_OnEndOfFrame__MethodInfo);
IL2CPP_REGISTER_METHOD(0x007402E0, void, CreateLineMaterial, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x00740480, float, ToXCoordinate, (SimpleFPS * __this, float x));
IL2CPP_REGISTER_METHOD(0x00740490, float, ToYCoordinate, (SimpleFPS * __this, float y));
IL2CPP_REGISTER_METHOD(0x007404A0, void, _updateProfilerMetricAverages, (SimpleFPS * __this, Metric__Enum metric, int32_t startFrame, int32_t endFrame));
IL2CPP_REGISTER_METHOD(0x00740910, void, _initSize, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x00740A60, void, Update, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartSecond, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x00741600, void, Draw, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x007444E0, void, DrawMemoryStuff, (SimpleFPS * __this, bool reallyReallySimple, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x007456E0, Color, GetDRSColor, (SimpleFPS * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00745750, void, DrawDrsMagic, (SimpleFPS * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x007458F0, void, DrawRect, (SimpleFPS * __this, float x1, float y1, float x2, float y2));
IL2CPP_REGISTER_METHOD(0x00745980, void, DrawFloat, (SimpleFPS * __this, float value, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00745BF0, void, DrawNumber, (SimpleFPS * __this, int32_t x, int32_t y, int32_t num, bool isLeading));
IL2CPP_REGISTER_METHOD(0x00745E30, void, DrawDot, (SimpleFPS * __this, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00745EB0, void, DrawTimeWithBackgroundPadded, (SimpleFPS * __this, int32_t value, Color backgroundColor, Color textColor, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00746240, void, DrawIntWithBackground, (SimpleFPS * __this, int32_t value, Color backgroundColor, Color textColor, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x007467C0, void, DrawIntWithBackgroundPadded, (SimpleFPS * __this, int32_t value, Color backgroundColor, Color textColor, int32_t x, int32_t y));
IL2CPP_REGISTER_METHOD(0x00746C80, void, DrawString, (SimpleFPS * __this, String * str, int32_t xOffset, int32_t yOffset));
IL2CPP_REGISTER_METHOD(0x00746DC0, void, DrawLetter, (SimpleFPS * __this, uint16_t c, int32_t xOffset, int32_t yOffset));
IL2CPP_REGISTER_METHOD(0x00746DF0, void, DrawLetter, (SimpleFPS * __this, int32_t letter, int32_t xOffset, int32_t yOffset));
IL2CPP_REGISTER_METHOD(0x00747130, int32_t, LetterOffset, (SimpleFPS * __this, int32_t letter));
IL2CPP_REGISTER_METHOD(0x007471E0, void, DrawDebugVideoString, (SimpleFPS * __this, String * text, float time));
IL2CPP_REGISTER_METHOD(0x00747370, void, __ctor, (SimpleFPS * __this));
IL2CPP_REGISTER_METHOD(0x00747EC0, void, __cctor, ());
}
