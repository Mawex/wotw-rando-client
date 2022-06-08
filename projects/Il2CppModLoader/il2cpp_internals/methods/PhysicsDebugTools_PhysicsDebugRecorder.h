using namespace app;

namespace app::methods::PhysicsDebugTools::PhysicsDebugRecorder {
IL2CPP_REGISTER_METHOD(0x014FCBA0, PhysicsDebugRecorder *, get_Instance, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x014FCC40, void, set_Instance, (PhysicsDebugRecorder * value));
IL2CPP_REGISTER_METHOD(0x014FCCF0, void, RecordEvent, (PhysicsDebugRecorder * __this, Entity * target, CharacterPlatformMovement * movementCompoenent, Vector3 targetVelocity, String * eventDescription));
IL2CPP_REGISTER_METHOD(0x014FCFA0, void, LateUpdate, (PhysicsDebugRecorder * __this));
IL2CPP_REGISTER_METHOD(0x014FCFC0, void, ProgressFrame, (PhysicsDebugRecorder * __this));
IL2CPP_REGISTER_METHOD(0x014FD1A0, void, RecordFrame, (PhysicsDebugRecorder * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, AddRecordEntry, (PhysicsDebugRecorder * __this, Record * record, Entity * entity));
IL2CPP_REGISTER_METHOD(0x014FD6F0, void, OnDestroy, (PhysicsDebugRecorder * __this));
IL2CPP_REGISTER_METHOD(0x014FD820, void, OnDrawGizmos, (PhysicsDebugRecorder * __this));
IL2CPP_REGISTER_METHOD(0x014FDAB0, void, __ctor, (PhysicsDebugRecorder * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, (MethodInfo * method));
}
