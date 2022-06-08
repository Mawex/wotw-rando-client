#include <interception_macros.h>

namespace app::methods::System::Dynamic::Utils::ListParameterProvider {
IL2CPP_REGISTER_METHOD(0x01F95C40, void, __ctor, (ListParameterProvider * __this, IParameterProvider * provider, ParameterExpression * arg0));
IL2CPP_REGISTER_METHOD(0x002FB930, ParameterExpression *, get_First, (ListParameterProvider * __this));
IL2CPP_REGISTER_METHOD(0x01F95CE0, int32_t, get_ElementCount, (ListParameterProvider * __this));
IL2CPP_REGISTER_METHOD(0x01F95D70, ParameterExpression *, GetElement, (ListParameterProvider * __this, int32_t index));
}
