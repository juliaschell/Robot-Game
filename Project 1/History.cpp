//
//  History.cpp
//  Project 1
//
//  Created by Julia Schell on 4/5/16.
//  Copyright (c) 2016 Julia Schell. All rights reserved.
//

#include "History.h"
#include "Arena.h"

History::History(int nRows, int nCols)
{
    Arena a(nRows, nCols);
    m_arena = new Arena(nRows, nCols);
    m_rows = nRows;
    m_cols = nCols;
    fill(m_grid, m_grid + m_rows*m_cols, "." );
}



bool History::record(int r, int c)
{
    if (r<1 || r>m_rows)
     return false;
    else if (c<1 || c>m_cols)
     return false;
    
    if (m_grid[(r-1)*m_cols + c] == '.')
        m_grid[(r-1)*m_cols + c] = 'A';
    else if (m_grid[(r-1)*m_cols + c] >= 'A' && m_grid[(r-1)*m_cols + c]<'Z')
        m_grid[(r-1)*m_cols + c]++;
    
    return true;
}

void History::display() const
{
    clearScreen();
    
    int j=0;
    for (int i=0; i < m_cols*m_rows; i++)
    {
        cout << m_grid[i];
        j++;
        if (j==m_cols)
        {cout << "\n";
            j=0;}
    }
}

