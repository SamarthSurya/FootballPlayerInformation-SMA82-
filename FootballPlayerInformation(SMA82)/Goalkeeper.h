#pragma once
#ifndef GOALKEEPER_H
#define GOALKEEPER_H

#include "Player.h"

class Goalkeeper : public Player {
private:
    int debutYear;
    int matchesPlayed;
    int cleanSheets;
    int penaltiesSaved;
    int goalsConceded;
    int criticalGoalChancesSaved;

public:
    Goalkeeper(const std::string& name, double height, const std::string& nationality, const std::string& nativeCity, int debutYear, int matchesPlayed, int cleanSheets, int penaltiesSaved, int goalsConceded, int criticalGoalChancesSaved);
    virtual ~Goalkeeper();

    virtual void displayDetails() const override;
};

#endif // GOALKEEPER_H
