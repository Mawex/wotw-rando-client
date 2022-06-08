#include <interception_macros.h>

namespace app::methods::ServerPhysicalMaterial {
IL2CPP_REGISTER_METHOD(0x00AC3150, ServerPhysicalMaterial_PhysicalMaterialData, CreateData, (PhysicMaterial * physicMaterial));
IL2CPP_REGISTER_METHOD(0x00AC3300, PhysicMaterial *, CreateMaterial, (ServerPhysicalMaterial_PhysicalMaterialData data));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (ServerPhysicalMaterial * __this));
}
