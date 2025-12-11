#include "gamestate.hpp"

/**
 * @brief Starts and runs the game.
 * 
 */
void GameState::startGame(){
    while(tick < maxTicks){
        executeTick();
        tick++;
    }
}

/**
 * @brief Executes a singular tick of fnaf.
 * 
 * @return int 
 */
int GameState::executeTick(){
    int size = animatronics.size();
    for(int i = 0; size; i++){
        animatronics.at(i)->move();
    }
    return 0;
}