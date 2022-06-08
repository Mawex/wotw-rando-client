using namespace app;

namespace app::methods::GameWorld {
IL2CPP_REGISTER_METHOD(0x00406190, bool, HasCompletedEverything, (GameWorld * __this));
IL2CPP_REGISTER_METHOD(0x00406490, void, RevealIcon, (GameWorld * __this, MoonGuid * icon));
IL2CPP_REGISTER_METHOD(0x00406540, bool, IconRevealed, (GameWorld * __this, MoonGuid * icon));
IL2CPP_REGISTER_METHOD(0x00406640, float, get_CompletionAmount, (GameWorld * __this));
IL2CPP_REGISTER_METHOD(0x00406BC0, int32_t, get_CompletionPercentage, (GameWorld * __this));
IL2CPP_REGISTER_METHOD(0x00406BE0, int32_t, ApproximateCompletionPercentage, (float completionAmount));
IL2CPP_REGISTER_METHOD(0x00406CF0, float, get_CollectablesCompletionAmount, (GameWorld * __this));
IL2CPP_REGISTER_METHOD(0x00406E30, int32_t, get_CollectablesCompletionPercentage, (GameWorld * __this));
IL2CPP_REGISTER_METHOD(0x00406F80, GameWorldArea *, FindAreaFromID, (GameWorld * __this, GameWorldAreaID__Enum ID));
IL2CPP_REGISTER_METHOD(0x00407050, GameWorldArea *, FindAreaFromPosition, (GameWorld * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00407230, RuntimeGameWorldArea *, FindRuntimeArea, (GameWorld * __this, GameWorldArea * area));
IL2CPP_REGISTER_METHOD(0x00407370, void, Awake, (GameWorld * __this));
IL2CPP_REGISTER_METHOD(0x00407900, void, OnDestroy, (GameWorld * __this));
IL2CPP_REGISTER_METHOD(0x00407BB0, void, OnRestoreCheckpoint, (GameWorld * __this));
IL2CPP_REGISTER_METHODINFO(0x0473E538, GameWorld_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00407D60, void, OnGameReset, (GameWorld * __this));
IL2CPP_REGISTER_METHODINFO(0x0477B0D8, GameWorld_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00407EC0, GameWorldArea *, AreaFromIndex, (GameWorld * __this, int32_t i));
IL2CPP_REGISTER_METHOD(0x00407FA0, int32_t, IndexOfArea, (GameWorld * __this, GameWorldArea * area));
IL2CPP_REGISTER_METHOD(0x00408200, void, Serialize, (GameWorld * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00408C30, void, VisitMapAreasAtPosition, (GameWorld * __this, Vector3 currentPlayerPosition));
IL2CPP_REGISTER_METHOD(0x00408D40, GameWorldArea *, WorldAreaAtPosition, (GameWorld * __this, Vector3 worldPosition));
IL2CPP_REGISTER_METHOD(0x00408F80, GameWorldArea *, GetArea, (GameWorld * __this, GameWorldAreaID__Enum areaID));
IL2CPP_REGISTER_METHOD(0x004090D0, int32_t, GetIconTypeCount, (GameWorld * __this, WorldMapIconType__Enum type));
IL2CPP_REGISTER_METHOD(0x00409670, int32_t, GetCollectedIconTypeCount, (GameWorld * __this, WorldMapIconType__Enum type));
IL2CPP_REGISTER_METHOD(0x00409CE0, void, MapTrailUpdate, (GameWorld * __this, Vector2 position));
IL2CPP_REGISTER_METHOD(0x00409E30, void, __ctor, (GameWorld * __this));
}
