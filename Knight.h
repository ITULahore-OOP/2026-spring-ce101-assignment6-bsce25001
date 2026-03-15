#ifndef KNIGHT_H
#define KNIGHT_H
#include <string>
#include <iostream>
using namespace std;
#include "Warrior.h"

class Knight : public Warrior {
    int chargeBonus;
public:
    Knight(string n, int h, int bp, int ar, int cb);
    
    int getChargeBonus() const;
    int calculateBurstDamage() const;
};







#endif