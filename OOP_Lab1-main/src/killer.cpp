#include "../include/killer.hpp"
 Killer::Killer(int x, int y):Character(x,y){
}
void Killer::move(){
    playerMode++;
    if(playerMode>=5){
        position.x=getPlayerPoint().x;
        position.y=getPlayerPoint().y;
        playerMode=0;
    }
}

