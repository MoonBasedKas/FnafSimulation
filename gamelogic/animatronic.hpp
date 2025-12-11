#pragma once
#include "../rooms/room.hpp"
#include <random>
#include <string>

class Animatronic{
    public:
        void move();
        int id;
        
    private:
        
        int difficulty;
        int maxDifficulty;

        std::string name;
        Room *inside;

        void swapRoom(Room *next);
        
};