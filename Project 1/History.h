//
//  History.h
//  Project 1
//
//  Created by Julia Schell on 4/5/16.
//  Copyright (c) 2016 Julia Schell. All rights reserved.
//

#ifndef __History__
#define __History__

#include <stdio.h>
#include "globals.h"

class Arena;

class History
{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    Arena* m_arena;
    int     m_rows;
    int     m_cols;
    char m_grid[MAXCOLS*MAXROWS];
};

#endif /* defined(__Project_1__History__) */
