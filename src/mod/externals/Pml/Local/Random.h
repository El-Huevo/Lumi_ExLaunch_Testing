#pragma once

#include "externals/il2cpp-api.h"

#include "externals/System/Primitives.h"

namespace Pml::Local {
    struct Random : ILClass<Random> {
        struct Fields {
            // TODO
        };

        static inline uint32_t GetValue() {
            return external<uint32_t>(0x024a00a0);
        }
    };
}
