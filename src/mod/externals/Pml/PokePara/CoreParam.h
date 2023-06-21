#pragma once

#include "externals/Pml/PokePara/Accessor.h"

namespace Pml::PokePara {
    struct CoreParam : ILClass<CoreParam> {
        struct Fields {
            void* m_coreData;
            void* m_calcData;
            Pml::PokePara::Accessor* m_accessor;
        };

        inline void SetWaza(uint32_t index, uint32_t wazaId) {
            external<void>(0x020464e0, this, index, wazaId);
        }

        inline uint32_t GetLangId() {
            return external<uint32_t>(0x0204b810, this);
        }

        inline bool IsNull() {
            external<bool>(0x0204c9d0, this);
        }

        inline bool IsEgg(int32_t type) {
            external<bool>(0x02049370, this, type);
        }

        inline int32_t GetSeikaku() {
            external<int32_t>(0x02048740, this);
        }
    };
}
