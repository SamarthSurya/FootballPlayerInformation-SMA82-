#include "NonGoalkeeper.h"
#include <iostream>

NonGoalkeeper::NonGoalkeeper(const std::string& name, double height, const std::string& nationality, const std::string& nativeCity, int debutYear, int matchesPlayed, int goalsScored, int assistsProvided)
    : Player(name, height, nationality, nativeCity, "Non-Goalkeeper"), debutYear(debutYear), matchesPlayed(matchesPlayed), goalsScored(goalsScored), assistsProvided(assistsProvided) {}

NonGoalkeeper::~NonGoalkeeper() {}

void NonGoalkeeper::displayDetails() const {
    Player::displayDetails();
    std::cout << "Debut Year: " << debutYear << std::endl;
    std::cout << "Matches Played: " << matchesPlayed << std::endl;
    std::cout << "Goals Scored: " << goalsScored << std::endl;
    std::cout << "Assists Provided: " << assistsProvided << std::endl;
}
