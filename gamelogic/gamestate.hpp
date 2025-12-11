#pragma once
#include "../rooms/room.hpp"
#include "../rooms/office.hpp"
#include "animatronic.hpp"
#include <vector>


class GameState {
    public:
        void startGame();
        void endGame();
    private:
        bool over;
        unsigned int tick = 0;
        unsigned int maxTicks;
        double power;
        GameState *state;
        std::vector<Animatronic *> animatronics;

        int executeTick();
};