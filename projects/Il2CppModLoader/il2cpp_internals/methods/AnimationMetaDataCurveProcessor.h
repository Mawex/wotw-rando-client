#include <interception_macros.h>

namespace app::methods::AnimationMetaDataCurveProcessor {
IL2CPP_REGISTER_METHOD(0x002FB940, void, __ctor, (AnimationMetaDataCurveProcessor * __this, AnimationMetaData * animationMetaData));
IL2CPP_REGISTER_METHOD(0x004FF900, void, OnPreProcessModel, (AnimationMetaDataCurveProcessor * __this));
IL2CPP_REGISTER_METHOD(0x00500100, void, OnPostProcessModel, (AnimationMetaDataCurveProcessor * __this));
IL2CPP_REGISTER_METHOD(0x00500550, void, OnSampleFrame, (AnimationMetaDataCurveProcessor * __this, int32_t frame));
}
