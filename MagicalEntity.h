#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H
#include <string>
#include <iostream>
using namespace std;
class MagicalEntity {
    int manaPool;
    int spellPower;
public:
    MagicalEntity(int mp, int sp);
    
    int getMana() const;
    
    int getSpellPower() const ;
};
#endif