#include "room.hpp"

void Room::enter(Animatronic *entered){
    animatronics.push_back(entered);
}

/**
 * @brief Called when an animatronic leaves a room.
 * Checks the list of animatronics in the room until its found
 * then erases from the list.
 * 
 * @param id 
 */
void Room::leave(int id){
    int size = animatronics.size();
    for(int i = 0; i < size; i++){
        if (animatronics.at(i)->id == id){
            animatronics.erase(animatronics.begin() + i);
            return; // No more work needed.
        }
    }
}

/**
 * @brief Returns the current animatronics that are in the room.
 * 
 * @return std::vector<Animatronic *> 
 */
std::vector<Animatronic *> Room::ViewRoom(){
    return animatronics;
}