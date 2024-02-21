#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    std::string name;
    double height;
    std::string nationality;
    std::string nativeCity;
    std::string fieldPosition;

public:
    Player() {};
    Player(const std::string& name, double height, const std::string& nationality, const std::string& nativeCity, const std::string& fieldPosition);
    virtual ~Player();

    virtual void displayDetails() const;
};

#endif // PLAYER_H
