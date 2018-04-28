//
//  game.h
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

#ifndef __game__
#define __game__
#include "globals.h"
#include "Arena.h"


class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nRobots);
    ~Game();
    
    // Mutators
    void play();
    
private:
    Arena* m_arena;
};

#endif /* defined(__Project_1__game__) */
