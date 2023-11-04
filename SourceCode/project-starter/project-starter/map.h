#pragma once
#ifndef MAP_H
#define MAP_H

#define MAP_ROWS 25
#define MAP_COLS 25

struct Map
{
    char squares[MAP_ROWS][MAP_COLS];
    int numRows;
    int numCols;
};

#endif#pragma once
