#ifndef UNIT_H
#define UNIT_H

#include <string>

class Unit {
    public:
        int getCurrHP();
        
        int getSpeed();
        bool isAlive();

        bool attack(Unit target);
        bool special(Unit target);

    protected:
        std::string name;
        
        int maxHp;
        int currHp;
        
        int minDmg;
        int maxDmg;
        int speed;

        bool alive;

        int getAttackDamage();
        
};

#endif
