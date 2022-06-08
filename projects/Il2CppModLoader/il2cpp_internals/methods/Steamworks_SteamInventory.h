#include <interception_macros.h>

namespace app::methods::Steamworks::SteamInventory {
IL2CPP_REGISTER_METHOD(0x027843B0, EResult__Enum, GetResultStatus, (SteamInventoryResult_t resultHandle));
IL2CPP_REGISTER_METHOD(0x027843E0, bool, GetResultItems, (SteamInventoryResult_t resultHandle, SteamItemDetails_t__Array * pOutItemsArray, uint32_t * punOutItemsArraySize));
IL2CPP_REGISTER_METHODINFO(0x0478B860, SteamInventory_GetResultItems__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027844E0, bool, GetResultItemProperty, (SteamInventoryResult_t resultHandle, uint32_t unItemIndex, String * pchPropertyName, String * * pchValueBuffer, uint32_t * punValueBufferSizeOut));
IL2CPP_REGISTER_METHOD(0x02784790, uint32_t, GetResultTimestamp, (SteamInventoryResult_t resultHandle));
IL2CPP_REGISTER_METHOD(0x027847C0, bool, CheckResultSteamID, (SteamInventoryResult_t resultHandle, CSteamID steamIDExpected));
IL2CPP_REGISTER_METHOD(0x02784800, void, DestroyResult, (SteamInventoryResult_t resultHandle));
IL2CPP_REGISTER_METHOD(0x02784830, bool, GetAllItems, (SteamInventoryResult_t * pResultHandle));
IL2CPP_REGISTER_METHOD(0x02784860, bool, GetItemsByID, (SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t__Array * pInstanceIDs, uint32_t unCountInstanceIDs));
IL2CPP_REGISTER_METHOD(0x027848B0, bool, SerializeResult, (SteamInventoryResult_t resultHandle, Byte__Array * pOutBuffer, uint32_t * punOutBufferSize));
IL2CPP_REGISTER_METHOD(0x02784900, bool, DeserializeResult, (SteamInventoryResult_t * pOutResultHandle, Byte__Array * pBuffer, uint32_t unBufferSize, bool bRESERVED_MUST_BE_FALSE));
IL2CPP_REGISTER_METHOD(0x02784970, bool, GenerateItems, (SteamInventoryResult_t * pResultHandle, SteamItemDef_t__Array * pArrayItemDefs, UInt32__Array * punArrayQuantity, uint32_t unArrayLength));
IL2CPP_REGISTER_METHOD(0x027849E0, bool, GrantPromoItems, (SteamInventoryResult_t * pResultHandle));
IL2CPP_REGISTER_METHOD(0x02784A10, bool, AddPromoItem, (SteamInventoryResult_t * pResultHandle, SteamItemDef_t itemDef));
IL2CPP_REGISTER_METHOD(0x02784A50, bool, AddPromoItems, (SteamInventoryResult_t * pResultHandle, SteamItemDef_t__Array * pArrayItemDefs, uint32_t unArrayLength));
IL2CPP_REGISTER_METHOD(0x02784AA0, bool, ConsumeItem, (SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemConsume, uint32_t unQuantity));
IL2CPP_REGISTER_METHOD(0x02784AF0, bool, ExchangeItems, (SteamInventoryResult_t * pResultHandle, SteamItemDef_t__Array * pArrayGenerate, UInt32__Array * punArrayGenerateQuantity, uint32_t unArrayGenerateLength, SteamItemInstanceID_t__Array * pArrayDestroy, UInt32__Array * punArrayDestroyQuantity, uint32_t unArrayDestroyLength));
IL2CPP_REGISTER_METHOD(0x02784B80, bool, TransferItemQuantity, (SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemIdSource, uint32_t unQuantity, SteamItemInstanceID_t itemIdDest));
IL2CPP_REGISTER_METHOD(0x02784BF0, void, SendItemDropHeartbeat, ());
IL2CPP_REGISTER_METHOD(0x02784C10, bool, TriggerItemDrop, (SteamInventoryResult_t * pResultHandle, SteamItemDef_t dropListDefinition));
IL2CPP_REGISTER_METHOD(0x02784C50, bool, TradeItems, (SteamInventoryResult_t * pResultHandle, CSteamID steamIDTradePartner, SteamItemInstanceID_t__Array * pArrayGive, UInt32__Array * pArrayGiveQuantity, uint32_t nArrayGiveLength, SteamItemInstanceID_t__Array * pArrayGet, UInt32__Array * pArrayGetQuantity, uint32_t nArrayGetLength));
IL2CPP_REGISTER_METHOD(0x02784CF0, bool, LoadItemDefinitions, ());
IL2CPP_REGISTER_METHOD(0x02784D10, bool, GetItemDefinitionIDs, (SteamItemDef_t__Array * pItemDefIDs, uint32_t * punItemDefIDsArraySize));
IL2CPP_REGISTER_METHODINFO(0x04744BB8, SteamInventory_GetItemDefinitionIDs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02784E00, bool, GetItemDefinitionProperty, (SteamItemDef_t iDefinition, String * pchPropertyName, String * * pchValueBuffer, uint32_t * punValueBufferSizeOut));
IL2CPP_REGISTER_METHOD(0x027850A0, SteamAPICall_t, RequestEligiblePromoItemDefinitionsIDs, (CSteamID steamID));
IL2CPP_REGISTER_METHOD(0x02785150, bool, GetEligiblePromoItemDefinitionIDs, (CSteamID steamID, SteamItemDef_t__Array * pItemDefIDs, uint32_t * punItemDefIDsArraySize));
IL2CPP_REGISTER_METHODINFO(0x04714510, SteamInventory_GetEligiblePromoItemDefinitionIDs__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02785250, SteamAPICall_t, StartPurchase, (SteamItemDef_t__Array * pArrayItemDefs, UInt32__Array * punArrayQuantity, uint32_t unArrayLength));
IL2CPP_REGISTER_METHOD(0x02785330, SteamAPICall_t, RequestPrices, ());
IL2CPP_REGISTER_METHOD(0x027853E0, uint32_t, GetNumItemsWithPrices, ());
IL2CPP_REGISTER_METHOD(0x02785400, bool, GetItemsWithPrices, (SteamItemDef_t__Array * pArrayItemDefs, UInt64__Array * pCurrentPrices, UInt64__Array * pBasePrices, uint32_t unArrayLength));
IL2CPP_REGISTER_METHODINFO(0x0471D800, SteamInventory_GetItemsWithPrices__MethodInfo);
IL2CPP_REGISTER_METHOD(0x027855B0, bool, GetItemPrice, (SteamItemDef_t iDefinition, uint64_t * pCurrentPrice, uint64_t * pBasePrice));
IL2CPP_REGISTER_METHOD(0x02785600, SteamInventoryUpdateHandle_t, StartUpdateProperties, ());
IL2CPP_REGISTER_METHOD(0x027856B0, bool, RemoveProperty, (SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, String * pchPropertyName));
IL2CPP_REGISTER_METHOD(0x027858E0, bool, SetProperty, (SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, String * pchPropertyName, String * pchPropertyValue));
IL2CPP_REGISTER_METHOD(0x02785C30, bool, SetProperty, (SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, String * pchPropertyName, bool bValue));
IL2CPP_REGISTER_METHOD(0x02785E60, bool, SetProperty1, (SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, String * pchPropertyName, int64_t nValue));
IL2CPP_REGISTER_METHOD(0x02786090, bool, SetProperty2, (SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, String * pchPropertyName, float flValue));
IL2CPP_REGISTER_METHOD(0x027862D0, bool, SubmitUpdateProperties, (SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t * pResultHandle));
}
