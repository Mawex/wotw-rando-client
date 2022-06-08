#include <interception_macros.h>

namespace app::methods::EntityReactions {
IL2CPP_REGISTER_METHOD(0x00420230, EntityOwnedInitOrder__Enum, get_InitOrder, (EntityReactions * __this));
IL2CPP_REGISTER_METHOD(0x00CA0440, void, OnCacheSerializedComponents, (EntityReactions * __this, Entity * owner));
IL2CPP_REGISTER_METHOD(0x00CA0640, void, OnEntityInitialization, (EntityReactions * __this, Entity * entity));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAwake, (EntityReactions * __this));
IL2CPP_REGISTER_METHOD(0x00CA0840, void, Awake, (EntityReactions * __this));
IL2CPP_REGISTER_METHOD(0x00CA09A0, void, Update, (EntityReactions * __this));
IL2CPP_REGISTER_METHOD(0x00CA0A40, void, ProcessEntityEvent, (EntityReactions * __this, EntityEvent * eventInfo));
IL2CPP_REGISTER_METHOD(0x00CA0CF0, void, InterruptRunningReactions, (EntityReactions * __this));
IL2CPP_REGISTER_METHOD(0x00CA0E80, void, ExecuteReactionBehaviour, (EntityReactions * __this, EntityReactionBehaviour * behaviour, EntityEvent * reactionEvent));
IL2CPP_REGISTER_METHOD(0x00CA10D0, bool, IsExecutingReactionBehaviour, (EntityReactions * __this));
IL2CPP_REGISTER_METHOD(0x00CA1210, EntityReactionBehaviour *, GetExecutingReactionBehaviour, (EntityReactions * __this));
IL2CPP_REGISTER_METHOD(0x00CA1350, bool, IsReactionInterruptionSupended, (EntityReactions * __this, EntityReactionBehaviour * reaction));
IL2CPP_REGISTER_METHOD(0x00CA1480, void, HandleReactionInterruptionSuspension, (EntityReactions * __this));
IL2CPP_REGISTER_METHOD(0x00CA16F0, void, RegisterReactionInterruptionSuspension, (EntityReactions * __this, float duration, EntityReactionBehaviour__Array * reactions));
IL2CPP_REGISTER_METHOD(0x00CA18C0, void, __ctor, (EntityReactions * __this));
}
