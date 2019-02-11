//
//  LinkedList.h
//  DataStructures
//
//  Created by Denna, Zachary on 2/1/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//
#include "List.hpp"

using namespace std;
#ifndef LinkedList_hpp
#define LinkedList_hpp
template <class type>
class LinkedList : public List<Type>
{
protected:
    
    LinearNode<Type> * front
    LinearNode<Type> * end
public:
    LinkedList();
    
    virtual ~LinkedList();
    
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    virtual void add(Type item);
    virtual void addAtIndex(int index, Type item);
    virtual Type getFromIndex(int index);
    virtual Type remove(int index);
    
     //Type setAtIndex(int index, Type item);
     bool contains(Type item);
};
template <class type>
LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr:
    this->size = 0;
}
template <class type>
LinkedList<Type> :: ~LinkedList()
{
    LinearNode<Type> * destroyStructure = front;
    while (front != nullptr)
    {
        front = destroyStructure->getNextNode();
        delete destroyStucture;
        destroyStructure = front;
    }
}
template <class type>
void LinkedList<Type> :: add(Type item)
{
    LinearNode<Type> * newData = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    
    this->end = newData;
    
    this->size += 1;
  
    
    
}
template <class type>
void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size)
    {
        add(item);
    }
    else
    {
        LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
        if (index == 0)
        {
            toBeAdded->setNextNode(front);
            front = toBeAdded
        }
        else
        {
            LinearNode<Type> * previous = nullptr;
            LinearNode<Type> * current = front;
            for (int position = 0; position < index; position++)
            {
                previous = current;
                current = current->getNextNode();
            }
            previous->setNextNode(toBeAdded);
            toBeAdded->setNextNode(current);
        }
        this->size++;
    }
}
template <class type>
Type LinkedList<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < this->size);
    Type data;
    
    LinearNode<Type> * current = front;
    
    for (int Position = 0; position < index; position++ )
    {
        current = current->getNextNode();
    }
    
    data = current->getData();
    
    return datal
}
template <class type>
Type LinkedList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this->size);
    
    LinearNode<Type> * current = front;
    LinearNode<Type> * toBeRemoved = nullptr;
    LinearNode<Type> * previous = nullptr
    
    Type removedData;
    
    if(index == 0)
    {
        toBeRemoved = front;
        this->front = this->front->getNextNode();
    }
    else
    {
        for (int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNextNode();
        }
        
        toBeRemoved = current;
        
        if (index == this->size - 1)
        {
            previous->setNextNode(nullptr);
            end = previous;
        }
        else
        {
            current = toBeRemoved->getNextNode();
            previous->setNextNode(current);
        }
    }
    this->size -= 1;
    
    removedData = toBeRemoved->getData();
    delete toBeRemoved;
    return removedData;
    
}
template <class type>
LinearNode<Type> * LinkedList<Type> :: getEnd()
{
    return this -> end;
}
template <class type>
LinearNode<Type> * LinkedList<Type> :: getFront()
{
    return this -> front;
}
template <class type>
int LinkedList<Type> :: getSize() const
{
    return this->size;
}
template <class Type>
bool LinkedList<Type> :: contains(Type thingToFind)
{
    bool exists = false;
    
    LinearNode<Type> * searchPointer = front;
    
    for (int I = 0; index < this->size; I++)
    {
        if (searchPointer->getData() == thingToFind)
        {
            exists = true;
            return exists;
        }
        searchPointer = searchPointer->getNextNode();
    }
    
    return exists;
}
#endif /* LinkedList_h */
