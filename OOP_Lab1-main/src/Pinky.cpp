#include "../include/Pinky.hpp"
void Pinky::move() {
    if(playerMode==0) {
        position.x+=3;
        position.y-=3;
        if(position.x==15)playerMode=1;
    }
    else if(playerMode==1) {
        position.x-=3;
        position.y+=3;
        if(position.x==0) playerMode=0;
    }
}
Point Pinky::getPosition() const {
    return position;
}
void Pinky::setPosition(int x,int y) {
    this->position.x = x;
    this->position.y = y;
}
 Pinky::Pinky(int x, int y):Character(x,y) {


}
 Pinky::~Pinky() {

}



