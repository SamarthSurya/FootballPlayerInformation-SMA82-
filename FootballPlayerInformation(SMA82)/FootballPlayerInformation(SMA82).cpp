// FootballPlayerInformation(SMA82).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PlayerManager.h"
#include "Goalkeeper.h"
#include "NonGoalkeeper.h"

int main() {
    PlayerManager playerManager;

    int choice;

    do {
        std::cout << "---------------------------" << std::endl;
        std::cout << "Football Players Management" << std::endl;
        std::cout << "---------------------------" << std::endl;
        std::cout << "1. Add a new player record" << std::endl;
        std::cout << "2. Search for a player" << std::endl;
        std::cout << "3. Update player's personal data" << std::endl;
        std::cout << "4. Delete a player record" << std::endl;
        std::cout << "5. Display all players in alphabetical order" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "---------------------------" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            // Add a new player record
            std::string name, nationality, nativeCity, fieldPosition;
            double height;
            int debutYear, matchesPlayed, goalsScored, assistsProvided, cleanSheets, penaltiesSaved, goalsConceded, criticalGoalChancesSaved;

            std::cout << "Enter player's name: ";
            std::cin >> name;
            std::cout << "Enter player's height: ";
            std::cin >> height;
            std::cout << "Enter player's nationality: ";
            std::cin >> nationality;
            std::cout << "Enter player's native city: ";
            std::cin >> nativeCity;
            std::cout << "Enter player's field position (Non-Goalkeeper/Goalkeeper): ";
            std::cin >> fieldPosition;

            if (fieldPosition == "Non-Goalkeeper") {
                std::cout << "Enter debut year: ";
                std::cin >> debutYear;
                std::cout << "Enter matches played: ";
                std::cin >> matchesPlayed;
                std::cout << "Enter goals scored: ";
                std::cin >> goalsScored;
                std::cout << "Enter assists provided: ";
                std::cin >> assistsProvided;

                playerManager.addPlayer(new NonGoalkeeper(name, height, nationality, nativeCity, debutYear, matchesPlayed, goalsScored, assistsProvided));
            }
            else if (fieldPosition == "Goalkeeper") {
                std::cout << "Enter debut year: ";
                std::cin >> debutYear;
                std::cout << "Enter matches played: ";
                std::cin >> matchesPlayed;
                std::cout << "Enter clean sheets: ";
                std::cin >> cleanSheets;
                std::cout << "Enter penalties saved: ";
                std::cin >> penaltiesSaved;
                std::cout << "Enter goals conceded: ";
                std::cin >> goalsConceded;
                std::cout << "Enter critical goal chances saved: ";
                std::cin >> criticalGoalChancesSaved;

                playerManager.addPlayer(new Goalkeeper(name, height, nationality, nativeCity, debutYear, matchesPlayed, cleanSheets, penaltiesSaved, goalsConceded, criticalGoalChancesSaved));
            }
            else {
                std::cout << "Invalid field position. Please enter either 'Non-Goalkeeper' or 'Goalkeeper'." << std::endl;
            }
            break;
        }
        case 2: {
            // Search for a player
            std::string playerName;
            std::cout << "Enter player's name to search: ";
            std::cin >> playerName;
            Player* player = playerManager.searchPlayer(playerName);
            if (player != nullptr) {
                player->displayDetails();
            }
            else {
                std::cout << "Player not found." << std::endl;
            }
            break;
        }
        case 3: {
            // Update player's personal data
            std::string playerName;
            std::cout << "Enter player's name to update: ";
            std::cin >> playerName;
            playerManager.updatePlayer(playerName);
            break;
        }
        case 4: {
            // Delete a player record
            std::string playerName;
            std::cout << "Enter player's name to delete: ";
            std::cin >> playerName;
            playerManager.deletePlayer(playerName);
            break;
        }
        case 5: {
            // Display all players in alphabetical order
            playerManager.displayAllPlayers();
            break;
        }
        case 6:
            std::cout << "Exiting the program. Goodbye!" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please enter a valid option." << std::endl;
        }
    } while (choice != 6);

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
