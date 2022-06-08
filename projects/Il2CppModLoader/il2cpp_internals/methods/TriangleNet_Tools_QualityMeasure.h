using namespace app;

namespace app::methods::TriangleNet::Tools::QualityMeasure {
IL2CPP_REGISTER_METHOD(0x02A98DC0, void, __ctor, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A99090, double, get_AreaMinimum, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A990B0, double, get_AreaMaximum, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A990D0, double, get_AreaRatio, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A99100, double, get_AlphaMinimum, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A99120, double, get_AlphaMaximum, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A99140, double, get_AlphaAverage, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A99160, double, get_AlphaArea, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A99180, double, get_Q_Minimum, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A991A0, double, get_Q_Maximum, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A991C0, double, get_Q_Average, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A991E0, double, get_Q_Area, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A99200, void, Update, (QualityMeasure * __this, Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02A99290, void, Compute, (QualityMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A99710, int32_t, Bandwidth, (QualityMeasure * __this));
}
