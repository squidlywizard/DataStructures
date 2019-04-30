//
//  AVLTree.hpp
//  DataStructures
//
//  Created by Denna, Zachary on 4/30/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//

#ifndef AVLTree_h
#define AVLTree_h

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation (BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode (BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode (BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type>* parent);
    
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
    
    
};
template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    
}
template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    
}
template <class Type>
void AVLTree<Type> insert (Type item)
{
    insertNode(this->getRoot(), item);
}
}
template <class Type>
void AVLTree<Type> remove (Type item)
{
    removeNode(this->getRoot(), item);
}
template <class Type>/*Inserts Values into the tree and balances subtrees*/
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if(partent == nullptr)
    {
        parent = new BinaryTreeNode<Type>(inserted);
       if( this->getRoot() == nullptr)
       {
           
        this->setRoot(parent);
       }
        return parent;
    }
    else if(inserted < parent->getNodeData())
    {
        parent->setRightNode(insertNode(parent->getRightNode(), inserted));
        parent = balanceSubTree(parent);
    }
    return parent;
    
}
template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted)
{
    if(parent == nullptr)
    {
        return parent;
    }
    if(inserted < parent->getNodeData())
    {
        parent->setleftNode(removeNode(parent->getLeftNode(), inserte));
    }
    else if(inserted > parent->getNodeData())
    {
        parent->setRightNode(removeNode(parent->getRightNode(), inserted));
    }
    else
    {
        BinaryTreeNode<Type> * temp;
        if(parent->getLeftNode() == nullptr && parent->getRightNode() == nullptr)
        {
            temp = parent;
            delete temp;
        }
        else if(parent->getLeftChild() == nullptr)
        {
            *parent = *parent->getRightChild();
        }
        else if(parent->getRightchild() == nullptr)
        {
            *parent = *parent->getLeftChild();
        }
        else
        {
            BinaryTreeNode<Type> * leftMost = this->getLeftMostNode(parent->getRightNode());
            
            parent->setNodeData(leftMost->getNodeData());
            parent->setRightNode(removeNode(parent->getRightChild(), inserted));
            
        }
      
    }
    
    if(parent == nullptr)
    {
        return parent
    }
    
    return balanceSubTree(parent);
}
template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: balanceSubTree (BinaryTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if(balanceFaceor > 1)
    {
        if(geightDifference(parent->getLeftNode()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(partent);
        }
        
    }
    else if(balanceFactor < -1)
    {
        if(heightDifference([aremt->getRightNode()) > 0)
            {
                parent = rightLeftTotation(parent);
            }
        else
            {
               parent = rightRotation(parent);
            }
    }
                             return parent;
        }
        


#endif /* AVLTree_h */
