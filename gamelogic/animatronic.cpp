#include "animatronic.hpp"

void Animatronic::swapRoom(Room *next){
    inside->leave(id);
    inside = next;
    next->enter(this);
    
}

void Animatronic::move(){
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> dist(1,20);
    int roll = dist(generator);

    if(roll > difficulty || roll > maxDifficulty){
        // Insert code to actually move
    }
    
}