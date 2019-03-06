//
//  FileController.hpp
//  DataStructures
//
//  Created by Denna, Zachary on 2/5/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <stdio.h>
#include "../Resources/Music.hpp"
#include "../Resources/CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"
#include "/Users/zden9518/Documents/C++ electric boogaloo/DataStructures/DataStructures/Model/Linear/CircularList.hpp"
using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    
    static CircularList<CrimeData> readCrimeToCicularList(string filename);
    
    static vector<Music> musicDataToVector(string filename);
    
    static Array<Music> musicDataToArray(string filename);
    static LinkedList<Music> musicDataToList(string filename);
    
};
#endif /* FileController_hpp */
