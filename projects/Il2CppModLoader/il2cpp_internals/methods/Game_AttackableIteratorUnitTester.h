using namespace app;

namespace app::methods::Game::AttackableIteratorUnitTester {
IL2CPP_REGISTER_METHOD(0x0151EC00, List_1_Game_AttackableIteratorUnitTester_TestAttackable_ *, CreateTestAttackables, (int32_t count));
IL2CPP_REGISTER_METHOD(0x0151EEB0, void, AssertSame, (IAttackable * actual, AttackableIteratorUnitTester_TestAttackable * expected));
IL2CPP_REGISTER_METHOD(0x0151F090, void, Test_All, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0151F150, void, Test_Single_Unmodified, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0151F520, void, Test_Single_RemoveAfter, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0151F8A0, void, Test_Single_RemoveBefore, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0151FC50, void, Test_Single_Add, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x0151FFE0, void, Test_Double_Unmodified, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01520600, void, Test_Double_Remove, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x01520C30, void, Test_Double_Add, (MethodInfo * method));
}
