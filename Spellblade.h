#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include <string>
#include <iostream>
#include "Warrior.h"
#include "MagicalEntity.h"
#include"Hero.h"
using namespace std;

class Spellblade : public Warrior,public MagicalEntity {
    
public:
    Spellblade(string name, int health, int basePower, int armor, int manaPool, int spellPower);
    int calculateHybridDamage() const;
};
#endif