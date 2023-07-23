#pragma once

#include "externals/il2cpp-api.h"

#include "externals/System/Collections/Generic/IEqualityComparer.h"
#include "externals/System/Primitives.h"
#include "externals/System/Runtime/Serialization/SerializationInfo.h"

namespace System::Collections::Generic {
    template <typename T, typename E>
    struct HashSet : ILClass<T> {
        struct Slot : ILStruct<Slot> {
            int32_t hashCode;
            int32_t next;
            E* value;
        };

        struct Fields {
            System::Int32_array* _buckets;
            Slot::Array* _slots;
            int32_t _count;
            int32_t _lastIndex;
            int32_t _freeList;
            System::Collections::Generic::IEqualityComparer::Object* _comparer;
            int32_t _version;
            System::Runtime::Serialization::SerializationInfo::Object* _siInfo;
        };

        inline void Add(E* item) {
            ILClass<T>::template external<void>(0x028f8520, this, item, *T::Method$$Add);
        }

        // Only use for primitive types
        inline void AddPrimitive(E item) {
            ILClass<T>::template external<void>(0x028f8520, this, item, *T::Method$$Add);
        }
    };
}
