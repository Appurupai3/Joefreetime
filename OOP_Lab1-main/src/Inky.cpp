#include "../include/Inky.hpp"
 Inky::Inky(int x, int y) :Character(x,y){

}
void Inky::move() {
     if(playerMode==1) {
         position.x+=3;
         position.y+=3;
         if(position.x==15)playerMode=0;
     }
     else if(playerMode==0) {
         position.x-=3;
         position.y-=3;
         if(position.x==0) playerMode=1;
     }
 }
Point Inky::getPosition() const {
    return this->position;
}
void Inky::setPosition(int x,int y) {
     this->position.x = x;
     this->position.y = y;
 }
 Inky::~Inky() {

 }


