#pragma once
#include "room.hpp"

class Office : public Room{
    public:
        void enter(Animatronic *entered) override{
            gs->endGame();
        }  

};