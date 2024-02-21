#include "Goalkeeper.h"
#include <iostream>

Goalkeeper::Goalkeeper(const std::string& name, double height, const std::string& nationality, const std::string& nativeCity, int debutYear, int matchesPlayed, int cleanSheets, int penaltiesSaved, int goalsConceded, int criticalGoalChancesSaved)
    : Player(name, height, nationality, nativeCity, "Goalkeeper"), debutYear(debutYear), matchesPlayed(matchesPlayed), cleanSheets(cleanSheets), penaltiesSaved(penaltiesSaved), goalsConceded(goalsConceded), criticalGoalChancesSaved(criticalGoalChancesSaved) {}

Goalkeeper::~Goalkeeper() {}

void Goalkeeper::displayDetails() const {
    Player::displayDetails();
    std::cout << "Debut Year: " << debutYear << std::endl;
    std::cout << "Matches Played: " << matchesPlayed << std::endl;
    std::cout << "Clean Sheets: " << cleanSheets << std::endl;
    std::cout << "Penalties Saved: " << penaltiesSaved << std::endl;
    std::cout << "Goals Conceded: " << goalsConceded << std::endl;
    std::cout << "Critical Goal Chances Saved: " << criticalGoalChancesSaved << std::endl;
}
