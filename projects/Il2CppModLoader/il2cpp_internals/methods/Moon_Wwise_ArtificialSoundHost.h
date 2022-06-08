using namespace app;

namespace app::methods::Moon::Wwise::ArtificialSoundHost {
IL2CPP_REGISTER_METHOD(0x02708AF0, void, __ctor, (ArtificialSoundHost * __this, uint64_t i));
IL2CPP_REGISTER_METHOD(0x02708BC0, bool, IsActiveVersion, (ArtificialSoundHost * __this, int32_t version));
IL2CPP_REGISTER_METHOD(0x00446970, bool, get_IsActive, (ArtificialSoundHost * __this));
IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_Version, (ArtificialSoundHost * __this));
IL2CPP_REGISTER_METHOD(0x02708BD0, Vector3, get_Position, (ArtificialSoundHost * __this));
IL2CPP_REGISTER_METHOD(0x02708D10, Quaternion, get_Rotation, (ArtificialSoundHost * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, uint64_t, get_GameObject, (ArtificialSoundHost * __this));
IL2CPP_REGISTER_METHOD(0x002FBB00, uint64_t, get_Id, (ArtificialSoundHost * __this));
IL2CPP_REGISTER_METHOD(0x00420EE0, ISoundListener *, get_AsListener, (ArtificialSoundHost * __this));
IL2CPP_REGISTER_METHOD(0x02708E70, void, Allocate, (ArtificialSoundHost * __this, String * name));
IL2CPP_REGISTER_METHOD(0x02709000, void, Release, (ArtificialSoundHost * __this));
IL2CPP_REGISTER_METHOD(0x002FB960, void, AttachTo, (ArtificialSoundHost * __this, Transform * transform));
IL2CPP_REGISTER_METHOD(0x02709210, void, Place, (ArtificialSoundHost * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x027092E0, void, SetGameObjectAuxSendValues, (uint64_t in_gameObjectID, AkAuxSendArray * in_aAuxSendValues, uint32_t in_uNumSendValues));
}
