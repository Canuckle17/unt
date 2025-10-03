#ifndef NODE_H
#define NODE_H

#include "units/unit.hpp";
#include "player.hpp";

struct Node {
    Unit unit;
    Player* player;

    struct Node* next;
};   

#endif