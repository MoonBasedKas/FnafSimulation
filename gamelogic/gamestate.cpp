#include "gamestate.hpp"

/**
 * @brief Starts and runs the game.
 * 
 */
void GameState::startGame(){
    while(tick < maxTicks && !over){
        executeTick();
        tick++;
    }
}

/**
 * @brief Executes a singular tick.
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

/**
 * @brief Stops the execution of the current game.
 * 
 */
void GameState::endGame(){
    over = false;
}