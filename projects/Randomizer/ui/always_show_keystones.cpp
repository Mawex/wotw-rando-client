#include <macros.h>

#include <Core/settings.h>

#include <Modloader/app/methods/SeinUI.h>
#include <Modloader/interception_macros.h>

namespace randomizer::ui {
    namespace {
        IL2CPP_INTERCEPT(SeinUI, void, FixedUpdate, (app::SeinUI * this_ptr)) {
            if (core::settings::always_show_keystones()) {
                this_ptr->fields.m_showKeystonesTimer = this_ptr->fields.ShowKeyStoneTime;
            }

            next::SeinUI::FixedUpdate(this_ptr);
        }
    } // namespace
} // namespace randomizer::ui
