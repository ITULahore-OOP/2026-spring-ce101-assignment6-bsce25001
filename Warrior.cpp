#include "Warrior.h"

Warrior::Warrior(string n, int h, int bp, int ar) : Hero(n, h, bp), armorRating(ar) {
    armorRating = ar;
}

int Warrior::getArmor() const {
    return armorRating;
}

int Warrior::calculateEffectiveHealth() const {
    return getHealth() + (armorRating*2);
}