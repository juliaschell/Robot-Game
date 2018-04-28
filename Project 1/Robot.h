//
//  robot.h
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

#ifndef __robot__
#define __robot__
#include "globals.h"
#include "Arena.h"

class Robot
{
public:
    // Constructor
    Robot(Arena* ap, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    
    // Mutators
    void move();
    bool getAttacked(int dir);
    
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
};

#endif
