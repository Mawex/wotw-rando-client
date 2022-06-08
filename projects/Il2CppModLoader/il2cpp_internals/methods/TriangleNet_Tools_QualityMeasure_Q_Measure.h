using namespace app;

namespace app::methods::TriangleNet::Tools::QualityMeasure_Q_Measure {
IL2CPP_REGISTER_METHOD(0x02A99970, void, Reset, (QualityMeasure_Q_Measure * __this));
IL2CPP_REGISTER_METHOD(0x02A99FB0, double, Measure, (QualityMeasure_Q_Measure * __this, double ab, double bc, double ca, double area));
IL2CPP_REGISTER_METHOD(0x02A99D40, void, Normalize, (QualityMeasure_Q_Measure * __this, int32_t n, double area_total));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (QualityMeasure_Q_Measure * __this));
}
