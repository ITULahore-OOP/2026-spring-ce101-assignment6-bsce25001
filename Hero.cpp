#include "Hero.h"

Hero::Hero(string n,int h, int bp){
    heroName=n;
    health=h;
    basepower=bp;

}
Hero::~Hero(){
    cout<<"Hero "<<heroName<<" has been destroyed."<<endl;
}
string Hero:: getName() const{
    return heroName;
}
int Hero::getHealth() const{
    return health;
}
int Hero::getPower() const{
    return basepower;
}
void Hero:: takeDamage(int damage){
    if(health<0){
        health=0;
    }
    else{
        health-=damage;
    }
}
bool Hero:: operator<(const Hero& hero) const{
    return this->getPower()<hero.getPower();
}
bool Hero:: operator>(const Hero& hero) const{
    return this->getPower()>hero.getPower();
}
int Hero::operator+(const Hero& hero) const{
    return this->getHealth() + hero.getHealth();
}
