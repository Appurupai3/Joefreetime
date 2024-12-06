#include "../include/Clyde.hpp"
 Clyde::Clyde(int x, int y) :Character(x,y){

}
Point Clyde::getPosition() const {
     return position;
 }
void Clyde::setPosition(int x, int y) {
     if(x > 15){
        throw std::invalid_argument("Error");
    }
    if(y > 15){
        throw std::invalid_argument("Error");
    }
    position.x = x;
    position.y = y;
 }
void Clyde::move() {
     // 假設你有 getPosition() 方法來獲取位置
     Point pacmanPos =getPlayerPoint(); // Pacman
     Point clydePos = getPosition(); // Clyde

     // 檢查是否在同一條水平或垂直線上
     if (pacmanPos.x == clydePos.x) { // 垂直對齊
         // 垂直對齊，Clyde 沿 Y 軸移動 2 單位
         if (pacmanPos.y < clydePos.y)
             clydePos.y -= 2;
         else
             clydePos.y += 2;
     }
     else if (pacmanPos.y == clydePos.y) { // 水平對齊
         // 水平對齊，Clyde 沿 X 軸移動 2 單位
         if (pacmanPos.x < clydePos.x)
             clydePos.x -= 2;
         else
             clydePos.x += 2;
     }
     else { // 不對齊，Clyde 沿 X 和 Y 軸移動 3 單位
         if (pacmanPos.x < clydePos.x)
             clydePos.x -= 3;
         else
             clydePos.x += 3;

         if (pacmanPos.y < clydePos.y)
             clydePos.y -= 3;
         else
             clydePos.y += 3;
     }
     if (clydePos.x < 0) clydePos.x = 0;
     if (clydePos.x > 15) clydePos.x = 15;
     if (clydePos.y < 0) clydePos.y = 0;
     if (clydePos.y > 15) clydePos.y = 15;

     // 更新 Clyde 的位置
     setPosition(clydePos.x, clydePos.y);

 }

 Clyde::~Clyde() {

}

