#pragma once
#ifndef ROUTE_H
#define ROUTE_H

#include "point.h"

#define MAX_ROUTE 100

struct Route
{
    struct Point points[MAX_ROUTE];
    int numPoints;
    char routeSymbol;
};

#endif