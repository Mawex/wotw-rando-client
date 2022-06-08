using namespace app;

namespace app::methods::MothLandBehaviour {
IL2CPP_REGISTER_METHOD(0x008663D0, float, get_LandRadius, (MothLandBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008663E0, void, set_LandRadius, (MothLandBehaviour * __this, float value));
IL2CPP_REGISTER_METHOD(0x008663F0, void, OnExecute, (MothLandBehaviour * __this, IBlackboard * blackboard));
IL2CPP_REGISTER_METHOD(0x00866600, void, OnUpdateBehaviour, (MothLandBehaviour * __this));
IL2CPP_REGISTER_METHOD(0x008666E0, bool, SearchLandSpot, (MothLandBehaviour * __this, Vector2 * landPoint, Vector2 * normal));
IL2CPP_REGISTER_METHOD(0x008669F0, void, OnEndBehaviour, (MothLandBehaviour * __this, EntityBehaviourStatus__Enum reason));
IL2CPP_REGISTER_METHOD(0x00615280, void, __ctor, (MothLandBehaviour * __this));
}
