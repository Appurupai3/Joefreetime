#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include <stdexcept>
struct Point{
    int x = 0;
    int y = 0;
    Point(int x,int y): x(x),y(y) {}
};
class Character {
protected:
    Point position;  // 角色位置
    int playerMode = 0;
    Point Playerpoint=Point(0,0);
public:
    Character(int x, int y); // 建構子
    Point getPosition();
    virtual void move() = 0;  // 純虛擬函數，派生類別需實作具體的移動邏輯
    Point getPosition() const;  // 取得位置
    void setPlayerMode(int m);
    void setPlayerPoint(Point p);
    Point getPlayerPoint();
    // 更新位置，並保證不會超出邊界
    void setPosition(int x, int y);
    ~Character();
};
#endif