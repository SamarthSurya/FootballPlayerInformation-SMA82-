#pragma once
#ifndef NONGOALKEEPER_H
#define NONGOALKEEPER_H

#include "Player.h"

class NonGoalkeeper : public Player {
private:
    int debutYear;
    int matchesPlayed;
    int goalsScored;
    int assistsProvided;

public:
    NonGoalkeeper(const std::string& name, double height, const std::string& nationality, const std::string& nativeCity, int debutYear, int matchesPlayed, int goalsScored, int assistsProvided);
    virtual ~NonGoalkeeper();

    virtual void displayDetails() const override;
};

#endif // NONGOALKEEPER_H
