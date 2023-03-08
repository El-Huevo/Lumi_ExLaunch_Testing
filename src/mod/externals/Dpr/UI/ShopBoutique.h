#pragma once

#include "externals/il2cpp.h"
#include "externals/UnityEngine/MonoBehaviour.h"
#include "ShopBase.h"

namespace Dpr::UI {
    struct ShopBoutique : IlClass<ShopBoutique> {
        struct Fields : Dpr::UI::ShopBase::Fields {
            void* _charge;
            void* _modelView;
            void* _modelParams;
            void* _itemParams;
            void* _selectShopItem;
            int32_t _modelType;
            int32_t _boutiqueType;
            int32_t _selectIndex;
            bool _isPlayerInputActive;
            float _loadModelDelayTime;
        };

        inline void Open() {
            external<void>(0x01d43ef0, this);
        }
    };
}
