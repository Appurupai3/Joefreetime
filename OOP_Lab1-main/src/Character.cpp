#include "../include/Character.hpp"
Character::Character(int x, int y):position(x,y) {
}
Point Character::getPosition() {
    return position;
}
void Character::setPosition(int x, int y) {
    position.x = x;
    position.y = y;
}
void Character::setPlayerMode(int m) {
    playerMode = m;
}
void Character::setPlayerPoint(Point p) {
    this->Playerpoint = p;
}
Point Character::getPlayerPoint() {
    return Playerpoint;
}
Character::~Character() {}

