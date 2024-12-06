#ifndef killer_HPP
#define killer_HPP

#include "Character.hpp"

class Killer final : public Character {
    protected:

    public:
        Killer(int x, int y);  // 建構子
        virtual void move() override; // 純虛擬函數，派生類別需實作具體的移動邏輯
        

};
        

       

#endif