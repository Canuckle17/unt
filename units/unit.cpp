#include "unit.hpp"
#include <random>

std::string Unit::getName(){
    return name;
}

std::string Unit::getSpecialName(){
    return specialName;
}

int Unit::getCurrHP(){
    return currHp;
}
        
int Unit::getSpeed(){
    return speed;
}

bool Unit::isAlive(){
    if (currHp > 0)
        return true;
    return false;
}

bool Unit::attack(Unit* target){
    int dmg = getAttackDamage();

    target->currHp -= dmg;
}

int Unit::getAttackDamage(){
    return rand() % (maxDmg - minDmg + 1) + minDmg;
}