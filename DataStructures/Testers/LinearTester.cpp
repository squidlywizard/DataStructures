//
//  LinearTester.cpp
//  DataStructures
//
//  Created by Denna, Zachary on 2/13/19.
//  Copyright © 2019 Denna, Zachary. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/zden9518/Documents/C++ electric boogaloo/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/zden9518/Documents/C++ electric boogaloo/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: "<< crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << "microseconds" << endl;
    
}
