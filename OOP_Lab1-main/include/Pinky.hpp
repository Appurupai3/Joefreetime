#ifndef PINKY_HPP
#define PINKY_HPP

#include "Character.hpp"
class Pinky final : public Character {
    protected:

    public:
        Pinky(int x, int y);  // 建構子
        virtual  void move() override;  // 純虛擬函數，派生類別需實作具體的移動邏輯
        Point getPosition() const;  // 取得位置

        // 更新位置，並保證不會超出邊界
        void setPosition(int x, int y);
        ~Pinky();
};
#endif