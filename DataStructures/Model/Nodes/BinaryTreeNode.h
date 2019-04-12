//
//  BinaryTreeNode.h
//  DataStructures
//
//  Created by Denna, Zachary on 4/12/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h

#include "Node.hpp";
template <class Type>
class BinaryTreeNode : public Node<Type>
{
    
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;

public:
    BinaryTreeNode<Type>();
    BinaryTreeNode<Type>(Type data);
    
    BinaryTreeNode<Type> * getRootNode();
    BinaryTreeNode<Type> * getLeftNode();
    BinaryTreeNode<Type> * getRightNode();
    
    void setRootNode(BinaryTreeNode<Type> * root);
    void setLeftNode(BinaryTreeNode<Type> * Left);
    void setRightNode(BinaryTreeNode<Type> * rigth);
};
template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node <Type>()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}
template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node <Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
    return this->root;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftNode()
{
    return this->Left;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode()
{
    return this->right;
}
template <class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot)
{
    root = newRoot;
}
template <class Type>
void BinaryTreeNode<Type> :: setRightNode(BinaryTreeNode<Type> * right)
{
    this->right = right;
}
template <class Type>
void BinaryTreeNode<Type> :: setLeftNode(BinaryTreeNode<Type> * left)
{
    this->left = left:
}



#endif /* BinaryTreeNode_h */
