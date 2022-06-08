#include <interception_macros.h>

namespace app::methods::MoonMath_Physics {
IL2CPP_REGISTER_METHOD(0x025771C0, float, SpeedFromHeightAndGravity, (float gravity, float height));
IL2CPP_REGISTER_METHOD(0x02577280, void, MoveBody, (Rigidbody * rigidBody, Vector3 position));
IL2CPP_REGISTER_METHOD(0x02577550, void, MoveBodyGetForceTorque, (Rigidbody * rigidBody, Vector3 rbPos, float rbEulerZ, Vector3 rbVelocity, Vector3 rbAngVelocity, Vector3 position, float angle, Vector3 * force, Vector3 * torque, float amountPosition, float amountRotation));
IL2CPP_REGISTER_METHOD(0x02577B20, void, MoveBody, (Rigidbody * rigidBody, Vector3 rbPos, float rbEulerZ, Vector3 rbVelocity, Vector3 position, float angle, float amountPosition, float amountRotation));
IL2CPP_REGISTER_METHOD(0x025781B0, void, MoveBody, (Rigidbody * rigidBody, Vector3 position, float angle, float amountPosition, float amountRotation));
IL2CPP_REGISTER_METHOD(0x02578390, void, MoveBody3D, (Rigidbody * rigidBody, Vector3 position, Quaternion rotation, float amountPosition, float amountRotation));
IL2CPP_REGISTER_METHOD(0x02578AF0, void, SetBodyVelocityByPosition, (Rigidbody * rigidBody, Vector3 oldPosition));
IL2CPP_REGISTER_METHOD(0x02578D10, void, SetBodyVelocityByPosition, (Rigidbody * rigidBody, Vector3 oldPosition, Quaternion oldRotation));
}
