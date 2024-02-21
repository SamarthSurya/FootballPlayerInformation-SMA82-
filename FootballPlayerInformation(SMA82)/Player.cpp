#include "Player.h"
#include <iostream>


Player::Player(const std::string& name, double height, const std::string& nationality, const std::string& nativeCity, const std::string& fieldPosition)
    : name(name), height(height), nationality(nationality), nativeCity(nativeCity), fieldPosition(fieldPosition) {}

Player::~Player() {}

void Player::displayDetails() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Nationality: " << nationality << std::endl;
    std::cout << "Native City: " << nativeCity << std::endl;
    std::cout << "Field Position: " << fieldPosition << std::endl;
}
