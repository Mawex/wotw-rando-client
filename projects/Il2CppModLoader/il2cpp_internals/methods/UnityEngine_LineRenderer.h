using namespace app;

namespace app::methods::UnityEngine::LineRenderer {
IL2CPP_REGISTER_METHOD(0x0252FEC0, void, SetWidth, (LineRenderer * __this, float start, float end));
IL2CPP_REGISTER_METHOD(0x0252FF80, void, SetVertexCount, (LineRenderer * __this, int32_t count));
IL2CPP_REGISTER_METHOD(0x0252FFE0, void, set_startWidth, (LineRenderer * __this, float value));
IL2CPP_REGISTER_METHOD(0x02530040, void, set_endWidth, (LineRenderer * __this, float value));
IL2CPP_REGISTER_METHOD(0x025300A0, void, set_widthMultiplier, (LineRenderer * __this, float value));
IL2CPP_REGISTER_METHOD(0x02530100, void, set_useWorldSpace, (LineRenderer * __this, bool value));
IL2CPP_REGISTER_METHOD(0x02530160, void, set_startColor, (LineRenderer * __this, Color value));
IL2CPP_REGISTER_METHOD(0x025301C0, void, set_endColor, (LineRenderer * __this, Color value));
IL2CPP_REGISTER_METHOD(0x02530220, int32_t, get_positionCount, (LineRenderer * __this));
IL2CPP_REGISTER_METHOD(0x0252FF80, void, set_positionCount, (LineRenderer * __this, int32_t value));
IL2CPP_REGISTER_METHOD(0x02530270, void, SetPosition, (LineRenderer * __this, int32_t index, Vector3 position));
IL2CPP_REGISTER_METHOD(0x025302E0, Vector3, GetPosition, (LineRenderer * __this, int32_t index));
IL2CPP_REGISTER_METHOD(0x02530370, void, SetPositions, (LineRenderer * __this, Vector3__Array * positions));
IL2CPP_REGISTER_METHOD(0x025303D0, void, set_startColor_Injected, (LineRenderer * __this, Color * value));
IL2CPP_REGISTER_METHOD(0x02530430, void, set_endColor_Injected, (LineRenderer * __this, Color * value));
IL2CPP_REGISTER_METHOD(0x02530490, void, SetPosition_Injected, (LineRenderer * __this, int32_t index, Vector3 * position));
IL2CPP_REGISTER_METHOD(0x02530500, void, GetPosition_Injected, (LineRenderer * __this, int32_t index, Vector3 * ret));
}
