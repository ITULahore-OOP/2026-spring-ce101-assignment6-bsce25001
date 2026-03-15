#include "Spellblade.h"

Spellblade::Spellblade(string name, int health, int basePower, int armor, int manaPool, int spellPower):Warrior(name, health, basePower, armor), MagicalEntity(manaPool, spellPower) {

}

int Spellblade::calculateHybridDamage() const {
    return getPower() + getSpellPower();
}