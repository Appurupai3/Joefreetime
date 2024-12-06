#include "../include/Pacman.hpp"
Pacman::Pacman(int x, int y):Character(x,y) {
}
Point Pacman::getPosition() const{
    return position;
}
void Pacman::setPosition(int x, int y) {
     if (x < 0) x = 0;
     if (x > 15) x = 15;
     if (y < 0) y = 0;
     if (y > 15) y = 15;
    position.x = x;
    position.y = y;
}
void Pacman::move(){
    char pacmanMove;
    std::cin >> pacmanMove;
    switch (pacmanMove) {
            case 'w':
            case 'W':
                setPosition(position.x -3, position.y );  // 向上移動
                break;
            case 'a':
            case 'A':
                setPosition(position.x , position.y -3);  // 向左移動
                break;
            case 's':
            case 'S':
                setPosition(position.x + 3, position.y );  // 向下移動
                break;
            case 'd':
            case 'D':
                setPosition(position.x, position.y +3);  // 向右移動
                break;
            default:
                break;  // 不處理其他字符
    }
    /*
    
    */

}
Pacman::~Pacman() {}

