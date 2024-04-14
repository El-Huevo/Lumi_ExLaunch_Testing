#pragma once

#include "memory/string.h"

#include "helpers.h"
#include "ui/base/element.h"
#include "ui/base/button.h"
#include "ui/base/checkbox.h"
#include "ui/base/child.h"
#include "ui/base/collapsing_header.h"
#include "ui/base/color_edit.h"
#include "ui/base/combo.h"
#include "ui/base/combo_simple.h"
#include "ui/base/menu_bar.h"
#include "ui/base/slider.h"
#include "ui/base/spacing.h"
#include "ui/base/text.h"
#include "ui/base/text_unformatted.h"
#include "ui/components/string_view.h"

static ImVec2 gInvalidVec { -1, -1 };

namespace ui {
    ELEMENT(Window) {
        nn::string title;
        bool open = false;
        bool toggleable = true;
        bool allow_static = false;
        ImGuiWindowFlags flags = ImGuiWindowFlags_NoCollapse;
        ImVec2 initialSize = gInvalidVec;
        ImVec2 initialPos = gInvalidVec;

        bool isValid() override {
            return !title.empty();
        }

        bool beginDraw() override {
            if (toggleable && !open) {
                return false;
            }

            if (!allow_static && !InputHelper::isInputToggled()) {
                return false;
            }

            if (initialSize.x != gInvalidVec.x && initialSize.y != gInvalidVec.y) {
                ImGui::SetNextWindowSize(initialSize, ImGuiCond_FirstUseEver);
            }

            if (initialPos.x != gInvalidVec.x && initialPos.y != gInvalidVec.y) {
                ImGui::SetNextWindowPos(initialPos, ImGuiCond_FirstUseEver);
            }

            if (toggleable) {
                return ImGui::Begin(title.c_str(), &open, flags);
            } else {
                return ImGui::Begin(title.c_str(), nullptr, flags);
            }
        }

        void endDraw() override {
            ImGui::End();
        }

        ELEMENT_SUPPORTS_CHILD(CollapsingHeader);
        ELEMENT_SUPPORTS_CHILD(Child);
        COMMON_ELEMENTS();
    };
}
