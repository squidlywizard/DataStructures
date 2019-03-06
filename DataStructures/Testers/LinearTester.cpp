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
    
    musicSTL.startTimer();
    vector<CrimeData> musics = FileController :: readCrimeDataToVector("/Users/zden9518/Documents/C++ electric boogaloo/DataStructures/DataStructures/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<CrimeData> moreMusics = FileController :: readDataToList("/Users/zden9518/Documents/C++ electric boogaloo/DataStructures/DataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    musicSTL.displayInformation();
    musicOOP.displayInformation();
    cout << "A difference of: "<< musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << "microseconds" << endl;
    
    
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
}
void LinearTester :: testVsQueue()
{
    Timer crimeTimerSTL, crimeTimerCir;
    crimeTimerSTL.startTimer();
    LinkedList<CrimeData> manicCrime= FileController :: readDataToList("/Users/zden9518/Documents/C++ electric boogaloo/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    
    crimeTimerCir.startTimer();
    CircularList<CrimeData> maniaCrime = FileController :: readCrimeToCicularList("/Users/zden9518/Documents/C++ electric boogaloo/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerCir.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerCir.displayInformation();
    cout << "A difference of: "<< crimeTimerSTL.getTimeInMicroseconds() - crimeTimerCir.getTimeInMicroseconds() << "microseconds" << endl;
    
}
void LinearTester :: testVsStack()
{
    
}
void LinearTester :: testVsDouble()
{
    
}
