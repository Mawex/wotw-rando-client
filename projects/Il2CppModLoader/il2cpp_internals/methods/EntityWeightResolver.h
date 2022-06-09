#include <interception_macros.h>

namespace app::methods::EntityWeightResolver {
IL2CPP_REGISTER_METHOD(0x00CA6370, void, PreloadWeightSettings, ());
IL2CPP_REGISTER_METHOD(0x00CA6470, EntityWeightData_EntityWeightSettings, GetWeightSettings, (app::EntityWeightData_EntityWeight__Enum weight));
}
