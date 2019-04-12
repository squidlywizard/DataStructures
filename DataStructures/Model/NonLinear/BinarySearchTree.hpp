//
//  BinarySearchTree.hpp
//  DataStructures
//
//  Created by Denna, Zachary on 4/12/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Tree.hpp"
#include <iostream>

using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComlete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(Binary)
}

#endif /* BinarySearchTree_h */
