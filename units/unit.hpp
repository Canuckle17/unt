#ifndef UNIT_H
#define UNIT_H

#include <string>
#include <random>

class Unit {
    public:

        std::string getName();

        std::string getSpecialName();

        int getCurrHP();
        
        int getSpeed();
        bool isAlive();

        bool attack(Unit* target);
        bool special(Unit* target);

    protected:

        std::string name;
        std::string specialName;

        int maxHp;
        int currHp;
        
        int minDmg;
        int maxDmg;
        int speed;

        bool alive;

        int getAttackDamage();
};

#endif
