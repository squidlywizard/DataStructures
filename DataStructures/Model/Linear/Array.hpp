//
//  Array.hpp
//  DataStructures
//
//  Created by Denna, Zachary on 1/30/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//

#ifndef Array_h
#define Array_h
#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    //Constructor
    Array<Type>(int size);
    
    //Copy Constructor
    Array<Type>(const Array<Type> & toCopy);
    //Destructor
    ~Array<Type>();
    
    //Operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
}


#endif /* Array_h */
