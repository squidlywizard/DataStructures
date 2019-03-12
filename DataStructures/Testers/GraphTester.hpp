//
//  GraphTester.hpp
//  DataStructures
//
//  Created by Denna, Zachary on 3/8/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//

#ifndef GraphTester_h
#define GraphTester_h

#include <iostream>
#include "/Users/zden9518/Documents/C++ electric boogaloo/DataStructures/DataStructures/Model/NonLinear/Graph.hpp"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
public:
    void testGraphs();
};

#endif /* GraphTester_h */
