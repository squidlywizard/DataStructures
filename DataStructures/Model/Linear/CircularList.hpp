//
//  CircularList.hpp
//  DataStructures
//
//  Created by Denna, Zachary on 2/21/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "/Users/zden9518/Documents/C++ electric boogaloo/DataStructures/DataStructures/Model/Nodes/DoubleNode.h"

template <class Type>
class CircularList
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    
    DoubleNode<Type> * findNode(int index);
    
public:
    CircularList();
    ~CircularList();
    
    //List methods
    void add(Type data);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
    Type setAtIndex(int index, Type item);
    int getSize() const;
};


#endif /* CircularList_h */
