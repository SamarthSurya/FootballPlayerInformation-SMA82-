#pragma once
#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H

#include <vector>
#include <string>
#include "Player.h"

class PlayerManager : public Player {
private:
    std::vector<Player*> players;

public:
    PlayerManager();
    ~PlayerManager();


    void setName(const std::string& newName);
    void setHeight(double newHeight);
    void setNationality(const std::string& newNationality);
    void addPlayer(Player* player);
    Player* searchPlayer(const std::string& playerName) const;
    void updatePlayer(const std::string& playerName);
    void deletePlayer(const std::string& playerName);
    void displayAllPlayers() const;
};

#endif // PLAYERMANAGER_H
