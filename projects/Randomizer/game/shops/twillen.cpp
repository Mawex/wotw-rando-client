#include <game/shops/shop.h>

#include <Common/ext.h>

#include <Core/api/game/player.h>
#include <Core/api/graphics/textures.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/shard_type.h>
#include <Core/enums/static_text_entries.h>
#include <Core/text/text_database.h>

#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateShards_Shard.h>
#include <Modloader/app/methods/PlayerSpiritShards.h>
#include <Modloader/app/methods/SpellUIShardEquipStatus.h>
#include <Modloader/app/methods/SpiritShardDescription.h>
#include <Modloader/app/methods/SpiritShardShopUIItem.h>
#include <Modloader/app/methods/SpiritShardUIItem.h>
#include <Modloader/app/methods/SpiritShardUIShardBackdrop.h>
#include <Modloader/app/methods/SpiritShardUIShardDetails.h>
#include <Modloader/app/methods/SpiritShardsShopScreen.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UpgradableShardItem.h>
#include <Modloader/app/structs/SpiritShardIconsCollection_Icons__Boxed.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/SpiritShardSettings.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <functional>
#include <set>

namespace {
    using namespace modloader;
    using namespace app::classes;
    using namespace app::classes::UnityEngine;
    using namespace randomizer::game::shops;

    const std::set<app::SpiritShardType__Enum> TWILLEN_SHARDS{
        app::SpiritShardType__Enum::GlassCannon,
        app::SpiritShardType__Enum::TripleJump,
        app::SpiritShardType__Enum::AntiAir,
        app::SpiritShardType__Enum::Swap,
        app::SpiritShardType__Enum::SpiritLightLuck,
        app::SpiritShardType__Enum::Vitality,
        app::SpiritShardType__Enum::Energy,
        app::SpiritShardType__Enum::CombatLuck
    };

    IL2CPP_INTERCEPT(PlayerSpiritShards, bool, HasShard, (app::PlayerSpiritShards * this_ptr, app::SpiritShardType__Enum shard_type)) {
        if (is_in_shop(ShopType::Twillen) && TWILLEN_SHARDS.find(shard_type) != TWILLEN_SHARDS.end()) {
            return is_owned(*twillen_shop().slot(shard_type));
        }

        return next::PlayerSpiritShards::HasShard(this_ptr, shard_type);
    }

    IL2CPP_INTERCEPT(SpiritShardUIShardBackdrop, void, SetUpgradeCount, (app::SpiritShardUIShardBackdrop * this_ptr, int actual, int total)) {
        if (is_in_shop(ShopType::Twillen)) {
            actual = 0;
            total = 0;
        }

        next::SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr, actual, total);
    }

    IL2CPP_INTERCEPT(Moon::uberSerializationWisp::PlayerUberStateShards_Shard, bool, get_VisibleInShop, (app::PlayerUberStateShards_Shard * this_ptr)) {
        auto const& slot = twillen_shop().slot(this_ptr->fields.m_type);
        return slot != nullptr && slot->visibility == SlotVisibility::Visible;
    }

    IL2CPP_INTERCEPT(Moon::uberSerializationWisp::PlayerUberStateShards_Shard, bool, get_PurchasableInShop, (app::PlayerUberStateShards_Shard * this_ptr)) {
        auto const& slot = twillen_shop().slot(this_ptr->fields.m_type);
        return slot != nullptr && slot->visibility != SlotVisibility::Locked;
    }

    bool overwrite_shard = false;
    app::PlayerUberStateShards_Shard* selected_shard;
    IL2CPP_INTERCEPT(SpiritShardsShopScreen, void, UpdateContextCanvasShards, (app::SpiritShardsShopScreen * this_ptr)) {
        modloader::ScopedSetter setter(overwrite_shard, is_in_shop(ShopType::Twillen));
        selected_shard = SpiritShardsShopScreen::get_SelectedSpiritShard(this_ptr);
        next::SpiritShardsShopScreen::UpdateContextCanvasShards(this_ptr);
    }

    IL2CPP_INTERCEPT(SpiritShardsShopScreen, void, CompletePurchase, (app::SpiritShardsShopScreen * this_ptr)) {
        auto* const shard = SpiritShardsShopScreen::get_SelectedSpiritShard(this_ptr);
        auto sound = SpiritShardsShopScreen::get_PurchaseCompleteSound(this_ptr);
        il2cpp::invoke(this_ptr, "PlaySoundEvent", sound);
        il2cpp::invoke(core::api::game::player::sein()->fields.PlayerSpiritShards->fields.OnInventoryUpdated, "Invoke", shard);

        buy_item(*twillen_shop().slot(shard->fields.m_type));
        Moon::uberSerializationWisp::PlayerUberStateShards_Shard::RunSetDirtyCallback(shard);
        UpdateContextCanvasShards(this_ptr);
    }

    bool locked_shard_overwrite = false;
    IL2CPP_INTERCEPT(SpiritShardUIShardDetails, void, UpdateDetails, (app::SpiritShardUIShardDetails * this_ptr)) {
        auto* const item = overwrite_shard ? selected_shard : this_ptr->fields.m_item;
        auto type = item->fields.m_type;
        auto slot = twillen_shop().slot(this_ptr->fields.m_item->fields.m_type);
        auto* const settings = types::SpiritShardSettings::get_class()->static_fields->Instance;
        auto* const description = il2cpp::invoke<app::SpiritShardDescription>(settings->fields.Descriptions, "GetValue", &type);
        if ((!item->fields.m_gained && this_ptr->fields.RequireOwned) || locked_shard_overwrite) {
            type = app::SpiritShardType__Enum::None;
        }

        auto* const renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());
        if (overwrite_shard) {
            auto& info = slot->active_info();
            info.icon->apply(renderer);
        } else {
            static std::unordered_map<app::SpiritShardType__Enum, std::shared_ptr<core::textures::TextureData>> shard_textures;
            auto it = shard_textures.find(type);
            if (it == shard_textures.end()) {
                auto shard_icons = types::SpiritShardSettings::get_class()->static_fields->Instance->fields.Icons;
                auto icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(shard_icons, "GetValue", &type);

                auto texture = core::textures::create_texture();
                texture->set_texture(reinterpret_cast<app::Texture*>(icons->fields.InventoryIcon));
                shard_textures[type] = texture;
                it = shard_textures.find(type);
            }

            it->second->apply(renderer);
        }

        auto* const name_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.NameGO, types::MessageBox::get_class());
        auto* const description_box = il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.DescriptionGO, types::MessageBox::get_class());

        if (overwrite_shard) {
            auto& info = slot->active_info();
            name_box->fields.MessageProvider = info.name.get_provider();
            description_box->fields.MessageProvider = info.description.get_provider();
        } else if (type == app::SpiritShardType__Enum::None) {
            name_box->fields.MessageProvider = this_ptr->fields.LockedName;
            description_box->fields.MessageProvider = this_ptr->fields.LockedDescription;
        } else {
            name_box->fields.MessageProvider = description->fields.Name;
            auto* const property_levels = description->fields.UpgradablePropertyLevels;
            auto* const property_level = property_levels->fields._items->vector[item->fields.m_level];
            description_box->fields.MessageProvider = property_level->fields.Description;
        }

        MessageBox::RefreshText_1(name_box);
        MessageBox::RefreshText_1(description_box);
        SpiritShardUIShardDetails::UpdateUpgradeDetails(this_ptr);

        auto active = false;
        il2cpp::invoke(this_ptr->fields.LevelNextGO, "SetActive", &active);
        il2cpp::invoke(this_ptr->fields.LevelNextDescriptionGO, "SetActive", &active);
        if (this_ptr->fields.ShowEquipStatus) {
            SpellUIShardEquipStatus::SetEquipment(this_ptr->fields.m_equipStatus, app::EquipmentType__Enum::None);
        }
    }

    IL2CPP_INTERCEPT(SpiritShardUIShardDetails, void, ShowEmptyDetails, (app::SpiritShardUIShardDetails * this_ptr)) {
        if (overwrite_shard && selected_shard != nullptr) {
            modloader::ScopedSetter setter(locked_shard_overwrite, true);
            this_ptr->fields.m_item = selected_shard;
            SpiritShardUIShardDetails::UpdateDetails(this_ptr);
            this_ptr->fields.m_item = nullptr;
        } else {
            next::SpiritShardUIShardDetails::ShowEmptyDetails(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(SpiritShardsShopScreen, void, Show, (app::SpiritShardsShopScreen * this_ptr)) {
        // csharp_bridge::update_shop_data();
        auto sein = core::api::game::player::sein();
        if (sein != nullptr && sein->fields.PlayerSpiritShards != nullptr) {
            auto settings = types::SpiritShardSettings::get_class()->static_fields->Instance;
            auto shards_to_buy = sein->fields.PlayerSpiritShards->fields.InventoryItemsAvailableToBuy;
            for (int i = 0; i < shards_to_buy->fields._size; ++i) {
                auto shard = shards_to_buy->fields._items->vector[i];
                auto desc = il2cpp::invoke<app::SpiritShardDescription>(settings->fields.Descriptions, "GetValue", &shard);
                // We overwrite get_BuyCost on SpiritShardDescription to use InitialBuyCost as the shard index into our shop.
                desc->fields.InitialBuyCost = static_cast<int>(shards_to_buy->fields._items->vector[i]);
            }
        }

        next::SpiritShardsShopScreen::Show(this_ptr);
    }

    IL2CPP_INTERCEPT(SpiritShardUIItem, void, UpdateShardIcon, (app::SpiritShardUIItem * this_ptr)) {
        if (is_in_shop(ShopType::Twillen)) {
            auto slot = twillen_shop().slot(this_ptr->fields.m_spiritShard->fields.m_type);
            auto& info = slot->active_info();

            auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());
            auto is_visible = this_ptr->fields.m_spiritShard != nullptr && slot->visibility == SlotVisibility::Visible;
            auto is_locked = this_ptr->fields.m_spiritShard == nullptr || slot->visibility == SlotVisibility::Locked;
            GameObject::SetActive(this_ptr->fields.IconGO, is_visible);
            GameObject::SetActive(this_ptr->fields.LockedGO, is_locked);
            info.icon->apply(renderer);
        } else {
            auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, types::Renderer::get_class());
            core::textures::apply_default(renderer);
            next::SpiritShardUIItem::UpdateShardIcon(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(SpiritShardDescription, int, get_BuyCost, (app::SpiritShardDescription * this_ptr)) {
        return twillen_shop().slot(static_cast<app::SpiritShardType__Enum>(this_ptr->fields.InitialBuyCost))->cost.get<int>();
    }

    IL2CPP_INTERCEPT(SpiritShardShopUIItem, void, UpdateShard, (app::SpiritShardShopUIItem * this_ptr, app::PlayerUberStateShards_Shard* shard)) {
        auto owned = true;
        auto visible = false;
        if (shard != nullptr) {
            auto slot = twillen_shop().slot(this_ptr->fields.Shard->fields.m_spiritShard->fields.m_type);
            SpiritShardUIItem::UpdateShardIcon(this_ptr->fields.Shard);
            owned = is_owned(*slot);
            visible = Moon::uberSerializationWisp::PlayerUberStateShards_Shard::get_VisibleInShop(shard);
            auto cost = slot->cost.get<int>();
            auto purchasable = slot->visibility == SlotVisibility::Visible;

            auto affordable = core::api::game::player::spirit_light().get() >= cost;
            auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.Shard->fields.IconGO, types::Renderer::get_class());
            auto background_renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.Shard->fields.Background, types::Renderer::get_class());
            if (purchasable && affordable && !owned) {
                UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, this_ptr->fields.PurchasableColor);
                UberShaderAPI::SetColor_1(background_renderer, app::UberShaderProperty_Color__Enum::MainColor, this_ptr->fields.PurchasableColor);
            } else {
                UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, this_ptr->fields.UnpurchaseableColor);
                UberShaderAPI::SetColor_1(background_renderer, app::UberShaderProperty_Color__Enum::MainColor, this_ptr->fields.UnpurchaseableColor);
            }

            app::MessageDescriptor descriptor = { 0 };
            descriptor.Message = il2cpp::string_new(std::to_string(cost));
            auto empty = il2cpp::string_new("");
            MessageBox::SetMessage(il2cpp::unity::get_component<app::MessageBox>(this_ptr->fields.CostGO, types::MessageBox::get_class()), descriptor, empty, empty);

            auto enabled = purchasable && !owned && affordable;
            GameObject::SetActive(this_ptr->fields.PurchasableGO, visible && enabled);
            GameObject::SetActive(this_ptr->fields.NotPurchasableGO, visible && !enabled);
        }

        GameObject::SetActive(this_ptr->fields.CostGO, visible && !owned);
        GameObject::SetActive(this_ptr->fields.SpiritLightGO, visible && !owned);
        GameObject::SetActive(this_ptr->fields.AlreadyOwnedGO, owned);
    }
} // namespace
