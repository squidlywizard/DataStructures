//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Denna, Zachary on 4/12/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp
#include "/Users/zden9518/Documents/C++ electric boogaloo/DataStructures/DataStructures/Model/NonLinear/BinarySearchTree.hpp"
#include "/Users/zden9518/Documents/C++ electric boogaloo/DataStructures/DataStructures/Model/Nodes/BinaryTreeNode.hpp"
#include <iostream>

class BinaryTreeTester
{

private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
};
#endif /* BinaryTreeTester_hpp */
