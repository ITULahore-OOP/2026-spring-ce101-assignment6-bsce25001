#include "Knight.h"

Knight::Knight(string n, int h, int bp, int ar, int cb) : Warrior(n, h, bp, ar){
    chargeBonus = cb;
}

int Knight::getChargeBonus() const {
    return chargeBonus;
}

int Knight::calculateBurstDamage() const {
    return getPower() + chargeBonus;
}

