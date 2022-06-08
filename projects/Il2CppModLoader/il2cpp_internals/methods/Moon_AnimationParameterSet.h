#include <interception_macros.h>

namespace app::methods::Moon::AnimationParameterSet {
IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_PreviewMode, (AnimationParameterSet * __this));
IL2CPP_REGISTER_METHOD(0x01B034C0, void, set_PreviewMode, (AnimationParameterSet * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FB930, Dictionary_2_Moon_AnimationParameter_Moon_AnimationParameter_Instance_ *, get_Parameters, (AnimationParameterSet * __this));
IL2CPP_REGISTER_METHOD(0x01B035D0, void, Update, (AnimationParameterSet * __this, float dt));
IL2CPP_REGISTER_METHOD(0x01B036E0, float, GetValue, (AnimationParameterSet * __this, FloatAnimationParameter * parameter));
IL2CPP_REGISTER_METHOD(0x01B037E0, void, SetValue, (AnimationParameterSet * __this, FloatAnimationParameter * parameter, float value));
IL2CPP_REGISTER_METHOD(0x01B03AF0, Vector3, GetValue, (AnimationParameterSet * __this, VectorAnimationParameter * parameter));
IL2CPP_REGISTER_METHOD(0x01B03C20, void, SetValue, (AnimationParameterSet * __this, VectorAnimationParameter * parameter, Vector3 value));
IL2CPP_REGISTER_METHOD(0x01B03E80, bool, HasValueForParameter, (AnimationParameterSet * __this, AnimationParameter * parameter));
IL2CPP_REGISTER_METHOD(0x01B03F40, void, __ctor, (AnimationParameterSet * __this));
IL2CPP_REGISTER_METHOD(0x01B04180, void, __cctor, ());
IL2CPP_REGISTER_METHOD(0x01EB8980, List_1_System_Object_ *, GetParametersOfType, (AnimationParameterSet * __this));
IL2CPP_REGISTER_METHOD(0x015EBAB0, Object *, GetParameterInstance, (AnimationParameterSet * __this, AnimationParameter * parameter));
IL2CPP_REGISTER_METHOD(0x015EBAB0, FloatAnimationParameter_Instance *, GetParameterInstance, (AnimationParameterSet * __this, AnimationParameter * parameter));
IL2CPP_REGISTER_METHODINFO(0x04719B68, AnimationParameterSet_GetParameterInstance_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015EBAB0, VectorAnimationParameter_Instance *, GetParameterInstance, (AnimationParameterSet * __this, AnimationParameter * parameter));
IL2CPP_REGISTER_METHODINFO(0x04748A48, AnimationParameterSet_GetParameterInstance_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB8980, List_1_Moon_FloatAnimationParameter_ *, GetParametersOfType, (AnimationParameterSet * __this));
IL2CPP_REGISTER_METHODINFO(0x04725610, AnimationParameterSet_GetParametersOfType_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x01EB8980, List_1_Moon_VectorAnimationParameter_ *, GetParametersOfType, (AnimationParameterSet * __this));
IL2CPP_REGISTER_METHODINFO(0x04757300, AnimationParameterSet_GetParametersOfType_2__MethodInfo);
}
