#include "Util.hpp"
#include <Blinky.hpp>
#include <Clyde.hpp>
#include <Inky.hpp>
#include <Pacman.hpp>
#include <Pinky.hpp>
#include <killer.hpp>

int main() {
    std::shared_ptr<Character> characters[6];
    characters[0] = std::make_shared<Blinky>(0, 0);
    characters[1] = std::make_shared<Inky>(15, 15);
    characters[2] = std::make_shared<Pinky>(0, 15);
    characters[3] = std::make_shared<Clyde>(7, 7);
    characters[4] = std::make_shared<Pacman>(10, 10);
    characters[5] = std::make_shared<Killer>(8, 7);
    Draw(
        characters[0]->getPosition(),
        characters[1]->getPosition(),
        characters[2]->getPosition(),
        characters[3]->getPosition(),
        characters[4]->getPosition(),
        characters[5]->getPosition());
    for (int i = 0; i < 50; i++) {

        // 移動每個角色
        for (int j = 0; j < 6; j++) {
            characters[j]->setPlayerPoint(characters[4]->getPosition());
            characters[j]->move();  // 修正，應該是 characters[j] 而不是 characters[i]
        }

        // 檢查是否有重疊
        bool overlapFound = false;
        for (int j = 0; j < 6; j++) {
            if (j!=4&&characters[j]->getPosition().x==characters[4]->getPosition().x && characters[j]->getPosition().y==characters[4]->getPosition().y) {
                overlapFound = true;
                std::cout << "youdied" << std::endl;
            }
        }

        // 如果有重疊，則終止遊戲
        if (overlapFound) {
            Draw(
        characters[0]->getPosition(),
        characters[1]->getPosition(),
        characters[2]->getPosition(),
        characters[3]->getPosition(),
        characters[4]->getPosition(),
        characters[5]->getPosition());
            break;
        }

        // 如果沒有重疊，繪製角色位置
        Draw(
        characters[0]->getPosition(),
        characters[1]->getPosition(),
        characters[2]->getPosition(),
        characters[3]->getPosition(),
        characters[4]->getPosition(),
        characters[5]->getPosition());
    }
}