//
//  List.h
//  DataStructures
//
//  Created by Denna, Zachary on 2/1/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//

#ifndef List_h
#define List_h

#include <assert.h>
#include "../Nodes/LinearNode.hpp"

template <class type>
class List
{
protected:
    int size;
public:
    //Structure affecting the list
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper veiwing the list
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
    
    
};

#endif /* List_h */
