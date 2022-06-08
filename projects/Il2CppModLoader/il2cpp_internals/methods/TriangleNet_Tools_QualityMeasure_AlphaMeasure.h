#include <interception_macros.h>

namespace app::methods::TriangleNet::Tools::QualityMeasure_AlphaMeasure {
IL2CPP_REGISTER_METHOD(0x02A99970, void, Reset, (QualityMeasure_AlphaMeasure * __this));
IL2CPP_REGISTER_METHOD(0x02A999A0, double, acos, (QualityMeasure_AlphaMeasure * __this, double c));
IL2CPP_REGISTER_METHOD(0x02A99A80, double, Measure, (QualityMeasure_AlphaMeasure * __this, double ab, double bc, double ca, double area));
IL2CPP_REGISTER_METHOD(0x02A99D40, void, Normalize, (QualityMeasure_AlphaMeasure * __this, int32_t n, double area_total));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (QualityMeasure_AlphaMeasure * __this));
}
