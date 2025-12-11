#pragma once
#include "../rooms/room.hpp"
#include "../rooms/office.hpp"
#include "animatronic.hpp"
#include <vector>


class GameState {
    public:
        void startGame();
    private:
        unsigned int tick = 0;
        unsigned int maxTicks;
        GameState *state;
        std::vector<Animatronic *> animatronics;

        int executeTick();
};