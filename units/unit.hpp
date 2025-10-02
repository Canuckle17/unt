#ifndef UNIT_H
#define UNIT_H

#include <string>

class Unit {
    public:
        int getCurrHP();
        int getMinDmg();
        int getMaxDmg();
        int getSpeed();
        bool isAlive();


    protected:
        std::string name;
        
        int maxHp;
        int currHp;
        
        int minDmg;
        int maxDmg;
        int speed;

        bool alive;
    
}

#endif