#include "../include/Blinky.hpp"
 Blinky::Blinky(int x, int y):Character(x,y){

}
void Blinky::setPosition(int x, int y) {

 }
void Blinky::move() {
    if(playerMode==0) {
        position.y +=3;
        if(position.y==15) {
            playerMode++;
        }
    }
    else if(playerMode==1) {
         position.x +=3;
         if(position.x==15) {
             playerMode++;
         }
     }
    else if(playerMode==2) {
        position.y -=3;
        if(position.y==0) {
            playerMode++;
        }
    }
    else if(playerMode==3) {
        position.x -=3;
        if(position.x==0) {
            playerMode=0;
        }
    }

}
Point Blinky::getPosition() const {
     return this->position;
 }
 Blinky::~Blinky() {

 }

