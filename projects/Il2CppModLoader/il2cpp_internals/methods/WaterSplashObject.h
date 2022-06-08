#include <interception_macros.h>

namespace app::methods::WaterSplashObject {
IL2CPP_REGISTER_METHOD(0x008E2280, void, RenameToFollowObject, (WaterSplashObject * __this));
IL2CPP_REGISTER_METHOD(0x00850FA0, void, Awake, (WaterSplashObject * __this));
IL2CPP_REGISTER_METHOD(0x008E2370, void, OnValidate, (WaterSplashObject * __this));
IL2CPP_REGISTER_METHOD(0x008E2380, void, Update, (WaterSplashObject * __this));
IL2CPP_REGISTER_METHOD(0x008E3520, void, OnMoved, (WaterSplashObject * __this, Vector3 speed, float deltaTime));
IL2CPP_REGISTER_METHOD(0x008E3DC0, void, UpdateMesh, (WaterSplashObject * __this));
IL2CPP_REGISTER_METHOD(0x008E4270, void, OnDrawGizmosSelected, (WaterSplashObject * __this));
IL2CPP_REGISTER_METHOD(0x008E4910, void, __ctor, (WaterSplashObject * __this));
}
