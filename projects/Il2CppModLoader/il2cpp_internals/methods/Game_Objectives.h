using namespace app;

namespace app::methods::Game::Objectives {
IL2CPP_REGISTER_METHOD(0x01525FA0, bool, ObjectiveExists, (Objective * objective));
IL2CPP_REGISTER_METHOD(0x01526120, AllContainer_1_Objective_ *, get_All, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x015261D0, void, Serialize, (Archive * ar));
IL2CPP_REGISTER_METHOD(0x015265D0, void, AddObjective, (Objective * objective));
IL2CPP_REGISTER_METHOD(0x01526710, void, CompleteObjective, (Objective * objective));
}
