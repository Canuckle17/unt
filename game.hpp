#ifndef GAME_H
#define GAME_H

#include "units/unit.hpp";
#include <SDL.h>;

enum Game_State {
    title,draft,play,pause,end
};

enum Turn_State {
    select,attack,special
};

class Game {
    public:
        Game();
        void run();
        void update();

    private:
        Unit currUnit;

};
#endif