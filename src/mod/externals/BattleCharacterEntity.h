#pragma once

#include "externals/il2cpp-api.h"

#include "externals/BattleObjectEntity.h"
#include "externals/ColorVariation.h"
#include "externals/Dpr/Battle/View/TrainerSimpleParam.h"

struct BattleCharacterEntity : ILClass<BattleCharacterEntity> {
    struct Fields : BattleObjectEntity::Fields {
        void* _animationPlayer; // Dpr_Playables_BattleAnimationPlayer_o*
        ColorVariation::Object* _colorVariation;
        float _motionBlendTime;
        bool _isEnableAnimationPlayer;
        float _speakStartTime;
        Dpr::Battle::View::TrainerSimpleParam::Object _TrainerSimpleParam_k__BackingField;
    };

    inline void Initialize(Dpr::Battle::View::TrainerSimpleParam::Object* param, bool isContest) {
        external<void>(0x01d68180, this, param, isContest);
    }
};
