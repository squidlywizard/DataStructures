//
//  Controller.cpp
//  DataStructures
//
//  Created by Denna, Zachary on 1/28/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//
//#include <iostream>
//#include "../Testers/LinearTester.cpp"
#include "Controller.hpp"
using namespace std;
void Controller:: start()
{
    cout << "we got a Data Structurs app and this is it"<<endl;
    //usingNodes();
    testLinear();
}
void Controller:: usingNodes()
{
    
    Node<int> mine(5);
    Node<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
}

void Controller :: testLinear()
{
    LinearTester oiLookear;
    //oiLookear.testVsQueue();
    oiLookear.testVsSTL();
}
