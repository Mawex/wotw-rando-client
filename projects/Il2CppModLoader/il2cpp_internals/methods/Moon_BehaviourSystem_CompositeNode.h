using namespace app;

namespace app::methods::Moon::BehaviourSystem::CompositeNode {
IL2CPP_REGISTER_METHOD(0x0300A940, void, OnValidate, (CompositeNode * __this));
IL2CPP_REGISTER_METHOD(0x0300AA80, void, MoonCleanup, (CompositeNode * __this));
IL2CPP_REGISTER_METHOD(0x002FBC40, List_1_Moon_BehaviourSystem_BehaviourNode_ *, get_Children, (CompositeNode * __this));
IL2CPP_REGISTER_METHOD(0x0300AA90, void, AddChild, (CompositeNode * __this, int32_t index, BehaviourNode * node));
IL2CPP_REGISTER_METHOD(0x0300AB40, BehaviourStatus__Enum, Execute, (CompositeNode * __this, IContext * context));
IL2CPP_REGISTER_METHOD(0x0300AC00, void, Reset, (CompositeNode * __this, IContext * context, bool recursively));
IL2CPP_REGISTER_METHOD(0x0300AD40, void, PerformSanityCheck, (CompositeNode * __this));
IL2CPP_REGISTER_METHOD(0x0300AF80, void, __ctor, (CompositeNode * __this));
}
