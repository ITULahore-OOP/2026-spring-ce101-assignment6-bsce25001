#include "MagicalEntity.h"

MagicalEntity::MagicalEntity(int mp, int sp) {
    manaPool = mp;
    spellPower = sp;
}   

int MagicalEntity::getMana() const {
    return manaPool;
}

int MagicalEntity::getSpellPower() const {
    return spellPower;
}