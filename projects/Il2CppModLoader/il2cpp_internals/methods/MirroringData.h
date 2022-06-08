#include <interception_macros.h>

namespace app::methods::MirroringData {
IL2CPP_REGISTER_METHOD(0x01452F50, void, __ctor, (MirroringData * __this));
IL2CPP_REGISTER_METHOD(0x01452FE0, void, __ctor, (MirroringData * __this, String * jointName, String * mirrorName, MirroringData_Axis__Enum axis, Single__Array * mirrorMultiplies));
IL2CPP_REGISTER_METHOD(0x01452FF0, String *, GetOutputChannel, (MirroringData * __this, String * propertyName));
IL2CPP_REGISTER_METHOD(0x014532A0, float, GetMultiply, (MirroringData * __this, String * propertyName));
}
