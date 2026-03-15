#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <string>
using namespace std;


class Hero {
  string heroName;
  int health;
  int basepower;
public:
    Hero(string n,int h, int bp);
    ~Hero();
    string getName() const;
    int getHealth() const;
    int getPower() const;
    void takeDamage(int damage);
    bool operator<(const Hero& hero) const;
    int operator+(const Hero& hero) const;
    bool operator>(const Hero& hero) const;
};
#endif
