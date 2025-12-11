#pragma once
#include "../gamelogic/animatronic.hpp"
#include <vector>

class Room{
    public:
        void leave(int id);
        void enter(Animatronic *entered);
    private:
        Room *North;
        Room *East;
        Room *South;
        Room *West;
        std::vector<Animatronic *>animatronics;

    

};