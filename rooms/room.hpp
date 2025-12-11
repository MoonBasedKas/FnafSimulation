#pragma once
#include "../gamelogic/animatronic.hpp"
#include "../gamelogic/gamestate.hpp"
#include <vector>

class Room{
    public:
        void leave(int id);
        virtual void enter(Animatronic *entered);
        int id;
        GameState *gs;

        std::vector<Animatronic *> ViewRoom();
    private:
        
        Room *North;
        Room *East;
        Room *South;
        Room *West;
        std::vector<Animatronic *>animatronics;

    

};