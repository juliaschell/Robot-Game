//
//  player.h
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

#ifndef __player__
#define __player__
#include "Arena.h"

class Player
{
public:
    // Constructor
    Player(Arena *ap, int r, int c);
    
    // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    bool isDead() const;
    
    // Mutators
    void   stand();
    void   moveOrAttack(int dir);
    void   setDead();
    
private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_age;
    bool   m_dead;
};

#endif /* defined(__Project_1__player__) */
