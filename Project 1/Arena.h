//
//  arena.h
//  Project 1
//
//  Created by Julia Schell on 4/5/16.
//  Copyright (c) 2016 Julia Schell. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
using namespace std;

#ifndef __arena__
#define __arena__
#include "globals.h"
#include "History.h"

class Robot;
class Player;

class Arena
{
public:
    // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();
    
    // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     robotCount() const;
    int     nRobotsAt(int r, int c) const;
    bool    determineNewPosition(int& r, int& c, int dir) const;
    void    display() const;
    History& history();
    
    // Mutators
    bool   addRobot(int r, int c);
    bool   addPlayer(int r, int c);
    bool   attackRobotAt(int r, int c, int dir);
    bool   moveRobots();
    
private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Robot*  m_robots[MAXROBOTS];
    int     m_nRobots;
    History m_history;
};
#endif /* defined(__Project_1__arena__) */
