//
//  Graph.hpp
//  DataStructures
//
//  Created by Denna, Zachary on 3/6/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//

#ifndef Graph_h
#define Graph_h

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph
{
private:
    static const int MAXIMUM = 50;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightConstMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    
    void addVertex(const Type& value);
    
    void addEdge(int source, int target);
    void addEdgeUnderected(int source, int target);
    void addEdgeCost(int source, int target);
    
    void removeEdge(int source, int target);
    void remove edgeUndirected(int source, int target);
}


#endif /* Graph_h */
