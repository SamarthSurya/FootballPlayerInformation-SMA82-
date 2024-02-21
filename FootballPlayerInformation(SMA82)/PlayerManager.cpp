#include "PlayerManager.h"
#include "Player.h"
#include "Goalkeeper.h"
#include "NonGoalkeeper.h"
#include <iostream>

PlayerManager::PlayerManager() {}

PlayerManager::~PlayerManager() {
    for (Player* player : players) {
        delete player;
    }
}

void PlayerManager::addPlayer(Player* player) {
    players.push_back(player);
}

Player* PlayerManager::searchPlayer(const std::string& playerName) const {
    for (Player* player : players) {
        if (player->name == playerName) {
            return player;
        }
    }
    return nullptr;
}

void PlayerManager::setName(const std::string& newName) {
    name = newName;
}

void PlayerManager::setHeight(double newHeight) {
    height = newHeight;
}

void PlayerManager::setNationality(const std::string& newNationality) {
    nationality = newNationality;
}

//void PlayerManager::updatePlayer(const std::string& playerName) {
//    Player* player = searchPlayer(playerName);
//    if (player != nullptr) {
//        // Code to update player details
//
//        std::cout << "Player details updated successfully." << std::endl;
//    }
//    else {
//        std::cout << "Player not found." << std::endl;
//    }
//}

void PlayerManager::updatePlayer(const std::string& playerName) {
    // Search for the player in the player list
    Player* player = searchPlayer(playerName);

    if (player != nullptr) {
        // Display player's current details
        std::cout << "Current details of player '" << playerName << "':" << std::endl;
        player->displayDetails();

        // Prompt the user to choose which data to update
        std::cout << "Select which data to update:" << std::endl;
        std::cout << "1. Name" << std::endl;
        std::cout << "2. Height" << std::endl;
        std::cout << "3. Nationality" << std::endl;
        // Add more options for other data fields as needed

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Update the selected data based on user's choice
        PlayerManager p;
        switch (choice) {
        case 1: {
             std::string newName;
            std::cout << "Enter new name: ";
            std::cin >> newName;
 
            p.setName(newName);
            break;
        }
        case 2: {
            double newHeight;
            std::cout << "Enter new height: ";
            std::cin >> newHeight;
            p.setHeight(newHeight);
            break;
        }
        case 3: {
            std::string newNationality;
            std::cout << "Enter new nationality: ";
            std::cin >> newNationality;
            p.setNationality(newNationality);
            break;
        }
              // Add more cases for other data fields as needed
        default:
            std::cout << "Invalid choice. No data updated." << std::endl;
        }

        std::cout << "Player data updated successfully." << std::endl;
    }
    else {
        std::cout << "Player not found." << std::endl;
    }
}

void PlayerManager::deletePlayer(const std::string& playerName) {
    for (auto it = players.begin(); it != players.end(); ++it) {
        if ((*it)->name == playerName) {
            delete* it;
            players.erase(it);
            std::cout << "Player deleted successfully." << std::endl;
            return;
        }
    }
    std::cout << "Player not found." << std::endl;
}

void PlayerManager::displayAllPlayers() const {
    std::cout << "Players:" << std::endl;
    for (Player* player : players) {
        player->displayDetails();
        std::cout << std::endl;
    }
}
